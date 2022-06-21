#ifndef LE_GEN_SCREEN_SERVICE_MANUAL_H
#define LE_GEN_SCREEN_SERVICE_MANUAL_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_manual_Layer_0_FillPanel;
extern leImageWidget* service_manual_ImgQRCode;
extern leImageWidget* service_manual_ImgQRLine;
extern leLabelWidget* service_manual_LblQRTitle;
extern leButtonWidget* service_manual_BtnQRMaintenance;
extern leButtonWidget* service_manual_BtnQROperationSettings;
extern leButtonWidget* service_manual_BtnQRService;
extern leButtonWidget* service_manual_BtnQRSystemInformation;
extern leButtonWidget* service_manual_BtnQRTroubleshoot;
extern leButtonWidget* service_manual_BtnQRHome;
extern leButtonWidget* service_manual_BtnQRExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_manual_BtnQRMaintenance_OnReleased(leButtonWidget* btn);
void event_service_manual_BtnQROperationSettings_OnReleased(leButtonWidget* btn);
void event_service_manual_BtnQRService_OnReleased(leButtonWidget* btn);
void event_service_manual_BtnQRSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_manual_BtnQRTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_manual_BtnQRHome_OnReleased(leButtonWidget* btn);
void event_service_manual_BtnQRExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_manual(void); // called when Legato is initialized
leResult screenShow_service_manual(void); // called when screen is shown
void screenHide_service_manual(void); // called when screen is hidden
void screenDestroy_service_manual(void); // called when Legato is destroyed
void screenUpdate_service_manual(void); // called when Legato is updating

leWidget* screenGetRoot_service_manual(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_manual_OnShow(void); // called when this screen is shown
void service_manual_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_MANUAL_H
