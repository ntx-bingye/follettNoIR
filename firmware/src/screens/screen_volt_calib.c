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
#include "app.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screen_volt_calib.h"
#include "screenStack.h"

static char cActualVoltageBuffer[20];
static leChar legatocActualVoltageBuffer[20] = {0};
static leFixedString ActualVoltageString;

static char cMeasuredLineVoltageBuffer[20];
static leChar legatoMeasuredLineVoltageBuffer[20] = {0};
static leFixedString MeasuredlineVoltageString;

static char cSetOffsetVoltageValueBuffer[20];
static leChar legatoSetOffsetVoltageValueBuffer[20] = {0};
static leFixedString SetOffsetVoltageValueString;

void ServiceAgentSettingsVoltageCalibration_OnShow(void)
{
    //to do ActialVoltageValue
    leFixedString_Constructor(&ActualVoltageString, legatocActualVoltageBuffer, 20);
    ActualVoltageString.fn->setFont(&ActualVoltageString, leStringTable_GetStringFont(leGetState()->stringTable,stringID_LineVoltage240, 0));    
  
    leFixedString_Constructor(&MeasuredlineVoltageString, legatoMeasuredLineVoltageBuffer, 20);
    MeasuredlineVoltageString.fn->setFont(&MeasuredlineVoltageString, leStringTable_GetStringFont(leGetState()->stringTable,stringID_LineVoltage246, 0));    
 
    leFixedString_Constructor(&SetOffsetVoltageValueString, legatoSetOffsetVoltageValueBuffer, 20);
    SetOffsetVoltageValueString.fn->setFont(&SetOffsetVoltageValueString, leStringTable_GetStringFont(leGetState()->stringTable,stringID_SetOffset, 0));    
     
    
    sprintf(cActualVoltageBuffer,"%dV", gCurVar0.ActualVoltage);
    sprintf(cMeasuredLineVoltageBuffer,"%dV", gCurVar0.avgVoltage);
    sprintf(cSetOffsetVoltageValueBuffer,"%dV", gCurVar0.TxOffsetVoltage);

   
    ActualVoltageString.fn->setFromCStr(&ActualVoltageString, cActualVoltageBuffer);
    ServiceAgentSettingsVoltageCalibration_ActialVoltageValue->fn->setString(ServiceAgentSettingsVoltageCalibration_ActialVoltageValue, (leString*)&ActualVoltageString); 
        
    MeasuredlineVoltageString.fn->setFromCStr(&MeasuredlineVoltageString, cMeasuredLineVoltageBuffer);
    ServiceAgentSettingsVoltageCalibration_LineVoltageValue->fn->setString(ServiceAgentSettingsVoltageCalibration_LineVoltageValue, (leString*)&MeasuredlineVoltageString); 

    SetOffsetVoltageValueString.fn->setFromCStr(&SetOffsetVoltageValueString, cSetOffsetVoltageValueBuffer);
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue->fn->setString(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue, (leString*)&SetOffsetVoltageValueString); 
 
}


void updateLineVoltageCalibration(void)
{
    unsigned int needToUpdatePage = 0;
    if(gPreVar.avgVoltage != gCurVar0.avgVoltage)
    {
        needToUpdatePage = 1;
        gPreVar.avgVoltage = gCurVar0.avgVoltage;
    };
    
    if(gPreVar.ActualVoltage != gCurVar0.ActualVoltage)
    {
        needToUpdatePage = 1;
        gPreVar.ActualVoltage = gCurVar0.ActualVoltage;
    };
    if(gPreVar.TxOffsetVoltage != gCurVar0.TxOffsetVoltage)
    {
        needToUpdatePage = 1;
        gPreVar.TxOffsetVoltage = gCurVar0.TxOffsetVoltage;
    };    
    
    if(needToUpdatePage == 1)
    {
         legato_showScreen(screenID_ServiceAgentSettingsVoltageCalibration);
    }
 
}


void event_ServiceAgentSettingsVoltageCalibration_ButtonExit_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(popScreen());
}

void event_ServiceAgentSettingsVoltageCalibration_ButtonPlus_OnPressed(leButtonWidget* btn)
{
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonMinus, &BackgroundScheme);
    if(gCurVar0.TxOffsetVoltage <15)
    {
        //ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setPressedImage(ServiceAgentSettingsVoltageCalibration_ButtonPlus, (leImage*)&ICON_plusActive);
        //ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setReleasedImage(ServiceAgentSettingsVoltageCalibration_ButtonPlus, (leImage*)&ICON_plusInactive);
        ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonPlus, &ForegroundScheme);
    }
    else
    {
        //ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setPressedImage(ServiceAgentSettingsVoltageCalibration_ButtonPlus, (leImage*)&ICON_plusActive);
        //ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setReleasedImage(ServiceAgentSettingsVoltageCalibration_ButtonPlus, (leImage*)&ICON_plusActive);
        ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonPlus, &disableButton);
    }
}

void event_ServiceAgentSettingsVoltageCalibration_ButtonPlus_OnReleased(leButtonWidget* btn)
{
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonMinus, &BackgroundScheme);
    if (gCurVar0.TxOffsetVoltage <15)
    {
        gCurVar0.TxOffsetVoltage++;
        gCurVar0.ActualVoltage++;
        ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonPlus, &BackgroundScheme);
    }
    else
    {
        gCurVar0.TxOffsetVoltage = 15;
        ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonPlus, &disableButton);
    }
}
void event_ServiceAgentSettingsVoltageCalibration_ButtonMinus_OnPressed(leButtonWidget* btn)
{
    
     ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonPlus, &BackgroundScheme);
     if(gCurVar0.TxOffsetVoltage >(-15))
    {
        ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonMinus, &ForegroundScheme);
    }
    else
    {
        ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonMinus, &disableButton);
    }
}
void event_ServiceAgentSettingsVoltageCalibration_ButtonMinus_OnReleased(leButtonWidget* btn)
{
    ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonPlus, &BackgroundScheme);
    if (gCurVar0.TxOffsetVoltage >(-15))
    {
        gCurVar0.TxOffsetVoltage--;
        gCurVar0.ActualVoltage--;
        ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonMinus, &BackgroundScheme);
    }
    else
    {
        gCurVar0.TxOffsetVoltage = (-15);
        ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonMinus, &disableButton);
    }
}


