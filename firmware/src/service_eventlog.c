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
#include "modbus.h"
#include "eventlog.h"
#include "timer.h"

leFixedString* leEveName[12];
leFixedString* leTime[12];
void displayEve(void);

eveLog_t noEveVa = {"No event",-1,-1};
#define noEve {"No event",-1,-1}

eveLog_t memLogFile[25] = {
 noEve,noEve,noEve,noEve,noEve,noEve,noEve,noEve,noEve,noEve,noEve,noEve,
 {"AmpLow",-1,-1},      {"AmpHigh",-1,-1},     {"HighPressure",-1,-1}, {"DrainClog",-1,-1},
 {"DripTrayFull",-1,-1}, {"HighWater",-1,-1},   {"LowWater",-1,-1},     {"WaterLeak",-1,-1},
 {"HotHighWater",-1,-1},{"HotLowWater",-1,-1},  {"Filter Due", -1,-1,},{"PM due",-1,-1},  
 {"count32",0,-1}   
};

bool setDefultLog(void)
{
    for(int i = 0; i < 24; ++i)
    {
        if(i < 12) memcpy(&memLogFile[i],&noEveVa,sizeof(eveLog_t));
        else memLogFile[i].startTime = memLogFile[i].endTime = -1;
    }
    
    if(writeBinFromMemtoDrv(&sst,LOG_FILE, memLogFile,25*sizeof(eveLog_t))) printf("save log default\n");
    return true;
}
void event_service_eventlog_BtnExit_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = -1;
    BACK
}
void event_service_eventlog_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}

void event_service_eventlog_BtnClear_OnReleased(leButtonWidget* btn)
{
    setDefultLog(); displayEve();
}

#define ENABLE_PAGE(chn,t_f) service_eventlog_PanelPage##chn ->fn->setVisible(service_eventlog_PanelPage##chn,t_f);\
                             service_eventlog_PanelPage##chn ->fn->setEnabled(service_eventlog_PanelPage##chn,t_f)

void event_service_eventlog_BtnDown_OnReleased(leButtonWidget* btn)
{
    ENABLE_PAGE(1,LE_FALSE);
    ENABLE_PAGE(2,LE_TRUE);
}
void event_service_eventlog_BtnUp_OnReleased(leButtonWidget* btn)
{
    ENABLE_PAGE(2,LE_FALSE);
    ENABLE_PAGE(1,LE_TRUE);
}

#undef ENABLE_PAGE

void initLogEvent(void)
{
    uint32_t LogFileSize;
    if((!readBinFromDrvToMem(&sst,LOG_FILE, &memLogFile,&LogFileSize))||
       (LogFileSize != 25*sizeof(eveLog_t)))
    { DBG_P;    setDefultLog();}
    count32 = memLogFile[24].startTime;
}
#define B(name) &service_eventlog_Lbl##name
leLabelWidget** eWgtName[12] = {
        B(Event1),B(Event2),B(Event3),B(Event4), B(Event5), B(Event6),
        B(Event7),B(Event8),B(Event9),B(Event10),B(Event11),B(Event12)
    };
leLabelWidget** eWgtTime[12] = {
        B(Time1),B(Time2),B(Time3),B(Time4), B(Time5), B(Time6),
        B(Time7),B(Time8),B(Time9),B(Time10),B(Time11),B(Time12)
    };
#undef B

void count2hhmm(uint32_t total,uint32_t* hour,uint8_t* minute,uint8_t* second)
{
    uint32_t total_sec = (count32 < total)?
             (0xffffffff - total +count32):(count32-total);
    total_sec = total_sec/10;
    *second = total_sec%60;
    *minute = (total_sec/60)%60;
    *hour = total_sec/3600;
}
void displayEve(void)
{
    if(!IN_UI(screenID_service_eventlog))return;
    uint32_t hour_s,  hour_e;
    uint8_t  minute_s,mintue_e;
    uint8_t  second_s,second_e;
    char charTime[40];
    uint8_t i;
    for(i = 0; i < 12; ++i)    
    {
        if((0 == strcmp(memLogFile[i].name,"No event"))||
           (-1 == memLogFile[i].startTime))
        {
            memcpy(&memLogFile[i],&noEveVa,sizeof(eveLog_t));
            if(i == 0)
                leEveName[i]->fn->setFromCStr(leEveName[i], "No event");
            else
                leEveName[i]->fn->setFromCStr(leEveName[i], " ");
            leTime[i]->fn->setFromCStr(leTime[i]," ");
            (*(eWgtName[i]))->fn->setString(*(eWgtName[i]),(leString*)leEveName[i]);
            (*(eWgtTime[i]))->fn->setString(*(eWgtTime[i]),(leString*)leTime[i]);
            continue;
        }
            
        count2hhmm(memLogFile[i].startTime,&hour_s,&minute_s,&second_s);
        if(-1 == memLogFile[i].endTime)
            sprintf(charTime,"%6luh:%2um ago",hour_s,minute_s);
        else
        {
           count2hhmm(memLogFile[i].endTime,&hour_e,&mintue_e,&second_e); 
           sprintf(charTime,"%6luh:%2um ago%12luh:%2um ago",
                   hour_s,minute_s,hour_e,mintue_e);
        }
        leEveName[i]->fn->setFromCStr(leEveName[i], memLogFile[i].name);
        (*(eWgtName[i]))->fn->setString(*(eWgtName[i]),(leString*)leEveName[i]);
        
        leTime[i]->fn->setFromCStr(leTime[i],charTime);
        (*(eWgtTime[i]))->fn->setString(*(eWgtTime[i]),(leString*)leTime[i]);
    }
}

void initLeEve(void)
{
    for(uint8_t i = 0; i < 12; ++i)
    {
        newLblLeStr(&leEveName[i],*eWgtName[i],15);
        newLblLeStr(&leTime[i],*eWgtTime[i],40);
    }
}
void service_eventlog_OnShow(void)
{
    initLeEve();
    displayEve();
}
void service_eventlog_OnHide(void)
{
    for(uint8_t i = 0; i < 12; ++i)
    {
        delLeStr(leEveName[i]);
        delLeStr(leTime[i]);
    }
}

void insertEve(eveLog_t eveLog)
{
    uint8_t i;
    uint8_t j;
    if(-1 == eveLog.endTime)
        i = 11;
    else
    {
        for(i = 0; i < 12; ++i)
        {
            if((0 == strcmp(eveLog.name,memLogFile[i].name))&&
               (-1 == memLogFile[i].endTime ))
            break;
        }
    }
    
    
    if(i == 1) {memcpy(&memLogFile[0],&eveLog,sizeof(eveLog_t));return;}
    
    for(j = i; j > 0; --j)
    {
        memcpy(&memLogFile[j],&memLogFile[j-1],sizeof(eveLog_t));
    }
    memcpy(&memLogFile[0],&eveLog,sizeof(eveLog_t));
}

//Drip tray full,Default Factory reset, High Amps, Low Amps,
//Low water, Making ice, PM Completed,  Sleep mode, Time Delay, Water Leak

#define EVE_OCCUR(n) (memLogFile[n+12].startTime == -1) && (alm[n])
#define EVE_DISAPPEAR(n) (memLogFile[n+12].startTime != -1) && (alm[n]==0)

int16_t filterDue = 100;
int16_t PM_Due = 100;
void updateEveLog(void)
{
    uint16_t SR = statusRegVal.w;
    uint16_t SE = sensorRegVal.w;
    //printf("SR = %04x, SE = %04x",statusRegVal.w,sensorRegVal.w);
    uint16_t alm[12];
    {alm[0] = SR&0x01;  alm[1] = SR&0x02;alm[2] = SR&0x20; alm[3] = SR&0x40;
     alm[4] = SR&0x0800;alm[5] = SE&0x01;alm[6] = SE&0x02; alm[7] = SE&0x08;  
     alm[8] = SE&0x10;  alm[9] = SE&0x20;alm[10] = (filterDue > 0)?0:1;
     alm[11] = (PM_Due > 0)?0:1; 
    }

    static bool needSave = false;
    static bool needDisplay = false;

    eveLog_t eveTmp;

    for(int8_t i = 0; i < 12; i++)
    {
        if(EVE_OCCUR(i))
        {
            //printf("occur\n");

            memLogFile[12+i].startTime = count32;
            memLogFile[12+i].endTime   = -1;
            memcpy(&eveTmp,&memLogFile[12+i],sizeof(eveLog_t));
            insertEve(eveTmp);
            needDisplay = true;
            needSave = true;
        }
        if(EVE_DISAPPEAR(i))
        {
            //printf("disapper\n");
            memcpy(&eveTmp,&memLogFile[12+i],sizeof(eveLog_t));
            eveTmp.endTime = count32;
            memLogFile[12+i].startTime = -1;
            memLogFile[12+i].endTime = -1;
            insertEve(eveTmp);
            needDisplay = true;
            needSave = true;
        }
    }
    //if(needDisplay) {needDisplay = false;displayEve();}
    displayEve();
    if((count32%600 == 4)&&(needSave))
    {
        needSave =false;
        
        memLogFile[24].startTime = count32;
        writeBinFromMemtoDrv(&sst,LOG_FILE, memLogFile,25*sizeof(eveLog_t));
    }
}

#undef EVE_OCCUR
#undef EVE_DISAPPEAR
#undef noEve

        
