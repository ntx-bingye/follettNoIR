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
#include "timer.h"
#include "app_json.h"
#include "modbus.h"
#include "app_touchless.h"
#include "peripheral/pwm/plib_pwm.h"
#include "peripheral\lcdc\plib_lcdc.h"
#include "app_touchless.h"
#include "main_menu.h"

//0 is main_menu,clear all submenu, 
//1-5 is for maintenance,operaton setting,
//service,system information,trouble page.

static uint32_t tmpUnit;
static uint32_t tmpFval;
static uint32_t tmpCval;

leFixedString* leInteralVal;
leFixedString* leSensor;

int8_t main_menu_pageNo = 0;
int8_t main_menu_btnNo = -1;

void menu_main_clr_screen(void);

//temp table
int c2f[]={100, 102, 104, 105, 107, 109, 111, 113, 114, 116, 118, 120, 122, 123, 125, 127, 129, 131, 132, 134, 136, 138, 140, 141, 143, 145, 147, 149, 150, 152, 154, 156, 158, 159, 161, 163, 165, 167, 168, 170, 172, 174, 176, 177, 179, 181, 183,185};
int f2c[]={38, 38, 38, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 45, 45, 46, 46, 47, 47, 48, 48, 49, 50, 50, 51, 51, 52, 52, 53, 53, 54, 55, 55, 56, 56, 57, 57, 58, 58, 59, 60, 60, 61, 61, 62, 62, 63, 63, 64, 65, 65, 66, 66, 67, 67, 68, 68, 69, 70, 70, 71, 71, 72, 72, 73, 73, 74, 75, 75, 76, 76, 77, 77, 78, 78, 79, 80, 80, 81, 81, 82, 82, 83, 83, 84,85};

//PAGE_NO :
//0 is main_menu,clear all submenu, 
//1-5 is for maintenance,operaton setting,
//service,system information,trouble page.

//BTN_NO is for btn0-5 sub button.

#define PAGE_NO 6
#define BTN_NO  6

#define M(str) &string_MAINTENANCE_##str
#define O(str) &string_OPSETTING_##str
#define S(str) &string_SERVICE_##str
#define T(str) &string_TROUBLESHOOT_##str
leTableString* subMenuLeStr[PAGE_NO][BTN_NO] = {
{M(CLEANSCREEN_CleanScreen),M(SANITIZE_CleanAndSanitize),M(CLEAR_SANITIZE_INTERVAL),M(FILTER_ReplaceFilter),M(FILTER_INTERVAL),M(FILTER_INTERVAL)},
{O(LANGUAGE_Language),O(LANGUAGE_Language), O(BRIGHTNESS_Brightness),O(HOTWATER_HotWater),O(HOTWATER_HotWater),O(HOTWATER_HotWater)},
//{S(MENU_TimeDelay),S(CUP_SENSE),S(MENU_Advanced),S(ScreenLock),S(GearMotorGraph),S(SoftwareReset)},
{S(MENU_TimeDelay),S(MENU_Advanced),S(ScreenLock),S(GearMotorGraph),S(SoftwareReset),S(CUP_SENSE)},
{S(MENU_TimeDelay),S(CUP_SENSE),S(MENU_Advanced),S(ScreenLock),S(GearMotorGraph),S(SoftwareReset)},
{T(DripTrayFull),  T(LowWater), T(WaterLeak),    T(Event_Log), T(MANUAL_QR_code),T(Event_Log)}
};
#undef M
#undef O
#undef S
#undef T


#define SET_WGT_ENABLE(wgt,le_t_f) do{\
    main_menu_##wgt ->fn->setVisible(main_menu_##wgt,le_t_f);\
    main_menu_##wgt ->fn->setEnabled(main_menu_##wgt,le_t_f);\
} while(0)

#define SHOW_IMG(img,le_t_f) img->fn->setVisible(img,le_t_f)

#define SET_BTN_IMG(btn,bar) btn ->fn->setReleasedImage(btn,&(bar))

#define SET_BTN_ENABLE(btn,le_t_f) btn ->fn->setEnabled(btn,le_t_f);\
                                   btn ->fn->setVisible(btn,le_t_f)

#define SET_BTN_STR_ARR(page_no,btn_no) main_menu_Btn##btn_no ->fn->setString(main_menu_Btn##btn_no,(leString*)(subMenuLeStr[page_no][btn_no]))
#define SET_BTN_STR(btn,str) main_menu_##btn ->fn->setString(main_menu_##btn,(leString*)&(string_##str))


#define SET_ALL_MENU_BTN_CLEAR {\
    SET_BTN_IMG(main_menu_BtnMaintenance,      Menu_bar_clear);\
    SET_BTN_IMG(main_menu_BtnOperationSettings,Menu_bar_clear);\
    SET_BTN_IMG(main_menu_BtnService,          Menu_bar_clear);\
    SET_BTN_IMG(main_menu_BtnSystemInformation,Menu_bar_clear);\
    SET_BTN_IMG(main_menu_BtnTroubleshoot,     Menu_bar_clear);\
    }

      
#define SET_BTN0_5_ENABLE(le_t_f) {\
    SET_BTN_ENABLE(main_menu_Btn0,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn1,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn2,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn3,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn4,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn5,le_t_f);\
}

#define SET_BTN0_4_ENABLE(le_t_f) {\
    SET_BTN_ENABLE(main_menu_Btn1,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn2,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn3,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn4,le_t_f);\
    SET_BTN_ENABLE(main_menu_Btn5,le_t_f);\
}

#define SHOW_LBL(lbl,le_t_f) main_menu_##lbl ->fn->setVisible(main_menu_##lbl,le_t_f)
#define SHOW_ALERT(le_t_f) {\
    SHOW_LBL(LblActiveMod,le_t_f);\
    SHOW_LBL(LblLowBIn,le_t_f);\
    SHOW_LBL(LblLowWater,le_t_f);\
    }

void enterMainMenu(void)
{
    menu_main_clr_screen();
    SHOW_ALERT(LE_TRUE)
    SET_ALL_MENU_BTN_CLEAR
    SET_WGT_ENABLE(PanelBtn0_5,LE_FALSE); 
}

void enterMaintenance(void)
{
    menu_main_clr_screen();

    SET_ALL_MENU_BTN_CLEAR
    SET_BTN_IMG(main_menu_BtnMaintenance,Menu_bar);
    SET_WGT_ENABLE(PanelBtn0_5,LE_TRUE); 
    SET_BTN0_5_ENABLE(LE_TRUE);
    
    SET_BTN_ENABLE(main_menu_Btn5,LE_FALSE); //only keep the 5 buttons for maintenance.

    int32_t val;
    char* str;
    if(false == readWriteValInJson(1,root,&val,&str,1,2,"settings","water_filter_installed"))
        val = 0; //fail reading json, set water_filter_installed = 0
    
    if(val == 0)  
    {
        SET_BTN_ENABLE(main_menu_Btn3,LE_FALSE); //only keep the 3 buttons for maintenance.
        SET_BTN_ENABLE(main_menu_Btn4,LE_FALSE); //only keep the 3 buttons for maintenance.
    }

    
    SET_BTN_STR_ARR(0,0);
    SET_BTN_STR_ARR(0,1);
    SET_BTN_STR_ARR(0,2);
    SET_BTN_STR_ARR(0,3);
    SET_BTN_STR_ARR(0,4);   
}

void enterOperationSettings(void)
{
    menu_main_clr_screen();
            
    SET_ALL_MENU_BTN_CLEAR
    SET_BTN_IMG(main_menu_BtnOperationSettings,Menu_bar);
    
    SET_WGT_ENABLE(PanelBtn0_5,LE_TRUE); 
    SET_BTN_ENABLE(main_menu_Btn0,0);
    SET_BTN_ENABLE(main_menu_Btn1,1);
    SET_BTN_ENABLE(main_menu_Btn2,1);
    SET_BTN_ENABLE(main_menu_Btn3,1);    
    
    int32_t val;
    char* str;
    if(false == readWriteValInJson(1,root,&val,&str,1,2,"settings","hot_water_installed"))
        val = 0; //fail reading json, set water_filter_installed = 0
    
    if(val == 0)
    {
        SET_BTN_ENABLE(main_menu_Btn3,0);
    }
    
    SET_BTN_ENABLE(main_menu_Btn4,0);
    SET_BTN_ENABLE(main_menu_Btn5,0);

    SET_BTN_STR_ARR(1,1);
    SET_BTN_STR_ARR(1,2);
    SET_BTN_STR_ARR(1,3);
}

void enterService(void)
{
    menu_main_clr_screen();    
    SET_ALL_MENU_BTN_CLEAR
    SET_BTN_IMG(main_menu_BtnService,Menu_bar);
    
    SET_WGT_ENABLE(PanelBtn0_5,LE_TRUE); 
    SET_BTN0_5_ENABLE(LE_TRUE)
    //disable btn5        
    SET_BTN_ENABLE(main_menu_Btn5,LE_FALSE); 

    
    SET_BTN_STR_ARR(2,0);
    SET_BTN_STR_ARR(2,1);
    SET_BTN_STR_ARR(2,2);
    SET_BTN_STR_ARR(2,3);
    SET_BTN_STR_ARR(2,4);  
    SET_BTN_STR_ARR(2,5);  
}

void enterSystemInformation(void)
{
    menu_main_clr_screen();
    PUSH_SHOW(screenID_sysinfo)
}

void enterTroubleshoot(void)
{
    menu_main_clr_screen();
    
    SET_ALL_MENU_BTN_CLEAR
    SET_BTN_IMG(main_menu_BtnTroubleshoot,Menu_bar);
    
    SET_WGT_ENABLE(PanelBtn0_5,LE_TRUE); 
    SET_BTN0_5_ENABLE(LE_TRUE)
    SET_BTN_ENABLE(main_menu_Btn5,LE_FALSE);
    
    SET_BTN_STR_ARR(4,0);
    SET_BTN_STR_ARR(4,1);
    SET_BTN_STR_ARR(4,2);
    SET_BTN_STR_ARR(4,3);
    SET_BTN_STR_ARR(4,4);  
}

void (*enter[6])(void) = {
    enterMainMenu, enterMaintenance,       enterOperationSettings,
    enterService,  enterSystemInformation, enterTroubleshoot };

void event_main_menu_BtnMaintenance_OnReleased(leButtonWidget* btn)
{
    main_menu_pageNo = 1; 
    enter[main_menu_pageNo]();
}
void event_main_menu_BtnOperationSettings_OnReleased(leButtonWidget* btn)
{
    main_menu_pageNo = 2; 
    enter[main_menu_pageNo]();
}
void event_main_menu_BtnService_OnReleased (leButtonWidget* btn)
{
    main_menu_pageNo = 3; 
    enter[main_menu_pageNo]();
}

void event_main_menu_BtnSystemInformation_OnReleased(leButtonWidget* btn)
{
    main_menu_pageNo = 4; 
    enter[main_menu_pageNo]();
}
void event_main_menu_BtnTroubleshoot_OnReleased(leButtonWidget* btn)
{
    main_menu_pageNo = 5; 
    enter[main_menu_pageNo]();
}

#define SET_LBL_STR(lbl,str) main_menu_##lbl ->fn->setString(main_menu_##lbl,(leString*)&(string_##str))

void menu_main_clr_screen(void)
{
    SET_WGT_ENABLE(PanelSubtitle,LE_FALSE);
    SET_WGT_ENABLE(PanelCleanScreen,LE_FALSE);
    
    SHOW_IMG(main_menu_ImgManualQR,LE_FALSE);
    
    SET_WGT_ENABLE(PanelInterval,LE_FALSE);
    SET_WGT_ENABLE(PanelBtn0_5,LE_FALSE);    
    SET_WGT_ENABLE(PanelAlert,LE_FALSE);
    SET_WGT_ENABLE(BtnUnits,LE_FALSE);
    SET_WGT_ENABLE(LblSensor,LE_FALSE);
    SET_WGT_ENABLE(LblMonth,LE_FALSE);    
}

void display_maintenance_clr_screen(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelCleanScreen,LE_TRUE);
    SET_WGT_ENABLE(PanelHold5SLine,LE_TRUE);
    SET_BTN_STR(BtnCleanLock,MAINTENANCE_CLEANSCREEN_Lock);
    SET_BTN_STR(BtnCleanUnlock,MAINTENANCE_CLEANSCREEN_Unlock);    

    SET_LBL_STR(LblSubmenu,MAINTENANCE_CLEANSCREEN_CleanScreen);
}

void displaySensor(int32_t val)
{
    char charVer[10];
    float val_f = val *3.3/4096;
    sprintf(charVer,"%0.2f",val_f);
    leSensor->fn->setFromCStr(leSensor,charVer);
    main_menu_LblSensor->fn->
        setString(main_menu_LblSensor,(leString*)leSensor);
}

void displayIntervalVal(int32_t val,leFont* font)
{
    char charVer[15];
    int16_t intervalVal =(int16_t) val;
    sprintf(charVer,"%d",intervalVal);
    leInteralVal->fn->setFromCStr(leInteralVal,charVer);
    leInteralVal->fn->setFont(leInteralVal,font);    
    main_menu_LblFilterInterval->fn->
        setString(main_menu_LblFilterInterval,(leString*)leInteralVal);
}

void displayIntervalStr(char* str,leFont* font)
{
   char charVer[15];
   sprintf(charVer,"%s",str);
   leInteralVal->fn->setFromCStr(leInteralVal,charVer);
   leInteralVal->fn->setFont(leInteralVal,font);
   main_menu_LblFilterInterval->fn->
       setString(main_menu_LblFilterInterval,(leString*)leInteralVal);
}

void display_maintenance_filter_interval(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelInterval,LE_TRUE);
    SET_WGT_ENABLE(LblMonth,LE_TRUE);
    
    SET_LBL_STR(LblSubmenu,MAINTENANCE_FILTER_INTERVAL);
    SET_LBL_STR(LblSubtitle,SERVICE4_AdjustInterval);  
    SET_LBL_STR(LblMonth,SERVICE4_Months); 
    int32_t val;
    val = readSetValFromSettingJson("filter_replace_interval",6);

    displayIntervalVal(val,(leFont*)&Roboto_Regular_48);
}

void display_maintenance_sanitize_interval(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelInterval,LE_TRUE);
    SET_WGT_ENABLE(LblMonth,LE_TRUE);
    
    SET_LBL_STR(LblSubmenu,MAINTENANCE_CLEAR_SANITIZE_INTERVAL);
    SET_LBL_STR(LblSubtitle,SERVICE4_AdjustInterval);
    SET_LBL_STR(LblMonth,SERVICE4_Months);
    int32_t val;
    val = readSetValFromSettingJson("pm_cleaning_interval",6);
    displayIntervalVal(val,(leFont*)&Roboto_Regular_48);  
}

void display_operation_brightness(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelInterval,LE_TRUE);
    
    SET_LBL_STR(LblSubmenu,OPSETTING_BRIGHTNESS_Brightness);
    SET_LBL_STR(LblSubtitle,OPSETTING_BRIGHTNESS_SelectBrightness);
    int32_t val;
    val = readSetValFromSettingJson("display_brightness",80);
    displayIntervalVal(val,(leFont*)&Roboto_Regular_48);
}

void display_operation_language(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelInterval,LE_TRUE);
    
    SET_LBL_STR(LblSubmenu,OPSETTING_LANGUAGE_Language);
    SET_LBL_STR(LblSubtitle,OPSETTING_LANGUAGE_SelectLanguage);
    int32_t val;
    val = readSetValFromSettingJson("language",0);
    char* lang[3] = {"English","English","English"};
    displayIntervalStr(lang[val],(leFont*)&Roboto_Regular_20);
}


void display_operation_hotwater(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelInterval,LE_TRUE);
    SET_WGT_ENABLE(BtnUnits,LE_TRUE);

    SET_LBL_STR(LblSubmenu,OPSETTING_HOTWATER_HotWater);
        

    
    if(tmpUnit == 0)
    {
        SET_BTN_STR(BtnUnits,OPSETTING_HOTWATER_DegF);
        SET_LBL_STR(LblSubtitle,Select_temp_f);        
        displayIntervalVal(tmpFval,(leFont*)&Roboto_Regular_48);
        //main_menu_BtnUnits->fn->setString(main_menu_BtnUnits, (leString*)&string_OPSETTING_HOTWATER_DegF);
    }
    else
    {
        SET_BTN_STR(BtnUnits,OPSETTING_HOTWATER_DegC);
        SET_LBL_STR(LblSubtitle,Select_temp_c);        
        displayIntervalVal(tmpCval,(leFont*)&Roboto_Regular_48);
        //main_menu_BtnUnits->fn->setString(main_menu_BtnUnits, (leString*)&string_OPSETTING_HOTWATER_DegC);
    }
}

void display_service_timedelay(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelInterval,LE_TRUE);
    SET_WGT_ENABLE(LblMonth,LE_TRUE);
    
    SET_LBL_STR(LblSubmenu,SERVICE10_TimeDelay);
    SET_LBL_STR(LblSubtitle,SERVICE3_SelectOne);
    SET_LBL_STR(LblMonth,SERVICE12_Minutes);
    int32_t val;
    val = readSetValFromSettingJson("Time delay",0);
    if((val != 0)&&(val != 1)) val = 0;
     char* str[2] = {"Short\n 15 Min","Long\n 30 Min"};
    
    displayIntervalStr(str[val],(leFont*)&Roboto_Regular_16);    
}

void display_service_Screen_lock(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelCleanScreen,LE_TRUE);
    SET_WGT_ENABLE(PanelHold5SLine,LE_TRUE);
    SET_BTN_STR(BtnCleanLock,MAINTENANCE_CLEANSCREEN_Lock);
    SET_BTN_STR(BtnCleanUnlock,MAINTENANCE_CLEANSCREEN_Unlock);    

    SET_LBL_STR(LblSubmenu,Service_screenLock);
}

void display_service_cup_sense(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelInterval,LE_TRUE);
    SET_WGT_ENABLE(LblSensor,LE_TRUE);    
    
    SET_LBL_STR(LblSubmenu,SERVICE_CUP_SENSE);
    SET_LBL_STR(LblSubtitle,Service_adjust_cup_sense);
    
    int32_t val;//float use 32bit, cast 381 to float is 0.3;
    val = readSetValFromSettingJson("Cup sense",381);
    NO_CUP_THRESHOLD = val;
    float cupsense = val * 3.3/4096;
    char str[10];
    sprintf(str,"%0.1f",cupsense);
    displayIntervalStr(str,(leFont*)&Roboto_Regular_48); 
    displaySensor(avgADCdata);
}

void display_service_reset_board(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SET_WGT_ENABLE(PanelCleanScreen,LE_TRUE);
    SET_WGT_ENABLE(PanelHold5SLine,LE_FALSE);

    SET_BTN_STR(BtnCleanLock,SERVICE7_FACTORY_No);
    SET_BTN_STR(BtnCleanUnlock,SERVICE7_FACTORY_Yes);    
    SET_LBL_STR(LblSubmenu,SERVICE7_SOFTWARERESET_Title);
}

void display_trouble_manual(void)
{
    menu_main_clr_screen();
    
    SET_WGT_ENABLE(PanelSubtitle,LE_TRUE);
    SHOW_IMG(main_menu_ImgManualQR,LE_TRUE);
    
    SET_LBL_STR(LblSubmenu,SERVICE6_ManualQRCode);
}

void display_void(void)
{
    
}

void changeUI(void)
{
  //screenID_main_menu
  #define S(screen) screenID_##screen

  int32_t main_menu_screen[BTN_NO][PAGE_NO] = 
  {
    {S(main_menu),S(selfhelp_cleanscreen),S(main_menu),            S(main_menu),        0,S(troubleshoot_display)},
    {S(main_menu),S(instructStep),        S(main_menu),            S(service_password),                   0,S(troubleshoot_display)},
    {S(main_menu),S(main_menu),           S(main_menu),            S(main_menu),        0,S(troubleshoot_display)},
    {S(main_menu),S(instructStep),        1,       S(service_advancedgearmotor),        0,S(service_eventlog)},
    {S(main_menu),S(main_menu),           1,                       S(main_menu),0,S(service_eventlog)},
    {S(main_menu),1,                      1,                       S(main_menu),        0,1}
  };
  #undef S
    
    PUSH_SHOW(main_menu_screen[main_menu_btnNo][main_menu_pageNo])
}

//initiate button's function with cup_sense button
//void (*btn_display[BTN_NO][PAGE_NO])(void) =
//{
//    {
//        display_void,
//        display_maintenance_clr_screen,
//        display_void,
//        display_service_timedelay,
//        display_void,
//        changeUI
//    },
//    {
//        display_void,
//        changeUI,
//        display_operation_language,                
//        display_service_cup_sense, 
//        display_void,
//        changeUI
//    },
//    {
//        display_void,
//        display_maintenance_sanitize_interval,
//        display_operation_brightness,                
//        changeUI,
//        display_void,
//        changeUI         
//    },
//    {
//        display_void,
//        changeUI,
//        display_operation_hotwater,                
//        display_service_Screen_lock,
//        display_void,
//        changeUI        
//    },
//    {    
//        display_void,
//        display_maintenance_filter_interval,
//        display_void,
//        changeUI,
//        display_void,
//        display_trouble_manual
//    },
//    {
//        display_void,
//        display_void,
//        display_void,
//        display_service_reset_board,
//        display_void,
//        display_void         
//    }
//    
//};


//initiate button's function without cup_sense button
void (*btn_display[BTN_NO][PAGE_NO])(void) =
{
    {
        display_void,
        display_maintenance_clr_screen,
        display_void,
        display_service_timedelay,
        display_void,
        changeUI
    },
    {
        display_void,
        changeUI,
        display_operation_language,    
        changeUI,                
        //display_service_cup_sense, 
        display_void,
        changeUI
    },
    {
        display_void,
        display_maintenance_sanitize_interval,
        display_operation_brightness,                
        display_service_Screen_lock,
        display_void,
        changeUI         
    },
    {
        display_void,
        changeUI,
        display_operation_hotwater,                
        changeUI,
        display_void,
        changeUI        
    },
    {    
        display_void,
        display_maintenance_filter_interval,
        display_void,
        display_service_reset_board,
        display_void,
        display_trouble_manual
    },
    {
        display_void,
        display_void,
        display_void,
        display_void,
        display_void,
        display_void         
    }
    
};

void event_main_menu_Btn0_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = 0;
    btn_display[main_menu_btnNo][main_menu_pageNo]();
}
void event_main_menu_Btn1_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = 1;
    btn_display[main_menu_btnNo][main_menu_pageNo]();
}
void event_main_menu_Btn2_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = 2;
    btn_display[main_menu_btnNo][main_menu_pageNo]();

}
void event_main_menu_Btn3_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = 3;
    btn_display[main_menu_btnNo][main_menu_pageNo]();
}
void event_main_menu_Btn4_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = 4;
    btn_display[main_menu_btnNo][main_menu_pageNo](); 

}
void event_main_menu_Btn5_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = 5;
    btn_display[main_menu_btnNo][main_menu_pageNo](); 
}


void event_main_menu_BtnHome_OnReleased(leButtonWidget* btn)
{
    main_menu_pageNo = 0;
    HOME
}
void event_main_menu_BtnExit_OnReleased(leButtonWidget* btn)
{
    if(main_menu_pageNo == 0) 
    {
        HOME
        return;
    }
    menu_main_clr_screen();
    
    if(main_menu_btnNo != -1) main_menu_btnNo = -1;
    else                      main_menu_pageNo = 0;
    
    enter[main_menu_pageNo]();
    saveSettingJsonToDev(&sst,SETTING_FILE,settingRoot);

}


#define SET_BTN_LOCK(btn,le_t_f) btn ->fn->setEnabled(btn,le_t_f)
void event_main_menu_BtnCleanLock_OnReleased(leButtonWidget* btn)
{
    //control board reset no key.
    if((main_menu_pageNo == 3)&&(main_menu_btnNo == 4))
        { main_menu_btnNo = -1; enterService();return;}
    
    SET_BTN_LOCK(main_menu_BtnMaintenance,LE_FALSE);
    SET_BTN_LOCK(main_menu_BtnOperationSettings,LE_FALSE);
    SET_BTN_LOCK(main_menu_BtnService,LE_FALSE);
    SET_BTN_LOCK(main_menu_BtnSystemInformation,LE_FALSE);
    SET_BTN_LOCK(main_menu_BtnTroubleshoot,LE_FALSE);

    SET_BTN_LOCK(main_menu_BtnExit,LE_FALSE);
    SET_BTN_LOCK(main_menu_BtnHome,LE_FALSE);
    main_menu_BtnCleanLock->fn->setScheme(main_menu_BtnCleanLock,&Button_Gray2_down);
    lockFlag = 1;
}
    #undef SET_BTN_LOCK

void event_main_menu_BtnCleanUnlock_OnPressed(leButtonWidget* btn)
{
    // control board reset yes key.
    if((main_menu_pageNo == 3)&&(main_menu_btnNo == 4)) return;
        
    if(lockFlag == 1)
        lockTimer = 0;
}

void event_main_menu_BtnCleanUnlock_OnReleased(leButtonWidget* btn)
{
    //control board reset yes key.
    if((main_menu_pageNo == 3)&&(main_menu_btnNo == 4))
    {
        settingRegVal.w = (settingRegVal.w) |(0x04);
        writeAO_Wr_H_RegCmd(SETTINGS_REGISTER,settingRegVal.w,modBus);
        settingRegVal.w = (settingRegVal.w) &(0xfffb);
        
        main_menu_btnNo = -1; 
        enterService();
        return;
    }
    lockTimer = -1;
}


void event_void(uint8_t rightLeft)
{
    
}


void event_service_timedelay(uint8_t rightLeft)
{
    //settingRegVal
    char* str[2] = {"Short\n 15 Min","Long\n 30 Min"};
    char* strtemp;
    int32_t val = readSetValFromSettingJson("Time delay",0);
    val = (val == 0)?1:0;
    settingRegVal.w = (settingRegVal.w) &(0xfffd);
    settingRegVal.w = (settingRegVal.w) | (val<<1);
    writeAO_Wr_H_RegCmd(SETTINGS_REGISTER,settingRegVal.w,modBus);

    displayIntervalStr(str[val],(leFont*)&Roboto_Regular_16); 
    
    //write to json
    readWriteValInJson(0,settingRoot,&val,&strtemp,20,1,"Time delay");
}

void event_operation_language(uint8_t rightLeft)
{
    //char* lang[3] = {"English","Spanish","French"};
    char* lang[3] = {"English","English","English"};    
    
    int32_t val;
    val = readSetValFromSettingJson("language",0);  
    
    if(rightLeft == 0) val = (val+1)%3; //right
    else               val = (val<=0)? 2:(val-1); //left

    displayIntervalStr(lang[val],(leFont*)&Roboto_Regular_20);
    
    char* strtemp;
    readWriteValInJson(0,settingRoot,&val,&strtemp,10,1,"language");//write to json
}

void event_service_cup_sense(uint8_t rightLeft)
{
    int32_t val;
    val = readSetValFromSettingJson("Cup sense",381);  
    
    if(rightLeft == 0) //right
    { 
        if(val == 0 )  val = 370;
        else val = (val < 4096)?(val + 130):4096;
    }
    else val = (val > 500)?(val - 130):0;//left
    
    NO_CUP_THRESHOLD = val;
    
    float cupsense = val * 3.3/4096;
    char str[10];
    sprintf(str,"%0.1f",cupsense);
    displayIntervalStr(str,(leFont*)&Roboto_Regular_48); 
    
    displaySensor(avgADCdata);
    
    char* strtemp;
    readWriteValInJson(0,settingRoot,&val,&strtemp,2,1,"Cup sense"); //write to json 
}

void event_maintenance_sanitize_interval(uint8_t rightLeft)
{
    int32_t val;
    val = readSetValFromSettingJson("pm_cleaning_interval",6);  
    
    if(rightLeft == 0) val = (val < 12)?(val+1):12;//right
    else               val = (val > 1 )?(val-1):0 ;//left

    settingRegVal.w = (settingRegVal.w) &(0x0fff);
    settingRegVal.w = (settingRegVal.w) |(val <<12);
   
    writeAO_Wr_H_RegCmd(SETTINGS_REGISTER,settingRegVal.w,modBus);
    //writeAO_Wr_H_RegCmd(PM_DUE_REGISTER,0,modBus);

    displayIntervalVal(val,(leFont*)&Roboto_Regular_48);  
   
    char* strtemp;
    readWriteValInJson(0,settingRoot,&val,&strtemp,2,1,"pm_cleaning_interval"); //write to json 
}
void event_operation_brightness(uint8_t rightLeft)
{
    int32_t val;
    val = readSetValFromSettingJson("display_brightness",80);  
    
    if(rightLeft == 0) val = (val < 95)?(val+5):100;//right
    else               val = (val > 15 )?(val-5):10 ;//left

    displayIntervalVal(val,(leFont*)&Roboto_Regular_48); 
    
    uint32_t setting_bright = 7 + val*0.6;

    LCDC_SetPWMCompareValue((uint32_t)(setting_bright)); 
   
    char* strtemp;
    readWriteValInJson(0,settingRoot,&val,&strtemp,2,1,"display_brightness"); //write to json     
}

void event_operation_hotwater(uint8_t rightLeft)
{
    if(tmpUnit == 0)
    {
        if(rightLeft == 0) tmpFval = (tmpFval < 184)?(tmpFval+1):185;//right
        else               tmpFval = (tmpFval > 100)?(tmpFval-1):100 ;//left
        
        tmpCval=f2c[tmpFval-100];
    }
    else
    {
        if(rightLeft == 0) tmpCval = (tmpCval < 84)?(tmpCval+1):85;//right
        else               tmpCval = (tmpCval > 38)?(tmpCval-1):38 ;//left
        tmpFval=c2f[tmpCval-38];
    }
    
    uint16_t setTemp =(uint16_t)tmpFval;
    
    writeAO_Wr_H_RegCmd(HOT_WATER_SET_REGISTER,setTemp,modBus);
    int32_t displayVal = (tmpUnit == 0)?tmpFval:tmpCval;
    displayIntervalVal(displayVal,(leFont*)&Roboto_Regular_48);  
    char* strtemp;
    readWriteValInJson(0,settingRoot,&tmpFval,&strtemp,2,1,"hot_water_setting"); //write to json     
}

void event_maintenance_filter_interval(uint8_t rightLeft)
{
    int32_t val;
    val = readSetValFromSettingJson("filter_replace_interval",6);  
    
    if(rightLeft == 0) val = (val < 12)?(val+1):12;//right
    else               val = (val > 1 )?(val-1):0 ;//left

    (settingRegVal.w) = (settingRegVal.w) &(0xf0ff);
    (settingRegVal.w) = (settingRegVal.w) |(val <<8);
   
    writeAO_Wr_H_RegCmd(SETTINGS_REGISTER,(settingRegVal.w),modBus);
    //writeAO_Wr_H_RegCmd(FILTER_DUE_REGISTER,0,modBus);

    displayIntervalVal(val,(leFont*)&Roboto_Regular_48);  
   
    char* strtemp;
    readWriteValInJson(0,settingRoot,&val,&strtemp,2,1,"filter_replace_interval"); //write to json     
}


void (*btn_Right_Left_event[BTN_NO][PAGE_NO])(uint8_t rightLeft) =
{
    {
        event_void,
        event_void,
        event_void,
        event_service_timedelay,
        event_void,
        event_void
    },
    {
        event_void,
        event_void,
        event_operation_language,                
        event_void, 
        event_void,
        event_void
    },
    {
        event_void,
        event_maintenance_sanitize_interval,
        event_operation_brightness,                
        event_void,
        event_void,
        event_void         
    },
    {
        event_void,
        event_void,
        event_operation_hotwater,                
        event_void,
        event_void,
        event_void        
    },
    {    
        event_void,
        event_maintenance_filter_interval,
        event_void,
        event_void,
        event_void,
        event_void
    },
    {
        event_void,
        event_void,
        event_void,
        event_void,
        event_void,
        event_void         
    }
};


void event_main_menu_BtnRight_OnReleased(leButtonWidget* btn)
{
    /*DBG_P*/;
    btn_Right_Left_event[main_menu_btnNo][main_menu_pageNo](0);
}
void event_main_menu_BtnLeft_OnReleased(leButtonWidget* btn)
{
    /*DBG_P*/;
    btn_Right_Left_event[main_menu_btnNo][main_menu_pageNo](1);
}

void event_main_menu_BtnUnits_OnReleased(leButtonWidget* btn)
{
    tmpUnit = (tmpUnit == 0)?1:0;
    /*DBG_P*/;
    
    if(tmpUnit == 0)
    {
                /*DBG_P*/;
        SET_BTN_STR(BtnUnits,OPSETTING_HOTWATER_DegF);
                /*DBG_P*/;
        SET_LBL_STR(LblSubtitle,Select_temp_f);        
                /*DBG_P*/;
        displayIntervalVal(tmpFval,(leFont*)&Roboto_Regular_48);
                /*DBG_P*/;
        //main_menu_BtnUnits->fn->setString(main_menu_BtnUnits, (leString*)&string_OPSETTING_HOTWATER_DegF);
    }
    else
    {
        SET_BTN_STR(BtnUnits,OPSETTING_HOTWATER_DegC);
                /*DBG_P*/;
        SET_LBL_STR(LblSubtitle,Select_temp_c);        
                /*DBG_P*/;
        displayIntervalVal(tmpCval,(leFont*)&Roboto_Regular_48);
                /*DBG_P*/;
        //main_menu_BtnUnits->fn->setString(main_menu_BtnUnits, (leString*)&string_OPSETTING_HOTWATER_DegC);
    }
            /*DBG_P*/;
    char* strtemp;
    readWriteValInJson(0,settingRoot,&tmpUnit,&strtemp,2,1,"temperature unit"); //write to json     
            /*DBG_P*/;
}

#define B(name) (leString*)&string_STATUS_##name
leString* statusMode[9] = {
    B(Standby),   B(WaterFill), B(MakingIce),
    B(TimeDelay), B(SleepMode), B(FlushTimeDelay),
    B(FlushSelf), B(FlushSHTL), B(Clean)
};
#undef B

void mainMenuAlert(void)
{
    if(!IN_UI(screenID_main_menu)) return;

    if((main_menu_pageNo!=0)||(main_menu_btnNo != -1)) return;
    
    main_menu_PanelAlert->fn->setVisible(main_menu_PanelAlert,LE_TRUE);

    //mode alert
    uint8_t workMode = 0x0f & (statusRegVal.w >> 7);
    if(workMode < 9)
        main_menu_LblActiveMod->fn->setString(main_menu_LblActiveMod, statusMode[workMode]);

    if(((statusRegVal.w )&0x4000) != 0) 
        main_menu_LblLowBIn->fn->setVisible(main_menu_LblLowBIn,LE_FALSE);
    else
        main_menu_LblLowBIn->fn->setVisible(main_menu_LblLowBIn,LE_TRUE);
    
    if(((statusRegVal.w )&0x04) != 0) 
        main_menu_LblLowWater->fn->setVisible(main_menu_LblLowWater,LE_TRUE);
    else
        main_menu_LblLowWater->fn->setVisible(main_menu_LblLowWater,LE_FALSE);
}

void main_menu_OnShow(void)
{
    tmpUnit = readSetValFromSettingJson("temperature unit",0);
    tmpFval = readSetValFromSettingJson("hot_water_setting",180);
    tmpCval=f2c[tmpFval-100];
    enter[main_menu_pageNo]();
    mainMenuAlert();
    newLblLeStr(&leInteralVal,main_menu_LblFilterInterval,15);
    newLblLeStr(&leSensor,main_menu_LblSensor,10);
}

void main_menu_OnHide(void)
{
    delLeStr(leInteralVal);
    delLeStr(leSensor);
    saveSettingJsonToDev(&sst,SETTING_FILE,settingRoot);
}

void main_menu_OnUpdate(void)
{
    //displaySensor(avgADCdata);
}

#undef PAGE_NO 
#undef BTN_NO  
#undef SET_BTN_IMG
#undef SET_BTN_ENABLE
#undef SET_BTN_STR
#undef SET_BTN_STR_ARR
#undef SET_ALL_MENU_BTN_CLEAR
#undef SET_BTN0_5_ENABLE
#undef SHOW_LBL
#undef SHOW_ALERT
#undef SET_LBL_STR
#undef SET_WGT_ENABLE
