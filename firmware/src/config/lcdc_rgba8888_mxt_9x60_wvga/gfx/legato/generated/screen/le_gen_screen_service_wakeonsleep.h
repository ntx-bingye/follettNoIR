#ifndef LE_GEN_SCREEN_SERVICE_WAKEONSLEEP_H
#define LE_GEN_SCREEN_SERVICE_WAKEONSLEEP_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_wakeonsleep_Layer_0_FillPanel;
extern leLabelWidget* service_wakeonsleep_LblTitle;
extern leImageWidget* service_wakeonsleep_ImgLine;
extern leLabelWidget* service_wakeonsleep_LblSubTitle;
extern leLabelWidget* service_wakeonsleep_LblWakeOnSleepValue;
extern leLabelWidget* service_wakeonsleep_LblSeconds;
extern leButtonWidget* service_wakeonsleep_BtnExit;
extern leButtonWidget* service_wakeonsleep_BtnRight;
extern leButtonWidget* service_wakeonsleep_BtnLeft;
extern leButtonWidget* service_wakeonsleep_BtnHome;
extern leButtonWidget* service_wakeonsleep_BtnTroubleshoot;
extern leButtonWidget* service_wakeonsleep_BtnSystemInformation;
extern leButtonWidget* service_wakeonsleep_BtnService;
extern leButtonWidget* service_wakeonsleep_BtnOperationSettings;
extern leButtonWidget* service_wakeonsleep_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_wakeonsleep_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_wakeonsleep_BtnRight_OnReleased(leButtonWidget* btn);
void event_service_wakeonsleep_BtnLeft_OnReleased(leButtonWidget* btn);
void event_service_wakeonsleep_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_wakeonsleep_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_wakeonsleep_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_wakeonsleep_BtnService_OnReleased(leButtonWidget* btn);
void event_service_wakeonsleep_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_service_wakeonsleep_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_wakeonsleep(void); // called when Legato is initialized
leResult screenShow_service_wakeonsleep(void); // called when screen is shown
void screenHide_service_wakeonsleep(void); // called when screen is hidden
void screenDestroy_service_wakeonsleep(void); // called when Legato is destroyed
void screenUpdate_service_wakeonsleep(void); // called when Legato is updating

leWidget* screenGetRoot_service_wakeonsleep(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_wakeonsleep_OnShow(void); // called when this screen is shown
void service_wakeonsleep_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_WAKEONSLEEP_H
