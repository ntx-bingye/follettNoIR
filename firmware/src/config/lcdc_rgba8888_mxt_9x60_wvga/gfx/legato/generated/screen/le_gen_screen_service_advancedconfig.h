#ifndef LE_GEN_SCREEN_SERVICE_ADVANCEDCONFIG_H
#define LE_GEN_SCREEN_SERVICE_ADVANCEDCONFIG_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advancedconfig_Layer_0_FillPanel;
extern leLabelWidget* service_advancedconfig_LblTitle;
extern leLabelWidget* service_advancedconfig_LblScannerDetectedAnswer;
extern leLabelWidget* service_advancedconfig_LblScannerDetected;
extern leLabelWidget* service_advancedconfig_LblFlashDetectedAnswer;
extern leLabelWidget* service_advancedconfig_LblFlashDetected;
extern leLabelWidget* service_advancedconfig_LblScanMessage;
extern leButtonWidget* service_advancedconfig_ButtonExit;
extern leButtonWidget* service_advancedconfig_ButtonClear;
extern leButtonWidget* service_advancedconfig_ButtonAccept;
extern leButtonWidget* service_advancedconfig_ButtonHome;
extern leLabelWidget* service_advancedconfig_LblInputBox;
extern leButtonWidget* service_advancedconfig_BtnHidden;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advancedconfig_ButtonExit_OnReleased(leButtonWidget* btn);
void event_service_advancedconfig_ButtonClear_OnReleased(leButtonWidget* btn);
void event_service_advancedconfig_ButtonAccept_OnReleased(leButtonWidget* btn);
void event_service_advancedconfig_ButtonHome_OnReleased(leButtonWidget* btn);
void event_service_advancedconfig_BtnHidden_OnReleased(leButtonWidget* btn);
// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advancedconfig(void); // called when Legato is initialized
leResult screenShow_service_advancedconfig(void); // called when screen is shown
void screenHide_service_advancedconfig(void); // called when screen is hidden
void screenDestroy_service_advancedconfig(void); // called when Legato is destroyed
void screenUpdate_service_advancedconfig(void); // called when Legato is updating

leWidget* screenGetRoot_service_advancedconfig(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advancedconfig_OnShow(void); // called when this screen is shown
void service_advancedconfig_OnHide(void); // called when this screen is hidden
void service_advancedconfig_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCEDCONFIG_H
