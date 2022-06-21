#ifndef LE_GEN_SCREEN_SERVICE_H
#define LE_GEN_SCREEN_SERVICE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_Layer_0_FillPanel;
extern leScrollBarWidget* service_ScrollBar;
extern leWidget* service_PanelService;
extern leButtonWidget* service_BtnAdvanced;
extern leButtonWidget* service_BtnScreenTimeout;
extern leButtonWidget* service_BtnWakeOnSleep;
extern leButtonWidget* service_BtnTimeDelay;
extern leButtonWidget* service_BtnExit;
extern leButtonWidget* service_BtnWaterQuality;
extern leButtonWidget* service_BtnFlushEnable;
extern leButtonWidget* service_BtnHome;
extern leButtonWidget* service_BtnTroubleshoot;
extern leButtonWidget* service_BtnSystemInformation;
extern leButtonWidget* service_BtnService;
extern leButtonWidget* service_BtnOperationSettings;
extern leButtonWidget* service_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_ScrollBar_OnValueChanged(leScrollBarWidget* scr);
void event_service_BtnAdvanced_OnReleased(leButtonWidget* btn);
void event_service_BtnScreenTimeout_OnReleased(leButtonWidget* btn);
void event_service_BtnWakeOnSleep_OnReleased(leButtonWidget* btn);
void event_service_BtnTimeDelay_OnReleased(leButtonWidget* btn);
void event_service_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_BtnWaterQuality_OnReleased(leButtonWidget* btn);
void event_service_BtnFlushEnable_OnReleased(leButtonWidget* btn);
void event_service_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_service_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service(void); // called when Legato is initialized
leResult screenShow_service(void); // called when screen is shown
void screenHide_service(void); // called when screen is hidden
void screenDestroy_service(void); // called when Legato is destroyed
void screenUpdate_service(void); // called when Legato is updating

leWidget* screenGetRoot_service(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_OnShow(void); // called when this screen is shown
void service_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_H
