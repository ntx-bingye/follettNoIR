#ifndef LE_GEN_SCREEN_SELECTOPERATIONALCOOKMODE_H
#define LE_GEN_SCREEN_SELECTOPERATIONALCOOKMODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* SelectOperationalCookMode_Layer0_FillPanel;
extern leLabelWidget* SelectOperationalCookMode_LabelSelectOne;
extern leButtonWidget* SelectOperationalCookMode_ButtonPower;
extern leButtonWidget* SelectOperationalCookMode_ButtonTemperature;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_SelectOperationalCookMode_ButtonPower_OnPressed(leButtonWidget* btn);
void event_SelectOperationalCookMode_ButtonPower_OnReleased(leButtonWidget* btn);
void event_SelectOperationalCookMode_ButtonTemperature_OnPressed(leButtonWidget* btn);
void event_SelectOperationalCookMode_ButtonTemperature_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_SelectOperationalCookMode(void); // called when Legato is initialized
leResult screenShow_SelectOperationalCookMode(void); // called when screen is shown
void screenHide_SelectOperationalCookMode(void); // called when screen is hidden
void screenDestroy_SelectOperationalCookMode(void); // called when Legato is destroyed
void screenUpdate_SelectOperationalCookMode(void); // called when Legato is updating

leWidget* screenGetRoot_SelectOperationalCookMode(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELECTOPERATIONALCOOKMODE_H
