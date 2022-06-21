#ifndef LEGATO_INIT_H
#define LEGATO_INIT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

#include "gfx/legato/generated/screen/le_gen_screen_start.h"
#include "gfx/legato/generated/screen/le_gen_screen_splash.h"
#include "gfx/legato/generated/screen/le_gen_screen_splash_hotwater.h"
#include "gfx/legato/generated/screen/le_gen_screen_selfhelp.h"
#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_splash.h"
#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_cleanscreen.h"
#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_docs.h"
#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_display.h"
#include "gfx/legato/generated/screen/le_gen_screen_alert2.h"
#include "gfx/legato/generated/screen/le_gen_screen_alert3.h"
#include "gfx/legato/generated/screen/le_gen_screen_main_menu.h"
#include "gfx/legato/generated/screen/le_gen_screen_instructStep.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advanced_sleepmode.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_eventlog.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advancedwakeonDispense.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advanced_screentimeout.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_password.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advanced.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_keyboard.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advancedcontact.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advancedoutput.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advancedinput.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advanced_Reset_to_Factory.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advancedgearmotor.h"
#include "gfx/legato/generated/screen/le_gen_screen_service_advancedconfig.h"
#include "gfx/legato/generated/screen/le_gen_screen_sysinfo.h"
#include "gfx/legato/generated/screen/le_gen_screen_troubleshoot_display.h"
#include "gfx/legato/generated/screen/le_gen_screen_contact.h"
#include "gfx/legato/generated/screen/le_gen_screen_File.h"
#include "gfx/legato/generated/screen/le_gen_screen_Sensor.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen IDs
#define screenID_start    0
#define screenID_splash    1
#define screenID_splash_hotwater    2
#define screenID_selfhelp    3
#define screenID_selfhelp_splash    4
#define screenID_selfhelp_cleanscreen    5
#define screenID_selfhelp_docs    6
#define screenID_selfhelp_display    7
#define screenID_alert2    8
#define screenID_alert3    9
#define screenID_main_menu    10
#define screenID_instructStep    11
#define screenID_service_advanced_sleepmode    12
#define screenID_service_eventlog    13
#define screenID_service_advancedwakeonDispense    14
#define screenID_service_advanced_screentimeout    15
#define screenID_service_password    16
#define screenID_service_advanced    17
#define screenID_service_keyboard    18
#define screenID_service_advancedcontact    19
#define screenID_service_advancedoutput    20
#define screenID_service_advancedinput    21
#define screenID_service_advanced_Reset_to_Factory    22
#define screenID_service_advancedgearmotor    23
#define screenID_service_advancedconfig    24
#define screenID_sysinfo    25
#define screenID_troubleshoot_display    26
#define screenID_contact    27
#define screenID_File    28
#define screenID_Sensor    29

void legato_initializeScreenState(void);

// global screen control functions
uint32_t legato_getCurrentScreen(void);
void legato_showScreen(uint32_t id);
void legato_updateScreenState(void);

// do not do anything in the application if this returns true
leBool legato_isChangingScreens(void);


//DOM-IGNORE-BEGIN

#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LEGATO_INIT_H
