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
#include "app_json.h"
#include "modbus.h"

leFixedString* leModel;
leFixedString* leSerial;
leFixedString* leIMCVer;
leFixedString* leUIVer;

void event_sysinfo_BtnExit_OnReleased(leButtonWidget* btn)
{
    main_menu_pageNo = 0;
    BACK
}
void event_sysinfo_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}

//sysinfo_LblModelValue->fn->setString(sysinfo_LblModelValue, (leString*)&string_SYSINFO_Model);

#define SET_LBL_STR(lbl,str) sysinfo_Lbl##lbl##Value ->fn->setString(sysinfo_Lbl##lbl##Value,(leString*)str)

#define DBG_P printf("%s(%d)-<%s>: \n",__FILE__,__LINE__,__FUNCTION__)
void sysinfo_OnShow(void) // called when this screen is shown
{
    newLblLeStr(&leModel,   sysinfo_LblModelValue,30);
    newLblLeStr(&leSerial,  sysinfo_LblSerialValue,30);
    newLblLeStr(&leIMCVer,  sysinfo_LblIMCVersionValue,30);
    newLblLeStr(&leUIVer,   sysinfo_LblUIVersionValue ,30);
    
    int32_t infoVal;
    char* infoStr;
    infoStr = calloc(101,1);
    if(infoStr == NULL) return;
    
    
    //Model number
    if(false != readWriteValInJson(1,root,&infoVal,&infoStr,100,2,"settings","model"))
    {
        leModel->fn->setFromCStr(leModel,infoStr);
        SET_LBL_STR(Model,leModel);
    }

    //serial no
    if(false == readWriteValInJson(1,root,&infoVal,&infoStr,100,2,"settings","serial"))
    {
        leSerial->fn->setFromCStr(leSerial,infoStr);
        SET_LBL_STR(Serial,leSerial);    
    }

    // UI version

    leUIVer->fn->setFromCStr(leUIVer,UIVer);
    SET_LBL_STR(UIVersion,leUIVer);

    //IMCversion
    sprintf(infoStr,"%d",firmwareVal);
    leUIVer->fn->setFromCStr(leIMCVer,infoStr);
    SET_LBL_STR(IMCVersion,leIMCVer);

    //filter
    if(false == readWriteValInJson(1,root,&infoVal,&infoStr,100,2,"settings","water_filter_installed"))
        infoVal = 0;
    if(infoVal == 1) SET_LBL_STR(WaterFilter,&string_SYSINFO_Installed);
    else         SET_LBL_STR(WaterFilter,&string_SYSINFO_NotInstalled);

    //drain
    if(false == readWriteValInJson(1,root,&infoVal,&infoStr,100,2,"settings","drain_installed"))
        infoVal = 0;
    if(infoVal == 1) SET_LBL_STR(Drain,&string_SYSINFO_Installed);
    else         SET_LBL_STR(Drain,&string_SYSINFO_NotInstalled);

    //HotWater
    if(false == readWriteValInJson(1,root,&infoVal,&infoStr,100,2,"settings","hot_water_installed"))
        infoVal = 0;
    if(infoVal == 1) SET_LBL_STR(HotWater,&string_SYSINFO_Installed);
    else         SET_LBL_STR(HotWater,&string_SYSINFO_NotInstalled);

    //AmWater
    if(false == readWriteValInJson(1,root,&infoVal,&infoStr,100,2,"settings","ambient_water_installed"))
        infoVal = 0;
    if(infoVal == 1) SET_LBL_STR(AmWater,&string_SYSINFO_Installed);
    else         SET_LBL_STR(AmWater,&string_SYSINFO_NotInstalled);    

        
    free(infoStr);
}

void sysinfo_OnHide(void) // called when this screen is hidden
{
    delLeStr(leModel);
    delLeStr(leSerial);
    delLeStr(leIMCVer);
    delLeStr(leUIVer);
}

#undef SET_LBL_STR