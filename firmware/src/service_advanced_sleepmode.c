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

leFixedString* lesleepmode;

void event_service_advanced_sleepmode_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_service_advanced_sleepmode_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}


void displaysleepMode(int32_t val,leFont* font)
{
    char charVer[15];
    int16_t intervalVal =(int16_t) val;
    sprintf(charVer,"%d",intervalVal);
    lesleepmode->fn->setFromCStr(lesleepmode,charVer);
    lesleepmode->fn->setFont(lesleepmode,font);    
    service_advanced_sleepmode_LblSleepModeValue->fn->
        setString(service_advanced_sleepmode_LblSleepModeValue,(leString*)lesleepmode);
}

void sleepModeInterval(uint8_t rightLeft)
{
    int32_t val;
    val = readSetValFromSettingJson("sleep_mode",240);  
    
    if(rightLeft == 0) val = (val < 230)?(val+10):240;//right
    else               val = (val > 10 )?(val-10):0 ;//left

    //writeAO_Wr_H_RegCmd(ICE_DISP_TIME_REGISTER,val,modBus);
 
    displaysleepMode(val,(leFont*)&Roboto_Regular_48);  
    writeAO_Wr_H_RegCmd(SLEEP_TIME_REGISTER,val,modBus);
   
    char* strtemp;
    readWriteValInJson(0,settingRoot,&val,&strtemp,1,1,"sleep_mode"); //write to json     
}

void event_service_advanced_sleepmode_BtnRight_OnReleased(leButtonWidget* btn)
{
    sleepModeInterval(0);
}
void event_service_advanced_sleepmode_BtnLeft_OnReleased(leButtonWidget* btn)
{
    sleepModeInterval(1);
}

void service_advanced_sleepmode_OnShow(void) // called when this screen is show
{
    newLblLeStr(&lesleepmode,service_advanced_sleepmode_LblSleepModeValue,15);
    int32_t val = readSetValFromSettingJson("sleep_mode",240); 
    printf("sleep mode val = %d\n",val);
    displaysleepMode(val,(leFont*)&Roboto_Regular_48);  
}
void service_advanced_sleepmode_OnHide(void) // called when this screen is hidden
{
    saveSettingJsonToDev(&sst,SETTING_FILE,settingRoot);
    delLeStr(lesleepmode);

}
