#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "gfx/legato/generated/le_gen_init.h"
#include "system/time/sys_time.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "bsp/bsp.h"
#include "configuration.h"
#include "app.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screenStack.h"
#include "splash.h"
#include "time.h"
#include "timer.h"
#include "comTaskDrv.h"
#include "modbus.h"
#include "splash_utility.h"
#include "app_json.h"
#include "peripheral\lcdc\plib_lcdc.h"
#include "splash_utility.h"



int8_t splashLogoPressCount = -1;

void event_splash_BtnIce_OnPressed(leButtonWidget* btn)
{
   // DBG_P;
    splashInput.evtButton =  OCCUR_ICE;
    pwm2_3_LEDcnt = -1;
}

#define SHOW_PIC(ImgSqn) ImgSqn .ImgSqnWgt->fn->showImage(ImgSqn .ImgSqnWgt, ImgSqn .holdIdx);\
                         ImgSqn .status = SHOWN;

void event_splash_BtnIce_OnReleased(leButtonWidget* btn)
{
    pwm2_3_LEDcnt = 0;
    splashInput.evtButton =  DISAPPEAR_ICE;
}

void event_splash_BtnWater_OnPressed(leButtonWidget* btn)
{
    pwm2_3_LEDcnt = -1;
    splashInput.evtButton =  OCCUR_AMB_WATER;
    printf("press water\n");
}

void event_splash_BtnWater_OnReleased(leButtonWidget* btn)
{
    pwm2_3_LEDcnt = 0;
    splashInput.evtButton =  DISAPPEAR_AMB_WATER;
    printf("realease water\n");
}

void event_splash_BtnHotWater_OnPressed(leButtonWidget* btn)
{
    pwm2_3_LEDcnt = -1;
    LCDcnt = -1;
    if(splashInput.evtSensor != HOLD_NONE) return;
    splashInput.evtButton =  HOLD_NONE;
    PUSH_SHOW(screenID_splash_hotwater)
}
void event_splash_BtnHotWater_OnReleased(leButtonWidget* btn)
{
    
}


void event_splash_BtnHelp_OnReleased(leButtonWidget* btn)
{
    if(splashLogoPressCount != -1) 
    {
        pwm2_3_LEDcnt = 0;
        splashLogoPressCount = 0; 
    }
    else{ selfhelp_pageNum = 0; PUSH_SHOW(screenID_selfhelp)} //PUSH_SHOW(screenID_help)      //
}


void event_splash_BtnLogo_OnReleased(leButtonWidget* btn)
{
    if(splashLogoPressCount == -1) 
    {
        pwm2_3_LEDcnt = 0;
        splashLogoPressCount = 0; 
    }
    else
    {
        main_menu_pageNo = 0;
        PUSH_SHOW(screenID_main_menu)
    }
 }

//screenID_main_menu

#define ENABLE_FUNCTION(drink,le_t_f) splash_Pnl##drink ->fn->setVisible(splash_Pnl##drink,le_t_f);\
                                      splash_Pnl##drink ->fn->setEnabled(splash_Pnl##drink,le_t_f);
#define RELOCATE_FUNCTION(drink,x,y) splash_Pnl##drink ->fn->setPosition(splash_Pnl##drink, x, y);


void showIce(void)
{
    RELOCATE_FUNCTION(Ice,190,0)    
    ENABLE_FUNCTION(Hotwater,LE_FALSE)
    ENABLE_FUNCTION(Water,LE_FALSE) 
    ENABLE_FUNCTION(Ice,LE_TRUE)

    
    ImgSqnIce.installed = 1;  
    ImgSqnIRinSp.installed = 1;  
    ImgSqnAmbW.installed = 0;  
    ImgSqnHotW.installed = 0;  
    ImgSqnIRinHot.installed = 0;     
    
    ImgSqnIce.holdIdx = 8;
    ImgSqnIce.curIdx = 0;
    ImgSqnIce.ImgSqnWgt = splash_ImgSqnIce;    
    
    ImgSqnIRinSp.holdIdx = 0;
    ImgSqnIRinSp.curIdx = 0;    
    ImgSqnIRinSp.firstIdx = 0;
    ImgSqnIRinSp.lastIdx = 2;
    ImgSqnIRinSp.ImgSqnWgt = splash_ImgSqnIR;       
    
    SHOW_PIC(ImgSqnIce)
}

void showIceWater(void)
{
    ENABLE_FUNCTION(Hotwater,LE_FALSE)
    ENABLE_FUNCTION(Water,LE_TRUE) 
    ENABLE_FUNCTION(Ice,LE_TRUE)  
    RELOCATE_FUNCTION(Ice,110,0)
    RELOCATE_FUNCTION(Water,270,0)            
    
    ImgSqnIce.installed = 1;
    ImgSqnAmbW.installed = 1;    
    ImgSqnIRinSp.installed = 1;  
    ImgSqnHotW.installed = 0;  
    ImgSqnIRinHot.installed = 0;      
    
    ImgSqnIce.ImgSqnWgt = splash_ImgSqnIce;    
    ImgSqnAmbW.ImgSqnWgt = splash_ImgSqnWater;    

    ImgSqnIRinSp.holdIdx = 3;
    ImgSqnIRinSp.curIdx = 3;    
    ImgSqnIRinSp.firstIdx = 3;
    ImgSqnIRinSp.lastIdx = 5;
    ImgSqnIRinSp.ImgSqnWgt = splash_ImgSqnIR;    
    
    SHOW_PIC(ImgSqnIce)
    SHOW_PIC(ImgSqnAmbW)    
}

void showIceWaterHotWater(void)
{
    ENABLE_FUNCTION(Hotwater,LE_TRUE)
    ENABLE_FUNCTION(Water,LE_TRUE) 
    ENABLE_FUNCTION(Ice,LE_TRUE)  
    RELOCATE_FUNCTION(Ice,25,0)
    RELOCATE_FUNCTION(Water,335,0)  
    RELOCATE_FUNCTION(Hotwater,175,0)
            
    ImgSqnIce.installed = 1;
    ImgSqnAmbW.installed = 1;    
    ImgSqnIRinSp.installed = 1;  
    ImgSqnHotW.installed = 1;  
    ImgSqnIRinHot.installed = 1;                  
    
    ImgSqnIRinSp.holdIdx = 6;
    ImgSqnIRinSp.curIdx = 6;    
    ImgSqnIRinSp.firstIdx = 6;
    ImgSqnIRinSp.lastIdx = 8;    
    
    ImgSqnIce.ImgSqnWgt = splash_ImgSqnIce;    
    ImgSqnAmbW.ImgSqnWgt = splash_ImgSqnWater;     
    ImgSqnIRinSp.ImgSqnWgt = splash_ImgSqnIR;  
    

    SHOW_PIC(ImgSqnIce)
    SHOW_PIC(ImgSqnAmbW)       
}

void splash_OnShow(void)
{
    pwm2_3_LEDcnt = 0;
    LCDcnt = 0;
    AssignTouchListeners();
    splash_screen_active = true;
    dueAlert();
    splashInput.evtButton =  HOLD_NONE; 
    splashInput.evtIR = HOLD_CUP;//HOLD_NO_CUP;
    int32_t water,hotwater;
    char* str;
    if(false == readWriteValInJson(1,root,&water,&str,1,2,"settings","ambient_water_installed"))
        water = 0;        
    if(false == readWriteValInJson(1,root,&hotwater,&str,1,2,"settings","hot_water_installed"))
        hotwater = 0;       
    if(water == 0)         showIce();
    else if(hotwater == 0) showIceWater();
    else                   showIceWaterHotWater();
}

void splash_OnHide(void)
{
    splash_screen_active = false;
    drinkType.w = STOP_SPLASH;
    sendDspnCmd(drinkType,modBus); 
    
    splashInput.evtButton =  HOLD_NONE; 
    splashInput.evtIR = HOLD_CUP;//HOLD_NO_CUP;
    splashLogoPressCount = -1;
    pwm2_3_LEDcnt = -1;
    LCDcnt = -1;
    LCDC_SetPWMCompareValue((uint32_t)(7 + readSetValFromSettingJson("display_brightness",80)*0.6));
    PWM_ChannelDutySet(PWM_CHANNEL_2, 1000); // assign LED PWM max value
    PWM_ChannelDutySet(PWM_CHANNEL_3, 1000);    
}

