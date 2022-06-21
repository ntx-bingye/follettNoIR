#ifndef LE_GEN_SCREEN_SERVICE_EVENTLOG_H
#define LE_GEN_SCREEN_SERVICE_EVENTLOG_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_eventlog_Layer_0_FillPanel;
extern leWidget* service_eventlog_PanelPage1;
extern leWidget* service_eventlog_PanelPage2;
extern leLabelWidget* service_eventlog_LblEvent;
extern leLabelWidget* service_eventlog_LblStartTime;
extern leButtonWidget* service_eventlog_BtnHome;
extern leButtonWidget* service_eventlog_BtnExit;
extern leButtonWidget* service_eventlog_BtnClear;
extern leLabelWidget* service_eventlog_LblEvent1;
extern leLabelWidget* service_eventlog_LblTime1;
extern leLabelWidget* service_eventlog_LblEvent2;
extern leLabelWidget* service_eventlog_LblTime2;
extern leLabelWidget* service_eventlog_LblEvent3;
extern leLabelWidget* service_eventlog_LblTime3;
extern leLabelWidget* service_eventlog_LblEvent4;
extern leLabelWidget* service_eventlog_LblTime4;
extern leLabelWidget* service_eventlog_LblEvent5;
extern leLabelWidget* service_eventlog_LblTime5;
extern leLabelWidget* service_eventlog_LblEvent6;
extern leLabelWidget* service_eventlog_LblTime6;
extern leButtonWidget* service_eventlog_BtnDown;
extern leLabelWidget* service_eventlog_LblEvent7;
extern leLabelWidget* service_eventlog_LblTime7;
extern leLabelWidget* service_eventlog_LblEvent8;
extern leLabelWidget* service_eventlog_LblTime8;
extern leLabelWidget* service_eventlog_LblEvent9;
extern leLabelWidget* service_eventlog_LblTime9;
extern leLabelWidget* service_eventlog_LblEvent10;
extern leLabelWidget* service_eventlog_LblTime10;
extern leLabelWidget* service_eventlog_LblEvent11;
extern leLabelWidget* service_eventlog_LblTime11;
extern leLabelWidget* service_eventlog_LblEvent12;
extern leLabelWidget* service_eventlog_LblTime12;
extern leButtonWidget* service_eventlog_BtnUp;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_eventlog_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_eventlog_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_eventlog_BtnClear_OnReleased(leButtonWidget* btn);
void event_service_eventlog_BtnDown_OnReleased(leButtonWidget* btn);
void event_service_eventlog_BtnUp_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_eventlog(void); // called when Legato is initialized
leResult screenShow_service_eventlog(void); // called when screen is shown
void screenHide_service_eventlog(void); // called when screen is hidden
void screenDestroy_service_eventlog(void); // called when Legato is destroyed
void screenUpdate_service_eventlog(void); // called when Legato is updating

leWidget* screenGetRoot_service_eventlog(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_eventlog_OnShow(void); // called when this screen is shown
void service_eventlog_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_EVENTLOG_H
