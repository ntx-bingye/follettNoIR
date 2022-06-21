#ifndef _TOUCHLESS_H
#define _TOUCHLESS_H

//#include "peripheral\pio\plib_pio.h"
#include "app.h"

#define I2C_ADDR_TOUCHLESS  0x28 // I2C address

typedef enum {NO_IR_SENSOR = -2, WRONG_IR_SENSOR, NO_CUP, HAS_CUP} IR_STATE_T;

#define NO_IR_SENSOR_THRESHOLD     (uint16_t)((0.008)*4096/3.3)      //0.008v   
//#define NO_CUP_THRESHOLD           (uint16_t)((0.3)*4096/3.3)      //0.064v     // 0.064V
#define WRONG_IR_SENSOR_THRESHOLD  (uint16_t)((3.2)*4096/3.3)        //4000  

uint16_t NO_CUP_THRESHOLD;
uint16_t avgADCdata;
uint8_t touchLessCfg[20];
uint8_t I2C_reg;
uint8_t touchSensor[3];
uint8_t sentTouchCfgCount;

#define GET_TOUCHLESS_RESULT (touchSensor[2]|touchSensor[1]|touchSensor[0])

uint8_t getTouchId(void);

void readTouchlessStart(uint8_t I2C_reg_val);

void APP_Touchless_Initialize(void);

IR_STATE_T IR_ProxSensorGet();

#endif
