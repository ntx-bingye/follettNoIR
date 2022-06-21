#ifndef LE_GEN_SCREEN_VIEWPERFORMANCEDATA_H
#define LE_GEN_SCREEN_VIEWPERFORMANCEDATA_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ViewPerformanceData_Layer0_FillPanel;
extern leLabelWidget* ViewPerformanceData_LabelOperationalData;
extern leLabelWidget* ViewPerformanceData_LabelVoltageMeasured;
extern leLabelWidget* ViewPerformanceData_LabelFrequencyZeroCross;
extern leLabelWidget* ViewPerformanceData_LabelTopGlassTemperatureMeasured;
extern leLabelWidget* ViewPerformanceData_LabelWattageCalculated;
extern leTextFieldWidget* ViewPerformanceData_TextFieldLineVoltageMeasured;
extern leTextFieldWidget* ViewPerformanceData_TextFieldLineFrequencyZeroCross;
extern leTextFieldWidget* ViewPerformanceData_TextFieldTopGlassTemperatureMeasured;
extern leTextFieldWidget* ViewPerformanceData_TextFieldWattageCalculated;
extern leButtonWidget* ViewPerformanceData_ButtonBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ViewPerformanceData_ButtonBack_OnPressed(leButtonWidget* btn);
void event_ViewPerformanceData_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ViewPerformanceData(void); // called when Legato is initialized
leResult screenShow_ViewPerformanceData(void); // called when screen is shown
void screenHide_ViewPerformanceData(void); // called when screen is hidden
void screenDestroy_ViewPerformanceData(void); // called when Legato is destroyed
void screenUpdate_ViewPerformanceData(void); // called when Legato is updating

leWidget* screenGetRoot_ViewPerformanceData(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_VIEWPERFORMANCEDATA_H
