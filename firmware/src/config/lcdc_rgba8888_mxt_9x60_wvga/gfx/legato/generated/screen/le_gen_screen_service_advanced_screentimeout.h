#ifndef LE_GEN_SCREEN_SERVICE_ADVANCED_SCREENTIMEOUT_H
#define LE_GEN_SCREEN_SERVICE_ADVANCED_SCREENTIMEOUT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advanced_screentimeout_Layer_0_FillPanel;
extern leLabelWidget* service_advanced_screentimeout_LblSeconds;
extern leLabelWidget* service_advanced_screentimeout_LblScreenTimeoutValue;
extern leLabelWidget* service_advanced_screentimeout_LblSubTitle;
extern leImageWidget* service_advanced_screentimeout_ImgLine;
extern leLabelWidget* service_advanced_screentimeout_LblTitle;
extern leButtonWidget* service_advanced_screentimeout_BtnExit;
extern leButtonWidget* service_advanced_screentimeout_BtnRight;
extern leButtonWidget* service_advanced_screentimeout_BtnLeft;
extern leButtonWidget* service_advanced_screentimeout_BtnHome;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advanced_screentimeout_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_advanced_screentimeout_BtnRight_OnReleased(leButtonWidget* btn);
void event_service_advanced_screentimeout_BtnLeft_OnReleased(leButtonWidget* btn);
void event_service_advanced_screentimeout_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advanced_screentimeout(void); // called when Legato is initialized
leResult screenShow_service_advanced_screentimeout(void); // called when screen is shown
void screenHide_service_advanced_screentimeout(void); // called when screen is hidden
void screenDestroy_service_advanced_screentimeout(void); // called when Legato is destroyed
void screenUpdate_service_advanced_screentimeout(void); // called when Legato is updating

leWidget* screenGetRoot_service_advanced_screentimeout(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advanced_screentimeout_OnShow(void); // called when this screen is shown
void service_advanced_screentimeout_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCED_SCREENTIMEOUT_H
