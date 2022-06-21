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
#include "screens/start.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screenStack.h"
#include "leStringPrint.h"
#include "app_json.h"

leFixedString* leTroubleLine[4] = {NULL};

#define NEW_LBL_LE_STR newLblLeStr(&leTroubleLine[0],troubleshoot_display_LblLine0,60);\
                       newLblLeStr(&leTroubleLine[1],troubleshoot_display_LblLine1,60);\
                       newLblLeStr(&leTroubleLine[2],troubleshoot_display_LblLine2,60);\
                       newLblLeStr(&leTroubleLine[3],troubleshoot_display_LblLine3,60);


void static displayTitle(void)
{
    #define B(item) &string_TROUBLESHOOT_DISP_##item##Troubleshooting
    leString* titlStr[3] = {B(DripTray),B(LowWater),B(WaterLeak)};
    
    troubleshoot_display_LblTitle ->fn->setString(troubleshoot_display_LblTitle,titlStr[main_menu_btnNo]);
    #undef B
}


void readTroubleStr(char**str,int8_t btnNo,int8_t line)
{
    int32_t val;
    char* keyBtn[3] = {"Drip tray full","Low water","Water leak"};
    char* keyLine[4] = {"line1","line2","line3","line4"};
    
    readWriteValInJson(1,root,&val,str,100,5,"languages","english","troubleshoot",keyBtn[btnNo],keyLine[line]);
}

void troubleshoot_display_OnShow(void) // called when this screen is shown
{
    if((main_menu_pageNo != 5)||(main_menu_btnNo > 2))
    {
       BACK
    }
    displayTitle();
    NEW_LBL_LE_STR

    char* charStr = calloc(101,sizeof(char));
    if(NULL == charStr){printf("no mem\n");return;}

    for(int8_t line = 0; line < 4; line++)
    {
        readTroubleStr(&charStr,main_menu_btnNo,line);
        (leTroubleLine[line])->fn->setFromCStr(leTroubleLine[line],charStr);
    }
    
    #define SET_LINE_STR(line) troubleshoot_display_LblLine##line ->fn->setString(troubleshoot_display_LblLine##line,(leString*)(leTroubleLine[line]))
    SET_LINE_STR(0);
    SET_LINE_STR(1);
    SET_LINE_STR(2);
    SET_LINE_STR(3);    
    #undef SET_LINE_STR
    free(charStr);
}

void troubleshoot_display_OnHide(void) // called when this screen is hidden
{
    delLeStr(leTroubleLine[0]);
    delLeStr(leTroubleLine[1]);
    delLeStr(leTroubleLine[2]);
    delLeStr(leTroubleLine[3]);
}

void event_troubleshoot_display_BtnExit_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = -1;
    BACK
}
void event_troubleshoot_display_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}