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

leFixedString* leDisplay;
leFixedString* leUsbStatus;

#define SET_LBL_STR(lbl,str) File_##lbl ->fn->setString(File_##lbl,(leString*)(str))

void display(char * displayStr)
{
    leDisplay->fn->setFromCStr(leDisplay,displayStr);
    SET_LBL_STR(lblDisplay,leDisplay);    
}
void FileupdateUsbStatus(void)
{
    if(usb.drvDetected == false) SET_LBL_STR(lblUsbStatus,&string_usboff);
    else                         SET_LBL_STR(lblUsbStatus,&string_usbon);
}

void File_OnShow(void)
{
    char charScannerInput[100] = {"\0"};
    newLblLeStr(&leDisplay,File_lblDisplay,100);
    newLblLeStr(&leUsbStatus,File_lblUsbStatus,100);    
    leDisplay->fn->setFromCStr(leDisplay,charScannerInput);
    SET_LBL_STR(lblDisplay,leDisplay);
    
    FileupdateUsbStatus();
}
void File_OnUpdate(void)
{
    FileupdateUsbStatus();
}

void File_OnHide(void)
{
    delLeStr(leDisplay);
    delLeStr(leUsbStatus);
}


void event_File_BtnUsb2Sst_cfg_OnReleased(leButtonWidget* btn)
{
    if(false == copyFile(&sst, &usb, CONFIG_FILE))
        display("copy config file from usb to sst failed");
    else
        display("copy config file from usb to sst successfully");
}
void event_File_BtnUsb2Sst_Setting_OnReleased(leButtonWidget* btn)
{
    if(false == copyFile(&sst, &usb, SETTING_FILE))
        display("copy setting file from usb to sst failed");
    else
        display("copy setting file from usb to sst successfully");
}
void event_File_BtnSst2Usb_cfg_OnReleased(leButtonWidget* btn)
{
    if(false == copyFile(&usb, &sst, CONFIG_FILE))
        display("copy config file from sst to usb failed");
    else
        display("copy config file from sst to usb successfully");
}

void event_File_BtnSst2Usb_setting_OnReleased(leButtonWidget* btn)
{
    if(false == copyFile(&usb, &sst, SETTING_FILE))
        display("copy setting file from sst to usb failed");
    else
        display("copy setting file from sst to usb successfully");
}

void event_File_BtnExit_OnReleased(leButtonWidget* btn)
{
    if(usb.drvDetected == true) display("Unplug USB drive before quit!");
    else {BACK};
}
void event_File_BtnHome_OnReleased(leButtonWidget* btn)
{
    if(usb.drvDetected == true) display("Unplug USB drive before quit!");
    else {HOME};
}

#undef SET_LBL_STR