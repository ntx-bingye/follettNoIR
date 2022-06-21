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

leFixedString* lePassword;
static int32_t passVal = -1;
static uint8_t zeroNo = 0;

void updatePassCode(int32_t passVal)
{
    char charPassCode[20];
    uint8_t riskNo = 0;

    if((passVal == -1) ||(passVal == 0)&&(zeroNo == 0))
    {
        memset(charPassCode,0x20,20);
        charPassCode[19] = '\0';
    }
    
    else if(passVal == -2)
    {
        sprintf(charPassCode,"Failed");
    }
    else
    {
        for(uint8_t i = 0; i < zeroNo; i++) //prefix zero number
        {
            charPassCode[i] = '*';
            charPassCode[i+1] = '\0';
        }
        while (passVal > 0)
        {
            riskNo++;
            passVal = passVal/10;
            charPassCode[zeroNo+riskNo-1] = '*';
            charPassCode[zeroNo+riskNo] = '\0';
        }
    }
    lePassword->fn->setFromCStr(lePassword,charPassCode);
    service_password_LblInputBox->fn->setString(service_password_LblInputBox,(leString*)lePassword);
}


uint32_t keyVal(uint32_t row, uint32_t col)
{
    return(row * 3 + col+1);
}

void event_service_password_KeyPad_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    if(passVal > 1000000000) return;
    
    switch(keyVal(row,col))
    {
        case 1 ... 9:
            if(passVal < 1000000000)
                passVal = (passVal <= 0) ? keyVal(row,col):(passVal*10 + keyVal(row,col));
            break;
        case 10:
            if((passVal == 0)&&(zeroNo > 0))  {zeroNo--;   break;}
            if((passVal == 0)&&(zeroNo == 0)) {passVal = -1;break;}
            passVal = passVal/10;
            break;
        case 11:
            if(passVal <= 0) {passVal = 0;zeroNo++; break;}
            if(passVal < 1000000000) passVal = passVal*10;
            break;
        case 12:
            if(passVal == 1111)
            {
                passVal = -1;
                zeroNo = 0;
                legato_showScreen(screenID_service_advanced);
            }
            else
            {
                zeroNo = 0;
                passVal = -2;
            }
            break;
            
        default:
            break;
    }
    
    updatePassCode(passVal);
}


void event_service_password_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}

void event_service_password_BtnExit_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = -1;
    BACK
}

void service_password_OnShow(void)
{
    printf("enter pass\n");
    passVal = -1;
    zeroNo = 0;
    leChar* leCharP =(leChar*)malloc(sizeof(leChar)*20); 
    if(leCharP == NULL)
    {
        printf("no memory for malloc\n");
        return;
    }
    lePassword = leFixedString_New(leCharP,20);
    lePassword->fn->setFont(lePassword, (leFont *)&Roboto_Regular_16o);
}

void service_password_OnHide(void)
{
    delLeStr(lePassword);
    passVal = -1;
    zeroNo = 0;
}


void event_service_password_BtnSensor_OnReleased(leButtonWidget* btn)
{
    PUSH_SHOW(screenID_Sensor)
}