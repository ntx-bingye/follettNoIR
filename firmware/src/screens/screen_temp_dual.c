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
#include "screen_temp_dual.h"
#include "eggtimer.h"
#include "screen_utility.h"
#include <math.h>



void event_DualTempMode_ButtonBack_OnReleased(leButtonWidget* btn)
{
    // When the user goes back to the model select screen, set the temp to 84
    
    gCurComVar[0].settings->data.cmdAckPayload.settings.temp = 84; 
    gCurComVar[1].settings->data.cmdAckPayload.settings.temp = 84;     
    //gCurVar0.setTempValue = 84;
    //gCurVar1.setTempValue = 84;
    temp0TimerVar.BackToIdle = 1;
    temp1TimerVar.BackToIdle = 1;
    
    legato_showScreen(popScreen());    
}

void event_DualTempMode_ButtonSettings_OnReleased(leButtonWidget* btn)
{
    gCurVar0.setTempValue = 84;
    gCurVar1.setTempValue = 84;
    temp0TimerVar.BackToIdle = 1;
    temp1TimerVar.BackToIdle = 1;
    pushScreen(legato_getCurrentScreen());
    legato_showScreen(screenID_Settings);      
}


/////////////////////timer /////////////////////////////////

void event_DualTempMode_ButtonHOB1Clock_OnReleased(leButtonWidget* btn)
{
    if (temp0TimerVar.state == EGG_IDLE )
    {
        timerInitChn = 0;
        //temp0TimerVar.BackToIdle = 1;
        pushScreen(legato_getCurrentScreen());
        legato_showScreen(screenID_TimerInit);
    }
    else
    {    
        temp0TimerVar.BackToIdle = 1;
        //temp0TimerVar.state = EGG_IDLE;
        //legato_showScreen(getCurScreen()); //refresh UI
    }     
}
void event_DualTempMode_ButtonHOB2Clock_OnReleased(leButtonWidget* btn)
{
    if (temp1TimerVar.state == EGG_IDLE )
    {
        timerInitChn = 1;
        //temp1TimerVar.BackToIdle = 1;        
        pushScreen(legato_getCurrentScreen());
        legato_showScreen(screenID_TimerInit);
    }
    else
    {   
        temp1TimerVar.BackToIdle = 1;   
        //temp1TimerVar.state = EGG_IDLE;
        //legato_showScreen(getCurScreen()); //refresh UI
    } 
}




//////////////////////lock/////////////////////
void setLockTempDualScreen(void)
{
    if(gCurVar0.tempLockFlag == true)
    {
        DualTempMode_ButtonHOB1Lock->fn->setReleasedImage(DualTempMode_ButtonHOB1Lock, (leImage*)&ICON_lockClosed);
        DualTempMode_ButtonHOB1Clock->fn->setEnabled(DualTempMode_ButtonHOB1Clock, LE_FALSE);
        DualTempMode_SliderHOB1Temp->fn->setEnabled(DualTempMode_SliderHOB1Temp, LE_FALSE);
    }
    else
    {
        DualTempMode_ButtonHOB1Lock->fn->setReleasedImage(DualTempMode_ButtonHOB1Lock, (leImage*)&ICON_lockOpen);
        DualTempMode_ButtonHOB1Clock->fn->setEnabled(DualTempMode_ButtonHOB1Clock, LE_TRUE);
        DualTempMode_SliderHOB1Temp->fn->setEnabled(DualTempMode_SliderHOB1Temp, LE_TRUE);            
    }
        
    if(gCurVar1.tempLockFlag == true)
    {
        DualTempMode_ButtonHOB2Lock->fn->setReleasedImage(DualTempMode_ButtonHOB2Lock, (leImage*)&ICON_lockClosed);
        DualTempMode_ButtonHOB2Clock->fn->setEnabled(DualTempMode_ButtonHOB2Clock, LE_FALSE);
        DualTempMode_SliderHOB2Temp->fn->setEnabled(DualTempMode_SliderHOB2Temp, LE_FALSE);
    }
    else
    {
        DualTempMode_ButtonHOB2Lock->fn->setReleasedImage(DualTempMode_ButtonHOB2Lock, (leImage*)&ICON_lockOpen);
        DualTempMode_ButtonHOB2Clock->fn->setEnabled(DualTempMode_ButtonHOB2Clock, LE_TRUE);
        DualTempMode_SliderHOB2Temp->fn->setEnabled(DualTempMode_SliderHOB2Temp, LE_TRUE);            
    }

}

void DiffMsCal(lockVar * lockVarP)
{
    lockVarP->releaseStamp = count256;
    if(lockVarP->releaseStamp >= lockVarP->pressStamp) 
        lockVarP->DiffMs = lockVarP->releaseStamp - lockVarP->pressStamp;
    else
        lockVarP->DiffMs = 256 - lockVarP->pressStamp + lockVarP->releaseStamp;
}

void event_DualTempMode_ButtonHOB1Lock_OnPressed(leButtonWidget* btn)
{
    gLockVar.pressStamp = count256;
}
void event_DualTempMode_ButtonHOB1Lock_OnReleased(leButtonWidget* btn)
{
    DiffMsCal(&gLockVar);
    
    if(gLockVar.DiffMs >=20) gCurVar0.tempLockFlag = InvertBoolVar(gCurVar0.tempLockFlag);
  
    setLockTempDualScreen();    
}

void event_DualTempMode_ButtonHOB2Lock_OnPressed(leButtonWidget* btn)
{
    gLockVar.pressStamp = count256;
}
void event_DualTempMode_ButtonHOB2Lock_OnReleased(leButtonWidget* btn)

{
    DiffMsCal(&gLockVar);
    
    if(gLockVar.DiffMs >=20) gCurVar1.tempLockFlag = InvertBoolVar(gCurVar1.tempLockFlag);
  
    setLockTempDualScreen();    
}



//////////////////Slider value changed//////////////////////////
void updateDualTempSlider(void)
{
    uint16_t sliderPercent;
    uint16_t setTempValue;
    
    setTempValue = gCurComVar[0].settings->data.cmdAckPayload.settings.temp;
    if(setTempValue < 84) setTempValue = 84;
    sliderPercent = round((setTempValue-84)/3.4);
    DualTempMode_SliderHOB1Temp->fn->setValue(DualTempMode_SliderHOB1Temp,sliderPercent);
    
    setTempValue = gCurComVar[1].settings->data.cmdAckPayload.settings.temp;
    if(setTempValue < 84) setTempValue = 84;
    sliderPercent = round((setTempValue-84)/3.4);
    DualTempMode_SliderHOB2Temp->fn->setValue(DualTempMode_SliderHOB2Temp,sliderPercent);
}
void updateDualTempLabelStr(void)
{
    char cSetBuff[LE_STR_SIZE];
    char cGetBuff[LE_STR_SIZE];
    uint16_t setTempValue;
    uint16_t getTempValue;
    setTempValue = gCurComVar[0].settings->data.cmdAckPayload.settings.temp;
    getTempValue = gCurComVar[0].gettings->data.cmdAckPayload.settings.temp;
    if(gCurVar0.tempUnits == 0)
    {
        sprintf(cGetBuff,"%d°F", getTempValue);
        sprintf(cSetBuff,"Set: %d°F", setTempValue);
    }
    else
    {
        // TODO Convert to C
        sprintf(cGetBuff,"%d°C", (temperatureFtoC(getTempValue)));
        sprintf(cSetBuff,"Set: %d°C", (temperatureFtoC(setTempValue)));
    }
    
    gLeStrVar.leGetTemp0.leStr.fn->setFromCStr(&(gLeStrVar.leGetTemp0.leStr), cGetBuff);
    gLeStrVar.leSetTemp0.leStr.fn->setFromCStr(&(gLeStrVar.leSetTemp0.leStr), cSetBuff);  
    
    setTempValue = gCurComVar[1].settings->data.cmdAckPayload.settings.temp;
    getTempValue = gCurComVar[1].gettings->data.cmdAckPayload.settings.temp;
  
    if(gCurVar0.tempUnits == 0)
    {
        sprintf(cGetBuff,"%d°F", getTempValue);
        sprintf(cSetBuff,"Set: %d°F", setTempValue);
    }
    else
    {
        // TODO Convert to C
        sprintf(cGetBuff,"%d°C", (temperatureFtoC(getTempValue)));
        sprintf(cSetBuff,"Set: %d°C", (temperatureFtoC(setTempValue)));
    }
    
    
    SET_CHAR_TO_LESTRING(leGetTemp1,cGetBuff);
    SET_CHAR_TO_LESTRING(leSetTemp1,cSetBuff);    
    
    //SET_LESTRING_TO_LABEL(ServicePassCode_LabelEnterPasscode,lePasscode);

    //gLeStrVar.leGetTemp1.leStr.fn->setFromCStr(&(gLeStrVar.leGetTemp1.leStr), cGetBuff);
    //gLeStrVar.leSetTemp1.leStr.fn->setFromCStr(&(gLeStrVar.leSetTemp1.leStr), cSetBuff);  

    //DualTempMode_LabelHOB1SetTemp->fn->setString(DualTempMode_LabelHOB1SetTemp,(leString*)&(gLeStrVar.leSetTemp0.leStr));
   // DualTempMode_LabelHOB1GetTemp->fn->setString(DualTempMode_LabelHOB1GetTemp,(leString*)&(gLeStrVar.leGetTemp0.leStr));
   // DualTempMode_LabelHOB2SetTemp->fn->setString(DualTempMode_LabelHOB2SetTemp,(leString*)&(gLeStrVar.leSetTemp1.leStr));
   // DualTempMode_LabelHOB2GetTemp->fn->setString(DualTempMode_LabelHOB2GetTemp,(leString*)&(gLeStrVar.leGetTemp1.leStr));
    SET_LESTRING_TO_LABEL(DualTempMode_LabelHOB1SetTemp,leSetTemp0);
    SET_LESTRING_TO_LABEL(DualTempMode_LabelHOB1GetTemp,leGetTemp0);    
    SET_LESTRING_TO_LABEL(DualTempMode_LabelHOB2SetTemp,leSetTemp1);
    SET_LESTRING_TO_LABEL(DualTempMode_LabelHOB2GetTemp,leGetTemp1);     
    
}
void tempDualUpdate(void)
{
    updateDualTempSlider();
    updateDualTempLabelStr();
}

void event_DualTempMode_SliderHOB1Temp_OnValueChanged(leSliderWidget* scr)
{
    int32_t val = scr->value;
    gCurComVar[0].settings->data.cmdAckPayload.settings.temp = (val)*3.4 + 84;
    //gCurVar0.setTempValue = (val)*3.4 + 84;
    //gFlag.temp = true;
}
void event_DualTempMode_SliderHOB2Temp_OnValueChanged(leSliderWidget* scr)
{
    int32_t val = scr->value;
    gCurComVar[1].settings->data.cmdAckPayload.settings.temp = (val)*3.4 + 84;
    //gFlag.temp = true;
}



//////////////////////////activate HOB for encoder////////////////////
void activateHOB(uint8_t chn)
{
    if(chn == 0)
    {
        DualTempMode_PanelHOB1Back->fn->setScheme(DualTempMode_PanelHOB1Back, &ForegroundScheme);
        DualTempMode_PanelHOB2Back->fn->setScheme(DualTempMode_PanelHOB2Back, &BackgroundScheme);
    }
    else
    {
        DualTempMode_PanelHOB1Back->fn->setScheme(DualTempMode_PanelHOB1Back, &BackgroundScheme);
        DualTempMode_PanelHOB2Back->fn->setScheme(DualTempMode_PanelHOB2Back, &ForegroundScheme);
    }
}

void event_DualTempMode_ButtonBigHOB1_OnReleased(leButtonWidget* btn)
{
    activateTempHOB_chn = 0;
    activateHOB(activateTempHOB_chn);    
}

void event_DualTempMode_ButtonBigHOB2_OnReleased(leButtonWidget* btn)
{
    activateTempHOB_chn = 1;
    activateHOB(activateTempHOB_chn);   
}

void DualTempMode_OnShow(void)
{
    activateHOB(activateTempHOB_chn);  
    setLockTempDualScreen();
}