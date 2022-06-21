#ifndef LE_GEN_SCREEN_PERFORMANCEDATA_H
#define LE_GEN_SCREEN_PERFORMANCEDATA_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* PerformanceData_Layer0_FillPanel;
extern leImageWidget* PerformanceData_PerformaceDataIcon;
extern leLabelWidget* PerformanceData_LabelOperationalData;
extern leLabelWidget* PerformanceData_LabelVoltageMeasured;
extern leLabelWidget* PerformanceData_LabelFrequencyZeroCross;
extern leLabelWidget* PerformanceData_LabelTopGlassTemperatureMeasured;
extern leLabelWidget* PerformanceData_LabelWattageCalculated;
extern leWidget* PerformanceData_PanelWidget0;
extern leLabelWidget* PerformanceData_LabelDualPerData;
extern leButtonWidget* PerformanceData_ButtonBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_PerformanceData_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_PerformanceData(void); // called when Legato is initialized
leResult screenShow_PerformanceData(void); // called when screen is shown
void screenHide_PerformanceData(void); // called when screen is hidden
void screenDestroy_PerformanceData(void); // called when Legato is destroyed
void screenUpdate_PerformanceData(void); // called when Legato is updating

leWidget* screenGetRoot_PerformanceData(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void PerformanceData_OnShow(void); // called when this screen is shown
void PerformanceData_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_PERFORMANCEDATA_H
