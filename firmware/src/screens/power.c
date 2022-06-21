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
#include "peripheral/pwm/plib_pwm.h"
#include "power.h"
#include <math.h>
#include "screen_utility.h"
#include "eggtimer.h"
#include "screenStack.h"

extern uint16_t EggTimerData;

leFixedString lePwrSet;


bool frontWarmerOn;
bool rearWarmerOn;

static uint8_t pressPowerTimeStamp =0;
static uint8_t releasePowerTimeStamp =0;
static uint8_t timePowerDiffMs = 0;


void setLockPowerScreen(bool LockStatus);

void setLockPowerScreen(bool LockStatus)
{
    if(LockStatus == true)
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


void event_PowerModeSingle_ButtonTimer_OnPressed(leButtonWidget* btn)
{
  // printf("pressed Timer Power\r\n");
}

void event_PowerModeSingle_ButtonTimer_OnReleased(leButtonWidget* btn)
{
    if (power0TimerVar.state == EGG_IDLE )
    {
        timerInitChn = 2;
        pushScreen(legato_getCurrentScreen());
        legato_showScreen(screenID_TimerInit);
        
    }
    else
    {    
        power0TimerVar.state = EGG_IDLE;
        legato_showScreen(getCurScreen());
    }
 }

void event_PowerModeSingle_ButtonTimerRemaining_OnReleased(leButtonWidget* btn)
{
    // Turn off the timer
    //powerEggTimerVar.state = IDLE;
}


void event_PowerModeSingle_ButtonLockScreen_OnPressed(leButtonWidget* btn)
{
    pressPowerTimeStamp = count256;
}


void event_PowerModeSingle_ButtonLockScreen_OnReleased(leButtonWidget* btn)
{
    releasePowerTimeStamp = count256;
    if(releasePowerTimeStamp >= pressPowerTimeStamp) 
        timePowerDiffMs = releasePowerTimeStamp - pressPowerTimeStamp;
    else
        timePowerDiffMs = 256 - pressPowerTimeStamp + releasePowerTimeStamp;
    
    if(timePowerDiffMs >=20) gCurVar0.powerLockFlag = InvertBoolVar(gCurVar0.powerLockFlag);
  
    setLockPowerScreen(gCurVar0.powerLockFlag);
}


void event_PowerModeSingle_ButtonSettings_OnPressed(leButtonWidget* btn)
{
  // printf("pressed Settings Power\r\n");
}

void event_PowerModeSingle_ButtonSettings_OnReleased(leButtonWidget* btn)
{
  pushScreen(legato_getCurrentScreen());
  legato_showScreen(screenID_Settings);
}


void event_PowerModeSingle_ButtonBack_OnPressed(leButtonWidget* btn)
{
  //EggTimerData = 0;
}

void event_PowerModeSingle_ButtonBack_OnReleased(leButtonWidget* btn)
{
    // If you go back to the mode selection, set the power to 0
    gCurVar0.setPowerValue = 0;
    
    legato_showScreen(popScreen());
}


void PowerModeSingle_OnShow()
{
    setLockPowerScreen(gCurVar0.powerLockFlag);
    newLeStr(&lePwrSet,(leFont*)&RobotoReg48,40);
 // set button behavior

    if(power0TimerVar.state != EGG_IDLE )
        PowerModeSingle_LabelTimeRemaining->fn->setVisible(PowerModeSingle_LabelTimeRemaining, LE_TRUE);
    else
        PowerModeSingle_LabelTimeRemaining->fn->setVisible(PowerModeSingle_LabelTimeRemaining, LE_FALSE);

    
    powerUpdate();
    //powerLevelValue=0;


    frontWarmerOn=true;
    rearWarmerOn=false;
  
    PowerModeSingle_PowerSlider->fn->setStartAngle(PowerModeSingle_PowerSlider, 90);
}

void PowerModeSingle_OnHide()
{
    delLeStr(&lePwrSet);
}

void powerUpdate(void)
{
   char charPwrSet[40];
   uint16_t PwrSetVal = gCurComVar[0].settings->data.cmdAckPayload.settings.power;

   sprintf(charPwrSet,"%d%%", PwrSetVal);
   lePwrSet.fn->setFromCStr(&lePwrSet, charPwrSet);
   PowerModeSingle_LabelSetPoint->fn->setString(PowerModeSingle_LabelSetPoint, (leString*)&lePwrSet); 
}

void event_PowerModeSingle_PowerSlider_OnValueChanged(leCircularSliderWidget* sld, int32_t val)
{
    gCurComVar[0].settings->data.cmdAckPayload.settings.power = 100-val;
}
