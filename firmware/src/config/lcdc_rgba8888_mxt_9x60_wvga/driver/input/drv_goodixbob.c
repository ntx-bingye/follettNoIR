#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "definitions.h"
#include "driver/i2c/drv_i2c.h"
#include "driver/input/drv_goodix.h"
#include "system/input/sys_input.h"
#include "system/time/sys_time.h"

// VERSION 1.04

/* ============================================================================================= */
/* DEFINES                                                                                       */
/* ============================================================================================= */

#define I2C_ADDR_TOUCH  0x14 // I2C address

#define TP_INT_MASK     0x1000000 // touch interrupt pin channel mask (port A pin 24)
#define TP_RESET        0x2000000 // touch reset pin channel mask (port B pin 25)

#define ABS(x)          ((x) < 0 ? -(x) : (x))  // absolute value

#define DEBUG_PRINT     1 // allow print debugging
#define DEBUG_LED       0 // allow LED blink debugging

/* ============================================================================================= */
/* TYPEDEFS                                                                                      */
/* ============================================================================================= */

typedef enum
{
	APP_STATE_TOUCH_INIT = 0,
	APP_STATE_TOUCH_CONFIG,
	APP_STATE_TOUCH_TASK0,
	APP_STATE_TOUCH_TASK1,
	APP_STATE_TOUCH_TASK2,
	APP_STATE_TOUCH_TASK3,
	APP_STATE_TOUCH_TASK4,
	APP_STATE_TOUCH_TASK5,
	APP_STATE_TOUCH_TASK6,
	APP_STATE_TOUCH_TASK7

} TOUCH_STATES;

/* --------------------------------------------------------------------------------------------- */

typedef struct
{
	TOUCH_STATES state;

	SYS_TIME_HANDLE timer;

} TOUCH_DATA;

/* --------------------------------------------------------------------------------------------- */

typedef enum
{
	TOUCH_TRANSFER_STATUS_IN_PROGRESS = 0,
	TOUCH_TRANSFER_STATUS_SUCCESS,
	TOUCH_TRANSFER_STATUS_ERROR,
	TOUCH_TRANSFER_STATUS_IDLE

} TOUCH_TRANSFER_STATUS;

/* ============================================================================================= */
/* EXTERNAL DATA                                                                                 */
/* ============================================================================================= */

extern bool splash_screen_active; // splash screen active

/* ============================================================================================= */
/* LOCAL DATA                                                                                    */
/* ============================================================================================= */

static bool TP_init_complete;
static bool TP_dataready;
static bool TP_pressed;
static int TP_downfilter;

static const uint8_t TP_config[186] = // GT911 configuration data (480x272, low level)
{
	0x41,0xE0,0x01,0x10,0x01,0x0A,0x4E,0x00,0x01,0x08,
	0x28,0x05,0x50,0x32,0x03,0x05,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x89,0x29,0x0A,
	0x17,0x15,0x31,0x0D,0x00,0x00,0x00,0x9D,0x04,0x2D,
	0x00,0x00,0x00,0x00,0x00,0x03,0x64,0x32,0x00,0x00,
	0x00,0x0F,0x94,0x94,0xC5,0x02,0x07,0x00,0x00,0x04,
	0x8D,0x13,0x00,0x5C,0x1E,0x00,0x3B,0x30,0x00,0x27,
	0x4C,0x00,0x1C,0x78,0x00,0x1C,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,0x10,
	0x12,0x14,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x22,0x21,0x20,0x1F,0x1E,0x1D,0x1C,0x18,
	0x16,0x12,0x10,0x0F,0x0A,0x08,0x06,0x04,0x02,0x00,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xBF,0x01
};

static uint8_t I2C_reg[10];
static uint8_t I2C_data[200];

static uint16_t TP_xloc;
static uint16_t TP_yloc;
static uint16_t TP_xloc_prev;
static uint16_t TP_yloc_prev;
static uint16_t TP_xloc_save;
static uint16_t TP_yloc_save;

static int deltaX;
static int deltaY;

static volatile TOUCH_TRANSFER_STATUS transferStatus = TOUCH_TRANSFER_STATUS_IDLE;

static TOUCH_DATA touchData;

/* ============================================================================================= */
/* EVENT FUNCTION PROTOTYPES                                                                     */
/* ============================================================================================= */

static void I2C_Callback(uintptr_t context);

/* ============================================================================================= */
/* STATIC FUNCTION PROTOTYPES                                                                    */
/* ============================================================================================= */

static void delayUS(uint32_t us);
static void delayMS(uint32_t ms);

/* ============================================================================================= */
/* GLOBAL FUNCTIONS                                                                              */
/* ============================================================================================= */

SYS_MODULE_OBJ DRV_GOODIX_Initialize(const SYS_MODULE_INDEX index, const SYS_MODULE_INIT * const init)
{
    touchData.state = APP_STATE_TOUCH_INIT; // assign application initial state
	touchData.timer = SYS_TIME_HANDLE_INVALID; // invalidate the timer

	TP_init_complete = false; // clear flags
	TP_dataready = false;
	TP_pressed = false;

	TP_xloc_prev = 0, // clear data
	TP_yloc_prev = 0;
	TP_xloc_save = 0;
	TP_yloc_save = 0;

	#if DEBUG_LED
	LED_YELLOW_Off();
	LED_RED_Off();
	#endif

	return((SYS_MODULE_OBJ)NULL);
}

/* ============================================================================================= */

void DRV_GOODIX_Tasks(SYS_MODULE_OBJ object)
{
	switch (touchData.state)
	{
		case APP_STATE_TOUCH_INIT:
		{
			// reset module and assign I2C address
			PIO_PortOutputEnable(PIO_PORT_A, TP_INT_MASK); // assign TP_INT as output (temporary)
			PIO_PortClear(PIO_PORT_A, TP_INT_MASK); // assign TP_INT low

			TP_RESET_Off(); // assign TP_RESET low

			delayMS(10); // delay 10ms

			PIO_PortSet(PIO_PORT_A, TP_INT_MASK); // assign TP_INT high

			delayUS(100); // delay 100us

			TP_RESET_On(); // assign TP_RESET high

			delayMS(5); // delay 5ms

			PIO_PortInputEnable(PIO_PORT_B, TP_RESET); // assign TP_RESET as input

			// execute sync mode
			PIO_PortOutputEnable(PIO_PORT_A, TP_INT_MASK); // assign TP_INT as output (temporary)
			PIO_PortClear(PIO_PORT_A, TP_INT_MASK); // assign TP_INT low

			delayMS(50); // delay 50ms

			PIO_PortSet(PIO_PORT_A, TP_INT_MASK); // assign TP_INT high
			PIO_PortInputEnable(PIO_PORT_A, TP_INT_MASK); // assign TP_INT as input (restore)

			// assign callback functions
			FLEXCOM8_TWI_CallbackRegister(I2C_Callback, (uintptr_t)&transferStatus );

			touchData.state = APP_STATE_TOUCH_CONFIG;
		}
		break;

		case APP_STATE_TOUCH_CONFIG:
		{
			uint8_t chksum = 0;
			int i, j;

			I2C_data[0] = 0x81; // clear touch buffer status
			I2C_data[1] = 0x4E;
			I2C_data[2] = 0x00;

			#if DEBUG_PRINT
			printf("\r\nCONFIG: Write to Reg:%02X%02X,%02X", I2C_data[0], I2C_data[1], I2C_data[2]);
			#endif

			FLEXCOM8_TWI_Write(I2C_ADDR_TOUCH, &I2C_data[0], 3);

			delayMS(10); // delay 10ms

			#if DEBUG_PRINT
			if (transferStatus == TOUCH_TRANSFER_STATUS_ERROR)
				printf("\r\nI2C communication error ...");
			#endif

			I2C_data[0] = 0x80; // assign configuration data address
			I2C_data[1] = 0x47;

			for (i=0,j=2; i<sizeof(TP_config); i++, j++)
			{
				I2C_data[j] = TP_config[i];

				if (i < (sizeof(TP_config)-2)) // calculate the configuration data checksum (exclude last 2 bytes)
					chksum += I2C_data[j];
			}

			chksum = ((~chksum)+1); // complement the checksum

			if (chksum != TP_config[sizeof(TP_config)-2]) // verify the checksum
			{
				#if DEBUG_PRINT
				printf("\r\nConfiguration checksum error %02X:%02X ...", chksum, TP_config[sizeof(TP_config)-2]);
				#endif
			}

			#if DEBUG_PRINT
			printf("\r\nCONFIG: Write to Reg:%02X%02X %d bytes", I2C_data[0], I2C_data[1], sizeof(TP_config));
			#endif

			FLEXCOM8_TWI_Write(I2C_ADDR_TOUCH, &I2C_data[0], sizeof(TP_config)+2);// write the configuration data

			delayMS(10); // delay 10ms

			#if DEBUG_PRINT
			if (transferStatus == TOUCH_TRANSFER_STATUS_ERROR)
				printf("\r\nI2C communication error ...");
			#endif

			TP_init_complete = true; // set configuration complete flag

			delayMS(100); // delay 100ms

			#if DEBUG_PRINT
			printf("\r\nConfiguration complete ...");
			#endif

			touchData.state = APP_STATE_TOUCH_TASK0;
		}
		break;

        case APP_STATE_TOUCH_TASK0:
            if (TP_INT_Get() == 0) // check if touch panel pressed
            {
                #if DEBUG_LED
                LED_RED_On();
                #endif

                I2C_data[0] = 0x81; // clear touch buffer status
                I2C_data[1] = 0x4E;
                I2C_data[2] = 0x00;

                FLEXCOM8_TWI_Write(I2C_ADDR_TOUCH, &I2C_data[0], 3);

                delayMS(2); // delay 2ms
            }
            else
            {
                #if DEBUG_LED
                LED_RED_Off();
                #endif

                touchData.state = APP_STATE_TOUCH_TASK1;
            }
            break;

		case APP_STATE_TOUCH_TASK1:
		{
            if ((TP_INT_Get() == 0) || (TP_pressed == true)) // check if touch panel pressed
			{
				TP_dataready = false; // assign touch data not ready

				if (SYS_TIME_DelayMS(20, &touchData.timer) != SYS_TIME_SUCCESS) // create and start the non-blocking 20ms timer
				{
					#if DEBUG_PRINT
					printf("\r\napplication delay failed ...");
					#endif

					delayMS(20); // delay 20ms (fixed if failed)

					touchData.state = APP_STATE_TOUCH_TASK3;
				}
				else
				{
					touchData.state = APP_STATE_TOUCH_TASK2;
				}
			}
		}
		break;

		case APP_STATE_TOUCH_TASK2:
		{
			if (SYS_TIME_DelayIsComplete(touchData.timer) == true) // check if non-blocking timer complete
			{
				SYS_TIME_TimerDestroy(touchData.timer); // delete the timer

				touchData.state = APP_STATE_TOUCH_TASK3;
			}
		}
		break;

		case APP_STATE_TOUCH_TASK3:
		{
			if (FLEXCOM8_TWI_IsBusy() == false) // check if I2C transfer complete
			{
				I2C_reg[0] = 0x81; // read the touch status
				I2C_reg[1] = 0x4E;
				I2C_data[0] = 0;

				FLEXCOM8_TWI_WriteRead(I2C_ADDR_TOUCH, &I2C_reg[0], 2, &I2C_data[0], 1);

				touchData.state = APP_STATE_TOUCH_TASK4;
			}
		}
		break;

		case APP_STATE_TOUCH_TASK4:
		{
			if (FLEXCOM8_TWI_IsBusy() == false) // check if I2C transfer complete
			{
				if (transferStatus != TOUCH_TRANSFER_STATUS_ERROR)
				{
					if (I2C_data[0] & 0x80) // check data ready bit
					{
						TP_dataready = true; // acknowledge touch ready
					}

					touchData.state = APP_STATE_TOUCH_TASK5;
				}
				else
				{
					#if DEBUG_PRINT
					printf("\r\nI2C communication error ...");
					#endif

					touchData.state = APP_STATE_TOUCH_TASK1;
				}
			}
		}
		break;

		case APP_STATE_TOUCH_TASK5:
		{
			if (FLEXCOM8_TWI_IsBusy() == false) // check if I2C transfer complete
			{
				I2C_reg[0] = 0x81; // read the touch coordinates
				I2C_reg[1] = 0x50;
				I2C_data[0] = 0;
				I2C_data[1] = 0;
				I2C_data[2] = 0;
				I2C_data[3] = 0;

				FLEXCOM8_TWI_WriteRead(I2C_ADDR_TOUCH, &I2C_reg[0], 2, &I2C_data[0], 4);

				touchData.state = APP_STATE_TOUCH_TASK6;
			}
		}
		break;

		case APP_STATE_TOUCH_TASK6:
		{
			if (FLEXCOM8_TWI_IsBusy() == false) // check if I2C transfer complete
			{
				if (transferStatus != TOUCH_TRANSFER_STATUS_ERROR)
				{
					TP_xloc = (((uint16_t)I2C_data[1] << 8) + (uint16_t)I2C_data[0]); // get the touch x coordinate
					TP_yloc = (((uint16_t)I2C_data[3] << 8) + (uint16_t)I2C_data[2]); // get the touch y coordinate

					if ((TP_xloc <= 480) && (TP_yloc <= 272)) // validate the coordinates
					{
						if (TP_dataready == true) // check if touch data ready to read
						{
							if (TP_pressed == false) // check if not already pressed
							{
								#if DEBUG_LED
								LED_RED_On();
								#endif

								//TP_pressed = true;

								#if DEBUG_PRINT
								printf("\r\nPress --> %d %d", TP_xloc, TP_yloc);
								//delayMS(2);
								#endif

								TP_xloc_prev = TP_xloc; // save current location
								TP_yloc_prev = TP_yloc;
								TP_xloc_save = TP_xloc;
								TP_yloc_save = TP_yloc;

								if(TP_downfilter>3) // should be 4 measurements before triggered
                                {
                                    #if DEBUG_PRINT
                                    printf("\r\nTrigger Press");
                                    #endif          
                                    TP_pressed = true;                                    
                                    SYS_INP_InjectTouchDown(0, TP_xloc, TP_yloc); // inject touch down event
                                }
                                else
                                {
                                    deltaX = ABS((int)TP_xloc - (int)TP_xloc_prev); // check for x-direction move event
                                    deltaY = ABS((int)TP_yloc - (int)TP_yloc_prev); // check for y-direction move event

                                    if ((deltaX <= 30) && (deltaY <= 30) || TP_downfilter==0) // check move step size - always count the first one
									{                                        
										TP_downfilter++;  
									}
									else
									{
										#if DEBUG_PRINT
											printf("\r\nDelta Rejected");
										#endif
									}									
                                }
							}
							else
							{
								deltaX = ABS((int)TP_xloc - (int)TP_xloc_prev); // check for x-direction move event
								deltaY = ABS((int)TP_yloc - (int)TP_yloc_prev); // check for y-direction move event

								if ((deltaX >= 3) || (deltaY >= 3)) // check move step size
								{
									#if DEBUG_PRINT
									printf("\r\nMove --> %d %d", TP_xloc, TP_yloc);
									#endif

									TP_xloc_prev = TP_xloc; // save current location
									TP_yloc_prev = TP_yloc;

									SYS_INP_InjectTouchMove(0, TP_xloc, TP_yloc); // inject touch move event
								}
							}
						}
						else
						{
							#if DEBUG_LED
							LED_RED_Off();
							#endif

							#if DEBUG_PRINT
							printf("\r\nRelease --> %d %d\r\n", TP_xloc, TP_yloc);
							//delayMS(2);
							#endif

							TP_pressed = false;
							TP_downfilter = 0;  

							if (splash_screen_active == true) // check if splash screen active
							{
								SYS_INP_InjectTouchUp(0, TP_xloc_save, TP_yloc_save); // inject touch up event (over-ride move event)
								// If we don't do this then after the mouse move, a release does not register a release on a button
								// We have to check if it is on a splash button because the other buttons handle it a different way
							}
							else
							{
								SYS_INP_InjectTouchUp(0, TP_xloc, TP_yloc); // inject touch up event
							}
						}
					}
					else
					{
						#if DEBUG_PRINT
						printf("\r\nInvalid coordinates --> %d %d", TP_xloc, TP_yloc);
						#endif

						TP_dataready = false;
						TP_pressed = false;
						TP_downfilter = 0;
					}
				}
				else
				{
					#if DEBUG_PRINT
					printf("\r\nI2C communication error ...");
					#endif

					TP_dataready = false;
					TP_pressed = false;
				}

				I2C_data[0] = 0x81; // clear touch buffer status
				I2C_data[1] = 0x4E;
				I2C_data[2] = 0x00;

				FLEXCOM8_TWI_Write(I2C_ADDR_TOUCH, &I2C_data[0], 3);

				touchData.state = APP_STATE_TOUCH_TASK7;
			}
		}
		break;

		case APP_STATE_TOUCH_TASK7:
		{
			if (FLEXCOM8_TWI_IsBusy() == false) // check if I2C transfer complete
			{
				#if DEBUG_PRINT
				if (transferStatus == TOUCH_TRANSFER_STATUS_ERROR)
					printf("\r\nI2C communication error ...");
				#endif

				touchData.state = APP_STATE_TOUCH_TASK1;
			}
		}
		break;

		default:
			break;
	}
}

/* ============================================================================================= */
/* EVENT FUNCTIONS                                                                               */
/* ============================================================================================= */

// I2C callback function
static void I2C_Callback(uintptr_t context)
{
	TOUCH_TRANSFER_STATUS* txStat = (TOUCH_TRANSFER_STATUS*)context;

	if (FLEXCOM8_TWI_ErrorGet() == FLEXCOM_TWI_ERROR_NONE)
	{
		if (txStat)
		{
			*txStat = TOUCH_TRANSFER_STATUS_SUCCESS;
		}
	}
	else
	{
		if (txStat)
		{
			*txStat = TOUCH_TRANSFER_STATUS_ERROR;
		}
	}
}

/* ============================================================================================= */
/* STATIC FUNCTIONS                                                                              */
/* ============================================================================================= */

// microsecond delay
static void delayUS(uint32_t us)
{
	SYS_TIME_HANDLE tmr;

	if (SYS_TIME_DelayUS(50, &tmr) != SYS_TIME_SUCCESS)
	{
		#if DEBUG_PRINT
		printf("\r\nUS delay failed ...");
		#endif
	}
	else if (SYS_TIME_DelayIsComplete(tmr) != true)
	{
		while (SYS_TIME_DelayIsComplete(tmr) == false); // wait until the delay has expired
	}
}

/* ============================================================================================= */

// millisecond delay
static void delayMS(uint32_t ms)
{
	SYS_TIME_HANDLE tmr;

	if (SYS_TIME_DelayMS(ms, &tmr) != SYS_TIME_SUCCESS)
	{
		#if DEBUG_PRINT
		printf("\r\nMS delay failed ...");
		#endif
	}
	else if(SYS_TIME_DelayIsComplete(tmr) != true)
	{
		while (SYS_TIME_DelayIsComplete(tmr) == false); // wait till the delay has expired
	}
}
