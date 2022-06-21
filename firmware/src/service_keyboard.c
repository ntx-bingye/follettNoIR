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
#include "app_json.h"

leFixedString* leInputBox;

char UpperChar[30] = 
{'P',  'Q',  'W',  'E',  'R',  'T',  'Y',  'U',  'I',  'O',
 'A',  'S',  'D',  'F',  'G',  'H',  'J',  'K',  'L', '\x0e',
 'Z',  'X',  'C',  'V',  'B',  'N',  'M',  '\b', ' ', '.'      };
char LowerChar[30] =
{'p',  'q',  'w',  'e',  'r',  't',  'y',  'u',  'i',  'o',
 'a',  's',  'd',  'f',  'g',  'h',  'j',  'k',  'l',  '\x0e',
 'z',  'x',  'c',  'v',  'b',  'n',  'm',  '\b',  ' ',  '.'    };
char numChar[30]   = 
{'0',   '1',  '2',  '3',  '4',  '5',  '6',  '7',  '8',  '9',
 '-',   '/',  ':',  ';',  '(',  ')',  '$',  '@',  '\"', '\x0e',
 '%',  ',',  '?',  '!',  '\'', '#',  '_',  '\b',  ' ' , '.'    };

char* charTable[3] = {UpperChar,LowerChar,numChar};

int8_t keyId = -1;   //save pressed key id, if nokeypressed =-1;
bool BtnABC_123;
bool BtnCapsLock;
char service_advanceKeyBoardStr[150];

//leImage* Img[3] = {
//    (leImage*)&upperkey,(leImage*)&lowkey,(leImage*)&keynum
//};
#define MAX_LBL_LINE 3
#define MAX_MODE     3 

#define B(name) (leString*)&string_key_##name
leString* leStr[MAX_MODE][MAX_LBL_LINE] = {
    {B(ABC_line1),B(ABC_line2),B(ABC_line3)},
    {B(abc_line1),B(abc_line2),B(abc_line3)},
    {B(num_line1),B(num_line2),B(num_line3)}
};
#undef B

#define SET_LBL_STR(line,leStrx) service_keyboard_LblLine##line ->fn->setString(service_keyboard_LblLine##line,leStrx)

uint8_t getPage(bool BtnABC_123,bool BtnCapsLock)
{
    if(BtnABC_123 == 1 ) return 2;
    if(BtnCapsLock == 0) return 0;
    return 1;
}

void showInputBox(void)
{
    uint8_t length = strlen(service_advanceKeyBoardStr);
    if(length == 0)
        leInputBox->fn->setFromCStr(leInputBox,"\x20"); 
    else
    {
        service_advanceKeyBoardStr[length] = '|';
        service_advanceKeyBoardStr[length+1] = '\0';
        leInputBox->fn->setFromCStr(leInputBox,service_advanceKeyBoardStr);
        service_advanceKeyBoardStr[length] = '\0';
    }
    service_keyboard_LblInputBox->fn->
          setString(service_keyboard_LblInputBox,(leString*)leInputBox);
}

void btnReleased(uint8_t keyId)
{
    int32_t val;
    char* str;
    char* contact[6] = {"name","street","citystate",
                        "phone1","phone2","Website URL"};

    char ch;
    ch = charTable[getPage(BtnABC_123,BtnCapsLock)][keyId];//charTable[0][0]; //
    //printf("get ch = %c\n",ch);
    uint8_t stringLen = strlen(service_advanceKeyBoardStr);
    
    if(keyId == 27)
    {
        if(stringLen > 0) //back key
        {
            service_advanceKeyBoardStr[stringLen-1] = '\0';
            showInputBox();
            return;
        }
        service_advanceKeyBoardStr[0] = '\0';
        return;
    }
   
    if(keyId == 19)  // Upper/lower key
    {
        if(BtnABC_123 == 0) BtnCapsLock = (BtnCapsLock == 0)?1:0;
        else                {BtnABC_123 = 0; BtnCapsLock = 0; }
        
        if(BtnCapsLock == 0)
        {
            SET_LBL_STR(1,leStr[0][0]);   
            SET_LBL_STR(2,leStr[0][1]);  
            SET_LBL_STR(3,leStr[0][2]);  
        }
        else
        {
            SET_LBL_STR(1,leStr[1][0]);   
            SET_LBL_STR(2,leStr[1][1]);  
            SET_LBL_STR(3,leStr[1][2]);  
        }
        return;
    }
    
    if(keyId == 30) //enter key
    {
        service_advanceKeyEnter = true;
        str = service_advanceKeyBoardStr;
        if(readWriteValInJson(0,settingRoot,&val,&str,149,1,contact[service_advancedcontact_BtnNo])) printf("save ok\n");
        saveSettingJsonToDev(&sst,SETTING_FILE,settingRoot);
        BACK
        return;
    }
    
    if(stringLen < 60)
    {
        service_advanceKeyBoardStr[stringLen] = ch;
        service_advanceKeyBoardStr[stringLen+1] = '\0';
        showInputBox();
    }
}



void event_service_keyboard_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_service_keyboard_BtnSpace_OnReleased(leButtonWidget* btn)
{
    keyId = 28;
    btnReleased(keyId);
}
void event_service_keyboard_Btn123_OnReleased(leButtonWidget* btn)
{
    BtnABC_123 = (BtnABC_123 == 0)?1:0;
    if(BtnABC_123 == 0)
    {
        SET_LBL_STR(1,leStr[0][0]);   
        SET_LBL_STR(2,leStr[0][1]);  
        SET_LBL_STR(3,leStr[0][2]);  
    }
    else
    {
        SET_LBL_STR(1,leStr[2][0]);   
        SET_LBL_STR(2,leStr[2][1]);  
        SET_LBL_STR(3,leStr[2][2]);  
    }
}
void event_service_keyboard_BtnSelect_OnReleased(leButtonWidget* btn)
{
    keyId = 30;
    btnReleased(keyId);
}
void event_service_keyboard_BtnDot_OnReleased(leButtonWidget* btn)
{
    keyId = 29;
    btnReleased(keyId);
}

void event_service_keyboard_Btn27_OnReleased(leButtonWidget* btn)
{
    keyId = 27;
    btnReleased(keyId);
}
void event_service_keyboard_Btn26_OnReleased(leButtonWidget* btn)
{
    keyId = 26;
    btnReleased(keyId);
}
void event_service_keyboard_Btn25_OnReleased(leButtonWidget* btn)
{
    keyId = 25;
    btnReleased(keyId);
}
void event_service_keyboard_Btn24_OnReleased(leButtonWidget* btn)
{
    keyId = 24;
    btnReleased(keyId);
}
void event_service_keyboard_Btn23_OnReleased(leButtonWidget* btn)
{
    keyId = 23;
    btnReleased(keyId);
}
void event_service_keyboard_Btn22_OnReleased(leButtonWidget* btn)
{
    keyId = 22;
    btnReleased(keyId);
}
void event_service_keyboard_Btn21_OnReleased(leButtonWidget* btn)
{
    keyId = 21;
    btnReleased(keyId);
}
void event_service_keyboard_Btn20_OnReleased(leButtonWidget* btn)
{
    keyId = 20;
    btnReleased(keyId);
}
void event_service_keyboard_Btn19_OnReleased(leButtonWidget* btn)
{
    keyId = 19;
    btnReleased(keyId);
}
void event_service_keyboard_Btn18_OnReleased(leButtonWidget* btn)
{
    keyId = 18;
    btnReleased(keyId);
}
void event_service_keyboard_Btn17_OnReleased(leButtonWidget* btn)
{
    keyId = 17;
    btnReleased(keyId);
}
void event_service_keyboard_Btn16_OnReleased(leButtonWidget* btn)
{
    keyId = 16;
    btnReleased(keyId);
}
void event_service_keyboard_Btn15_OnReleased(leButtonWidget* btn)
{
    keyId = 15;
    btnReleased(keyId);
}
void event_service_keyboard_Btn14_OnReleased(leButtonWidget* btn)
{
    keyId = 14;
    btnReleased(keyId);
}
void event_service_keyboard_Btn13_OnReleased(leButtonWidget* btn)
{
    keyId = 13;
    btnReleased(keyId);
}
void event_service_keyboard_Btn12_OnReleased(leButtonWidget* btn)
{
    keyId = 12;
    btnReleased(keyId);
}
void event_service_keyboard_Btn11_OnReleased(leButtonWidget* btn)

{
    keyId = 11;
    btnReleased(keyId);
}
void event_service_keyboard_Btn10_OnReleased(leButtonWidget* btn)
{
    keyId = 10;
    btnReleased(keyId);
}

void event_service_keyboard_Btn9_OnReleased(leButtonWidget* btn)
{
    keyId = 9;
    btnReleased(keyId);
}
void event_service_keyboard_Btn8_OnReleased(leButtonWidget* btn)
{
    keyId = 8;
    btnReleased(keyId);
}
void event_service_keyboard_Btn7_OnReleased(leButtonWidget* btn)
{
    keyId = 7;
    btnReleased(keyId);
}
void event_service_keyboard_Btn6_OnReleased(leButtonWidget* btn)
{
    keyId = 6;
    btnReleased(keyId);
}
void event_service_keyboard_Btn5_OnReleased(leButtonWidget* btn)
{
    keyId = 5;
    btnReleased(keyId);
}
void event_service_keyboard_Btn4_OnReleased(leButtonWidget* btn)
{
    keyId = 4;
    btnReleased(keyId);
}
void event_service_keyboard_Btn3_OnReleased(leButtonWidget* btn)
{
    keyId = 3;
    btnReleased(keyId);
}
void event_service_keyboard_Btn2_OnReleased(leButtonWidget* btn)
{
    keyId = 2;
    btnReleased(keyId);
}
void event_service_keyboard_Btn1_OnReleased(leButtonWidget* btn)
{
    keyId = 1;
    btnReleased(keyId);
}
void event_service_keyboard_Btn0_OnReleased(leButtonWidget* btn)
{
    keyId = 0;
    btnReleased(keyId);
}



void service_keyboard_OnShow(void) // called when this screen is shown
{
    newLblLeStr(&leInputBox,service_keyboard_LblInputBox,150);

    service_advanceKeyEnter = false;
    char* contact[6] = {"name","street","citystate",
                        "phone1","phone2","Website URL"};
    int32_t val;
    char* str;
    str = calloc(150,1);
    readWriteValInJson(1,settingRoot,&val,&str,149,1,contact[service_advancedcontact_BtnNo]);
    if(str == NULL) service_advanceKeyBoardStr[0] = '\0';
    else  strcpy(service_advanceKeyBoardStr,str);
    
    showInputBox();
    
    BtnABC_123 = 0;
    BtnCapsLock = 0;
    
    SET_LBL_STR(1,leStr[0][0]);   
    SET_LBL_STR(2,leStr[0][1]);  
    SET_LBL_STR(3,leStr[0][2]); 
    
    free(str);
   
}
void service_keyboard_OnHide(void) // called when this screen is hidden
{
    delLeStr(leInputBox);
}

#undef SET_LBL_STR

