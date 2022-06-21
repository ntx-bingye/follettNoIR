#ifndef LE_GEN_SCREEN_DUALPOWERMODE_H
#define LE_GEN_SCREEN_DUALPOWERMODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* DualPowerMode_PanelHOB1Back;
extern leWidget* DualPowerMode_PanelHOB2Back;
extern leWidget* DualPowerMode_PanelGeneral;
extern leButtonWidget* DualPowerMode_ButtonHOB1Clock;
extern leButtonWidget* DualPowerMode_ButtonHOB1Lock;
extern leLabelWidget* DualPowerMode_LabelHOB1TimeRemaining;
extern leLabelWidget* DualPowerMode_LabelHOB1SetPower;
extern leButtonWidget* DualPowerMode_ButtonBigHOB1;
extern leSliderWidget* DualPowerMode_SliderHOB1;
extern leButtonWidget* DualPowerMode_ButtonHOB2Clock;
extern leButtonWidget* DualPowerMode_ButtonHOB2Lock;
extern leLabelWidget* DualPowerMode_LabelHOB2TimeRemaining;
extern leLabelWidget* DualPowerMode_LabelHOB2SetPower;
extern leButtonWidget* DualPowerMode_ButtonBigHOB2;
extern leSliderWidget* DualPowerMode_SliderHOB2;
extern leButtonWidget* DualPowerMode_ButtonBack;
extern leButtonWidget* DualPowerMode_ButtonSettings;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_DualPowerMode_ButtonHOB1Clock_OnReleased(leButtonWidget* btn);
void event_DualPowerMode_ButtonHOB1Lock_OnPressed(leButtonWidget* btn);
void event_DualPowerMode_ButtonHOB1Lock_OnReleased(leButtonWidget* btn);
void event_DualPowerMode_ButtonBigHOB1_OnReleased(leButtonWidget* btn);
void event_DualPowerMode_SliderHOB1_OnValueChanged(leSliderWidget* scr);
void event_DualPowerMode_ButtonHOB2Clock_OnReleased(leButtonWidget* btn);
void event_DualPowerMode_ButtonHOB2Lock_OnPressed(leButtonWidget* btn);
void event_DualPowerMode_ButtonHOB2Lock_OnReleased(leButtonWidget* btn);
void event_DualPowerMode_ButtonBigHOB2_OnReleased(leButtonWidget* btn);
void event_DualPowerMode_SliderHOB2_OnValueChanged(leSliderWidget* scr);
void event_DualPowerMode_ButtonBack_OnReleased(leButtonWidget* btn);
void event_DualPowerMode_ButtonSettings_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_DualPowerMode(void); // called when Legato is initialized
leResult screenShow_DualPowerMode(void); // called when screen is shown
void screenHide_DualPowerMode(void); // called when screen is hidden
void screenDestroy_DualPowerMode(void); // called when Legato is destroyed
void screenUpdate_DualPowerMode(void); // called when Legato is updating

leWidget* screenGetRoot_DualPowerMode(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void DualPowerMode_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_DUALPOWERMODE_H
