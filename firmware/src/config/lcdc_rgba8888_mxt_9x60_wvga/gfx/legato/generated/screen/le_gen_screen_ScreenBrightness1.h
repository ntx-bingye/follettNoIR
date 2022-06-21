#ifndef LE_GEN_SCREEN_SCREENBRIGHTNESS1_H
#define LE_GEN_SCREEN_SCREENBRIGHTNESS1_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ScreenBrightness1_Layer0_FillPanel;
extern leLabelWidget* ScreenBrightness1_LabelBrightness;
extern leImageWidget* ScreenBrightness1_ImageBrightness;
extern leWidget* ScreenBrightness1_PanelWidget0;
extern leSliderWidget* ScreenBrightness1_BrightSlider;
extern leButtonWidget* ScreenBrightness1_ButtonBack1;
extern leLabelWidget* ScreenBrightness1_LabelBrightnessValue;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ScreenBrightness1_BrightSlider_OnValueChanged(leSliderWidget* scr);
void event_ScreenBrightness1_ButtonBack1_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ScreenBrightness1(void); // called when Legato is initialized
leResult screenShow_ScreenBrightness1(void); // called when screen is shown
void screenHide_ScreenBrightness1(void); // called when screen is hidden
void screenDestroy_ScreenBrightness1(void); // called when Legato is destroyed
void screenUpdate_ScreenBrightness1(void); // called when Legato is updating

leWidget* screenGetRoot_ScreenBrightness1(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREENBRIGHTNESS1_H
