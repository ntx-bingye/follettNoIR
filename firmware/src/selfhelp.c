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
#include "gfx/legato/string/legato_string.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "bsp/bsp.h"
#include "configuration.h"
#include "app.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screenStack.h"
#include "leStringPrint.h"
#include "system/fs/sys_fs.h"
#include "app_json.h"
#include "self_help.h"
#include "modbus.h"
#include "main_menu.h"

    
uint8_t selfhelp_pageNum;   
uint8_t selfhelp_BtnNum ;


int32_t amInstalled; 
int32_t hotInstalled;    
int32_t waterFilterInstalled;

void getInstalledStatus(void)
{
    char* str;
    if(false == readWriteValInJson(1,root,&amInstalled,&str,1,2,"settings","ambient_water_installed"))
        amInstalled = 0; //fail reading json, set water_filter_installed = 0
        
    if(false == readWriteValInJson(1,root,&hotInstalled,&str,1,2,"settings","hot_water_installed"))
        hotInstalled = 0; //fail reading json, set water_filter_installed = 0    
        
    if(false == readWriteValInJson(1,root,&waterFilterInstalled,&str,1,2,"settings","water_filter_installed"))
        waterFilterInstalled = 0; //fail reading json, set water_filter_installed = 0          
    
    //printf("aminstall: %ld  hotInstalled: %ld  waterFilterInstalled: %ld\n",amInstalled,hotInstalled,waterFilterInstalled);
}



#define B(item) &string_SELFHELP_##item
leString* lestringArrInit[2][4] = {
{B(Ice),           B(Water),         B(HotWater),   B(InstallRepair)  },
{B(CleanScreen),B(CleanAndSanitize), B(OnLineDocs), B(ContactService)}};
leString* lestringArr[2][4] = {
{B(Ice),           B(Water),         B(HotWater),   B(InstallRepair)  },
{B(CleanScreen),B(CleanAndSanitize), B(OnLineDocs), B(ContactService)}};
#undef B

#define S(item) screenID_selfhelp_##item
int32_t screenInit[2][4] ={
    {S(splash),S(splash),S(splash),screenID_instructStep},
    {S(cleanscreen),screenID_instructStep,S(docs),screenID_contact}};
int32_t screen[2][4] ={
    {S(splash),S(splash),S(splash),screenID_instructStep},
    {S(cleanscreen),screenID_instructStep,S(docs),screenID_contact}};
#undef S

int8_t lastPageBtnNo;
void relocateBtnStrScreen(void)
{
    for(int i = 0; i < 8; i ++)
    {
        lestringArr[i/4][i%4] = lestringArrInit[i/4][i%4];
        screen[i/4][i%4] = screenInit[i/4][i%4];
    }
    
    lastPageBtnNo = 4;
    
    
    if(waterFilterInstalled == 0)
    {
        lastPageBtnNo --;
        for(int i = 3; i < 7; i ++)
        {
            lestringArr[i/4][i%4] = lestringArr[(i+1)/4][(i+1)%4];
            screen[i/4][i%4] = screen[(i+1)/4][(i+1)%4];
        }
    }

    if(hotInstalled == 0)
    {
        lastPageBtnNo --;
        for(int i = 2; i < 7; i ++)
        {
            lestringArr[i/4][i%4] = lestringArr[(i+1)/4][(i+1)%4];
            screen[i/4][i%4] = screen[(i+1)/4][(i+1)%4];            
        }
    }

    if(amInstalled == 0)
    {
        lastPageBtnNo --;
        for(int i = 1; i < 7; i ++)
        {
            lestringArr[i/4][i%4] = lestringArr[(i+1)/4][(i+1)%4];
            screen[i/4][i%4] = screen[(i+1)/4][(i+1)%4];  
        }
    }
}

void setBtnStrFromPageNum(void)
{
    #define SET_STR(page,chn) selfhelp_Btn##chn ->fn->setString(selfhelp_Btn##chn,lestringArr[page][chn]);
    //selfhelp_Btn0->fn->setString(selfhelp_Btn0,lestringArr[0][0]);
    //printf("setBtn 1 pageNum= %d\n",selfhelp_pageNum);
    SET_STR(selfhelp_pageNum,0)
    SET_STR(selfhelp_pageNum,1)
    SET_STR(selfhelp_pageNum,2)
    SET_STR(selfhelp_pageNum,3) 
    
    #define SHOW_BTN(btn,t_f) selfhelp_Btn##btn ->fn->setVisible(selfhelp_Btn##btn,t_f);\
                          selfhelp_Btn##btn ->fn->setEnabled(selfhelp_Btn##btn,t_f)            

    SHOW_BTN(0,LE_TRUE);
    SHOW_BTN(1,LE_TRUE);
    SHOW_BTN(2,LE_TRUE);
    SHOW_BTN(3,LE_TRUE);
   
    if(selfhelp_pageNum == 1) 
    {
        switch(lastPageBtnNo)
        {
            case 1:
                SHOW_BTN(1,LE_FALSE);
                SHOW_BTN(2,LE_FALSE);                
                SHOW_BTN(3,LE_FALSE);
                break;
            case 2:
                SHOW_BTN(2,LE_FALSE);                
                SHOW_BTN(3,LE_FALSE);                
                break;
            case 3:
                SHOW_BTN(3,LE_FALSE);
                break;
            default:
                break;
        }
    }
    #undef SET_STR
}

void showPageBtn(uint8_t selfhelp_pageNum)
{
    if(selfhelp_pageNum == 0)     {SHOW_BTN(Pre,LE_FALSE);SHOW_BTN(Next,LE_TRUE);}
    else                          {SHOW_BTN(Pre,LE_TRUE); SHOW_BTN(Next,LE_FALSE);}
}
#undef SHOW_BTN

void event_selfhelp_BtnPre_OnReleased(leButtonWidget* btn)
{
    if(selfhelp_pageNum == 1) selfhelp_pageNum = 0;
    setBtnStrFromPageNum();
    showPageBtn(selfhelp_pageNum);
}
void event_selfhelp_BtnNext_OnReleased(leButtonWidget* btn)
{
    if(selfhelp_pageNum == 0) selfhelp_pageNum = 1;
    setBtnStrFromPageNum();
    showPageBtn(selfhelp_pageNum);
}

void event_selfhelp_BtnHome_OnReleased(leButtonWidget* btn)
{
    selfhelp_pageNum = 0;
    HOME
}

void event_selfhelp_BtnExit_OnReleased(leButtonWidget* btn)
{
    selfhelp_pageNum = 0;
    BACK
}

void event_selfhelp_Btn0_OnReleased(leButtonWidget* btn)
{
    selfhelp_BtnNum = 0;
    PUSH_SHOW(screen[selfhelp_pageNum][selfhelp_BtnNum]);
    return;
}

void event_selfhelp_Btn1_OnReleased(leButtonWidget* btn)
{
    selfhelp_BtnNum = 1;
    PUSH_SHOW(screen[selfhelp_pageNum][selfhelp_BtnNum]);
    return;
}

void event_selfhelp_Btn2_OnReleased(leButtonWidget* btn)
{
    selfhelp_BtnNum = 2;
    PUSH_SHOW(screen[selfhelp_pageNum][selfhelp_BtnNum]);
    return;
}

void event_selfhelp_Btn3_OnReleased(leButtonWidget* btn)
{
    selfhelp_BtnNum = 3;
    PUSH_SHOW(screen[selfhelp_pageNum][selfhelp_BtnNum]);
    return;   
}

//#define B(name) (leString*)&string_STATUS_##name
//leString* statusMode[9] = {
//    B(Standby),   B(WaterFill), B(MakingIce),
//    B(TimeDelay), B(SleepMode), B(FlushTimeDelay),
//    B(FlushSelf), B(FlushSHTL), B(Clean)
//};
//#undef B
void selfHelpMenuAlert(void)
{
    if(!IN_UI(screenID_selfhelp)) return;
    
    //mode alert
    uint8_t workMode = 0x0f & (statusRegVal.w >> 7);
    if(workMode < 9)
        selfhelp_LblActiveMode->fn->setString(selfhelp_LblActiveMode, statusMode[workMode]);


    if(((statusRegVal.w )&0x4000) != 0) 
        selfhelp_LblLowBin->fn->setVisible(selfhelp_LblLowBin,LE_FALSE);
    else
        selfhelp_LblLowBin->fn->setVisible(selfhelp_LblLowBin,LE_TRUE);

    
    if(((statusRegVal.w )&0x04) != 0) 
        selfhelp_LblLowWater->fn->setVisible(selfhelp_LblLowWater,LE_TRUE);
    else
        selfhelp_LblLowWater->fn->setVisible(selfhelp_LblLowWater,LE_FALSE);
}

void selfhelp_OnShow(void)
{
    getInstalledStatus();
    relocateBtnStrScreen();
    
    //selfhelp_pageNum = 0;
    showPageBtn(selfhelp_pageNum);
    
    setBtnStrFromPageNum();
    selfHelpMenuAlert();
}

void selfhelp_OnHide(void)
{
    //delLeStr(leTitle);
}
    
