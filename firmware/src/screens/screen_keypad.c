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

void ServicePassCode_OnShow()
{

    //static int gServiceCode=0;
    //leFixedString_Constructor(&serviceCodeString, legatoServiceCodeBuffer, 20);
    //serviceCodeString.fn->setFont(&serviceCodeString, leStringTable_GetStringFont(leGetState()->stringTable,stringID_LineVoltage240, 0));    
    //sprintf(cServiceCodeBuffer,"%d%%", gServiceCode);
    //serviceCodeString.fn->setFromCStr(&serviceCodeString, cServiceCodeBuffer);
    // PowerModeSingle_LabelSetPoint->fn->setString(aaa, (leString*)&serviceCodeString); 
}


void event_ServicePassCode_ButtonBack_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(popScreen());
}

void updatePassCode(int32_t passCodeVal)
{
    char charPassCode[LE_STR_SIZE];
    //char charPassCodeEmpty[LE_STR_SIZE] = {0};
    
  
    uint8_t riskNo = 0;
    int32_t passCodeValTmp = passCodeVal;
    if(passCodeValTmp < 0) 
    {
        memset(charPassCode,0x20,LE_STR_SIZE-1);
        charPassCode[LE_STR_SIZE-1] = '\0';
    }
    else
    {
        while (passCodeValTmp > 0)
        {
            riskNo++;
            passCodeValTmp = passCodeValTmp/10;
            charPassCode[riskNo-1] = '*';
            charPassCode[riskNo] = '\0';
        }
    }
    SET_CHAR_TO_LESTRING(lePasscode,charPassCode);
    SET_LESTRING_TO_LABEL(ServicePassCode_LabelPasscodeValue,lePasscode);
}

uint32_t getKeyPassCode(uint32_t row, uint32_t col)
{
    return(row * 6 + col);
}
void event_ServicePassCode_KeyPadWidget0_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    static int32_t passCodeVal = -1;
    if((getKeyPassCode(row,col) < 10) &&(passCodeVal <1000000))
    {   
        if(passCodeVal == (-1)) passCodeVal = getKeyPassCode(row,col);
        else  passCodeVal = passCodeVal * 10 + getKeyPassCode(row,col);
    }
    if((getKeyPassCode(row,col) == 10) &&(passCodeVal != (-1)))
        passCodeVal = passCodeVal/10;    
    
    if(getKeyPassCode(row,col) == 11)    
    {
        if(passCodeVal == 1111)
        {
            //pushScreen(screenID_ServicePassCode);
            passCodeVal = -1;
            legato_showScreen(screenID_ServiceMenu);
        }
        else
        {
            passCodeVal = -1;
        }
    }
    //if(passCodeVal != -1)
    updatePassCode(passCodeVal);
}








#if(0)
void event_ServicePassCode_ButtonKey0_OnReleased(leButtonWidget* btn) 
{
  printf("released press button key 0 \r\n"); 
}

void event_ServicePassCode_ButtonKey1_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 1 \r\n");
}

void event_ServicePassCode_ButtonKey2_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 2 \r\n"); 
}

void event_ServicePassCode_ButtonKey3_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 3 \r\n"); 
}

void event_ServicePassCode_ButtonKey4_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 4 \r\n"); 
}

void event_ServicePassCode_ButtonKey5_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 5 \r\n"); 
}
void event_ServicePassCode_ButtonKey6_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 6 \r\n"); 
}
void event_ServicePassCode_ButtonKey7_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 7 \r\n"); 
}
void event_ServicePassCode_ButtonKey8_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 8 \r\n"); 
}
void event_ServicePassCode_ButtonKey9_OnReleased(leButtonWidget* btn)
{
  printf("released press button key 9 \r\n"); 
}
void event_ServicePassCode_ButtonKeyBackspace_OnReleased(leButtonWidget* btn)
{
  printf("released press button key Backspace \r\n"); 
}

void event_ServicePassCode_ButtonKeyEnter_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(screenID_ServiceMenu);
}

#endif




