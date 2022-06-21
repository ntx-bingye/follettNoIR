#ifndef LE_GEN_SCREEN_DUALTEMPMODE_H
#define LE_GEN_SCREEN_DUALTEMPMODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* DualTempMode_PanelHOB2Back;
extern leWidget* DualTempMode_PanelHOB1Back;
extern leWidget* DualTempMode_PanelGeneral;
extern leButtonWidget* DualTempMode_ButtonHOB2Clock;
extern leButtonWidget* DualTempMode_ButtonHOB2Lock;
extern leLabelWidget* DualTempMode_LabelHOB2GetTemp;
extern leLabelWidget* DualTempMode_LabelHOB2SetTemp;
extern leSliderWidget* DualTempMode_SliderHOB2Temp;
extern leLabelWidget* DualTempMode_LabelHOB2TimeRemaining;
extern leButtonWidget* DualTempMode_ButtonBigHOB2;
extern leButtonWidget* DualTempMode_ButtonHOB1Clock;
extern leButtonWidget* DualTempMode_ButtonHOB1Lock;
extern leLabelWidget* DualTempMode_LabelHOB1GetTemp;
extern leLabelWidget* DualTempMode_LabelHOB1SetTemp;
extern leSliderWidget* DualTempMode_SliderHOB1Temp;
extern leLabelWidget* DualTempMode_LabelHOB1TimeRemaining;
extern leButtonWidget* DualTempMode_ButtonBigHOB1;
extern leButtonWidget* DualTempMode_ButtonBack;
extern leButtonWidget* DualTempMode_ButtonSettings;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_DualTempMode_ButtonHOB2Clock_OnReleased(leButtonWidget* btn);
void event_DualTempMode_ButtonHOB2Lock_OnPressed(leButtonWidget* btn);
void event_DualTempMode_ButtonHOB2Lock_OnReleased(leButtonWidget* btn);
void event_DualTempMode_SliderHOB2Temp_OnValueChanged(leSliderWidget* scr);
void event_DualTempMode_ButtonBigHOB2_OnReleased(leButtonWidget* btn);
void event_DualTempMode_ButtonHOB1Clock_OnReleased(leButtonWidget* btn);
void event_DualTempMode_ButtonHOB1Lock_OnPressed(leButtonWidget* btn);
void event_DualTempMode_ButtonHOB1Lock_OnReleased(leButtonWidget* btn);
void event_DualTempMode_SliderHOB1Temp_OnValueChanged(leSliderWidget* scr);
void event_DualTempMode_ButtonBigHOB1_OnReleased(leButtonWidget* btn);
void event_DualTempMode_ButtonBack_OnReleased(leButtonWidget* btn);
void event_DualTempMode_ButtonSettings_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_DualTempMode(void); // called when Legato is initialized
leResult screenShow_DualTempMode(void); // called when screen is shown
void screenHide_DualTempMode(void); // called when screen is hidden
void screenDestroy_DualTempMode(void); // called when Legato is destroyed
void screenUpdate_DualTempMode(void); // called when Legato is updating

leWidget* screenGetRoot_DualTempMode(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void DualTempMode_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_DUALTEMPMODE_H
