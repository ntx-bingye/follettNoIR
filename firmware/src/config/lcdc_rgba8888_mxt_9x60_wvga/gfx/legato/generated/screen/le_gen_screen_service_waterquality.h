#ifndef LE_GEN_SCREEN_SERVICE_WATERQUALITY_H
#define LE_GEN_SCREEN_SERVICE_WATERQUALITY_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_waterquality_Layer_0_FillPanel;
extern leLabelWidget* service_waterquality_LblTitle;
extern leImageWidget* service_waterquality_ImgLine;
extern leLabelWidget* service_waterquality_LblSubTitle;
extern leButtonWidget* service_waterquality_BtnExit;
extern leButtonWidget* service_waterquality_BtnLow;
extern leButtonWidget* service_waterquality_BtnHigh;
extern leButtonWidget* service_waterquality_BtnHome;
extern leButtonWidget* service_waterquality_BtnTroubleshoot;
extern leButtonWidget* service_waterquality_BtnSystemInformation;
extern leButtonWidget* service_waterquality_BtnService;
extern leButtonWidget* service_waterquality_BtnOperationSettings;
extern leButtonWidget* service_waterquality_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_waterquality_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_waterquality_BtnLow_OnReleased(leButtonWidget* btn);
void event_service_waterquality_BtnHigh_OnReleased(leButtonWidget* btn);
void event_service_waterquality_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_waterquality_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_waterquality_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_waterquality_BtnService_OnReleased(leButtonWidget* btn);
void event_service_waterquality_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_service_waterquality_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_waterquality(void); // called when Legato is initialized
leResult screenShow_service_waterquality(void); // called when screen is shown
void screenHide_service_waterquality(void); // called when screen is hidden
void screenDestroy_service_waterquality(void); // called when Legato is destroyed
void screenUpdate_service_waterquality(void); // called when Legato is updating

leWidget* screenGetRoot_service_waterquality(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_waterquality_OnShow(void); // called when this screen is shown
void service_waterquality_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_WATERQUALITY_H
