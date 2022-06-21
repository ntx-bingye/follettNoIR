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
#include "service_advance_cfg.h"
#include "app_json.h"

leFixedString* leScannerInput;

#define SET_LBL_STR(lbl,str) service_advancedconfig_##lbl ->fn->setString(service_advancedconfig_##lbl,(leString*)(str))

void displayInputBox(char * displayStr)
{
    char charScannerInput[30];
    sprintf(charScannerInput,"%s",displayStr);
    leScannerInput->fn->setFromCStr(leScannerInput,charScannerInput);
    SET_LBL_STR(LblInputBox,leScannerInput);    
}
void updateUsbStatus(void)
{
    if(usb.drvDetected == false) SET_LBL_STR(LblFlashDetectedAnswer,&string_SERVICE7_CONFIG_No);
    else                         SET_LBL_STR(LblFlashDetectedAnswer,&string_SERVICE7_CONFIG_Yes);
}

void event_service_advancedconfig_ButtonExit_OnReleased(leButtonWidget* btn)
{
    if(usb.drvDetected == true) displayInputBox("Unplug USB drive before quit!");
    else {BACK};
}
void event_service_advancedconfig_ButtonClear_OnReleased(leButtonWidget* btn)
{
    displayInputBox(" ");
}

bool readUSBtoSST(void)
{
    if((false == readJsonFromDrvToMem(&usb,CONFIG_FILE, &memJsonFile))||
      ((root = cJSON_Parse(memJsonFile)),(NULL == root)))
    {
        if(false == readJsonFromDrvToMem(&sst,CONFIG_FILE, &memJsonFile))
        {
            strcpy(memJsonFile, default_json_data);
            root = cJSON_Parse(memJsonFile);
        }
        return false;
    }
    writeJsonFromMemtoDrv(&sst,CONFIG_FILE, memJsonFile);
    return true;
}

void event_service_advancedconfig_ButtonAccept_OnReleased(leButtonWidget* btn)
{
    char charScannerInput[30] = "Flash drive not detected";
    if(true == usb.drvDetected) 
    {
        if(true == readUSBtoSST())
            strcpy(charScannerInput,"Read config file successfully");
        else
            strcpy(charScannerInput,"Failed to read config file");
    }
    displayInputBox(charScannerInput);
}

void event_service_advancedconfig_ButtonHome_OnReleased(leButtonWidget* btn)
{
    if(usb.drvDetected == true) displayInputBox("Unplug USB drive before quit!");
    else {HOME};
}

void event_service_advancedconfig_BtnHidden_OnReleased(leButtonWidget* btn)
{
    PUSH_SHOW(screenID_File)
}

void service_advancedconfig_OnShow(void)
{
    char charScannerInput[30] = {"\0"};
    newLblLeStr(&leScannerInput,service_advancedconfig_LblInputBox,30);
    leScannerInput->fn->setFromCStr(leScannerInput,charScannerInput);
    SET_LBL_STR(LblInputBox,leScannerInput);
    updateUsbStatus();
}

void service_advancedconfig_OnHide(void)
{
    delLeStr(leScannerInput);
}

void service_advancedconfig_OnUpdate(void)
{
    static bool PreUsbStatus = false;
    if(usb.drvDetected != PreUsbStatus)
    {
        PreUsbStatus = usb.drvDetected;
        updateUsbStatus();
    }
}

#undef SET_LBL_STR