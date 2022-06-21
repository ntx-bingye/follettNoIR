#include <stdbool.h>
#include "app_touchless.h"
#include "app.h"
#include "peripheral\adc\plib_adc.h"
#include "peripheral/pio/plib_pio.h"
#include "peripheral\flexcom\twi\master\plib_flexcom4_twi_master.h"
#include "timer.h"
#include "splash_utility.h"
#include "app_touchless.h"
#include "screenStack.h"
#include "app_json.h"
#include "splash_utility.h"
#include "packs\SAM9X60D6K_DFP\sam9x60d6k.h"

uint8_t touchLessCfg[20] = {
    0xC1, 0x00, // Digital Gain -- 1
    0xC2, 0x05, // Analog Gain -- 16
    0xC3, 0x03, // Pre Scaler --16
    0xC4, 0x06, // Filter -- 64
    0xC5, 0x00, // Hys -- 50
    0xC6, 0x20, // Threshold 1
    0xC7, 0x20, // Threshold 2
    0xC8, 0x20, // Threshold 3
    0xC9, 0x00, // Extra 3
    0xD1, 0x00 // Extra 3
};

uint8_t touchSensor[3] = {0};
uint8_t I2C_reg = 0x10;
uint8_t sentTouchCfgCount = 0;
uint16_t avgADCdata = 4096;

//uint16_t NO_CUP_THRESHOLD; // = (uint16_t)((0.3)*4096/3.3);

void ADC_callback(uintptr_t vp_ADC)
{
    avgADCdata = 4096; //set IR always be triggered
    //avgADCdata = ADC_ChannelResultGet(CHANNEL_9); //(uint16_t) (ADC_Sum / 4); //divided by 8;
}

#define I2C_ERROR (FLEXCOM4_TWI_ErrorGet() != FLEXCOM_TWI_ERROR_NONE)
#define I2C_BUSY FLEXCOM4_TWI_IsBusy()
static uint8_t I2C_data[3];

static void touchless_I2C_Callback(uintptr_t context) 
{
    if (I2C_ERROR)
    {
        FLEXCOM4_TWI_Initialize();//NO_CUP_THRESHOLD = 0;}
        touchSensor[0] = 0;touchSensor[1] = 0;touchSensor[2] = 0;
        //I2C_reg = 0x10; sentTouchCfgCount = 0;
        return; 
    }

    if (sentTouchCfgCount < sizeof (touchLessCfg)) {
        FLEXCOM4_TWI_Write(I2C_ADDR_TOUCHLESS, &touchLessCfg[sentTouchCfgCount++], 1);
        return;
    }

    if (I2C_reg < 0x13) {
        FLEXCOM4_TWI_WriteRead(I2C_ADDR_TOUCHLESS, &I2C_reg, 1, &I2C_data[I2C_reg - 0x10], 1);
        I2C_reg++;
        return;
    }

    touchSensor[0] = I2C_data[0];
    touchSensor[1] = I2C_data[1];
    touchSensor[2] = I2C_data[2];;
    I2C_reg = 0x10;
}
#undef I2C_ERROR

static void swDelayUs(uint32_t delay)
{
    uint32_t i, count;

    /* delay * (CPU_FREQ/1000000) / 6 */
    count = delay *  (600000000/1000000)/6;

    /* 6 CPU cycles per iteration */
    for (i = 0; i < count; i++)
        __NOP();
}

static bool isHotWaterInstall(void)
{
    int32_t hotwater;
    char* str;
    if(false == readWriteValInJson(1,root,&hotwater,&str,1,2,"settings","hot_water_installed"))
        return(false);
    if(hotwater == 0) return false;
    else              return true;
}

void APP_Touchless_Initialize(void) {

    GPIO_PA13_OutputEnable();
    
    GPIO_PA13_Set();
    swDelayUs(1000);
    GPIO_PA13_Clear(); 
    swDelayUs(1000);    
    GPIO_PA13_Set();
    swDelayUs(50000);
    //reset touchless board
    avgADCdata = 4096; 
   // ADC_CallbackRegister(ADC_callback, (uintptr_t) 0);

    FLEXCOM4_TWI_CallbackRegister(touchless_I2C_Callback, (uintptr_t) 1); // assign callback register
    
    touchLessCfg[15] = (isHotWaterInstall())? touchLessCfg[15]:touchLessCfg[13];
    
    printf("touch %d:%d:%d\n",touchLessCfg[11],touchLessCfg[13],touchLessCfg[15]);
    
    FLEXCOM4_TWI_Write(I2C_ADDR_TOUCHLESS, &touchLessCfg[sentTouchCfgCount++], 1);
}

uint8_t getTouchId(void) {
//    if (NO_CUP_THRESHOLD == 0) return 0;
//    if (avgADCdata < NO_CUP_THRESHOLD) return 0;
    if (ImgSqnHotW.installed == 1) {
        if (touchSensor[0] == 1) return 1; //ice in splash, hotwater in hotwater splash
        if (touchSensor[1] == 2) return 2; //hotwater in splash
        if (touchSensor[2] == 3) return 3; //Amwater
        return 0;
    }

    if (ImgSqnAmbW.installed == 1) {
        if (touchSensor[0] == 1) return 1; //Ice 
        if (touchSensor[2] == 2) return 3; //Amwater  
        return 0;
    }

    if ((ImgSqnIce.installed == 1) && (touchSensor[1] == 2)) return 1;
    return 0;
}
