#ifndef LE_GEN_SCREEN_SPLASH_HOTWATER_H
#define LE_GEN_SCREEN_SPLASH_HOTWATER_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* splash_hotwater_Pnl_layer2;
extern leImageWidget* splash_hotwater_ImgCaution;
extern leLabelWidget* splash_hotwater_LblMsgCaution;
extern leLabelWidget* splash_hotwater_LblMsgHotWater;
extern leImageWidget* splash_hotwater_ImgLogo;
extern leImageSequenceWidget* splash_hotwater_ImgHotWaterSqn;
extern leImageSequenceWidget* splash_hotwater_ImgTouchlessSqn;
extern leLabelWidget* splash_hotwater_LblHotWater;
extern leLabelWidget* splash_hotwater_LblMsgOn;
extern leButtonWidget* splash_hotwater_BtnHotWater;
extern leLabelWidget* splash_hotwater_LblStatus;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_splash_hotwater_BtnHotWater_OnPressed(leButtonWidget* btn);
void event_splash_hotwater_BtnHotWater_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_splash_hotwater(void); // called when Legato is initialized
leResult screenShow_splash_hotwater(void); // called when screen is shown
void screenHide_splash_hotwater(void); // called when screen is hidden
void screenDestroy_splash_hotwater(void); // called when Legato is destroyed
void screenUpdate_splash_hotwater(void); // called when Legato is updating

leWidget* screenGetRoot_splash_hotwater(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void splash_hotwater_OnShow(void); // called when this screen is shown
void splash_hotwater_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SPLASH_HOTWATER_H
