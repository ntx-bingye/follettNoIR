#include "modbus.h"
#include "initModbusReg.h"
#include "app_json.h"
#include "app_touchless.h"
#include "peripheral/pwm/plib_pwm.h"
#include "peripheral\lcdc\plib_lcdc.h"
#include "timer.h"

uint16_t NO_CUP_THRESHOLD;

void initLcdBrightness(void)
{
    int32_t val = readSetValFromCfgJson("display_brightness",80);
    uint32_t setting_bright = 7 + val*0.6;
    LCDC_SetPWMCompareValue((uint32_t)(setting_bright)); 
}

void initControlReg(void)
{
    int32_t water,hotwater,dt;
    dispenseRegVal.w = 0;
    water = readSetValFromCfgJson("ambient_water_installed",0);
    hotwater = readSetValFromCfgJson("hot_water_installed",0);
    dt = readSetValFromCfgJson("drain_installed",0);

    dispenseRegVal.w = (dispenseRegVal.w) | (dt <<12);
    if(water == 0)         dispenseRegVal.w = (dispenseRegVal.w) |(1<<13);
    else if(hotwater == 0) dispenseRegVal.w = (dispenseRegVal.w) |(1<<14);
    else                   dispenseRegVal.w = (dispenseRegVal.w) |(1<<14)|(1<<13);

    drinkType.w = dispenseRegVal.w;
    printf("control reg= %x\n",drinkType.w);
    sendDspnCmd(drinkType,modBus); 
}

void initSettingReg(void)
{
    int32_t pmInterval,filterInterval,timeDelay,tds;
    settingRegVal.w = 0;
    tds = readSetValFromSettingJson("water_quality",0);;
    pmInterval = readSetValFromSettingJson("pm_cleaning_interval",6);
    filterInterval = readSetValFromSettingJson("filter_replace_interval",6);
    
    timeDelay = readSetValFromSettingJson("Time delay",0);
    tds = tds & 0x01;
    pmInterval = pmInterval & 0x0f;
    filterInterval = filterInterval & 0x0f;
    timeDelay = timeDelay & 0x01;

    settingRegVal.w = (settingRegVal.w) | (pmInterval <<12);
    settingRegVal.w = (settingRegVal.w) | (filterInterval << 8);
    settingRegVal.w = (settingRegVal.w) | (timeDelay << 1);
    settingRegVal.w = (settingRegVal.w) |  tds;
    
    writeAO_Wr_H_RegCmd(SETTINGS_REGISTER,settingRegVal.w,modBus);
}

void initSleepReg(void)  
{
    uint16_t sleepTime = 0;
    sleepTime = readSetValFromSettingJson("sleep_mode",12);
    writeAO_Wr_H_RegCmd(SLEEP_TIME_REGISTER,sleepTime,modBus);
}

void initAwake(void)
{
    uint16_t awakeTime = 0;
    awakeTime = readSetValFromSettingJson("wake_on_dispense",35);
    writeAO_Wr_H_RegCmd(ICE_DISP_TIME_REGISTER,awakeTime,modBus);
}

void initHotTemp(void)
{
    uint16_t hotTemp = 0;
    hotTemp = readSetValFromSettingJson("hot_water_setting",180);
    writeAO_Wr_H_RegCmd(HOT_WATER_SET_REGISTER,hotTemp,modBus);    
}

void initCupSense(void)
{
    int32_t cupSense = 0;
    cupSense = readSetValFromSettingJson("Cup sense",381);
    printf("cupSense read from setting %ld\n",cupSense);
    //if((cupSense < 20) ||(cupSense > 4096)) cupSense = 381;
    NO_CUP_THRESHOLD =(uint16_t)cupSense;
}

static void swDelayUs(uint32_t delay)
{
    uint32_t i, count;

    /* delay * (CPU_FREQ/1000000) / 6 */
    count = delay *  (600000000/1000000)/6;

    /* 6 CPU cycles per iteration */
    for (i = 0; i < count; i++)
        __NOP();
}

void blockDelay(uint8_t ms)
{
    swDelayUs(100000);
}


void sendInitToMachine(void)
{
    initControlReg();
    blockDelay(1);
    initCupSense();    //use to delay, for baudrate 19200,too slow.
    initSettingReg();
    blockDelay(1);
    initSleepReg(); 
    blockDelay(1);
    initAwake();
    blockDelay(1);
    initHotTemp();
    blockDelay(1);    
}




