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

leFixedString* leWakeOnSleep;


void event_service_advancedwakeonDispense_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_service_advancedwakeonDispense_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}

void displayWakeOnSleep(int32_t val,leFont* font)
{
    char charVer[15];
    int16_t intervalVal =(int16_t) val;
    sprintf(charVer,"%d",intervalVal);
    leWakeOnSleep->fn->setFromCStr(leWakeOnSleep,charVer);
    leWakeOnSleep->fn->setFont(leWakeOnSleep,font);    
    service_advancedwakeonDispense_LblWakeOnSleepValue->fn->
        setString(service_advancedwakeonDispense_LblWakeOnSleepValue,(leString*)leWakeOnSleep);
}

void wakeOnDispenseInterval(uint8_t rightLeft)
{
    int32_t val;
    val = readSetValFromSettingJson("wake_on_dispense",35);  
    
    if(rightLeft == 0) val = (val < 115)?(val+5):120;//right
    else               val = (val > 5 )?(val-5):0 ;//left

    writeAO_Wr_H_RegCmd(ICE_DISP_TIME_REGISTER,val,modBus);
 
    displayWakeOnSleep(val,(leFont*)&Roboto_Regular_48);  
   
    char* strtemp;
    readWriteValInJson(0,settingRoot,&val,&strtemp,1,1,"wake_on_dispense"); //write to json     
}

void event_service_advancedwakeonDispense_BtnRight_OnReleased(leButtonWidget* btn)
{
    wakeOnDispenseInterval(0);
}
void event_service_advancedwakeonDispense_BtnLeft_OnReleased(leButtonWidget* btn)
{
    wakeOnDispenseInterval(1);
}




void service_advancedwakeonDispense_OnShow(void)
{
    newLblLeStr(&leWakeOnSleep,service_advancedwakeonDispense_LblWakeOnSleepValue,10);
    int32_t val = readSetValFromSettingJson("wake_on_dispense",35);  
    displayWakeOnSleep(val,(leFont*)&Roboto_Regular_48);  
}

void service_advancedwakeonDispense_OnHide(void)
{
    saveSettingJsonToDev(&sst,SETTING_FILE,settingRoot);
    delLeStr(leWakeOnSleep);
}
