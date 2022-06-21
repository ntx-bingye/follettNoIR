#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "gfx/legato/generated/le_gen_init.h"
#include "system/time/sys_time.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "bsp/bsp.h"
#include "app.h"
#include "timer.h"
#include "screenStack.h"
#include "splash.h"
#include "modbus.h"
//#include "cmd_fifo.h"
#include "app_touchless.h"
#include "peripheral\flexcom\twi\master\plib_flexcom4_twi_master.h"
#include "peripheral\adc\plib_adc.h"
#include "splash_utility.h"
#include "service_advance_cfg.h"
#include "main_menu.h"
#include "splash.h"
#include "sensor.h"
#include "service_advance_output.h"
#include "splash_hotwater.h"
#include "service_gear_motor.h"
#include "definitions.h"
#include "driver/input/drv_goodix.h"

SYS_TIME_HANDLE SecPeriodicHandle;
SYS_TIME_HANDLE Ms100PeriodicHandle;
SYS_TIME_HANDLE Ms1PeriodicHandle;
SYS_TIME_HANDLE Us1PeriodicHandle;
uint8_t count256 = 0;
uint32_t count32 =0;

int8_t startUI_timer = -1;
int16_t cmdTimeout_timer = -1;
int8_t  hotWaterUISecTimer = -1;

int8_t lockTimer = -1;
int8_t lockFlag = 0;

void startUI_timeOut(void)
{
    if(startUI_timer < 0) return;
    
    if(!IN_UI(screenID_start)) 
    {
        startUI_timer = -1;
        return;
    }
    
    if(startUI_timer >= 2) 
    {
        startUI_timer = -1;
        PUSH_SHOW(screenID_splash)
        return;
    }
    
    startUI_timer ++;
}

void SecPeriodicCallback(uintptr_t context)
{
}

void Us1PeriodicCallback(uintptr_t context)
{
    //count32 ++;
}

void cmdTimeOut(void)
{
    if(cmdTimeout_timer == -1) return; //stop 
    if(cmdTimeout_timer > 5) return; //time out
    cmdTimeout_timer++;   
}

#define NOT_IN_SPLASH_AND_HOT !(IN_UI(screenID_splash) || IN_UI(screenID_splash_hotwater))

void Ms1PeriodicCallback(uintptr_t context)
{
    //count32 ++;
    //cmdTimeOut();
    
    //if(NOT_IN_SPLASH_AND_HOT) return;
    
   // ADC_ConversionStart();// IR value
}

#define LOG_HELP_FN_COUNT \
if(IN_UI(screenID_splash)) \
{\
    if(splashLogoPressCount >= 2)  splashLogoPressCount = -1; \
    if(splashLogoPressCount >= 0)  splashLogoPressCount ++;\
}
#define LOCK_TIMEOUT 3
void lockTimerFnInTimer(void)
{
    if(lockTimer == -1) return;
    if((!IN_UI(screenID_selfhelp_cleanscreen))&&(!IN_UI(screenID_main_menu))) 
        {lockTimer = -1;return;}
    
    if(lockTimer < LOCK_TIMEOUT) {lockTimer ++; return;}
    lockTimer = LOCK_TIMEOUT;
}

void lockTimerFnInApp(void)
{
    if(lockTimer != LOCK_TIMEOUT) return;
    if(IN_UI(screenID_selfhelp_cleanscreen))
    {
        lockTimer = -1;
        #define ENABLE_BUTTON(btn,le_t_f) selfhelp_cleanscreen_Btn##btn->fn->setEnabled(selfhelp_cleanscreen_Btn##btn,le_t_f)
        ENABLE_BUTTON(Home,LE_TRUE);
        ENABLE_BUTTON(Exit,LE_TRUE);
        ENABLE_BUTTON(Lock,LE_TRUE);
        ENABLE_BUTTON(Unlock,LE_TRUE);
        selfhelp_cleanscreen_BtnLock->fn->setScheme(selfhelp_cleanscreen_BtnLock,&Button_Gray2);
        lockFlag = 0;
        return;
        #undef ENABLE_BUTTON
    }

    if(IN_UI(screenID_main_menu))
    {
        lockTimer = -1; 
        #define ENABLE_BUTTON(btn,le_t_f) main_menu_Btn##btn->fn->setEnabled(main_menu_Btn##btn,le_t_f)
        ENABLE_BUTTON(Home,LE_TRUE);
        ENABLE_BUTTON(Exit,LE_TRUE);
        ENABLE_BUTTON(CleanLock,LE_TRUE);
        ENABLE_BUTTON(CleanUnlock,LE_TRUE);

        ENABLE_BUTTON(Maintenance,LE_TRUE);
        ENABLE_BUTTON(OperationSettings,LE_TRUE);
        ENABLE_BUTTON(Service,LE_TRUE);
        ENABLE_BUTTON(SystemInformation,LE_TRUE);
        ENABLE_BUTTON(Troubleshoot,LE_TRUE);        
        
        main_menu_BtnCleanLock->fn->setScheme(main_menu_BtnCleanLock,&Button_Gray2);
        lockFlag = 0;
        return;
        #undef ENABLE_BUTTON        
    }
}

void startUItimer(void)
{
    if(start_UI_delay5s == -1) return;
    if(start_UI_delay5s == 3) return;

    start_UI_delay5s++;
}

void updateUI(void)
{
    //if(IN_UI(screenID_service_advancedconfig)) updateUsbStatus();
    
//    if((IN_UI(screenID_main_menu)) &&
//      (main_menu_btnNo == 1)&&
//      (main_menu_pageNo == 3))
//    {
//        displaySensor(avgADCdata);
//        return;
//    }
    
    if(IN_UI(screenID_Sensor)){updateText();return;}
    if(IN_UI(screenID_service_advancedoutput)){automaticBtnAction();return;}
    if(IN_UI(screenID_splash_hotwater)) {updateHotWaterStatus();return;}
}

void goodixCfgTimeOut(void)
{
    if(goodix_cfg_timeout == -1) return;
    goodix_cfg_timeout = (goodix_cfg_timeout < GOODIX_CFG_TIMEOUT)?
                         (goodix_cfg_timeout+1):GOODIX_CFG_TIMEOUT;
}

#define I2C_ERROR (FLEXCOM4_TWI_ErrorGet() != FLEXCOM_TWI_ERROR_NONE)
#define I2C_BUSY FLEXCOM4_TWI_IsBusy()

void Ms100PeriodicCallback(uintptr_t context)
{
    goodixCfgTimeOut();
    count32 ++;
    count256 ++;
    int8_t mod4 = count256%4;
    if(count256%10 == 5) //second process
    {
        LOG_HELP_FN_COUNT
        //lockTimerFn();
        lockTimerFnInTimer();
        startUItimer();
    }

    //if(inLcdUpdate) return;
    
    if(mod4 == 0) secScreenTimeOut(); //400ms
    
    if(count256%10 == 1) {cmdTimeOut();}
     
    I2C_reg = 0x10;
//    if(IN_UI(screenID_splash))
   // if (NO_CUP_THRESHOLD != 0)
    {
        if(!I2C_ERROR) 
            FLEXCOM4_TWI_WriteRead(I2C_ADDR_TOUCHLESS, &I2C_reg, 1, &touchSensor[0], 1); 
        else
        {
            FLEXCOM4_TWI_Initialize();
            //APP_Touchless_Initialize();
        }
        
        //ADC_ConversionStart();// IR value
    }
    sensorStateMachine();
    
    if(count256%2 ==1) ledFade();

    if(mod4 == 1) updateUI(); //400ms
    if(mod4 == 3) runImgSqn();//400ms        
}
#undef LOG_HELP_FN_COUNT
#undef NOT_IN_SPLASH_AND_HOT

int SecPeriodic_Initialize(void)
{
    //Give a SYS_TIME_CALLBACK function "MyCallback",
    SecPeriodicHandle = SYS_TIME_CallbackRegisterMS(SecPeriodicCallback, (uintptr_t)0, 1000, SYS_TIME_PERIODIC);
    if (SecPeriodicHandle != SYS_TIME_HANDLE_INVALID) return 0 ;
    return (-1);
}

int Ms100Periodic_Initialize(void)
{
    Ms100PeriodicHandle = SYS_TIME_CallbackRegisterMS(Ms100PeriodicCallback, (uintptr_t)1, 100, SYS_TIME_PERIODIC);
    if (Ms100PeriodicHandle != SYS_TIME_HANDLE_INVALID) return 0 ;
    return (-1);
}

int Ms1Periodic_Initialize(void)
{
    Ms1PeriodicHandle = SYS_TIME_CallbackRegisterMS(Ms1PeriodicCallback, (uintptr_t)2, 1, SYS_TIME_PERIODIC);
    if (Ms1PeriodicHandle != SYS_TIME_HANDLE_INVALID) return 0 ;
    return (-1);
}

int Us1Periodic_initialize(void)
{
    Us1PeriodicHandle = SYS_TIME_CallbackRegisterUS(Us1PeriodicCallback, (uintptr_t)1, 100, SYS_TIME_PERIODIC);
    if (Us1PeriodicHandle != SYS_TIME_HANDLE_INVALID) return 0 ;
    return (-1);
}