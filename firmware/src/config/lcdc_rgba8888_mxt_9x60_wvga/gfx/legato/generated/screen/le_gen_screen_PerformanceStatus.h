#ifndef LE_GEN_SCREEN_PERFORMANCESTATUS_H
#define LE_GEN_SCREEN_PERFORMANCESTATUS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* PerformanceStatus_PanelWidget0;
extern leLabelWidget* PerformanceStatus_LabelOperationalData;
extern leLabelWidget* PerformanceStatus_LabelVoltageMeasured;
extern leLabelWidget* PerformanceStatus_LabelFrequencyZeroCross;
extern leLabelWidget* PerformanceStatus_LabelTopGlassTemperatureMeasured;
extern leLabelWidget* PerformanceStatus_LabelWattageCalculated;
extern leTextFieldWidget* PerformanceStatus_TextFieldLineVoltageMeasured;
extern leTextFieldWidget* PerformanceStatus_TextFieldLineFrequencyZeroCross;
extern leTextFieldWidget* PerformanceStatus_TextFieldTopGlassTemperatureMeasured;
extern leTextFieldWidget* PerformanceStatus_TextFieldWattageCalculated;
extern leButtonWidget* PerformanceStatus_ButtonExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_PerformanceStatus_ButtonExit_OnPressed(leButtonWidget* btn);
void event_PerformanceStatus_ButtonExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_PerformanceStatus(void); // called when Legato is initialized
leResult screenShow_PerformanceStatus(void); // called when screen is shown
void screenHide_PerformanceStatus(void); // called when screen is hidden
void screenDestroy_PerformanceStatus(void); // called when Legato is destroyed
void screenUpdate_PerformanceStatus(void); // called when Legato is updating

leWidget* screenGetRoot_PerformanceStatus(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_PERFORMANCESTATUS_H
