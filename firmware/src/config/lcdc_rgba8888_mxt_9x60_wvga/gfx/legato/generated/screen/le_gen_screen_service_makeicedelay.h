#ifndef LE_GEN_SCREEN_SERVICE_MAKEICEDELAY_H
#define LE_GEN_SCREEN_SERVICE_MAKEICEDELAY_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_makeicedelay_Layer_0_FillPanel;
extern leLabelWidget* service_makeicedelay_LblTitle;
extern leImageWidget* service_makeicedelay_ImgLine;
extern leLabelWidget* service_makeicedelay_LblSubTitle;
extern leLabelWidget* service_makeicedelay_LblMakeIceDelayValue;
extern leLabelWidget* service_makeicedelay_LblSeconds;
extern leButtonWidget* service_makeicedelay_BtnExit;
extern leButtonWidget* service_makeicedelay_BtnRight;
extern leButtonWidget* service_makeicedelay_BtnHome;
extern leButtonWidget* service_makeicedelay_BtnTroubleshoot;
extern leButtonWidget* service_makeicedelay_BtnSystemInformation;
extern leButtonWidget* service_makeicedelay_BtnService;
extern leButtonWidget* service_makeicedelay_BtnOperationSettings;
extern leButtonWidget* service_makeicedelay_BtnMaintenance;
extern leButtonWidget* service_makeicedelay_BtnLeft;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_makeicedelay_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_makeicedelay_BtnRight_OnReleased(leButtonWidget* btn);
void event_service_makeicedelay_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_makeicedelay_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_makeicedelay_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_makeicedelay_BtnService_OnReleased(leButtonWidget* btn);
void event_service_makeicedelay_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_service_makeicedelay_BtnMaintenance_OnReleased(leButtonWidget* btn);
void event_service_makeicedelay_BtnLeft_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_makeicedelay(void); // called when Legato is initialized
leResult screenShow_service_makeicedelay(void); // called when screen is shown
void screenHide_service_makeicedelay(void); // called when screen is hidden
void screenDestroy_service_makeicedelay(void); // called when Legato is destroyed
void screenUpdate_service_makeicedelay(void); // called when Legato is updating

leWidget* screenGetRoot_service_makeicedelay(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_makeicedelay_OnShow(void); // called when this screen is shown
void service_makeicedelay_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_MAKEICEDELAY_H
