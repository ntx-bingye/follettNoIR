#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "definitions.h"
#include "driver/i2c/drv_i2c.h"
#include "driver/input/drv_goodix.h"
#include "system/input/sys_input.h"
#include "system/time/sys_time.h"
#include "timer.h"

// VERSION 1.04

/* ============================================================================================= */
/* DEFINES                                                                                       */
/* ============================================================================================= */

#define I2C_ADDR_TOUCH  0x14 // I2C address

#define TP_INT_MASK     0x1000000 // touch interrupt pin channel mask (port A pin 24)
#define TP_RESET        0x2000000 // touch reset pin channel mask (port B pin 25)

#define ABS(x)          ((x) < 0 ? -(x) : (x))  // absolute value

static bool I2cInRead = false;
int8_t goodix_cfg_timeout = -1; //use to set i2c command timeout.


TOUCH_STATES touchState;

typedef enum
{
	TOUCH_TRANSFER_STATUS_IN_PROGRESS = 0,
	TOUCH_TRANSFER_STATUS_SUCCESS,
	TOUCH_TRANSFER_STATUS_ERROR,
	TOUCH_TRANSFER_STATUS_IDLE

} TOUCH_TRANSFER_STATUS;

extern bool splash_screen_active; // splash screen active

bool I2C_done = false; //use check the i2c command done

static bool TP_init_complete;

bool TP_pressed;

//0x52 = 05 ->08;0x53 =50->70 0x55=03->f 0X56=00->0F;
//0X57,58=00->10

static uint8_t TP_config[188] = // GT911 configuration data (480x272, low level)
{
0x80,0x47,//address,added by bing
0x41,0xE0,0x01,0x10,0x01,0x01,0x4E,0x00,0x01,//47-4f 4c=0a,4d =4e;
0x08,0x28,0x05,0x70,0x32,0x0F,0x0F,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//5 57 = 58 = 0
0x00,0x00,0x89,0x29,0x0A,0x17,0x15,0x31,0x0D,0x00,0x00,0x00,0x9D,0x04,0x2D,0x00, 
0x00,0x00,0x00,0x00,0x03,0x64,0x32,0x00,0x00,0x00,0x0F,0x94,0x94,0xC5,0x02,0x07,//7
0x00,0x00,0x04,0x8D,0x13,0x00,0x5C,0x1E,0x00,0x3B,0x30,0x00,0x27,0x4C,0x00,0x1C,
0x78,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//9
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,0x10,0x12,//b
0x14,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x22,0x21,0x20,0x1F,0x1E,0x1D,0x1C,0x18,0x16,0x12,0x10,//d
0x0F,0x0A,0x08,0x06,0x04,0x02,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x72,//f
0x01 //f
};

static uint8_t I2C_reg[10];
static uint8_t I2C_data[10];

static uint16_t TP_xloc;
static uint16_t TP_yloc;
static uint16_t TP_xloc_prev;
static uint16_t TP_yloc_prev;
static uint16_t TP_xloc_save;
static uint16_t TP_yloc_save;

static volatile TOUCH_TRANSFER_STATUS transferStatus = TOUCH_TRANSFER_STATUS_IDLE;

static void I2C_Callback(uintptr_t context);

static void delayUS(uint32_t us);
static void delayMS(uint32_t ms);

SYS_MODULE_OBJ DRV_GOODIX_Initialize(const SYS_MODULE_INDEX index, const SYS_MODULE_INIT * const init)
{
    touchState = TOUCH_INIT; // assign application initial state

	TP_init_complete = false; // clear flags

	TP_pressed = false;

	TP_xloc_prev = 480, // clear data
	TP_yloc_prev = 272;
	TP_xloc_save = 480;
	TP_yloc_save = 272;

	return((SYS_MODULE_OBJ)NULL);
}

void checksum(void)
{
    uint8_t sum = 0;
    for(uint16_t i = 2; i< sizeof(TP_config) - 4; i++)
        sum = sum + TP_config[i];
    
    sum = ((~sum)+1);
    
    printf("sum = %x\n",sum);
        
}

/*********************************************************************************
Generate Software delay (in multiples of microsecond units) 
*********************************************************************************/
static void swDelayUs(uint32_t delay)
{
    uint32_t i, count;

    /* delay * (CPU_FREQ/1000000) / 6 */
    count = delay *  (600000000/1000000)/6;

    /* 6 CPU cycles per iteration */
    for (i = 0; i < count; i++)
        __NOP();
}

void blockDelay1(uint8_t ms)
{
    uint8_t i,j;
    
    i = count256;
    do{
        if(count256 >= i) j = count256 - i;
        else              j = 255 +count256 - i;
    } while(j < 3);
}

TOUCH_STATES DRV_GOODIX_init(void)
{
    checksum();
    PIO_PortOutputEnable(PIO_PORT_A, TP_INT_MASK); // assign TP_INT as output (temporary)
	PIO_PortClear(PIO_PORT_A, TP_INT_MASK); // assign TP_INT low

	TP_RESET_Off(); // assign TP_RESET low
    //blockDelay1(1);
    swDelayUs(100000);
	//delayMS(10); // delay 10ms

	PIO_PortSet(PIO_PORT_A, TP_INT_MASK); // assign TP_INT high
    //blockDelay1(1);
    swDelayUs(1000);
	//delayUS(100); // delay 100us

	TP_RESET_On(); // assign TP_RESET high
    //blockDelay1(1);
    swDelayUs(50000);
	//delayMS(5); // delay 5ms

	PIO_PortInputEnable(PIO_PORT_B, TP_RESET); // assign TP_RESET as input

	// execute sync mode
	PIO_PortOutputEnable(PIO_PORT_A, TP_INT_MASK); // assign TP_INT as output (temporary)
	PIO_PortClear(PIO_PORT_A, TP_INT_MASK); // assign TP_INT low
    //blockDelay1(1);
    swDelayUs(500000);
	//delayMS(50); // delay 50ms

	PIO_PortSet(PIO_PORT_A, TP_INT_MASK); // assign TP_INT high
	PIO_PortInputEnable(PIO_PORT_A, TP_INT_MASK); // assign TP_INT as input (restore)

	// assign callback functions
	FLEXCOM8_TWI_CallbackRegister(I2C_Callback, (uintptr_t)&transferStatus );
    return TOUCH_CONFIG;

}

#define deltaX ABS((int)TP_xloc - (int)TP_xloc_prev) >= 5
#define deltaY ABS((int)TP_yloc - (int)TP_yloc_prev) >= 5
void dataPro(void)
{
	if ((TP_xloc >= 480) || (TP_yloc >= 272)) return; // validate the coordinates
    if ((TP_xloc == 0)   || (TP_yloc == 0))   return;
	TP_xloc_prev = TP_xloc; // save current location
	TP_yloc_prev = TP_yloc;

	if (TP_pressed == false) // check if not already pressed
	{
        printf("down %d:%d\n",TP_xloc,TP_yloc);
        TP_xloc_save = TP_xloc;
	    TP_yloc_save = TP_yloc;
        SYS_INP_InjectTouchDown(0, TP_xloc, TP_yloc); 
        TP_pressed = true;
    }
    else if((deltaX)||(deltaY))
    {
        printf("move\n");
        SYS_INP_InjectTouchMove(0, TP_xloc, TP_yloc);
    }   
}
#undef deltaX
#undef deltaY



#define READ  true
#define WRITE false
bool sendCmd(uint8_t* I2cRegP,uint8_t* I2cDataP,bool readData,uint8_t readNum)
{
    I2C_done = false;
    I2cInRead = readData;
    goodix_cfg_timeout = 0;

    if(readData)
	    FLEXCOM8_TWI_WriteRead(I2C_ADDR_TOUCH, I2cRegP, 2, I2cDataP, readNum);
    else
        FLEXCOM8_TWI_Write(I2C_ADDR_TOUCH, I2cRegP, 3);
    
    while ((!I2C_done)&&(goodix_cfg_timeout !=GOODIX_CFG_TIMEOUT))
    
    if(goodix_cfg_timeout >= GOODIX_CFG_TIMEOUT) {printf("timeout\n");return false;}
    
    goodix_cfg_timeout = -1;
    return true;
}

TOUCH_STATES DRV_GOODIX_config(void)
{
    {I2C_reg[0] = 0x81;I2C_reg[1] = 0x4E;I2C_reg[2] = 0x00;}
    sendCmd(I2C_reg,I2C_reg,WRITE,0);
    return((TP_init_complete)?TOUCH_TASK0:TOUCH_INIT);
}


TOUCH_STATES DRV_GOODIX_task0(void)
{
    //if (TP_INT_Get()) return TOUCH_TASK1;
    //read clear buffer status
    {I2C_reg[0] = 0x81; I2C_reg[1] = 0x50;}// read the touch coordinates
    sendCmd(I2C_reg,I2C_data,READ,4);
    if(!I2C_done) return TOUCH_INIT;
    
    {I2C_reg[0] = 0x81;I2C_reg[1] = 0x4E;I2C_reg[2] = 0x00;}
    sendCmd(I2C_reg,I2C_reg,WRITE,0);
    
    return I2C_done?TOUCH_TASK1:TOUCH_INIT;        
}


TOUCH_STATES DRV_GOODIX_task1(void)
{
    int8_t TP_INT = TP_INT_Get();

    if(TP_INT && !TP_pressed)  return TOUCH_TASK1;    
    
	if(TP_INT && TP_pressed )
    {
        TP_pressed = false;
        if(splash_screen_active) SYS_INP_InjectTouchUp(0, TP_xloc_save, TP_yloc_save);
        else                     SYS_INP_InjectTouchUp(0, TP_xloc, TP_yloc);
        printf("up\n");
        return TOUCH_TASK1;
    }
    
    if (FLEXCOM8_TWI_IsBusy()) return TOUCH_TASK1;

    {I2C_reg[0] = 0x81; I2C_reg[1] = 0x4E; I2C_data[0] = 0;}    
    if(sendCmd(I2C_reg,I2C_data,READ,1)) dataPro();

    {I2C_reg[0] = 0x81; I2C_reg[1] = 0x4E; I2C_data[0] = 0;}

    return sendCmd(I2C_reg,I2C_data,WRITE,0)?TOUCH_TASK1:TOUCH_INIT;
}


static void I2C_Callback(uintptr_t context)
{
    if (FLEXCOM8_TWI_ErrorGet() != FLEXCOM_TWI_ERROR_NONE)
    {
        FLEXCOM8_TWI_Initialize();//NO_CUP_THRESHOLD = 0;}
        touchState = TOUCH_INIT;
        return;
    }
    
    if((I2C_reg[0] == 0x81)&&(I2C_reg[1] == 0x4E))
    {
        switch(touchState)
        {
            case TOUCH_CONFIG: 
                {I2C_reg[0] = 0x80;I2C_reg[1] = 0x47;} 
	            FLEXCOM8_TWI_Write(I2C_ADDR_TOUCH, TP_config, sizeof(TP_config));
                break;
                
            case TOUCH_TASK0:
            case TOUCH_TASK1:
                if(I2cInRead == WRITE) { I2C_done = true;break;}
                
                if((I2C_data[0] & 0x80) == 0)
                    I2C_done = true;
                else
                {
                    I2cInRead = READ;
                    {I2C_reg[0] = 0x81; I2C_reg[1] = 0x50;}// read the touch coordinates
				    FLEXCOM8_TWI_WriteRead(I2C_ADDR_TOUCH, &I2C_reg[0], 2, &I2C_data[0], 4);
                }
                break;
                
            default:
                I2C_done = true;
                break;
        }
        return;
    }
    
    if((I2C_reg[0] == 0x81)&&(I2C_reg[1] == 0x50)) //get x,y.
    {
        I2C_done = true;
        if(touchState == TOUCH_TASK1)//task0 don't need to save
        {
            TP_xloc = (((uint16_t)I2C_data[1] << 8) + (uint16_t)I2C_data[0]); // get the touch x coordinate
	        TP_yloc = (((uint16_t)I2C_data[3] << 8) + (uint16_t)I2C_data[2]); // get the touch y coordinate
        }
        return;
    }

    if((I2C_reg[0] == 0x80)&&(I2C_reg[1] == 0x47))
    {
        TP_init_complete = true;
        I2C_done = true;
        return;
    }
}

void DRV_GOODIX_Tasks(SYS_MODULE_OBJ object)
{
    //printf("in driver,state = %d\n",touchState);
    switch (touchState)
    {
        case TOUCH_INIT:  touchState = DRV_GOODIX_init();  break;
        
        case TOUCH_CONFIG:touchState = DRV_GOODIX_config();break;
        
        case TOUCH_TASK0: touchState = DRV_GOODIX_task0(); break;

		case TOUCH_TASK1: touchState = DRV_GOODIX_task1(); break;

		default:
			break;
    }
    
}

#undef READ
#undef WRITE