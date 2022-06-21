#ifndef LE_GEN_SCREEN_SELFHELP_SPLASH_H
#define LE_GEN_SCREEN_SELFHELP_SPLASH_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_splash_Layer_0_FillPanel;
extern leLabelWidget* selfhelp_splash_LblTitle;
extern leButtonWidget* selfhelp_splash_BtnHome;
extern leButtonWidget* selfhelp_splash_Btn0;
extern leButtonWidget* selfhelp_splash_Btn1;
extern leButtonWidget* selfhelp_splash_Btn2;
extern leButtonWidget* selfhelp_splash_Btn3;
extern leButtonWidget* selfhelp_splash_BtnExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_splash_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_splash_Btn0_OnReleased(leButtonWidget* btn);
void event_selfhelp_splash_Btn1_OnReleased(leButtonWidget* btn);
void event_selfhelp_splash_Btn2_OnReleased(leButtonWidget* btn);
void event_selfhelp_splash_Btn3_OnReleased(leButtonWidget* btn);
void event_selfhelp_splash_BtnExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_splash(void); // called when Legato is initialized
leResult screenShow_selfhelp_splash(void); // called when screen is shown
void screenHide_selfhelp_splash(void); // called when screen is hidden
void screenDestroy_selfhelp_splash(void); // called when Legato is destroyed
void screenUpdate_selfhelp_splash(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_splash(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_splash_OnShow(void); // called when this screen is shown
void selfhelp_splash_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_SPLASH_H
