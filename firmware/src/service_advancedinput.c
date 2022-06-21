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
#include "leStringPrint.h"
#include "modbus.h"

leFixedString* leGearMotorCurrent;
leFixedString* lePMRequiredIn;
leFixedString* leFilterChangeRequiredIn;
leFixedString* leHotWaterTmp;

#define B(name) (leString*)&string_SERVICE7_INPUT_##name
//IM[3..0] 0-8 
leString* sysMode[9] = { 
    B(STANDBY),   B(WATERFILL), B(MakingIce),
    B(TimeDelay), B(SleepMode), B(FLUSH_TIMEDELAY),
    B(FLUSH_SELF),B(FLUSH_SHTL),B(Clean)
};

leString* waterQuality[2] = { B(Low),B(High)};
#undef B

#define B(name) (leString*)&string_SERVICE7_INPUT_Error##name
leString* errStatus[8] = { 
    B(AmpLow),    B(AmpHigh),     B(LowWater), B(CallForWater),
    B(WaterLeak), B(HighPressure),B(DrainClog),B(None)
};
#undef B
       
#define SET_STR(lbl,leStr) service_advancedinput_##lbl ->fn->setString(service_advancedinput_##lbl,leStr) 
void displaySysMode(void)
{
    static uint16_t preVal = 0;
    uint16_t val = 0x0f &((statusRegVal.w)>>7);
    //printf("satus= %d\n",statusRegVal.w);
    //printf("val = %d\n",val);
    if(preVal != val)
    {
        preVal = val;   
        if(val > 8) val = 0;
    
        SET_STR(LblActiveModeVal,sysMode[val]);
    }
}

void displayErrStatus(void)
{
    static uint16_t preVal = 0;
    uint16_t val = 0x7f&(statusRegVal.w);
    uint8_t i;
    if(preVal != val)
    {
        preVal = val;   
        for(i = 0; i < 7; i++)
        {
            if((val >> i) &0x01) break;
        }
        SET_STR(LblActiveModeVal,errStatus[i]);
    }
}

void displayGearMotorCurrent(void)
{
    static uint16_t preVal = 0;
    int16_t val = (gearCurrentRegVal > 999)? 999:gearCurrentRegVal;
    if(preVal != val)
    {
        preVal = val;    
        float cur = ((float)val)/100.0;
        char charStr[10];
        sprintf(charStr,"%5.2fA",cur);
        leGearMotorCurrent->fn->setFromCStr(leGearMotorCurrent,charStr);
        SET_STR(lblGearMotorCurrentVal,(leString*)leGearMotorCurrent);
    }
}

void displayWaterQuality(void)
{
    static uint8_t preVal = 185;
    char charhotWaterTem[10];
    //uint16_t val = (((settingRegVal.w) & 0x01) == 0)? 0:1;
    uint8_t val = (uint8_t)hotWaterTempRegVal;
    if(preVal != val)
    {
        sprintf(charhotWaterTem,"%d°F",val);
        leHotWaterTmp->fn->setFromCStr(leHotWaterTmp,charhotWaterTem);
        SET_STR(LblWaterQualityVal,(leString*)leHotWaterTmp);
    }
}

void displayFilterChangeRequireIn(void)
{
    //setting value - lapse days
    static int16_t preVal = -1;
    
    int16_t filterDue = 30*((int16_t)((settingRegVal.w) >> 8)&0x0f) -(int16_t)filterDueRegVal ;
    printf("settingRegVal.w= %d filterDueRegVal=%d filterDue=%d ",settingRegVal.w,filterDueRegVal,filterDue);
  
    filterDue = (filterDue >= 0)?filterDue:0;
    
    if(preVal != filterDue)
    {
        preVal = filterDue;
        char charStr[10];
        sprintf(charStr,"%d days",filterDue);
        leFilterChangeRequiredIn->fn->setFromCStr(leFilterChangeRequiredIn,charStr);
        SET_STR(LblFilterChangeRequiredInVal,(leString*)leFilterChangeRequiredIn);
    }
}

void displayPMrequireIn(void)
{    //setting value - lapse days
    static int16_t preVal = -1;
    int16_t PM_Due = 30*((int16_t)((settingRegVal.w) >> 12)&0x0f) - (int16_t)pmDueRegVal ;
    PM_Due = (PM_Due >= 0)?PM_Due:0;
    if(preVal != PM_Due)
    {
        preVal = PM_Due;
        char charStr[10];
        sprintf(charStr,"%d days",PM_Due);
        lePMRequiredIn->fn->setFromCStr(lePMRequiredIn,charStr);
        SET_STR(LblPMRequiredInVal,(leString*)lePMRequiredIn);
    }
}

#define B(name) &service_advancedinput_Img##name
leImageWidget** imgWgtArr[6] = 
{
    B(HighWaterSensor),   B(LowWaterSensor), B(DripTrayFull),
    B(ChassisWaterSensor),B(HotWaterSensorH),B(HotWaterSensorL)
};
#undef B

//service_advancedinput_ImgHotWaterSensorH->fn->setImage(service_advancedinput_ImgHotWaterSensorH, (leImage*)&Menu_uncheck);

leImage* imgArr[2] = {(leImage*)&Menu_uncheck,(leImage*)&Menu_check};

void setSensor(leImageWidget** imgWgt,leImage* img)
{
    (*imgWgt)->fn->setImage((*imgWgt), img);
}
        
void refreshSensor(void)
{
    uint16_t val = sensorRegVal.w;
    for(uint8_t i = 0; i < 6; i++)
    {
        if(0x01 &(val >> i)) 
            setSensor(imgWgtArr[i],(leImage*)&Menu_check);
        else
            setSensor(imgWgtArr[i],(leImage*)&Menu_uncheck);
    }
}

#define SET_WGT_ENABLE(wgt,le_t_f) do{\
    service_advancedinput_##wgt ->fn->setVisible(service_advancedinput_##wgt,le_t_f);\
    service_advancedinput_##wgt ->fn->setEnabled(service_advancedinput_##wgt,le_t_f);\
} while(0)

void event_service_advancedinput_BtnPre_OnReleased(leButtonWidget* btn)
{
    SET_WGT_ENABLE(PanelPage1,LE_TRUE);
    SET_WGT_ENABLE(PanelPage2,LE_FALSE);
}
void event_service_advancedinput_BtnNext_OnReleased(leButtonWidget* btn)
{
    SET_WGT_ENABLE(PanelPage1,LE_FALSE);
    SET_WGT_ENABLE(PanelPage2,LE_TRUE);
}

void event_service_advancedinput_BnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_service_advancedinput_BnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}

void service_advancedinput_OnHide(void)
{
    delLeStr(leGearMotorCurrent);
    delLeStr(lePMRequiredIn);
    delLeStr(leFilterChangeRequiredIn);
    delLeStr(leHotWaterTmp);    
}
void service_advancedinput_OnShow(void)
{
    SET_WGT_ENABLE(PanelPage1,LE_TRUE);
    SET_WGT_ENABLE(PanelPage2,LE_FALSE);

    newLblLeStr(&leGearMotorCurrent,service_advancedinput_lblGearMotorCurrentVal,20);
    newLblLeStr(&lePMRequiredIn, service_advancedinput_LblPMRequiredInVal,20);
    newLblLeStr(&leFilterChangeRequiredIn, service_advancedinput_LblFilterChangeRequiredInVal,20);
    newLblLeStr(&leHotWaterTmp,service_advancedinput_LblWaterQualityVal,10);
    
   
    displayWaterQuality();
    displayPMrequireIn();
    displayFilterChangeRequireIn();
    displayGearMotorCurrent();
    displayErrStatus();
    displaySysMode();
    refreshSensor();
}

void service_advancedinput_OnUpdate(void)
{
    displayGearMotorCurrent();
    displayErrStatus();
    displaySysMode();
    refreshSensor();
}
    
#undef SET_WGT_ENABLE
#undef SET_STR