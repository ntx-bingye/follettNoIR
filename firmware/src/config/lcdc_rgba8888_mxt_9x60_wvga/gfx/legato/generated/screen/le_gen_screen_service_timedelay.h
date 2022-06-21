#ifndef LE_GEN_SCREEN_SERVICE_TIMEDELAY_H
#define LE_GEN_SCREEN_SERVICE_TIMEDELAY_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_timedelay_Layer_0_FillPanel;
extern leLabelWidget* service_timedelay_LblTitle;
extern leImageWidget* service_timedelay_ImgLine;
extern leLabelWidget* service_timedelay_LblSubTitle;
extern leButtonWidget* service_timedelay_BtnExit;
extern leButtonWidget* service_timedelay_BtnLong;
extern leButtonWidget* service_timedelay_BtnShort;
extern leButtonWidget* service_timedelay_BtnHome;
extern leButtonWidget* service_timedelay_BtnTroubleShoot;
extern leButtonWidget* service_timedelay_BtnSystemInformation;
extern leButtonWidget* service_timedelay_BtnService;
extern leButtonWidget* service_timedelay_BtnOperationSetings;
extern leButtonWidget* service_timedelay_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_timedelay_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_timedelay_BtnLong_OnReleased(leButtonWidget* btn);
void event_service_timedelay_BtnShort_OnReleased(leButtonWidget* btn);
void event_service_timedelay_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_timedelay_BtnTroubleShoot_OnReleased(leButtonWidget* btn);
void event_service_timedelay_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_service_timedelay_BtnService_OnReleased(leButtonWidget* btn);
void event_service_timedelay_BtnOperationSetings_OnReleased(leButtonWidget* btn);
void event_service_timedelay_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_timedelay(void); // called when Legato is initialized
leResult screenShow_service_timedelay(void); // called when screen is shown
void screenHide_service_timedelay(void); // called when screen is hidden
void screenDestroy_service_timedelay(void); // called when Legato is destroyed
void screenUpdate_service_timedelay(void); // called when Legato is updating

leWidget* screenGetRoot_service_timedelay(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_timedelay_OnShow(void); // called when this screen is shown
void service_timedelay_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_TIMEDELAY_H
