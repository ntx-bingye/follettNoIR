#ifndef LE_GEN_SCREEN_SERVICE_CLEANSCREEN_H
#define LE_GEN_SCREEN_SERVICE_CLEANSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_cleanscreen_Layer_0_FillPanel;
extern leLabelWidget* service_cleanscreen_LblTitle;
extern leImageWidget* service_cleanscreen_ImgLine;
extern leLineWidget* service_cleanscreen_LineUnlock;
extern leLabelWidget* service_cleanscreen_LblInstructions;
extern leButtonWidget* service_cleanscreen_BtnExit;
extern leButtonWidget* service_cleanscreen_BtnUnlock;
extern leButtonWidget* service_cleanscreen_BtnLock;
extern leButtonWidget* service_cleanscreen_BtnHome;
extern leButtonWidget* service_cleanscreen_BtnTroubleshoot;
extern leButtonWidget* service_cleanscreen_BtnSystemInformation;
extern leButtonWidget* service_cleanscreen_BtnService;
extern leButtonWidget* service_cleanscreen_BtnOperationSettings;
extern leButtonWidget* service_cleanscreen_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_cleanscreen_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_cleanscreen_BtnUnlock_OnPressed(leButtonWidget* btn);
void event_service_cleanscreen_BtnUnlock_OnReleased(leButtonWidget* btn);
void event_service_cleanscreen_BtnLock_OnReleased(leButtonWidget* btn);
void event_service_cleanscreen_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_cleanscreen_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_cleanscreen_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_cleanscreen_BtnService_OnReleased(leButtonWidget* btn);
void event_service_cleanscreen_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_service_cleanscreen_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_cleanscreen(void); // called when Legato is initialized
leResult screenShow_service_cleanscreen(void); // called when screen is shown
void screenHide_service_cleanscreen(void); // called when screen is hidden
void screenDestroy_service_cleanscreen(void); // called when Legato is destroyed
void screenUpdate_service_cleanscreen(void); // called when Legato is updating

leWidget* screenGetRoot_service_cleanscreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_cleanscreen_OnShow(void); // called when this screen is shown
void service_cleanscreen_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_CLEANSCREEN_H
