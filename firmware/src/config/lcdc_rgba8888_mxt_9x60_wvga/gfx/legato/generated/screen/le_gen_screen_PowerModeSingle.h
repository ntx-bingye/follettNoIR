#ifndef LE_GEN_SCREEN_POWERMODESINGLE_H
#define LE_GEN_SCREEN_POWERMODESINGLE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* PowerModeSingle_Layer0_FillPanel;
extern leImageWidget* PowerModeSingle_ImageRedCircle;
extern leLabelWidget* PowerModeSingle_LabelSetPoint;
extern leWidget* PowerModeSingle_PanelWidget0;
extern leLabelWidget* PowerModeSingle_LabelTimeRemaining;
extern leButtonWidget* PowerModeSingle_ButtonTimer;
extern leButtonWidget* PowerModeSingle_ButtonTimerRemaining;
extern leButtonWidget* PowerModeSingle_ButtonLockScreen;
extern leButtonWidget* PowerModeSingle_ButtonSettings;
extern leButtonWidget* PowerModeSingle_ButtonBack;
extern leCircularSliderWidget* PowerModeSingle_PowerSlider;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_PowerModeSingle_ButtonTimer_OnPressed(leButtonWidget* btn);
void event_PowerModeSingle_ButtonTimer_OnReleased(leButtonWidget* btn);
void event_PowerModeSingle_ButtonTimerRemaining_OnReleased(leButtonWidget* btn);
void event_PowerModeSingle_ButtonLockScreen_OnPressed(leButtonWidget* btn);
void event_PowerModeSingle_ButtonLockScreen_OnReleased(leButtonWidget* btn);
void event_PowerModeSingle_ButtonSettings_OnPressed(leButtonWidget* btn);
void event_PowerModeSingle_ButtonSettings_OnReleased(leButtonWidget* btn);
void event_PowerModeSingle_ButtonBack_OnPressed(leButtonWidget* btn);
void event_PowerModeSingle_ButtonBack_OnReleased(leButtonWidget* btn);
void event_PowerModeSingle_PowerSlider_OnValueChanged(leCircularSliderWidget* sld, int32_t val);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_PowerModeSingle(void); // called when Legato is initialized
leResult screenShow_PowerModeSingle(void); // called when screen is shown
void screenHide_PowerModeSingle(void); // called when screen is hidden
void screenDestroy_PowerModeSingle(void); // called when Legato is destroyed
void screenUpdate_PowerModeSingle(void); // called when Legato is updating

leWidget* screenGetRoot_PowerModeSingle(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void PowerModeSingle_OnShow(void); // called when this screen is shown
void PowerModeSingle_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_POWERMODESINGLE_H
