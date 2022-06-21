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
#include "screenStack.h"
#include "eggtimer.h"
#include "screen_utility.h"
#include "screen_power_dual.h"


////////////big button for activating channel//////////////

void activatePowerHOB(uint8_t chn)
{
    if(chn == 0)
    {
        DualPowerMode_PanelHOB1Back->fn->setScheme(DualPowerMode_PanelHOB1Back, &ForegroundScheme);
        DualPowerMode_PanelHOB2Back->fn->setScheme(DualPowerMode_PanelHOB2Back, &BackgroundScheme);
    }
    else
    {
        DualPowerMode_PanelHOB1Back->fn->setScheme(DualPowerMode_PanelHOB1Back, &BackgroundScheme);
        DualPowerMode_PanelHOB2Back->fn->setScheme(DualPowerMode_PanelHOB2Back, &ForegroundScheme);
    }
}
void event_DualPowerMode_ButtonBigHOB1_OnReleased(leButtonWidget* btn)
{
    activatePowerHOB_chn = 0;
    activatePowerHOB(activatePowerHOB_chn);   
}
void event_DualPowerMode_ButtonBigHOB2_OnReleased(leButtonWidget* btn)
{
    activatePowerHOB_chn = 1;
    activatePowerHOB(activatePowerHOB_chn);  
}


//////////////////lock button////////////////////////

//////////////////////lock/////////////////////
void setLockPowerDualScreen(void)
{
    if((legato_getCurrentScreen() == screenID_PowerModeSingle)&&(singleOrDual == SINGLE_MODE))
    {
        if(gCurVar0.powerLockFlag == true)
        {
            PowerModeSingle_ButtonLockScreen->fn->setReleasedImage(PowerModeSingle_ButtonLockScreen, (leImage*)&ICON_lockClosed);
            PowerModeSingle_ButtonSettings->fn->setEnabled(PowerModeSingle_ButtonSettings, LE_FALSE);
            PowerModeSingle_ButtonBack->fn->setEnabled(PowerModeSingle_ButtonBack, LE_FALSE);
            PowerModeSingle_ButtonTimer->fn->setEnabled(PowerModeSingle_ButtonTimer, LE_FALSE);
            PowerModeSingle_PowerSlider->fn->setEnabled(PowerModeSingle_PowerSlider, LE_FALSE);
        }
        else
        {
            PowerModeSingle_ButtonLockScreen->fn->setReleasedImage(PowerModeSingle_ButtonLockScreen, (leImage*)&ICON_lockOpen);
            PowerModeSingle_ButtonSettings->fn->setEnabled(PowerModeSingle_ButtonSettings, LE_TRUE);
            PowerModeSingle_ButtonBack->fn->setEnabled(PowerModeSingle_ButtonBack, LE_TRUE);
            PowerModeSingle_ButtonTimer->fn->setEnabled(PowerModeSingle_ButtonTimer, LE_TRUE);
            PowerModeSingle_PowerSlider->fn->setEnabled(PowerModeSingle_PowerSlider, LE_TRUE);        
        }
    }
    else if((legato_getCurrentScreen() == screenID_DualPowerMode)&&(singleOrDual == DUAL_MODE))
    {
        if(gCurVar0.powerLockFlag == true)
        {
            DualPowerMode_ButtonHOB1Lock->fn->setReleasedImage(DualPowerMode_ButtonHOB1Lock, (leImage*)&ICON_lockClosed);
            DualPowerMode_ButtonHOB1Clock->fn->setEnabled(DualPowerMode_ButtonHOB1Clock, LE_FALSE);
            DualPowerMode_SliderHOB1->fn->setEnabled(DualPowerMode_SliderHOB1, LE_FALSE);
        }
        else
        {
            DualPowerMode_ButtonHOB1Lock->fn->setReleasedImage(DualPowerMode_ButtonHOB1Lock, (leImage*)&ICON_lockOpen);
            DualPowerMode_ButtonHOB1Clock->fn->setEnabled(DualPowerMode_ButtonHOB1Clock, LE_TRUE);
            DualPowerMode_SliderHOB1->fn->setEnabled(DualPowerMode_SliderHOB1, LE_TRUE);            
        }
        
        if(gCurVar1.powerLockFlag == true)
        {
            DualPowerMode_ButtonHOB2Lock->fn->setReleasedImage(DualPowerMode_ButtonHOB2Lock, (leImage*)&ICON_lockClosed);
            DualPowerMode_ButtonHOB2Clock->fn->setEnabled(DualPowerMode_ButtonHOB2Clock, LE_FALSE);
            DualPowerMode_SliderHOB2->fn->setEnabled(DualPowerMode_SliderHOB2, LE_FALSE);
        }
        else
        {
            DualPowerMode_ButtonHOB2Lock->fn->setReleasedImage(DualPowerMode_ButtonHOB2Lock, (leImage*)&ICON_lockOpen);
            DualPowerMode_ButtonHOB2Clock->fn->setEnabled(DualPowerMode_ButtonHOB2Clock, LE_TRUE);
            DualPowerMode_SliderHOB2->fn->setEnabled(DualPowerMode_SliderHOB2, LE_TRUE);            
       }
    }

}

void DiffMsCalPower(lockVar * lockVarP)
{
    lockVarP->releaseStamp = count256;
    if(lockVarP->releaseStamp >= lockVarP->pressStamp) 
        lockVarP->DiffMs = lockVarP->releaseStamp - lockVarP->pressStamp;
    else
        lockVarP->DiffMs = 256 - lockVarP->pressStamp + lockVarP->releaseStamp;
}
void event_DualPowerMode_ButtonHOB1Lock_OnPressed(leButtonWidget* btn)
{
    gLockVar.pressStamp = count256;
}
void event_DualPowerMode_ButtonHOB1Lock_OnReleased(leButtonWidget* btn)
{
    DiffMsCalPower(&gLockVar);
    
    if(gLockVar.DiffMs >=20) gCurVar0.powerLockFlag = InvertBoolVar(gCurVar0.powerLockFlag);
  
    setLockPowerDualScreen();    
}
void event_DualPowerMode_ButtonHOB2Lock_OnPressed(leButtonWidget* btn)
{
    gLockVar.pressStamp = count256;
}
void event_DualPowerMode_ButtonHOB2Lock_OnReleased(leButtonWidget* btn)
{
    DiffMsCalPower(&gLockVar);
    
    if(gLockVar.DiffMs >=20) gCurVar1.powerLockFlag = InvertBoolVar(gCurVar1.powerLockFlag);
  
    setLockPowerDualScreen();    
}










void event_DualPowerMode_ButtonHOB1Clock_OnReleased(leButtonWidget* btn)
{
    
}

void event_DualPowerMode_ButtonHOB2Clock_OnReleased(leButtonWidget* btn)
{
    
}




//////////////////Slider value changed//////////////////////////
void updatePowerSlider(void)
{
    uint16_t sliderPercent;
    uint16_t setPowerValue;
    setPowerValue = gCurComVar[0].settings->data.cmdAckPayload.settings.power;
    if(setPowerValue < 0) setPowerValue = 0;
    
    sliderPercent = setPowerValue;
    if(singleOrDual == SINGLE_MODE)
        PowerModeSingle_PowerSlider->fn->setValue(PowerModeSingle_PowerSlider, 100-sliderPercent); 

   
    if(singleOrDual == DUAL_MODE)
    {
        DualPowerMode_SliderHOB1->fn->setValue(DualPowerMode_SliderHOB1,sliderPercent);
 
        setPowerValue = gCurComVar[1].settings->data.cmdAckPayload.settings.power;
        if(setPowerValue < 0) setPowerValue = 0;
        
        sliderPercent = setPowerValue;
        DualPowerMode_SliderHOB2->fn->setValue(DualPowerMode_SliderHOB2,sliderPercent);
    }
}
void updatePowerLabelStr(void)
{
    char cSetBuff[LE_STR_SIZE];
    uint16_t setValue;

    setValue = gCurComVar[0].settings->data.cmdAckPayload.settings.power;
    
    sprintf(cSetBuff,"%d%%", setValue);

    gLeStrVar.leSetPwr0.leStr.fn->setFromCStr(&(gLeStrVar.leSetPwr0.leStr), cSetBuff);
    
    setValue = gCurComVar[1].settings->data.cmdAckPayload.settings.power;
    sprintf(cSetBuff,"%d%%", setValue);
    gLeStrVar.leSetPwr1.leStr.fn->setFromCStr(&(gLeStrVar.leSetPwr1.leStr), cSetBuff);
 

    if(legato_getCurrentScreen() == screenID_PowerModeSingle)
        PowerModeSingle_LabelSetPoint->fn->setString(PowerModeSingle_LabelSetPoint, (leString*)&(gLeStrVar.leSetPwr0.leStr)); 
     
    
    if(legato_getCurrentScreen() == screenID_DualPowerMode)
    {
        DualPowerMode_LabelHOB1SetPower->fn->setString(DualPowerMode_LabelHOB1SetPower,(leString*)&(gLeStrVar.leSetPwr0.leStr));
        DualPowerMode_LabelHOB2SetPower->fn->setString(DualPowerMode_LabelHOB2SetPower,(leString*)&(gLeStrVar.leSetPwr1.leStr));
    }
  
}
void powerDualUpdate(void)
{
    updatePowerSlider();
    updatePowerLabelStr();
}

void event_DualPowerMode_SliderHOB1_OnValueChanged(leSliderWidget* scr)
{
    int32_t val = scr->value;
    gCurComVar[0].settings->data.cmdAckPayload.settings.power = val;
}
void event_DualPowerMode_SliderHOB2_OnValueChanged(leSliderWidget* scr)
{
    int32_t val = scr->value;
    gCurComVar[1].settings->data.cmdAckPayload.settings.power = val;
}



//////////general button ///////////////////
void event_DualPowerMode_ButtonBack_OnReleased(leButtonWidget* btn)
{
    // When the user goes back to the model select screen, set the temp to 84
    gCurComVar[0].settings->data.cmdAckPayload.settings.power = 0; 
    gCurComVar[1].settings->data.cmdAckPayload.settings.power = 0; 
    power0TimerVar.BackToIdle = 1;
    power0TimerVar.BackToIdle = 1;
    
    legato_showScreen(popScreen());    
}
void event_DualPowerMode_ButtonSettings_OnReleased(leButtonWidget* btn)
{
    gCurComVar[0].settings->data.cmdAckPayload.settings.power = 0; 
    gCurComVar[1].settings->data.cmdAckPayload.settings.power = 0; 
    power0TimerVar.BackToIdle = 1;
    power1TimerVar.BackToIdle = 1;
    pushScreen(legato_getCurrentScreen());
    legato_showScreen(screenID_Settings);     
}
void DualPowerMode_OnShow()
{
    activatePowerHOB(activatePowerHOB_chn);   
    setLockPowerDualScreen();
}
