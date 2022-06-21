#ifndef LE_GEN_SCREEN_TEMPERATURESCALE_H
#define LE_GEN_SCREEN_TEMPERATURESCALE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* TemperatureScale_Layer0_FillPanel;
extern leImageWidget* TemperatureScale_TempIcon;
extern leLabelWidget* TemperatureScale_LabelTempScale;
extern leWidget* TemperatureScale_PanelWidget0;
extern leButtonWidget* TemperatureScale_ButtonScaleFahrenheit;
extern leButtonWidget* TemperatureScale_ButtonScaleCentigrade;
extern leButtonWidget* TemperatureScale_ButtonBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_TemperatureScale_ButtonScaleFahrenheit_OnPressed(leButtonWidget* btn);
void event_TemperatureScale_ButtonScaleFahrenheit_OnReleased(leButtonWidget* btn);
void event_TemperatureScale_ButtonScaleCentigrade_OnPressed(leButtonWidget* btn);
void event_TemperatureScale_ButtonScaleCentigrade_OnReleased(leButtonWidget* btn);
void event_TemperatureScale_ButtonBack_OnPressed(leButtonWidget* btn);
void event_TemperatureScale_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_TemperatureScale(void); // called when Legato is initialized
leResult screenShow_TemperatureScale(void); // called when screen is shown
void screenHide_TemperatureScale(void); // called when screen is hidden
void screenDestroy_TemperatureScale(void); // called when Legato is destroyed
void screenUpdate_TemperatureScale(void); // called when Legato is updating

leWidget* screenGetRoot_TemperatureScale(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void TemperatureScale_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_TEMPERATURESCALE_H
