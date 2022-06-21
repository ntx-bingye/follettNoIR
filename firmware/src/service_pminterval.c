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

leFixedString* leInterval;
int32_t Interval = 0;

void displayInterval(int32_t Interval);

void event_service_pminterval_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_service_pminterval_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}


void event_service_pminterval_BtnRight_OnReleased(leButtonWidget* btn)
{
    char* str;
    if(Interval >= 12) 
        Interval = 12;
    else 
    {
        Interval ++;
        displayInterval(Interval);
        if((getPreScreen() == screenID_main_menu) && (main_menu_btnNo == 3))
            readWriteValInJson(0,root,&Interval,&str,2,"settings","pm_cleaning_interval");
        else
            readWriteValInJson(0,root,&Interval,&str,2,"settings","filter_replace_interval");
    }
}

void event_service_pminterval_BtnLeft_OnReleased(leButtonWidget* btn)
{
    char* str;
    if(Interval <= 0) 
        Interval = 0;
    else
    {
        Interval --;
        displayInterval(Interval);
        if((getPreScreen() == screenID_main_menu) && (main_menu_btnNo == 3))
            readWriteValInJson(0,root,&Interval,&str,2,"settings","pm_cleaning_interval");
        else
            readWriteValInJson(0,root,&Interval,&str,2,"settings","filter_replace_interval");
    }
}

#define SET_LBL_STR(lbl,str) service_pminterval_##lbl ->fn->setString(service_pminterval_##lbl,(leString*)(str))
#define SHOW_IMG(img,le_f_t) service_pminterval_##img ->fn->setVisible(service_pminterval_##img,le_f_t)


void displayInterval(int32_t Interval)
{
    if(Interval == 0) 
    {
        SHOW_IMG(ImgCancel,LE_TRUE);
        SET_LBL_STR(LblPMIntervalValue,&string_SERVICE4_PMIntervalValue);
    }
    else
    {
        SHOW_IMG(ImgCancel,LE_FALSE);
        char charVer[10] = {"\0"};
        sprintf(charVer,"%ld",Interval);
    
        leInterval->fn->setFromCStr(leInterval,charVer);
        SET_LBL_STR(LblPMIntervalValue,leInterval);
    }
}

void service_pminterval_OnShow(void)
{
    newLblLeStr(&leInterval,service_pminterval_LblPMIntervalValue,10);
    char* str;
    if((getPreScreen() == screenID_main_menu) && (main_menu_btnNo == 2))
    {
        readWriteValInJson(1,root,&Interval,&str,2,"settings","pm_cleaning_interval");
        SET_LBL_STR(LblTitle,&string_SERVICE4_PMInterval);
    }
    else if((getPreScreen() == screenID_main_menu) && (main_menu_btnNo == 2))
    {
        readWriteValInJson(1,root,&Interval,&str,2,"settings","filter_replace_interval");
        SET_LBL_STR(LblTitle,&string_SERVICE5_FilterInterval);
    }
    
    displayInterval(Interval);
}
void service_pminterval_OnHide(void)
{
    saveJsonChangeToDev(&sst,CONFIG_FILE,root);
    delLeStr(leInterval);
}
