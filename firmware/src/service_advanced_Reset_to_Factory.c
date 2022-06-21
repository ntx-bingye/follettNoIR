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
#include "initModbusReg.h"

void resetFact(void)
{
    cJSON_Delete(root);
    cJSON_Delete(settingRoot);
    APPinitWithJson();
    if(memJsonFile == NULL) {printf("memJsonFile null\n");jsonParse(default_json_data,&root);}
    else                    jsonParse(memJsonFile,&root);  
    
    {free(memJsonFile);memJsonFile = NULL;}
    setSettingFileToDefault();
    settingJsonParse();
    copyConfigJsonToSettingJson();
    {free(memSettingFile); memSettingFile = NULL;}
    sendInitToMachine();
}

void event_service_advanced_Reset_to_Factory_Button_Yes_OnReleased(leButtonWidget* btn)
{
    resetFact();
    BACK
}
void event_service_advanced_Reset_to_Factory_Button_No_OnReleased(leButtonWidget* btn)
{
    BACK
}


void event_service_advanced_Reset_to_Factory_Button_Exit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_service_advanced_Reset_to_Factory_Button_Home_OnReleased(leButtonWidget* btn)
{
    HOME
}





void service_advanced_Reset_to_Factory_OnShow(void)
{
    
}

void service_advanced_Reset_to_Factory_OnHide(void)
{
    
}