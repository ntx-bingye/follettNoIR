#include"encoder_Task.h"

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "peripheral/pio/plib_pio.h"
#include "gfx\legato\generated\le_gen_init.h"
#include "encoder_task.h"
#include "app.h"
#include "screenStack.h"

enum ENCODE_STATUS {ENCODER_HOLD,ENCODER_PLUS,ENCODER_MINUS};
enum ENCODE_STATUS getEncodeStatus(void);

enum ENCODE_STATUS getEncodeStatus(void)
{
    static uint PreAstate;
    uint AState = GPIO_PB0_Get();
    uint BState = GPIO_PB1_Get();
    
    if(AState  == PreAstate ) return ENCODER_HOLD;

    PreAstate= AState ;

    if(BState != AState )  return ENCODER_MINUS;

    return ENCODER_PLUS;
}


void adjustTemperature(enum ENCODE_STATUS encoderStatus,gComVar * gVarP)
{
    uint16_t setTemp;
    setTemp = gVarP->settings->data.cmdAckPayload.settings.temp;
    if((encoderStatus == ENCODER_MINUS) &&(setTemp > 84))
        setTemp--;

    if((encoderStatus == ENCODER_PLUS) &&(setTemp < 424)) 
        setTemp++;
    gVarP->settings->data.cmdAckPayload.settings.temp = setTemp;
    
}

void adjustPower(enum ENCODE_STATUS encoderStatus,gComVar * gVarP)
{
    uint8_t setPower;
    setPower = gVarP->settings->data.cmdAckPayload.settings.power;
    if((encoderStatus == ENCODER_MINUS)&&(setPower > 0))
        setPower--;
    
    if((encoderStatus == ENCODER_PLUS)&&(setPower < 100))
        setPower++;
    
    gVarP->settings->data.cmdAckPayload.settings.power = setPower;
}

//Get the enconder's changing to set the temperatrue or power. 2:Change the position of the circular slider
void encoder_Task(void)
{
    static int encoderCounter = 0;

    if(encoderCounter++<400) return;
    
    encoderCounter=0;
    
    if((gCurVar0.tempLockFlag == false)&&(getCurScreen() == screenID_TemperatureModeSingle))
        adjustTemperature(getEncodeStatus(),&gCurComVar[0]);
    else if((gCurVar0.tempLockFlag == false)&&
       (getCurScreen() == screenID_DualTempMode)&&
       (activateTempHOB_chn == 0))
         adjustTemperature(getEncodeStatus(),&gCurComVar[0]);   
    else if((gCurVar1.tempLockFlag == false)&&
       (getCurScreen() == screenID_DualTempMode)&&
       (activateTempHOB_chn == 1))
         adjustTemperature(getEncodeStatus(),&gCurComVar[1]);  
    
    else if((gCurVar0.powerLockFlag == false)&&(getCurScreen() == screenID_PowerModeSingle))
        adjustPower(getEncodeStatus(),&gCurComVar[0]);
    else if((gCurVar0.powerLockFlag == false)&&
       (getCurScreen() == screenID_DualPowerMode)&&
       (activatePowerHOB_chn == 0))
         adjustPower(getEncodeStatus(),&gCurComVar[0]);   
    else if((gCurVar1.powerLockFlag == false)&&
       (getCurScreen() == screenID_DualPowerMode)&&
       (activatePowerHOB_chn == 1))
         adjustPower(getEncodeStatus(),&gCurComVar[1]);     
}


void encoderPressProcess(void)
{
    if(gCurVar0.buttonPressed)
    {
        //EncoderEvent();
        gCurVar0.buttonPressed = 0;
        //printf("Encoder Button");
        //To do something
    }
}    