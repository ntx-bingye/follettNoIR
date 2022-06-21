#ifndef LE_GEN_SCREEN_SERVICE_FLUSHENABLE_H
#define LE_GEN_SCREEN_SERVICE_FLUSHENABLE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_flushenable_Layer_0_FillPanel;
extern leLabelWidget* service_flushenable_LblTitle;
extern leImageWidget* service_flushenable_ImgLine;
extern leLabelWidget* service_flushenable_LblTimeDelay;
extern leLabelWidget* service_flushenable_LblSelf;
extern leLabelWidget* service_flushenable_LblShuttle;
extern leButtonWidget* service_flushenable_BtnExit;
extern leButtonWidget* service_flushenable_BtnShuttle;
extern leButtonWidget* service_flushenable_BtnSelf;
extern leButtonWidget* service_flushenable_BtnTimeDelay;
extern leButtonWidget* service_flushenable_BtnHome;
extern leButtonWidget* service_flushenable_BtnTroubleshoot;
extern leButtonWidget* service_flushenable_BtnSystemInformation;
extern leButtonWidget* service_flushenable_BtnService;
extern leButtonWidget* service_flushenable_BtnOperationSettings;
extern leButtonWidget* service_flushenable_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_flushenable_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnShuttle_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnSelf_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnTimeDelay_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnService_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_service_flushenable_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_flushenable(void); // called when Legato is initialized
leResult screenShow_service_flushenable(void); // called when screen is shown
void screenHide_service_flushenable(void); // called when screen is hidden
void screenDestroy_service_flushenable(void); // called when Legato is destroyed
void screenUpdate_service_flushenable(void); // called when Legato is updating

leWidget* screenGetRoot_service_flushenable(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_flushenable_OnShow(void); // called when this screen is shown
void service_flushenable_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_FLUSHENABLE_H
