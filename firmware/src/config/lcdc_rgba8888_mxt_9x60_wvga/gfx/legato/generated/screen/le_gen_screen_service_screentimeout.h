#ifndef LE_GEN_SCREEN_SERVICE_SCREENTIMEOUT_H
#define LE_GEN_SCREEN_SERVICE_SCREENTIMEOUT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_screentimeout_Layer_0_FillPanel;
extern leLabelWidget* service_screentimeout_LblTitle;
extern leImageWidget* service_screentimeout_ImgLine;
extern leLabelWidget* service_screentimeout_LblSubTitle;
extern leLabelWidget* service_screentimeout_LblScreenTimeoutValue;
extern leLabelWidget* service_screentimeout_LblSeconds;
extern leButtonWidget* service_screentimeout_BtnExit;
extern leButtonWidget* service_screentimeout_BtnRight;
extern leButtonWidget* service_screentimeout_BtnLeft;
extern leButtonWidget* service_screentimeout_BtnHome;
extern leButtonWidget* service_screentimeout_BtnSystemInformation;
extern leButtonWidget* service_screentimeout_BtnTroubleshoot;
extern leButtonWidget* service_screentimeout_BtnService;
extern leButtonWidget* service_screentimeout_BtnOperationSettings;
extern leButtonWidget* service_screentimeout_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_screentimeout_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_screentimeout_BtnRight_OnReleased(leButtonWidget* btn);
void event_service_screentimeout_BtnLeft_OnReleased(leButtonWidget* btn);
void event_service_screentimeout_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_screentimeout_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_screentimeout_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_screentimeout_BtnService_OnReleased(leButtonWidget* btn);
void event_service_screentimeout_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_service_screentimeout_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_screentimeout(void); // called when Legato is initialized
leResult screenShow_service_screentimeout(void); // called when screen is shown
void screenHide_service_screentimeout(void); // called when screen is hidden
void screenDestroy_service_screentimeout(void); // called when Legato is destroyed
void screenUpdate_service_screentimeout(void); // called when Legato is updating

leWidget* screenGetRoot_service_screentimeout(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_screentimeout_OnShow(void); // called when this screen is shown
void service_screentimeout_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_SCREENTIMEOUT_H
