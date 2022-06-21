#ifndef LE_GEN_SCREEN_SCREENBRIGHTNESS_H
#define LE_GEN_SCREEN_SCREENBRIGHTNESS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ScreenBrightness_Layer0_FillPanel;
extern leButtonWidget* ScreenBrightness_ButtonBack;
extern leSliderWidget* ScreenBrightness_SliderWidgetBrightness;
extern leLabelWidget* ScreenBrightness_LabelBrightness;
extern leImageWidget* ScreenBrightness_ImageBrightness;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ScreenBrightness_ButtonBack_OnPressed(leButtonWidget* btn);
void event_ScreenBrightness_ButtonBack_OnReleased(leButtonWidget* btn);
void event_ScreenBrightness_SliderWidgetBrightness_OnValueChanged(leSliderWidget* scr);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ScreenBrightness(void); // called when Legato is initialized
leResult screenShow_ScreenBrightness(void); // called when screen is shown
void screenHide_ScreenBrightness(void); // called when screen is hidden
void screenDestroy_ScreenBrightness(void); // called when Legato is destroyed
void screenUpdate_ScreenBrightness(void); // called when Legato is updating

leWidget* screenGetRoot_ScreenBrightness(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREENBRIGHTNESS_H
