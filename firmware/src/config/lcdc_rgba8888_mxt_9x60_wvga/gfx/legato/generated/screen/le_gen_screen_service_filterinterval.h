#ifndef LE_GEN_SCREEN_SERVICE_FILTERINTERVAL_H
#define LE_GEN_SCREEN_SERVICE_FILTERINTERVAL_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_filterinterval_Layer_0_FillPanel;
extern leLabelWidget* service_filterinterval_LblTitle;
extern leImageWidget* service_filterinterval_ImgLine;
extern leLabelWidget* service_filterinterval_LblSubTitle;
extern leLabelWidget* service_filterinterval_LblFilterIntervalValue;
extern leLabelWidget* service_filterinterval_LblMonths;
extern leImageWidget* service_filterinterval_ImgCancel;
extern leButtonWidget* service_filterinterval_BtnExit;
extern leButtonWidget* service_filterinterval_BtnRight;
extern leButtonWidget* service_filterinterval_BtnLeft;
extern leButtonWidget* service_filterinterval_BtnHome;
extern leButtonWidget* service_filterinterval_BtnTroubleshoot;
extern leButtonWidget* service_filterinterval_BtnSystemInformation;
extern leButtonWidget* service_filterinterval_BtnService;
extern leButtonWidget* service_filterinterval_BtnOperationSettings;
extern leButtonWidget* service_filterinterval_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_filterinterval_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_filterinterval_BtnRight_OnReleased(leButtonWidget* btn);
void event_service_filterinterval_BtnLeft_OnReleased(leButtonWidget* btn);
void event_service_filterinterval_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_filterinterval_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_filterinterval_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_filterinterval_BtnService_OnReleased(leButtonWidget* btn);
void event_service_filterinterval_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_service_filterinterval_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_filterinterval(void); // called when Legato is initialized
leResult screenShow_service_filterinterval(void); // called when screen is shown
void screenHide_service_filterinterval(void); // called when screen is hidden
void screenDestroy_service_filterinterval(void); // called when Legato is destroyed
void screenUpdate_service_filterinterval(void); // called when Legato is updating

leWidget* screenGetRoot_service_filterinterval(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_filterinterval_OnShow(void); // called when this screen is shown
void service_filterinterval_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_FILTERINTERVAL_H
