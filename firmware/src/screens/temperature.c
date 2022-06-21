#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "gfx/legato/generated/le_gen_init.h"
#include "system/time/sys_time.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "bsp/bsp.h"
#include "app.h"
#include "temperature.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screen_utility.h"
#include "eggtimer.h"
#include "screenStack.h"
#include "screen_temp_dual.h"

extern uint16_t EggTimerData;
extern bool frontWarmerOn;


void setLockTempScreen(bool LockStatus)
{
    if(LockStatus == true)
    {
        TemperatureModeSingle_ButtonLockScreen->fn->setReleasedImage(TemperatureModeSingle_ButtonLockScreen, (leImage*)&ICON_lockClosed);
        TemperatureModeSingle_ButtonSettings->fn->setEnabled(TemperatureModeSingle_ButtonSettings, LE_FALSE);
        TemperatureModeSingle_ButtonBack->fn->setEnabled(TemperatureModeSingle_ButtonBack, LE_FALSE);
        TemperatureModeSingle_ButtonTimer->fn->setEnabled(TemperatureModeSingle_ButtonTimer, LE_FALSE);
        TemperatureModeSingle_TempSlider->fn->setEnabled(TemperatureModeSingle_TempSlider, LE_FALSE);
    }
    else
    {
        TemperatureModeSingle_ButtonLockScreen->fn->setReleasedImage(TemperatureModeSingle_ButtonLockScreen, (leImage*)&ICON_lockOpen);
        TemperatureModeSingle_ButtonSettings->fn->setEnabled(TemperatureModeSingle_ButtonSettings, LE_TRUE);
        TemperatureModeSingle_ButtonBack->fn->setEnabled(TemperatureModeSingle_ButtonBack, LE_TRUE);
        TemperatureModeSingle_ButtonTimer->fn->setEnabled(TemperatureModeSingle_ButtonTimer, LE_TRUE);
        TemperatureModeSingle_TempSlider->fn->setEnabled(TemperatureModeSingle_TempSlider, LE_TRUE);        
    }
}

void updateSingleTempSlider(void)
{
    uint16_t sliderPercent;
    uint16_t setTempValue;
    setTempValue = gCurComVar[0].settings->data.cmdAckPayload.settings.temp;
    if(setTempValue < 84) setTempValue = 84;
    
    sliderPercent = round((setTempValue-84)/3.4);

    if(singleOrDual == SINGLE_MODE)
        TemperatureModeSingle_TempSlider->fn->setValue(TemperatureModeSingle_TempSlider, 100-sliderPercent); 
}
void updateSingleTempLabelStr(void)
{
    char cSetBuff[LE_STR_SIZE];
    char cGetBuff[LE_STR_SIZE];
    uint16_t setTempValue;
    uint16_t getTempValue;
    setTempValue = gCurComVar[0].settings->data.cmdAckPayload.settings.temp;
    getTempValue = gCurComVar[0].gettings->data.cmdAckPayload.settings.temp;
    if(gCurVar0.tempUnits == 0)
    {
        sprintf(cGetBuff,"%dF", getTempValue);
        sprintf(cSetBuff,"Set: %dF", setTempValue);
    }
    else
    {
        // TODO Convert to C
        sprintf(cGetBuff,"%dC", (temperatureFtoC(getTempValue)));
        sprintf(cSetBuff,"Set: %dC", (temperatureFtoC(setTempValue)));
    }
    
    gLeStrVar.leGetTemp0.leStr.fn->setFromCStr(&(gLeStrVar.leGetTemp0.leStr), cGetBuff);
    gLeStrVar.leSetTemp0.leStr.fn->setFromCStr(&(gLeStrVar.leSetTemp0.leStr), cSetBuff);  

    if(legato_getCurrentScreen() == screenID_TemperatureModeSingle)
    {
        TemperatureModeSingle_LabelTemperatureSet->fn->setString(TemperatureModeSingle_LabelTemperatureSet, (leString*)&(gLeStrVar.leSetTemp0.leStr)); 
        TemperatureModeSingle_LabelTemperatureCurrent->fn->setString(TemperatureModeSingle_LabelTemperatureCurrent, (leString*)&(gLeStrVar.leGetTemp0.leStr)); 
    }
   
}
void tempSingleUpdate(void)
{
    updateSingleTempSlider();
    updateSingleTempLabelStr();
}





void event_TemperatureModeSingle_ButtonTimer_OnReleased(leButtonWidget* btn)
{    
    if (temp0TimerVar.state == EGG_IDLE )
    {
        timerInitChn = 0;
        pushScreen(legato_getCurrentScreen());
        legato_showScreen(screenID_TimerInit);
    }
    else
    {    
        temp0TimerVar.state = EGG_IDLE;
        //legato_showScreen(getCurScreen()); //refresh UI
    }    
}



void DiffMsCalSingleTemp(lockVar * lockVarP)
{
    lockVarP->releaseStamp = count256;
    if(lockVarP->releaseStamp >= lockVarP->pressStamp) 
        lockVarP->DiffMs = lockVarP->releaseStamp - lockVarP->pressStamp;
    else
        lockVarP->DiffMs = 256 - lockVarP->pressStamp + lockVarP->releaseStamp;
}
void event_TemperatureModeSingle_ButtonLockScreen_OnPressed(leButtonWidget* btn)
{
    gLockVar.pressStamp = count256;
}
void event_TemperatureModeSingle_ButtonLockScreen_OnReleased(leButtonWidget* btn)
{
    DiffMsCalSingleTemp(&gLockVar);
    
    if(gLockVar.DiffMs >=20) gCurVar0.tempLockFlag = InvertBoolVar(gCurVar0.tempLockFlag);
  
    setLockTempScreen(gCurVar0.tempLockFlag );
}


void event_TemperatureModeSingle_ButtonSettings_OnReleased(leButtonWidget* btn)
{
    pushScreen(legato_getCurrentScreen());
    legato_showScreen(screenID_Settings);  
}

void event_TemperatureModeSingle_ButtonBack_OnReleased(leButtonWidget* btn)
{
    // When the user goes back to the model select screen, set the temp to 84
    //gCurVar0.setTempValue = 84;
    gCurComVar[0].settings->data.cmdAckPayload.settings.temp = 84;

    
    legato_showScreen(popScreen());
}

void event_TemperatureModeSingle_TempSlider_OnValueChanged(leCircularSliderWidget* sld, int32_t val)
{
   gCurComVar[0].settings->data.cmdAckPayload.settings.temp = (100-val)*3.4 + 84;
}

void TemperatureModeSingle_OnShow()
{
    setLockTempScreen(gCurVar0.tempLockFlag);
    TemperatureModeSingle_TempSlider->fn->setStartAngle(TemperatureModeSingle_TempSlider, 90);
}
