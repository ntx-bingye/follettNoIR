
#include <stdbool.h>
#include "app_touchless.h"
#include "app.h"
#include "peripheral\adc\plib_adc.h"
#include "peripheral\flexcom\twi\master\plib_flexcom4_twi_master.h"
#include "timer.h"
#include "splash_utility.h"
#include "app_touchless.h"
#include "screenStack.h"
#include "app_json.h"
#include "splash_utility.h"
#include "sensor.h"
#include "packs\SAM9X60D6K_DFP\sam9x60d6k.h"

leFixedString* leText;

static uint8_t getTouchKey(void)
{
    if (ImgSqnHotW.installed == 1)
    {
        if (touchSensor[0] == 1) return 1; //ice in splash, hotwater in hotwater splash
        if (touchSensor[1] == 2) return 2; //hotwater in splash
        if (touchSensor[2] == 3) return 3; //Amwater
        return 0;
    }

    if (ImgSqnAmbW.installed == 1) {
        if (touchSensor[0] == 1) return 1; //Ice 
        if (touchSensor[2] == 2) return 3; //Amwater  
        return 0;
    }

    if ((ImgSqnIce.installed == 1) && (touchSensor[1] == 2)) return 1;
    return 0;
}

void updateText(void)
{
    char charText[200];
    int32_t sensorID = getTouchKey();
    if(0 == sensorID)
        sprintf(charText,"%6d%26d%26d\nNo sensor is pressed",touchLessCfg[11],
                touchLessCfg[13],touchLessCfg[15]);
    else
        sprintf(charText,"%6d%26d%26d\nSensor%d is pressed",touchLessCfg[11],
            touchLessCfg[13],touchLessCfg[15],sensorID);
    
    //printf("%s",charText);
    leText->fn->setFromCStr(leText,charText);
    Sensor_LblDisplay->fn->setString(Sensor_LblDisplay,(leString*)leText);
}


void sensorInterval(uint8_t UpDown,uint8_t sensorNo )
{
    int32_t val;
    val = touchLessCfg[11+sensorNo*2];  
    
    if(UpDown == 0)    val = (val < 255)?(val+1):255;//Up
    else               val = (val > 0 )?(val-1):0 ;//down
 
    touchLessCfg[11+sensorNo*2] = val;
    //sentTouchCfgCount = 0;    
    //FLEXCOM4_TWI_Write(I2C_ADDR_TOUCHLESS, &touchLessCfg[sentTouchCfgCount++], 1);
    updateText();
}

void event_Sensor_BtnUp1_OnReleased(leButtonWidget* btn)
{
    sensorInterval(0,0 );
}
void event_Sensor_BtnDown1_OnReleased(leButtonWidget* btn)
{
    sensorInterval(1,0 );
}
void event_Sensor_BtnUp2_OnReleased(leButtonWidget* btn)
{
    sensorInterval(0,1 );
}
void event_Sensor_BtnDown2_OnReleased(leButtonWidget* btn)
{
    sensorInterval(1,1 );
}
void event_Sensor_BtnUp3_OnReleased(leButtonWidget* btn)
{
    sensorInterval(0,2 );
}
void event_Sensor_BtnDown3_OnReleased(leButtonWidget* btn)
{
    sensorInterval(1,2 );
}

void event_Sensor_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_Sensor_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}

void event_Sensor_BtnSave_OnReleased(leButtonWidget* btn)
{
    char* strtemp;
    int32_t sen1 =(int32_t) touchLessCfg[11];
    int32_t sen2 =(int32_t) touchLessCfg[13];
    int32_t sen3 =(int32_t) touchLessCfg[15];    
    readWriteValInJson(0,settingRoot,&sen1,&strtemp,1,1,"sensor1"); //write to json     
    readWriteValInJson(0,settingRoot,&sen2,&strtemp,1,1,"sensor2");
    readWriteValInJson(0,settingRoot,&sen3,&strtemp,1,1,"sensor3");
    saveSettingJsonToDev(&sst,SETTING_FILE,settingRoot);
}

//extern bool stopClrWDT;
void event_Sensor_BtnRstUI_OnReleased(leButtonWidget* btn)
{
    RSTC_REGS->RSTC_CR = RSTC_CR_KEY_PASSWD | RSTC_CR_PROCRST_Msk;
}


//uint8_t touchLessCfg[20] ={
//    0xC1, 0x00, // Digital Gain -- 1
//    0xC2, 0x05, // Analog Gain -- 16
//    0xC3, 0x03, // Pre Scaler --16
//    0xC4, 0x06, // Filter -- 64
//    0xC5, 0x00, // Hys -- 50
//    0xC6, 0x20, // Threshold 1
//    0xC7, 0x35, // Threshold 2
//    0xC8, 0x20,  // Threshold 3
//    0xC9, 0x00,  // Extra 3
//    0xD1, 0x00  // Extra 3
//};

#define HIDE_SENSOR(chn) Sensor_PnlSensor##chn ->fn->setVisible(Sensor_PnlSensor##chn,LE_FALSE)

void Sensor_OnShow(void) // called when this screen is shown
{
    newLblLeStr(&leText,Sensor_LblDisplay,200);
//    if((ImgSqnHotW.installed == 0)&&(ImgSqnAmbW.installed == 0))
//    {
//        HIDE_SENSOR(1);
//        HIDE_SENSOR(3);
//    }
//    if((ImgSqnHotW.installed == 0)&&(ImgSqnAmbW.installed == 1))
//    {
//        HIDE_SENSOR(2);
//    }
        
    updateText();
}
void Sensor_OnHide(void) // called when this screen is hidden
{
    delLeStr(leText);
}