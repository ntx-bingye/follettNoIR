#ifndef LE_GEN_SCREEN_SPLASH_H
#define LE_GEN_SCREEN_SPLASH_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* splash_Pnlayer1;
extern leWidget* splash_PnlHotwater;
extern leWidget* splash_PnlWater;
extern leWidget* splash_PnlIce;
extern leImageSequenceWidget* splash_ImgSqnIR;
extern leWidget* splash_panelDue;
extern leButtonWidget* splash_BtnLogo;
extern leButtonWidget* splash_BtnHelp;
extern leImageWidget* splash_ImgHotWater;
extern leButtonWidget* splash_BtnHotWater;
extern leImageSequenceWidget* splash_ImgSqnWater;
extern leButtonWidget* splash_BtnWater;
extern leImageSequenceWidget* splash_ImgSqnIce;
extern leButtonWidget* splash_BtnIce;
extern leLabelWidget* splash_LblDueAlert;
extern leImageWidget* splash_ImgAlert;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_splash_BtnLogo_OnReleased(leButtonWidget* btn);
void event_splash_BtnHelp_OnReleased(leButtonWidget* btn);
void event_splash_BtnHotWater_OnPressed(leButtonWidget* btn);
void event_splash_BtnHotWater_OnReleased(leButtonWidget* btn);
void event_splash_BtnWater_OnPressed(leButtonWidget* btn);
void event_splash_BtnWater_OnReleased(leButtonWidget* btn);
void event_splash_BtnIce_OnPressed(leButtonWidget* btn);
void event_splash_BtnIce_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_splash(void); // called when Legato is initialized
leResult screenShow_splash(void); // called when screen is shown
void screenHide_splash(void); // called when screen is hidden
void screenDestroy_splash(void); // called when Legato is destroyed
void screenUpdate_splash(void); // called when Legato is updating

leWidget* screenGetRoot_splash(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void splash_OnShow(void); // called when this screen is shown
void splash_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SPLASH_H
