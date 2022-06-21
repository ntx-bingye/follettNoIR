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
#include "peripheral/pwm/plib_pwm.h"
#include "screenStack.h"
#include "leStringPrint.h"
#include "system/fs/sys_fs.h"
#include "app.h"
#include "cJSON.h"
#include "app_file.h"
#include "app_json.h"


void event_selfhelp_display_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_selfhelp_display_BtnContactService_OnReleased(leButtonWidget* btn)
{
    PUSH_SHOW(screenID_contact)
}
void event_selfhelp_display_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}


static void displayTitle(void)
{
    #define B(item) &string_SELFHELP##item
    leString* titlStr[4] = {B(2_IceTroubleshooting),B(1_WaterTroubleshooting),
                            B(4_HotWaterTroubleshooting),B(3_SparklingTroubleshooting)};
    selfhelp_display_LblTitle ->fn->setString(selfhelp_display_LblTitle,titlStr[selfhelp_BtnNum]);
    #undef B
}

leFixedString* leLine[5] = {NULL};
#define NEW_LBL_LE_STR newLblLeStr(&leLine[0],selfhelp_display_LblLine0,100);\
                       newLblLeStr(&leLine[1],selfhelp_display_LblLine1,100);\
                       newLblLeStr(&leLine[2],selfhelp_display_LblLine2,100);\
                       newLblLeStr(&leLine[3],selfhelp_display_LblLine3,100);\
                       newLblLeStr(&leLine[4],selfhelp_display_LblLine4,100);


#define MAX_LE_SIZE 101
//jsonLevel is the string in json embeded level, ... is item name in json,
//for example, the name for serice, level = 4, 
//... is "languages","english","service","name"
#define KEY(i,s) strcpy(key[i],#s)

static void setLabelWgtStr(leLabelWidget* lblWgt,leFixedString** leStr,char** key)
{
    newLblLeStr(leStr,lblWgt,MAX_LE_SIZE);
    char* sLeChar = calloc(MAX_LE_SIZE,1);
        
    int32_t val;
    readWriteValInJson(READ,root,&val,&sLeChar,100,8,key[0],key[1],key[2],key[3],key[4],key[5],key[6],key[7]);
    printf("help: %s\n",sLeChar);
    (*leStr)->fn->setFromCStr((*leStr),sLeChar);
    lblWgt->fn->setString(lblWgt, (leString*)(*leStr));
    free(sLeChar);
}

static void setBtnWgtStr(leButtonWidget* BtnWgt,leFixedString** leStr,char** key)
{
    newBtnLeStr(leStr,BtnWgt,MAX_LE_SIZE);
    char* sLeChar = calloc(MAX_LE_SIZE,1);
    //strcpy(sLeChar,"   ");    
    int32_t val;
    readWriteValInJson(READ,root,&val,&sLeChar,100,8,key[0],key[1],key[2],key[3],key[4],key[5],key[6],key[7]);
    printf("help: %s\n",sLeChar);
    (*leStr)->fn->setFromCStr((*leStr),sLeChar);
    BtnWgt->fn->setString(BtnWgt, (leString*)(*leStr));
    free(sLeChar);
}

#define INIT_KEY0_4 {\
    \
    char* Page[4] = {"Ice","Water","Hot water","Sparkling water"};\
    key[3] = calloc(40,1);\
    strcpy(key[3],Page[selfhelp_BtnNum]);\
    \
    char* splash_Btn[4][4] = {\
        {"No ice","Off-looking or off-tasting ice","Soft ice"," \0"},\
        {"No Water","Low water flow","Warm water","Off-looking or off-tasting water"},\
        {"No Water","No hot water"," \0"," \0"},\
        {"No sparkling water","Water not chilled","Water not carbonated"," \0"}\
    };\
    key[4] = calloc(100,1);\
    strcpy(key[4],splash_Btn[selfhelp_BtnNum][selfhelp_splash_BtnNo]); \
}

void selfhelp_display_OnShow(void)
{
    displayTitle();
    
    char* key[8] = {"languages","english","self_help"};\
    INIT_KEY0_4
    key[6] = calloc(10,1);
    key[7] = calloc(10,1);    
    strcpy(key[6],"\0");
    strcpy(key[7],"\0");    
    key[5] = calloc(10,1);
    
    //line1
    strcpy(key[5],"line1");
    setLabelWgtStr(selfhelp_display_LblLine0,&leLine[0],key);

    strcpy(key[5],"line2");
    setLabelWgtStr(selfhelp_display_LblLine1,&leLine[1],key);

    strcpy(key[5],"line3");
    setLabelWgtStr(selfhelp_display_LblLine2,&leLine[2],key);
    
    strcpy(key[5],"line4");
    setLabelWgtStr(selfhelp_display_LblLine3,&leLine[3],key);

    strcpy(key[5],"line5");
    setLabelWgtStr(selfhelp_display_LblLine4,&leLine[4],key);    
    free(key[3]);
    free(key[4]);
    free(key[5]);
    free(key[6]);
    free(key[7]);
}

void selfhelp_display_OnHide(void)
{
    delLeStr(leLine[0]);
    delLeStr(leLine[1]);
    delLeStr(leLine[2]);
    delLeStr(leLine[3]);
    delLeStr(leLine[4]);    
}

#undef INIT_KEY0_4
#undef KEY
#undef NEW_LBL_LE_STR