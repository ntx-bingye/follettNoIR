#ifndef LE_GEN_SCREEN_TEMPERATUREMODESINGLE_H
#define LE_GEN_SCREEN_TEMPERATUREMODESINGLE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* TemperatureModeSingle_Layer0_FillPanel;
extern leImageWidget* TemperatureModeSingle_ImageRedCircle;
extern leWidget* TemperatureModeSingle_PanelWidgetL1;
extern leButtonWidget* TemperatureModeSingle_ButtonBack;
extern leButtonWidget* TemperatureModeSingle_ButtonLockScreen;
extern leButtonWidget* TemperatureModeSingle_ButtonTimer;
extern leButtonWidget* TemperatureModeSingle_ButtonSettings;
extern leLabelWidget* TemperatureModeSingle_LabelTimeRemaining;
extern leLabelWidget* TemperatureModeSingle_LabelTemperatureCurrent;
extern leLabelWidget* TemperatureModeSingle_LabelTemperatureSet;
extern leCircularSliderWidget* TemperatureModeSingle_TempSlider;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_TemperatureModeSingle_ButtonBack_OnReleased(leButtonWidget* btn);
void event_TemperatureModeSingle_ButtonLockScreen_OnPressed(leButtonWidget* btn);
void event_TemperatureModeSingle_ButtonLockScreen_OnReleased(leButtonWidget* btn);
void event_TemperatureModeSingle_ButtonTimer_OnReleased(leButtonWidget* btn);
void event_TemperatureModeSingle_ButtonSettings_OnReleased(leButtonWidget* btn);
void event_TemperatureModeSingle_TempSlider_OnValueChanged(leCircularSliderWidget* sld, int32_t val);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_TemperatureModeSingle(void); // called when Legato is initialized
leResult screenShow_TemperatureModeSingle(void); // called when screen is shown
void screenHide_TemperatureModeSingle(void); // called when screen is hidden
void screenDestroy_TemperatureModeSingle(void); // called when Legato is destroyed
void screenUpdate_TemperatureModeSingle(void); // called when Legato is updating

leWidget* screenGetRoot_TemperatureModeSingle(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void TemperatureModeSingle_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_TEMPERATUREMODESINGLE_H
