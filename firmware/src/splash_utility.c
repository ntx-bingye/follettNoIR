#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "gfx/legato/generated/le_gen_init.h"
#include "system/time/sys_time.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "peripheral\lcdc\plib_lcdc.h"

#include "app.h"
#include "timer.h"
#include "screenStack.h"
#include "splash.h"
#include "modbus.h"
#include "app_touchless.h"
#include "splash_utility.h"
#include "peripheral/pwm/plib_pwm.h"
#include "app_json.h"
#include "system/input/sys_input_touch.h"
#include "system\input\sys_input_listener.h"
#include "system/input/sys_input.h"


int16_t pwm2_3_LEDcnt = 0;
int16_t LCDcnt = 0;
int16_t advanceUISecTimer = 0;
int16_t otherUISecTimer = 0;
bool updateHotWaterReadyEnable = 0;

void eventScreen(int8_t pressOrRelease)
{
    switch(legato_getCurrentScreen())
    {
        case screenID_splash:
            pwm2_3_LEDcnt = pressOrRelease;
            LCDcnt = pressOrRelease;
            break;
        case screenID_splash_hotwater:
            hotWaterUISecTimer = pressOrRelease;
            break;
        
        //advance 
        case screenID_service_advanced:
        case screenID_service_advancedcontact:   
        case screenID_service_advancedoutput:
        case screenID_service_advancedinput: 
        case screenID_service_advanced_Reset_to_Factory:
        case screenID_service_advancedgearmotor: 
        case screenID_service_advancedconfig:
        case screenID_service_advanced_screentimeout:     
        case screenID_service_advanced_sleepmode:
        case screenID_service_keyboard: 
            advanceUISecTimer = pressOrRelease;
            break;    

        default: {otherUISecTimer = pressOrRelease;break;} 
    }
}

static void splashDownHandler(const SYS_INP_TouchStateEvent* const evt)
{
    eventScreen(-1); //press
}
static void splashUpHandler(const SYS_INP_TouchStateEvent* const evt)
{
    eventScreen(0); //release
}

static void splashMoveHandler(const SYS_INP_TouchMoveEvent* const evt)
{
    eventScreen(-1); //press
}

static SYS_INP_InputListener splashInputListener;

void AssignTouchListeners(void)
{
	splashInputListener.handleTouchDown = &splashDownHandler; // assign down listener
	splashInputListener.handleTouchUp   = &splashUpHandler; // assign up listener
	splashInputListener.handleTouchMove = &splashMoveHandler; // assign move listener

	SYS_INP_AddListener(&splashInputListener); // register the listener
}

Splash_input_t splashInput = {
    .evtIR = HOLD_NO_CUP,
    .evtButton = HOLD_NONE,
    .evtSensor = HOLD_NONE
};


void ImgSqnPlay(ImgSqn_t * ImgSqnP);

ImgSqn_t ImgSqnIce =    {.firstIdx = 0, .lastIdx = 7, .curIdx = 0, .holdIdx = 8,
                         ._ImgSqnPlay_ = ImgSqnPlay,  .status = HIDEN};
ImgSqn_t ImgSqnAmbW =   {.firstIdx = 0, .lastIdx = 7, .curIdx = 0, .holdIdx = 8,
                         ._ImgSqnPlay_ = ImgSqnPlay,  .status = HIDEN};
ImgSqn_t ImgSqnIRinSp = {.firstIdx = 6, .lastIdx = 8, .curIdx = 6, .holdIdx = 0,
                         ._ImgSqnPlay_ = ImgSqnPlay,  .status = HIDEN};
ImgSqn_t ImgSqnIRinHot ={.firstIdx = 0, .lastIdx = 2, .curIdx = 0, .holdIdx = 0,
                         ._ImgSqnPlay_ = ImgSqnPlay,  .status = HIDEN};
ImgSqn_t ImgSqnHotW =   {.firstIdx = 0, .lastIdx = 4, .curIdx = 0, .holdIdx = 0,
                         ._ImgSqnPlay_ = ImgSqnPlay,  .status = HIDEN};

void ImgSqnPlay(ImgSqn_t * ImgSqnP)
{
    ImgSqnP->ImgSqnWgt->fn->showImage(ImgSqnP->ImgSqnWgt,ImgSqnP->curIdx);
        
    ImgSqnP->curIdx = (ImgSqnP->curIdx > ImgSqnP->lastIdx - 1) ? (ImgSqnP->firstIdx):(ImgSqnP->curIdx +1);
    ImgSqnP->status = PLAY;
    
}

void holdImgSqn(ImgSqn_t * ImgSqnP)
{
    ImgSqnP->ImgSqnWgt->fn->showImage(ImgSqnP->ImgSqnWgt,ImgSqnP->holdIdx);
    ImgSqnP->status = SHOWN;
}

void showImgSqnIRinHot(bool t_f)
{
     ImgSqnIRinHot.ImgSqnWgt->fn->setVisible(ImgSqnIRinHot.ImgSqnWgt,t_f);
     ImgSqnIRinHot.status = SHOWN;
     splash_hotwater_ImgLogo->fn->setVisible(splash_hotwater_ImgLogo,!(t_f));
     splash_hotwater_ImgLogo->fn->setEnabled(splash_hotwater_ImgLogo,!(t_f));
}

void showImgSqnIRinSp(bool t_f)
{
     ImgSqnIRinSp.ImgSqnWgt->fn->setVisible(ImgSqnIRinSp.ImgSqnWgt,t_f);
     ImgSqnIRinSp.status = SHOWN;
     splash_BtnLogo->fn->setVisible(splash_BtnLogo,!(t_f));
     splash_BtnLogo->fn->setEnabled(splash_BtnLogo,!(t_f)); 
}

void splashInputButtonPro(void)
{
    switch(splashInput.evtButton)
    {
        case OCCUR_ICE:
            drinkType.w = ICE;
            sendDspnCmd(drinkType,modBus);
            splashInput.evtButton =  HOLD_ICE;
            break;
        case HOLD_ICE:
            drinkType.w = ICE;
            sendDspnCmd(drinkType,modBus);               
            break;
        case DISAPPEAR_ICE:
            drinkType.w = STOP_SPLASH;
            sendDspnCmd(drinkType,modBus); 
            holdImgSqn(&ImgSqnIRinSp);
            holdImgSqn(&ImgSqnIce);
            splashInput.evtButton = HOLD_NONE; 
            break;
                
        case OCCUR_AMB_WATER:
            if(0 == ImgSqnAmbW.installed) break;
            drinkType.w = AMB_WATER;
            sendDspnCmd(drinkType,modBus);                 
            splashInput.evtButton = HOLD_AMB_WATER;
            break;
        case HOLD_AMB_WATER:
            if(0 == ImgSqnAmbW.installed) break;
            drinkType.w = AMB_WATER;
            sendDspnCmd(drinkType,modBus);                   
           break;
        case DISAPPEAR_AMB_WATER:
            if(0 == ImgSqnAmbW.installed) break;
            drinkType.w = STOP_SPLASH;
            sendDspnCmd(drinkType,modBus);  
            holdImgSqn(&ImgSqnIRinSp);
            holdImgSqn(&ImgSqnAmbW);
            splashInput.evtButton = HOLD_NONE;
            break;      
                
        default:
            break;
    }     
}

#define sensorID getTouchId()

void splashInputSensorPro(void)
{
    //if(HOLD_NO_CUP == splashInput.evtIR) return;
  
    //uint8_t sensorID = getTouchId();
    
    bool hasCup = (splashInput.evtIR == HOLD_CUP)|| (splashInput.evtIR == OCCUR_CUP);
    switch(splashInput.evtSensor)
    {
        case OCCUR_ICE:
            drinkType.w = ICE;
            sendDspnCmd(drinkType,modBus);              
            splashInput.evtSensor = HOLD_ICE;
            if(hasCup) holdImgSqn(&ImgSqnIRinSp);
            break;
        case HOLD_ICE:
            drinkType.w = ICE;
            sendDspnCmd(drinkType,modBus);               
            splashInput.evtSensor = (sensorID == 1)? HOLD_ICE:DISAPPEAR_ICE;            
            break;
        case DISAPPEAR_ICE:
            drinkType.w = STOP_SPLASH;
            sendDspnCmd(drinkType,modBus);  
            splashInput.evtSensor = HOLD_NONE;
            
            if(hasCup) holdImgSqn(&ImgSqnIRinSp);
        
            holdImgSqn(&ImgSqnIce);
            break;
            
        case HOLD_NONE:
            if(hasCup)
            {
                switch(sensorID)
                {
                    case 0: splashInput.evtSensor = HOLD_NONE; break;
                    case 1: splashInput.evtSensor = OCCUR_ICE; break;
                    case 3: if(0 == ImgSqnAmbW.installed)      break;
                            splashInput.evtSensor = OCCUR_AMB_WATER; break;
                    case 2: if(0 == ImgSqnAmbW.installed) break;
                            if(splashInput.evtButton != HOLD_NONE) break;
                            splashInput.evtSensor = HOLD_NONE; 
                            PUSH_SHOW(screenID_splash_hotwater)
                            break;
                            
                    default:break;
                }
            }
            break;
                
        case OCCUR_AMB_WATER:
            if(0 == ImgSqnAmbW.installed) break;
            drinkType.w = AMB_WATER;
            sendDspnCmd(drinkType,modBus);                 
            splashInput.evtSensor = HOLD_AMB_WATER;
            if(hasCup) holdImgSqn(&ImgSqnIRinSp);
            break;
        case HOLD_AMB_WATER:
            if(0 == ImgSqnAmbW.installed) break;
            drinkType.w = AMB_WATER;
            sendDspnCmd(drinkType,modBus);                   
            splashInput.evtSensor = (sensorID == 3)? HOLD_AMB_WATER:DISAPPEAR_AMB_WATER;
            break;
        case DISAPPEAR_AMB_WATER:
            if(0 == ImgSqnAmbW.installed) break;
            drinkType.w = STOP_SPLASH;
            sendDspnCmd(drinkType,modBus);                   
            splashInput.evtSensor = HOLD_NONE;
            
            if(hasCup) holdImgSqn(&ImgSqnIRinSp);
        
            holdImgSqn(&ImgSqnAmbW);
            break;      
                
        default:
            break;
    } 
}

void splashHotWaterInputButtonPro(void)
{
    switch(splashInput.evtButton)
    {
        case OCCUR_HOT_WATER:
            drinkType.w = HOT_WATER;
            sendDspnCmd(drinkType,modBus); 
            splashInput.evtButton = HOLD_HOT_WATER;
            holdImgSqn(&ImgSqnHotW); 
            holdImgSqn(&ImgSqnIRinHot);
            break;
        
        case HOLD_HOT_WATER:
            drinkType.w = HOT_WATER;
            sendDspnCmd(drinkType,modBus);               
            break;    
            
        case DISAPPEAR_HOT_WATER:
            drinkType.w = STOP_SPLASH;
            sendDspnCmd(drinkType,modBus);                  
            splashInput.evtButton = HOLD_NONE;   
            //ImgSqnHotW._ImgSqnPlay_(&ImgSqnHotW);
            break;  
            
        case HOLD_NONE:
            //ImgSqnHotW._ImgSqnPlay_(&ImgSqnHotW);
            break;
            
        default:break;
    }
}

void splashHotWaterInputSensorPro(void)
{
    //if(HOLD_NO_CUP == splashInput.evtIR) return;
    //uint8_t sensorID = getTouchId();
    
    switch(splashInput.evtSensor)
    {
        case OCCUR_HOT_WATER:
            hotWaterUISecTimer = -1;
            drinkType.w = HOT_WATER;
            sendDspnCmd(drinkType,modBus); 
            splashInput.evtSensor = HOLD_HOT_WATER;
            break;
            
        case HOLD_HOT_WATER:
            drinkType.w = HOT_WATER;
            sendDspnCmd(drinkType,modBus);  
            splashInput.evtSensor = (sensorID == 1)? HOLD_HOT_WATER:DISAPPEAR_HOT_WATER;            
            break;
            
        case DISAPPEAR_HOT_WATER:
            hotWaterUISecTimer = 0;
            drinkType.w = STOP_SPLASH;
            sendDspnCmd(drinkType,modBus);                  
            splashInput.evtSensor = HOLD_NONE;
            break;
            
        case HOLD_NONE:
            splashInput.evtSensor = (sensorID == 1)? OCCUR_HOT_WATER:HOLD_NONE;            
            break;
           
        default:
            break;
    }
}


#define FIND_CUP (avgADCdata >= NO_CUP_THRESHOLD)
void IRStateMachine(void)
{
    splashInput.evtIR = HOLD_CUP;  
    
    
//    if(NO_CUP_THRESHOLD == 0) {splashInput.evtIR = HOLD_NO_CUP; return;}
//    
//    switch(splashInput.evtIR)  //has cup HOLD_CUP,HOLD_NO_CUP,OCCUR_CUP,DISAPPEAR_CUP
//    {
//        case DISAPPEAR_CUP:
//            splashInput.evtIR = HOLD_NO_CUP; 
//            
//            if(IN_UI(screenID_splash))          showImgSqnIRinSp(LE_FALSE);
//            if(IN_UI(screenID_splash_hotwater)) showImgSqnIRinHot(LE_FALSE);
//            break;
//        case HOLD_NO_CUP : 
//            splashInput.evtIR = (FIND_CUP == false)? HOLD_NO_CUP:OCCUR_CUP;
//            break;
//        case HOLD_CUP:
//            splashInput.evtIR = (FIND_CUP == false)? DISAPPEAR_CUP:HOLD_CUP;            
//            break;
//        case OCCUR_CUP:
//            splashInput.evtIR = HOLD_CUP;          
//            if(IN_UI(screenID_splash))          showImgSqnIRinSp(LE_TRUE);
//            if(IN_UI(screenID_splash_hotwater)) showImgSqnIRinHot(LE_TRUE);
//            break;
//            
//        default:
//            break;
//    }
}

void splashImgSqnRun(void)
{
    bool hasCup = (splashInput.evtIR == HOLD_CUP)|| (splashInput.evtIR == OCCUR_CUP);
    
    if((splashInput.evtButton == HOLD_ICE)||(splashInput.evtSensor == HOLD_ICE))
    {
        if(ImgSqnAmbW.installed == 1)
        {
            if(ImgSqnAmbW.status != SHOWN) {holdImgSqn(&ImgSqnAmbW); return;}
        }
        ImgSqnIce._ImgSqnPlay_(&ImgSqnIce); 
        return;
    }
    if((splashInput.evtButton == OCCUR_ICE)||(splashInput.evtSensor == OCCUR_ICE))
    {
        if(hasCup) holdImgSqn(&ImgSqnIRinSp);
        return;
    }
    if((splashInput.evtButton == DISAPPEAR_ICE)||(splashInput.evtSensor == DISAPPEAR_ICE))
    {
        if(hasCup) holdImgSqn(&ImgSqnIRinSp);
        
        holdImgSqn(&ImgSqnIce);
        return;
    }
    
    if((splashInput.evtButton == HOLD_NONE)&&(splashInput.evtSensor == HOLD_NONE))
    {
        if(ImgSqnAmbW.installed == 1)
            if(ImgSqnAmbW.status != SHOWN) {holdImgSqn(&ImgSqnAmbW);return;}
        if(ImgSqnIce.status != SHOWN)  {holdImgSqn(&ImgSqnIce); return;}    
        if(hasCup) ImgSqnIRinSp._ImgSqnPlay_(&ImgSqnIRinSp);

        return;
    }   
    
    if(0 == ImgSqnAmbW.installed) return;
    
    if((splashInput.evtButton == HOLD_AMB_WATER)||(splashInput.evtSensor == HOLD_AMB_WATER))
    {
        if(ImgSqnIce.status != SHOWN) {holdImgSqn(&ImgSqnIce); return;}
        ImgSqnAmbW._ImgSqnPlay_(&ImgSqnAmbW); return;
    }
    if((splashInput.evtButton == OCCUR_AMB_WATER)||(splashInput.evtSensor == OCCUR_AMB_WATER))
    {
        if(hasCup) holdImgSqn(&ImgSqnIRinSp);
        
        return;
    }
    if((splashInput.evtButton == DISAPPEAR_AMB_WATER)||(splashInput.evtSensor == DISAPPEAR_AMB_WATER))
    {
        if(hasCup) holdImgSqn(&ImgSqnIRinSp);
        
        holdImgSqn(&ImgSqnAmbW);
        return;
    }
    
}

void splashHotWaterImgSqnRun(void)
{
    static int8_t ImgSwitch = 0;
    bool hasCup = (splashInput.evtIR == HOLD_CUP)|| (splashInput.evtIR == OCCUR_CUP);
    
    if((splashInput.evtButton == HOLD_HOT_WATER)||(splashInput.evtSensor == HOLD_HOT_WATER))
    { return;}
    if((splashInput.evtButton == DISAPPEAR_HOT_WATER)||(splashInput.evtSensor == DISAPPEAR_HOT_WATER))
    { return;}
    
    if((splashInput.evtButton == OCCUR_HOT_WATER)||(splashInput.evtSensor == OCCUR_HOT_WATER))
    {
        holdImgSqn(&ImgSqnHotW); 
        if(hasCup) holdImgSqn(&ImgSqnIRinHot); 
        
        return;
    }

    
    if((splashInput.evtButton == HOLD_NONE)&&(splashInput.evtSensor == HOLD_NONE))
    {
        ImgSwitch = (ImgSwitch == 0)?1:0;
        if(ImgSwitch)   ImgSqnHotW._ImgSqnPlay_(&ImgSqnHotW);
        else if(hasCup) ImgSqnIRinHot._ImgSqnPlay_(&ImgSqnIRinHot); 
        return;
    }   
}

void sensorRefreshTimeOut(void)
{
    if(splashInput.evtSensor != HOLD_NONE)
    {
       hotWaterUISecTimer = 0;
       pwm2_3_LEDcnt = 0;
       LCDcnt = 0;       
    }
//    if(splashInput.evtIR != HOLD_NO_CUP)
//    {
//       pwm2_3_LEDcnt = 0;
//       LCDcnt = 0;      
//    }
}

#define LED_TIME 600*2.5
#define LED_TIME_FADE 594*2.5
#define FADE (LED_TIME-LED_TIME_FADE)
#define LCD_TIME 600*2.5  //2.5*600
#define ADVANCE_TIME 600*2.5 //2.5*600
#define SCREEN_TIMEOUT 2.5*(readSetValFromSettingJson("screen_timout",120)) 
void ledFade(void)
{
    static int8_t fadeTimeout = -1;
    if((pwm2_3_LEDcnt < LED_TIME_FADE)||(pwm2_3_LEDcnt == LED_TIME))
        {fadeTimeout = -1; return;}    
    if(fadeTimeout == -1)
        if(LED_TIME_FADE == pwm2_3_LEDcnt) {fadeTimeout = 0;return;}
    
    fadeTimeout = (fadeTimeout >= FADE)?FADE:(fadeTimeout+1);
    int16_t val = 1000*(FADE-fadeTimeout)/FADE;
    PWM_ChannelDutySet(PWM_CHANNEL_2, val); // assign LED PWM max value
   	PWM_ChannelDutySet(PWM_CHANNEL_3, val);
    
}
void secScreenTimeOut(void)
{
    int32_t val;

    switch(legato_getCurrentScreen())
    {
        case screenID_splash:
            if(pwm2_3_LEDcnt != -1) 
                pwm2_3_LEDcnt = (pwm2_3_LEDcnt >= LED_TIME)? LED_TIME:(pwm2_3_LEDcnt+1);//75

            if(pwm2_3_LEDcnt < LED_TIME_FADE)
            {
                PWM_ChannelDutySet(PWM_CHANNEL_2, 1000); // assign LED PWM max value
   		        PWM_ChannelDutySet(PWM_CHANNEL_3, 1000);
            }
            
            if(LCDcnt != -1)       
                LCDcnt = (LCDcnt >= LCD_TIME)?LCD_TIME:(LCDcnt+1);//1500
            
            val = (LCDcnt == LCD_TIME)? 0:readSetValFromSettingJson("display_brightness",80);
            LCDC_SetPWMCompareValue((uint32_t)(7 + val*0.6));
          
            break;
        case screenID_splash_hotwater:
            if(hotWaterUISecTimer == -1) break;
            
            if(hotWaterUISecTimer < 7) hotWaterUISecTimer++; 
            else {hotWaterUISecTimer = -1; HOME}
            
            break;
            
        //advance 
        case screenID_service_advanced:
        case screenID_service_advancedcontact:   
        case screenID_service_advancedoutput:
        case screenID_service_advancedinput: 
        case screenID_service_advanced_Reset_to_Factory:
        case screenID_service_advancedgearmotor: 
        case screenID_service_advancedconfig:
        case screenID_service_advanced_screentimeout:     
        case screenID_service_advanced_sleepmode:
        case screenID_service_keyboard: 
            if(advanceUISecTimer == -1) break;
            
            if(advanceUISecTimer < ADVANCE_TIME) advanceUISecTimer++;
            else                        { advanceUISecTimer = 0; HOME }
            
            break;    

        default: 
            if(otherUISecTimer == -1) break;
            
            if(otherUISecTimer < SCREEN_TIMEOUT)  otherUISecTimer++;
            else                                {otherUISecTimer = 0; HOME}
            
            break;
    }
}

void sensorStateMachine(void)
{
    if(IN_UI(screenID_splash))
    {
        IRStateMachine();
        splashInputButtonPro();
        splashInputSensorPro();
        return;
    }
    if(IN_UI(screenID_splash_hotwater))
    {
        IRStateMachine();
        splashHotWaterInputButtonPro();
        splashHotWaterInputSensorPro();
        return;
    }
    return;
}

void runImgSqn(void)
{
    if(IN_UI(screenID_splash))
    {
        splashImgSqnRun();
        sensorRefreshTimeOut();
        return;
    }
    
    if(IN_UI(screenID_splash_hotwater))
    {
        splashHotWaterImgSqnRun();
        sensorRefreshTimeOut();
        return;        
    }
    return;
}
    


    

#undef sensorID


