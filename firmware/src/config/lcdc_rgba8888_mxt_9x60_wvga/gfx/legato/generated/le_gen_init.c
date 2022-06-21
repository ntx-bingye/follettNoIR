#include "gfx/legato/generated/le_gen_init.h"

static int32_t currentScreen;
static int32_t changingToScreen;

void legato_initializeScreenState(void)
{
    leSetStringTable(&stringTable);

    initializeStrings();

    screenInit_start();
    screenInit_splash();
    screenInit_splash_hotwater();
    screenInit_selfhelp();
    screenInit_selfhelp_splash();
    screenInit_selfhelp_cleanscreen();
    screenInit_selfhelp_docs();
    screenInit_selfhelp_display();
    screenInit_alert2();
    screenInit_alert3();
    screenInit_main_menu();
    screenInit_instructStep();
    screenInit_service_advanced_sleepmode();
    screenInit_service_eventlog();
    screenInit_service_advancedwakeonDispense();
    screenInit_service_advanced_screentimeout();
    screenInit_service_password();
    screenInit_service_advanced();
    screenInit_service_keyboard();
    screenInit_service_advancedcontact();
    screenInit_service_advancedoutput();
    screenInit_service_advancedinput();
    screenInit_service_advanced_Reset_to_Factory();
    screenInit_service_advancedgearmotor();
    screenInit_service_advancedconfig();
    screenInit_sysinfo();
    screenInit_troubleshoot_display();
    screenInit_contact();
    screenInit_File();
    screenInit_Sensor();

    currentScreen = -1;
    changingToScreen = -1;

    legato_showScreen(screenID_start);
}

uint32_t legato_getCurrentScreen(void)
{
    return currentScreen;
}

static void legato_hideCurrentScreen(void)
{
    switch(currentScreen)
    {
        case screenID_start:
        {
            screenHide_start();
            currentScreen = 0;
            break;
        }
        case screenID_splash:
        {
            screenHide_splash();
            currentScreen = 0;
            break;
        }
        case screenID_splash_hotwater:
        {
            screenHide_splash_hotwater();
            currentScreen = 0;
            break;
        }
        case screenID_selfhelp:
        {
            screenHide_selfhelp();
            currentScreen = 0;
            break;
        }
        case screenID_selfhelp_splash:
        {
            screenHide_selfhelp_splash();
            currentScreen = 0;
            break;
        }
        case screenID_selfhelp_cleanscreen:
        {
            screenHide_selfhelp_cleanscreen();
            currentScreen = 0;
            break;
        }
        case screenID_selfhelp_docs:
        {
            screenHide_selfhelp_docs();
            currentScreen = 0;
            break;
        }
        case screenID_selfhelp_display:
        {
            screenHide_selfhelp_display();
            currentScreen = 0;
            break;
        }
        case screenID_alert2:
        {
            screenHide_alert2();
            currentScreen = 0;
            break;
        }
        case screenID_alert3:
        {
            screenHide_alert3();
            currentScreen = 0;
            break;
        }
        case screenID_main_menu:
        {
            screenHide_main_menu();
            currentScreen = 0;
            break;
        }
        case screenID_instructStep:
        {
            screenHide_instructStep();
            currentScreen = 0;
            break;
        }
        case screenID_service_advanced_sleepmode:
        {
            screenHide_service_advanced_sleepmode();
            currentScreen = 0;
            break;
        }
        case screenID_service_eventlog:
        {
            screenHide_service_eventlog();
            currentScreen = 0;
            break;
        }
        case screenID_service_advancedwakeonDispense:
        {
            screenHide_service_advancedwakeonDispense();
            currentScreen = 0;
            break;
        }
        case screenID_service_advanced_screentimeout:
        {
            screenHide_service_advanced_screentimeout();
            currentScreen = 0;
            break;
        }
        case screenID_service_password:
        {
            screenHide_service_password();
            currentScreen = 0;
            break;
        }
        case screenID_service_advanced:
        {
            screenHide_service_advanced();
            currentScreen = 0;
            break;
        }
        case screenID_service_keyboard:
        {
            screenHide_service_keyboard();
            currentScreen = 0;
            break;
        }
        case screenID_service_advancedcontact:
        {
            screenHide_service_advancedcontact();
            currentScreen = 0;
            break;
        }
        case screenID_service_advancedoutput:
        {
            screenHide_service_advancedoutput();
            currentScreen = 0;
            break;
        }
        case screenID_service_advancedinput:
        {
            screenHide_service_advancedinput();
            currentScreen = 0;
            break;
        }
        case screenID_service_advanced_Reset_to_Factory:
        {
            screenHide_service_advanced_Reset_to_Factory();
            currentScreen = 0;
            break;
        }
        case screenID_service_advancedgearmotor:
        {
            screenHide_service_advancedgearmotor();
            currentScreen = 0;
            break;
        }
        case screenID_service_advancedconfig:
        {
            screenHide_service_advancedconfig();
            currentScreen = 0;
            break;
        }
        case screenID_sysinfo:
        {
            screenHide_sysinfo();
            currentScreen = 0;
            break;
        }
        case screenID_troubleshoot_display:
        {
            screenHide_troubleshoot_display();
            currentScreen = 0;
            break;
        }
        case screenID_contact:
        {
            screenHide_contact();
            currentScreen = 0;
            break;
        }
        case screenID_File:
        {
            screenHide_File();
            currentScreen = 0;
            break;
        }
        case screenID_Sensor:
        {
            screenHide_Sensor();
            currentScreen = 0;
            break;
        }
    }
}

void legato_showScreen(uint32_t id)
{
    if(changingToScreen >= 0)
        return;

    changingToScreen = id;
}

void legato_updateScreenState(void)
{
    if(changingToScreen >= 0)
    {
        legato_hideCurrentScreen();

        switch(changingToScreen)
        {
            case screenID_start:
            {
                screenShow_start();
                break;
            }
            case screenID_splash:
            {
                screenShow_splash();
                break;
            }
            case screenID_splash_hotwater:
            {
                screenShow_splash_hotwater();
                break;
            }
            case screenID_selfhelp:
            {
                screenShow_selfhelp();
                break;
            }
            case screenID_selfhelp_splash:
            {
                screenShow_selfhelp_splash();
                break;
            }
            case screenID_selfhelp_cleanscreen:
            {
                screenShow_selfhelp_cleanscreen();
                break;
            }
            case screenID_selfhelp_docs:
            {
                screenShow_selfhelp_docs();
                break;
            }
            case screenID_selfhelp_display:
            {
                screenShow_selfhelp_display();
                break;
            }
            case screenID_alert2:
            {
                screenShow_alert2();
                break;
            }
            case screenID_alert3:
            {
                screenShow_alert3();
                break;
            }
            case screenID_main_menu:
            {
                screenShow_main_menu();
                break;
            }
            case screenID_instructStep:
            {
                screenShow_instructStep();
                break;
            }
            case screenID_service_advanced_sleepmode:
            {
                screenShow_service_advanced_sleepmode();
                break;
            }
            case screenID_service_eventlog:
            {
                screenShow_service_eventlog();
                break;
            }
            case screenID_service_advancedwakeonDispense:
            {
                screenShow_service_advancedwakeonDispense();
                break;
            }
            case screenID_service_advanced_screentimeout:
            {
                screenShow_service_advanced_screentimeout();
                break;
            }
            case screenID_service_password:
            {
                screenShow_service_password();
                break;
            }
            case screenID_service_advanced:
            {
                screenShow_service_advanced();
                break;
            }
            case screenID_service_keyboard:
            {
                screenShow_service_keyboard();
                break;
            }
            case screenID_service_advancedcontact:
            {
                screenShow_service_advancedcontact();
                break;
            }
            case screenID_service_advancedoutput:
            {
                screenShow_service_advancedoutput();
                break;
            }
            case screenID_service_advancedinput:
            {
                screenShow_service_advancedinput();
                break;
            }
            case screenID_service_advanced_Reset_to_Factory:
            {
                screenShow_service_advanced_Reset_to_Factory();
                break;
            }
            case screenID_service_advancedgearmotor:
            {
                screenShow_service_advancedgearmotor();
                break;
            }
            case screenID_service_advancedconfig:
            {
                screenShow_service_advancedconfig();
                break;
            }
            case screenID_sysinfo:
            {
                screenShow_sysinfo();
                break;
            }
            case screenID_troubleshoot_display:
            {
                screenShow_troubleshoot_display();
                break;
            }
            case screenID_contact:
            {
                screenShow_contact();
                break;
            }
            case screenID_File:
            {
                screenShow_File();
                break;
            }
            case screenID_Sensor:
            {
                screenShow_Sensor();
                break;
            }
        }

        currentScreen = changingToScreen;
        changingToScreen = -1;
    }

    switch(currentScreen)
    {
        case screenID_start:
        {
            screenUpdate_start();
            break;
        }
        case screenID_splash:
        {
            screenUpdate_splash();
            break;
        }
        case screenID_splash_hotwater:
        {
            screenUpdate_splash_hotwater();
            break;
        }
        case screenID_selfhelp:
        {
            screenUpdate_selfhelp();
            break;
        }
        case screenID_selfhelp_splash:
        {
            screenUpdate_selfhelp_splash();
            break;
        }
        case screenID_selfhelp_cleanscreen:
        {
            screenUpdate_selfhelp_cleanscreen();
            break;
        }
        case screenID_selfhelp_docs:
        {
            screenUpdate_selfhelp_docs();
            break;
        }
        case screenID_selfhelp_display:
        {
            screenUpdate_selfhelp_display();
            break;
        }
        case screenID_alert2:
        {
            screenUpdate_alert2();
            break;
        }
        case screenID_alert3:
        {
            screenUpdate_alert3();
            break;
        }
        case screenID_main_menu:
        {
            screenUpdate_main_menu();
            break;
        }
        case screenID_instructStep:
        {
            screenUpdate_instructStep();
            break;
        }
        case screenID_service_advanced_sleepmode:
        {
            screenUpdate_service_advanced_sleepmode();
            break;
        }
        case screenID_service_eventlog:
        {
            screenUpdate_service_eventlog();
            break;
        }
        case screenID_service_advancedwakeonDispense:
        {
            screenUpdate_service_advancedwakeonDispense();
            break;
        }
        case screenID_service_advanced_screentimeout:
        {
            screenUpdate_service_advanced_screentimeout();
            break;
        }
        case screenID_service_password:
        {
            screenUpdate_service_password();
            break;
        }
        case screenID_service_advanced:
        {
            screenUpdate_service_advanced();
            break;
        }
        case screenID_service_keyboard:
        {
            screenUpdate_service_keyboard();
            break;
        }
        case screenID_service_advancedcontact:
        {
            screenUpdate_service_advancedcontact();
            break;
        }
        case screenID_service_advancedoutput:
        {
            screenUpdate_service_advancedoutput();
            break;
        }
        case screenID_service_advancedinput:
        {
            screenUpdate_service_advancedinput();
            break;
        }
        case screenID_service_advanced_Reset_to_Factory:
        {
            screenUpdate_service_advanced_Reset_to_Factory();
            break;
        }
        case screenID_service_advancedgearmotor:
        {
            screenUpdate_service_advancedgearmotor();
            break;
        }
        case screenID_service_advancedconfig:
        {
            screenUpdate_service_advancedconfig();
            break;
        }
        case screenID_sysinfo:
        {
            screenUpdate_sysinfo();
            break;
        }
        case screenID_troubleshoot_display:
        {
            screenUpdate_troubleshoot_display();
            break;
        }
        case screenID_contact:
        {
            screenUpdate_contact();
            break;
        }
        case screenID_File:
        {
            screenUpdate_File();
            break;
        }
        case screenID_Sensor:
        {
            screenUpdate_Sensor();
            break;
        }
    }
}

leBool legato_isChangingScreens(void)
{
    return changingToScreen != -1;
}

