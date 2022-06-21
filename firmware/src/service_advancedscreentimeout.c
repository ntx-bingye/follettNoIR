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
#include "modbus.h"
#include "app_json.h"

leFixedString* leScreenTimeOut;

void event_service_advanced_screentimeout_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_service_advanced_screentimeout_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}


void displayScreenTimeOut(int32_t val,leFont* font)
{
    char charVer[15];
    int16_t intervalVal =(int16_t) val;
    sprintf(charVer,"%d",intervalVal);
    leScreenTimeOut->fn->setFromCStr(leScreenTimeOut,charVer);
    leScreenTimeOut->fn->setFont(leScreenTimeOut,font);    
    service_advanced_screentimeout_LblScreenTimeoutValue->fn->
        setString(service_advanced_screentimeout_LblScreenTimeoutValue,(leString*)leScreenTimeOut);
}

void ScreenTimeOutInterval(uint8_t rightLeft)
{
    int32_t val;
    val = readSetValFromSettingJson("screen_timout",300);  
    
    if(rightLeft == 0) val = (val < 290)?(val+10):300;//right
    else               val = (val > 40 )?(val-10):30 ;//left

    //writeAO_Wr_H_RegCmd(ICE_DISP_TIME_REGISTER,val,modBus);
 
    displayScreenTimeOut(val,(leFont*)&Roboto_Regular_48);  
   
    char* strtemp;
    readWriteValInJson(0,settingRoot,&val,&strtemp,1,1,"screen_timout"); //write to json     
}

void event_service_advanced_screentimeout_BtnRight_OnReleased(leButtonWidget* btn)
{
    ScreenTimeOutInterval(0);
}
void event_service_advanced_screentimeout_BtnLeft_OnReleased(leButtonWidget* btn)
{
    ScreenTimeOutInterval(1);
}

void service_advanced_screentimeout_OnShow(void) // called when this screen is show
{
    newLblLeStr(&leScreenTimeOut,service_advanced_screentimeout_LblScreenTimeoutValue,15);
    int32_t val = readSetValFromSettingJson("screen_timout",120);  
    //printf("timeout %d\n",val);
    displayScreenTimeOut(val,(leFont*)&Roboto_Regular_48);  
}
void service_advanced_screentimeout_OnHide(void) // called when this screen is hidde
{
    if(saveSettingJsonToDev(&sst,SETTING_FILE,settingRoot)) printf("save ok\n");
    delLeStr(leScreenTimeOut);
    
}
