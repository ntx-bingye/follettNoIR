#ifndef LE_GEN_SCREEN_SERVICE_ADVANCEDWAKEONDISPENSE_H
#define LE_GEN_SCREEN_SERVICE_ADVANCEDWAKEONDISPENSE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advancedwakeonDispense_Layer_0_FillPanel;
extern leLabelWidget* service_advancedwakeonDispense_LblSeconds;
extern leLabelWidget* service_advancedwakeonDispense_LblWakeOnSleepValue;
extern leLabelWidget* service_advancedwakeonDispense_LblSubTitle;
extern leImageWidget* service_advancedwakeonDispense_ImgLine;
extern leLabelWidget* service_advancedwakeonDispense_LblTitle;
extern leButtonWidget* service_advancedwakeonDispense_BtnExit;
extern leButtonWidget* service_advancedwakeonDispense_BtnRight;
extern leButtonWidget* service_advancedwakeonDispense_BtnLeft;
extern leButtonWidget* service_advancedwakeonDispense_BtnHome;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advancedwakeonDispense_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_advancedwakeonDispense_BtnRight_OnReleased(leButtonWidget* btn);
void event_service_advancedwakeonDispense_BtnLeft_OnReleased(leButtonWidget* btn);
void event_service_advancedwakeonDispense_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advancedwakeonDispense(void); // called when Legato is initialized
leResult screenShow_service_advancedwakeonDispense(void); // called when screen is shown
void screenHide_service_advancedwakeonDispense(void); // called when screen is hidden
void screenDestroy_service_advancedwakeonDispense(void); // called when Legato is destroyed
void screenUpdate_service_advancedwakeonDispense(void); // called when Legato is updating

leWidget* screenGetRoot_service_advancedwakeonDispense(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advancedwakeonDispense_OnShow(void); // called when this screen is shown
void service_advancedwakeonDispense_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCEDWAKEONDISPENSE_H
