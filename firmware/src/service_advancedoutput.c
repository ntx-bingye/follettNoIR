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
#include "modbus.h"
#include "app_json.h"
#include "initModbusReg.h"
#include "service_advance_output.h"


//		uint16_t Comp : 1; // toggle compressor (0=turn off, 1=turn on)
//		uint16_t AUG  : 1; // toggle gear motor (auger) (0=turn off, 1=turn on)
//		uint16_t Fan  : 1; // toggle fan (0=turn off, 1=turn on)
//		uint16_t FS   : 1; // toggle fail-safe valve (0=turn off, 1=turn on)
//		uint16_t AMB  : 1; // toggle ambient water dispense (0=turn off, 1=turn on)
//		uint16_t HoC  : 1; // toggle hot or carbonated dispense (0=turn off, 1=turn on)
//		uint16_t UV   : 1; // toggle UV light (0=turn off, 1=turn on)
//		uint16_t Ice  : 1; // toggle ice dispense motor (0=turn off, 1=turn on)
//		uint16_t PMP  : 1; // toggle hot water pump (0=turn off, 1=turn on)
//		uint16_t LCD  : 1; // toggle LV Drain
//      uint16_t HRLY : 1; // toggle Hot Relay
//      uint16_t HTNK : 1; // toggle Hot Tank
//      uint16_t VYV  : 1; // toggle Vyv
//      uint16_t REM : 3; 

leFixedString* leGearMotorValue;

//service_advancedoutput_LblGearMotorValue->fn->setString(service_advancedoutput_LblGearMotorValue, (leString*)&string_SERVICE7_OUTPUT_GearMotorValue);

#define B(n) &service_advancedoutput_BtnToggle##n
#define IMG(on_off) (leImage*)&Service_slider_##on_off
leButtonWidget** BtnToggle[13] = {
    B(2),B(1),B(3),B(4),B(5),B(10),B(7),
    B(6),B(12),B(9),B(13),B(11),B(8)
};
#undef B
void setBtnImg(leButtonWidget** btnWgt,leImage* img)
{
    (*btnWgt)->fn->setReleasedImage((*btnWgt), img);
    (*btnWgt)->fn->setPressedImage((*btnWgt), img);
}

#define SET_BTN_SCHEME(btn,scheme) service_advancedoutput_Btn##btn ->fn->setScheme(service_advancedoutput_Btn##btn, &(scheme))

#define SET_WGT_ENABLE(wgt,le_t_f) do{\
    service_advancedoutput_##wgt ->fn->setVisible(service_advancedoutput_##wgt,le_t_f);\
    service_advancedoutput_##wgt ->fn->setEnabled(service_advancedoutput_##wgt,le_t_f);\
} while(0)

void displayGearMotor(int16_t curVal,int16_t maxVal,int16_t minVal)
{
    char charVer[30];

    #define FLOAT_AMP(amp,val) float amp = ((float)(( val > 999) ? 999: val ))/100.00

    FLOAT_AMP(cur,curVal);
    FLOAT_AMP(max,maxVal);
    FLOAT_AMP(min,minVal);  
    
    #undef FLOAT_AMP

    sprintf(charVer,"%5.2f   %5.2f   %5.2f",cur,max,min);
    
    leGearMotorValue->fn->setFromCStr(leGearMotorValue,charVer);
    //leGearMotorValue->fn->setFont(leGearMotorValue,font);    
    service_advancedoutput_LblGearMotorValue->fn->
        setString(service_advancedoutput_LblGearMotorValue,(leString*)leGearMotorValue);
}


static bool autoMode = true;
static uint16_t btnStatusManual = 0;

void btnToggleOnReleased(uint8_t bit_no)
{
    if(autoMode) return;
     
    bool on = (btnStatusManual & (1 << bit_no))? true:false;
    if(bit_no == 0)
    {
        if(on)
        {
            btnStatusManual = btnStatusManual & (0xfff8);
            setBtnImg(BtnToggle[0],IMG(off));
            setBtnImg(BtnToggle[1],IMG(off));
            setBtnImg(BtnToggle[2],IMG(off));
        }
        else
        {
            btnStatusManual = btnStatusManual |(0x07);
            setBtnImg(BtnToggle[0],IMG(on));
            setBtnImg(BtnToggle[1],IMG(on));
            setBtnImg(BtnToggle[2],IMG(on));
        }
        writeAO_Wr_H_RegCmd(OUTPUT_REGISTER,btnStatusManual,modBus); //clear all the output;
        return;
    }
    
    if(on) 
    {
        setBtnImg(BtnToggle[bit_no],IMG(off));
        btnStatusManual = btnStatusManual & (~(1 << bit_no));
    }
    else
    {
        setBtnImg(BtnToggle[bit_no],IMG(on));
        btnStatusManual = btnStatusManual | (1 << bit_no);
    }

    writeAO_Wr_H_RegCmd(OUTPUT_REGISTER,btnStatusManual,modBus); //clear all the output;
    //send command 
}

void event_service_advancedoutput_BtnDown_OnReleased(leButtonWidget* btn)
{
    SET_WGT_ENABLE(PanelPage1,LE_FALSE);
    SET_WGT_ENABLE(PanelPage2,LE_TRUE);
    SET_WGT_ENABLE(LblMotortitle,LE_FALSE);
}
void event_service_advancedoutput_BtnUp_OnReleased(leButtonWidget* btn)
{
    SET_WGT_ENABLE(PanelPage1,LE_TRUE);
    SET_WGT_ENABLE(PanelPage2,LE_FALSE);
    SET_WGT_ENABLE(LblMotortitle,LE_TRUE);    
}

void event_service_advancedoutput_BtnToggle1_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(1);
}
void event_service_advancedoutput_BtnToggle2_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(0);
}
void event_service_advancedoutput_BtnToggle3_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(2);  
}
void event_service_advancedoutput_BtnToggle4_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(3);
}
void event_service_advancedoutput_BtnToggle5_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(4);
}

void event_service_advancedoutput_BtnToggle6_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(7);
}
void event_service_advancedoutput_BtnToggle7_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(6);
}
void event_service_advancedoutput_BtnToggle8_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(12);
}
void event_service_advancedoutput_BtnToggle9_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(8);
}
void event_service_advancedoutput_BtnToggle10_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(5);
}
void event_service_advancedoutput_BtnToggle11_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(11);
}
void event_service_advancedoutput_BtnToggle12_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(9);
}
void event_service_advancedoutput_BtnToggle13_OnReleased(leButtonWidget* btn)
{
    btnToggleOnReleased(10);
}


void automaticBtnAction(void)
{
    if(autoMode == false) return;
    btnStatusManual = 0;
    
   // printf("outputRegVal= %d\n",outputRegVal.w);
    for(int i = 0; i < 13; i++)
    {
        if((outputRegVal.w >> i)&(0x01)) setBtnImg(BtnToggle[i],IMG(on));
        else                             setBtnImg(BtnToggle[i],IMG(off));
    }
    
    displayGearMotor(gearCurrentRegVal,gearCurrentMaxRegVal,gearCurrentMinRegVal);
    
    SET_BTN_SCHEME(Automatic,Button_LightBlue_WhiteBorder);
    SET_BTN_SCHEME(Manual,Button_Gray2_WhiteBorder);
}


void event_service_advancedoutput_BtnAutomatic_OnReleased(leButtonWidget* btn)
{
    autoMode = true;
    automaticBtnAction();
    blockDelay(1);
    drinkType.w = (dispenseRegVal.w) & 0x7fff;
    sendDspnCmd(drinkType,modBus);    //clr CM bit
}


void event_service_advancedoutput_BtnManual_OnReleased(leButtonWidget* btn)
{
    drinkType.w = (dispenseRegVal.w) | 0x8000;
    sendDspnCmd(drinkType,modBus);    //set CM bit
    
    autoMode = false;
    btnStatusManual = 0;
    SET_BTN_SCHEME(Manual,Button_LightBlue_WhiteBorder);
    SET_BTN_SCHEME(Automatic,Button_Gray2_WhiteBorder);
    for(int i = 0; i < 13; i++) setBtnImg(BtnToggle[i],IMG(off));
    
    blockDelay(1);
    writeAO_Wr_H_RegCmd(OUTPUT_REGISTER,0,modBus); //clear all the output;
}

void service_advancedoutput_OnShow(void)
{
    newLblLeStr(&leGearMotorValue,service_advancedoutput_LblGearMotorValue,30);
    //displayGearMotor(gearCurrentRegVal,gearCurrentMaxRegVal,gearCurrentMinRegVal);
    autoMode = true;
    automaticBtnAction();
    drinkType.w = (dispenseRegVal.w) & 0x7fff;
    blockDelay(1);
    sendDspnCmd(drinkType,modBus);    //clr CM bit
}
void service_advancedoutput_OnUpdate(void)
{
        //automaticBtnAction();
}

void service_advancedoutput_OnHide(void)
{
    delLeStr(leGearMotorValue);
    drinkType.w = (dispenseRegVal.w) & 0x7fff;
    sendDspnCmd(drinkType,modBus);    //clr CM bit
}

void event_service_advancedoutput_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_service_advancedoutput_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}

#undef SET_WGT_ENABLE
#undef SET_BTN_SCHEME
#undef IMG