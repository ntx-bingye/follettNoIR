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
#include "screen_utility.h"
#include "screen_performance_data.h"
#include "screenStack.h"
#include "screen_utility.h"
#include "leStringPrint.h"

leFixedString leLineVolt;
leFixedString leLineFreq;    
leFixedString leGlassTemp;
leFixedString leWat;

void newPerDataLeStr(void)
{
    newLeStr(&leLineVolt,(leFont*)&RobotoReg20,40);
    newLeStr(&leLineFreq,(leFont*)&RobotoReg20,40);
    newLeStr(&leGlassTemp,(leFont*)&RobotoReg20,40);    
    newLeStr(&leWat,(leFont*)&RobotoReg20,40);
}

void delPerDataLeStr(void)
{
    delLeStr(&leLineVolt);
    delLeStr(&leLineFreq);
    delLeStr(&leGlassTemp);
    delLeStr(&leWat);    
}

void PerformanceData_OnShow(void)  
{ 
    newPerDataLeStr();
    updatePerformanceData();
}

void PerformanceData_OnHide(void)
{
    delPerDataLeStr();
}


void updatePerformanceData(void)
{
    char charLineVolt[LE_STR_SIZE];
    char charLineFreq[LE_STR_SIZE];
    char charGlassTemp[LE_STR_SIZE];
    char charWat[LE_STR_SIZE];
    
    uint16_t avgVoltage0 = gCurComVar[0].gettings->data.cmdAckPayload.settings.avgVoltage;
    uint16_t avgVoltage1 = gCurComVar[1].gettings->data.cmdAckPayload.settings.avgVoltage;
    
    uint16_t voltagefreq0 = gCurComVar[0].gettings->data.cmdAckPayload.settings.voltagefreq;
    uint16_t voltagefreq1 = gCurComVar[1].gettings->data.cmdAckPayload.settings.voltagefreq;
    
    uint16_t temp0 = gCurComVar[0].gettings->data.cmdAckPayload.settings.temp;
    uint16_t temp1 = gCurComVar[1].gettings->data.cmdAckPayload.settings.temp;
    
    uint16_t avgWattage0 = gCurComVar[0].gettings->data.cmdAckPayload.settings.avgWattage;
    uint16_t avgWattage1 = gCurComVar[1].gettings->data.cmdAckPayload.settings.avgWattage;
    
    if(singleOrDual == SINGLE_MODE)
    {
        PerformanceData_LabelDualPerData->fn->setVisible(PerformanceData_LabelDualPerData, LE_FALSE);
        sprintf(charLineVolt,"Line Voltage:        %dV",avgVoltage0);
        sprintf(charLineFreq,"Line Frequency:    %dHz",voltagefreq0);
        
        if(gCurVar0.tempUnits == 0)
            sprintf(charGlassTemp,"Top Glass Temp:  %d°F",temp0);
        else
            sprintf(charGlassTemp,"Top Glass Temp:  %d°C",temperatureFtoC(temp0));
        
        sprintf(charWat,"Wattage:               %dW",avgWattage0);        
    }
    else
    {
        PerformanceData_LabelDualPerData->fn->setVisible(PerformanceData_LabelDualPerData, LE_TRUE);
        
        sprintf(charLineVolt,"Line Voltage:        %dV       %dV",avgVoltage0,avgVoltage1);
        sprintf(charLineFreq,"Line Frequency:    %dHz       %dHz",voltagefreq0,voltagefreq1);
        
        if(gCurVar0.tempUnits == 0)
            sprintf(charGlassTemp,"Top Glass Temp:  %d°F       %d°F",temp0,temp1);
        else
            sprintf(charGlassTemp,"Top Glass Temp:  %d°C       %d°C",temperatureFtoC(temp0),temperatureFtoC(temp1));
        
        sprintf(charWat,"Wattage:                %dW        %dW",avgWattage0,avgWattage1);        
         
    }
    
    leLineVolt.fn->setFromCStr(&(leLineVolt),charLineVolt);
    leLineFreq.fn->setFromCStr(&(leLineFreq),charLineFreq);
    leGlassTemp.fn->setFromCStr(&(leGlassTemp),charGlassTemp);
    leWat.fn->setFromCStr(&(leWat),charWat);
    
    printf("%s \n",charLineVolt);
    printf("%s \n",charLineFreq);
    printf("%s \n",charGlassTemp);    
    printf("%s \n",charWat);
    
#define SET_LESTRING_TO_LABEL_PER(labelVar,lLeStrVar) labelVar->fn->setString(labelVar,(leString*)&(lLeStrVar))
    SET_LESTRING_TO_LABEL_PER(PerformanceData_LabelVoltageMeasured,leLineVolt);
    SET_LESTRING_TO_LABEL_PER(PerformanceData_LabelFrequencyZeroCross,leLineFreq);
    SET_LESTRING_TO_LABEL_PER(PerformanceData_LabelTopGlassTemperatureMeasured,leGlassTemp);
    SET_LESTRING_TO_LABEL_PER(PerformanceData_LabelWattageCalculated,leWat);
#undef SET_LESTRING_TO_LABEL_PER    
}


void event_PerformanceData_ButtonBack_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(popScreen());
}






