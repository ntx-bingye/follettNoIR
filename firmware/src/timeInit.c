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
#include "power.h"
#include "eggtimer.h"
#include "screenStack.h"

//#include "temperature.h"
//  #include "temperature.h"



static unsigned int EggTimerData = 0;

//static int oneTimeInit;
//static char   EggTimerDataEmptyString[8] = {0};
//static char   EggTimerDataString[8];
//static leChar legatoEggTimerDataBuffer[8] = {0};
//static leFixedString legatoEggTimerDataString;

void UpdateEggTimerDigit( int tmpData)
{
    //TimerInit10sExpire = 10;
    char eggChar[16] = {0};
    if((tmpData >=0)&&(tmpData <=999))
        sprintf (eggChar,"%d",tmpData);
    
    gLeStrVar.leEggTime.leStr.fn->setFromCStr(&(gLeStrVar.leEggTime.leStr), eggChar);
    
    TimerInit_TimerValue->fn->setString(TimerInit_TimerValue, (leString*)&(gLeStrVar.leEggTime.leStr)); 
}

void TimerInit_OnShow()
{
    //leFixedString_Constructor(&legatoEggTimerDataString, legatoEggTimerDataBuffer, 8);
    //legatoEggTimerDataString.fn->setFont(&legatoEggTimerDataString, leStringTable_GetStringFont(leGetState()->stringTable,stringID_TimerMinutes, 0));
    
    TimerInit10sExpire = 10;
    
    if(timerInitChn == 0)
        EggTimerData = temp0TimerVar.eggTimerDataInit;
    else if(timerInitChn == 1)
        EggTimerData = temp1TimerVar.eggTimerDataInit;    
    else if(timerInitChn == 2)
        EggTimerData = power0TimerVar.eggTimerDataInit;
    else if(timerInitChn == 3)
        EggTimerData = power1TimerVar.eggTimerDataInit;
    else
        EggTimerData = 0;
    
    //if(EggTimerData <0) EggTimerData = 0;
    
    //if(EggTimerData > 300) EggTimerData = 0;
    
    UpdateEggTimerDigit(EggTimerData);
}

void event_TimerInit_ButtonExit_OnPressed(leButtonWidget* btn)
{
  // printf("pressed Exit\r\n");
}


void event_TimerInit_ButtonExit_OnReleased(leButtonWidget* btn)
{
    TimerInit10sExpire = -1;
    legato_showScreen(popScreen());
}



uint32_t getKeyNumber1(uint32_t row, uint32_t col)
{
    if(row == 0) return col;
    if(row == 1) return (6+col);
    return (-1);
}

void event_TimerInit_KeyPadWidget0_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    uint32_t keyNumber;
    keyNumber = getKeyNumber1(row, col);
    if(keyNumber == -1) return;
    
    if((keyNumber<10) && (EggTimerData<100))
        EggTimerData = EggTimerData * 10 + keyNumber;
    else if(keyNumber == 10)  // back key 
        EggTimerData = EggTimerData / 10;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
    
    if(keyNumber == 11)  // enter key 
    {
        if(EggTimerData > 300) EggTimerData = 300;
    
        if(EggTimerData > 0)   LED_YELLOW_On();

        if(timerInitChn == 0) temp0TimerVar.EggTimerData = EggTimerData;
        
        if(timerInitChn == 1) temp1TimerVar.EggTimerData = EggTimerData;        
        
        if(timerInitChn == 2) power0TimerVar.EggTimerData = EggTimerData;
        
        if(timerInitChn == 3) power1TimerVar.EggTimerData = EggTimerData;
        
        TimerInit10sExpire = -1;
        legato_showScreen(popScreen());
    }
    

  
}

#if(0)

void event_TimerInit_ButtonKeyEnter_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData > 300)
        EggTimerData = 300;
    
    if(EggTimerData > 0)
        LED_YELLOW_On();

    
    if(getPreScreen()== screenID_PowerModeSingle)  powerEggTimerVar.EggTimerData = EggTimerData;
    
    if(getPreScreen() == screenID_TemperatureModeSingle) tempEggTimerVar.EggTimerData = EggTimerData;
  
    TimerInit10sExpire = -1;
    legato_showScreen(popScreen());
}

void event_TimerInit_ButtonKeyBackSpace_OnReleased(leButtonWidget* btn)
{
    EggTimerData = EggTimerData / 10;
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;
}

void event_TimerInit_ButtonKey0_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 0;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;
}

void event_TimerInit_ButtonKey1_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 1;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;
}

void event_TimerInit_ButtonKey2_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 2;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
}

void event_TimerInit_ButtonKey3_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 3;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
}

void event_TimerInit_ButtonKey4_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 4;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
}

void event_TimerInit_ButtonKey5_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 5;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
}

void event_TimerInit_ButtonKey6_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 6;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
}

void event_TimerInit_ButtonKey7_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 7;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
}

void event_TimerInit_ButtonKey8_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 8;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
}

void event_TimerInit_ButtonKey9_OnReleased(leButtonWidget* btn)
{
    if(EggTimerData<100)  EggTimerData = EggTimerData * 10 + 9;
    
    UpdateEggTimerDigit(EggTimerData);
    TimerInit10sExpire = 10;    
}


void event_TimerInit_ButtonKey0_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 0 %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKey1_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 1 %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKey2_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 2 %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKey3_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 3 %s %lu\r\n", EggTimerDataString, EggTimerData);
  //printf("NDX=:%d\r\n", EggTimerDataStringNDX);
}

void event_TimerInit_ButtonKey4_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 4 %s %lu\r\n", EggTimerDataString, EggTimerData);
  
}

void event_TimerInit_ButtonKey5_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 5 %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKey6_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 6 %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKey7_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 7 %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKey8_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 8 %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKey9_OnPressed(leButtonWidget* btn)
{
  //printf("pressed 9 %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKeyBackSpace_OnPressed(leButtonWidget* btn)
{
  //printf("released Timer: %s %lu\r\n", EggTimerDataString, EggTimerData);
}

void event_TimerInit_ButtonKeyEnter_OnPressed(leButtonWidget* btn)
{
  // printf("pressed EnterTime: %s %d\r\n", EggTimerDataString, EggTimerData);
}

#endif