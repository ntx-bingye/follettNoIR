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


void event_selfhelp_splash_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_selfhelp_splash_Btn0_OnReleased(leButtonWidget* btn)
{
    selfhelp_splash_BtnNo = 0;
    PUSH_SHOW(screenID_selfhelp_display);
    return;
}
void event_selfhelp_splash_Btn1_OnReleased(leButtonWidget* btn)
{
    selfhelp_splash_BtnNo = 1;
    PUSH_SHOW(screenID_selfhelp_display);
    return;    
}
void event_selfhelp_splash_Btn2_OnReleased(leButtonWidget* btn)
{
    selfhelp_splash_BtnNo = 2;
    PUSH_SHOW(screenID_selfhelp_display);
    return; 
}
void event_selfhelp_splash_Btn3_OnReleased(leButtonWidget* btn)
{
    selfhelp_splash_BtnNo = 3;
    PUSH_SHOW(screenID_selfhelp_display);
    return;  
}
void event_selfhelp_splash_BtnExit_OnReleased(leButtonWidget* btn)
{
    selfhelp_pageNum = 0;
    BACK
}

void selfhelp_splash_OnShow(void)
{
    #define B(item) &string_SELFHELP##item
    leString* leStr[4][4] = {
    {B(2_NoIce),B(2_OffLooking),B(2_SoftIce),B(2_SoftIce)},
    {B(1_NoWater),B(1_LowWaterFlow),B(1_WarmWater),B(1_OffLooking)},
    {B(4_NoWater),B(4_NoHotWater),B(4_NoHotWater),B(4_NoHotWater)},
    {B(3_NoSparklingWater),B(3_WaterNotChilled),B(3_WaterNotCarbonated),B(3_WaterNotCarbonated)}
    };
  
   
    #define  SET_STR(page,chn) selfhelp_splash_Btn##chn ->fn->setString(selfhelp_splash_Btn##chn,leStr[page][chn]);

    #define BTN_ON(chn,le_t_f) {\
        selfhelp_splash_Btn##chn ->fn->setEnabled(selfhelp_splash_Btn##chn,le_t_f);\
        selfhelp_splash_Btn##chn ->fn->setVisible(selfhelp_splash_Btn##chn,le_t_f);\
        }

    SET_STR(selfhelp_BtnNum,0)
    SET_STR(selfhelp_BtnNum,1)
    SET_STR(selfhelp_BtnNum,2)
    SET_STR(selfhelp_BtnNum,3)

               
    leString* titlStr[4] = {B(2_IceTroubleshooting),B(1_WaterTroubleshooting),
                            B(4_HotWaterTroubleshooting),B(3_SparklingTroubleshooting)};
    selfhelp_splash_LblTitle ->fn->setString(selfhelp_splash_LblTitle,titlStr[selfhelp_BtnNum]);
    
    BTN_ON(3,LE_TRUE) 
    BTN_ON(2,LE_TRUE)
    switch(selfhelp_BtnNum)
    {
        case 0:
            BTN_ON(3,LE_FALSE)
            break;
        case 1:

            break;
        case 2:
            BTN_ON(3,LE_FALSE) 
            BTN_ON(2,LE_FALSE)
            break;
        case 3:
            BTN_ON(3,LE_FALSE)
            break;            
        default:
            break;
            
    }

    #undef SET_STR
    #undef BTN_ON
    #undef B
}

void selfhelp_splash_OnHide(void)
{
    
}