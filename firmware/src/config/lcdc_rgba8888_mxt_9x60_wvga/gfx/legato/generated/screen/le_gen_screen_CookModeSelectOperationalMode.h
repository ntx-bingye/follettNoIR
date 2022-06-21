#ifndef LE_GEN_SCREEN_COOKMODESELECTOPERATIONALMODE_H
#define LE_GEN_SCREEN_COOKMODESELECTOPERATIONALMODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* CookModeSelectOperationalMode_Layer0_FillPanel;
extern leLabelWidget* CookModeSelectOperationalMode_LabelSelectOne;
extern leButtonWidget* CookModeSelectOperationalMode_ButtonPower;
extern leButtonWidget* CookModeSelectOperationalMode_ButtonTemperature;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_CookModeSelectOperationalMode(void); // called when Legato is initialized
leResult screenShow_CookModeSelectOperationalMode(void); // called when screen is shown
void screenHide_CookModeSelectOperationalMode(void); // called when screen is hidden
void screenDestroy_CookModeSelectOperationalMode(void); // called when Legato is destroyed
void screenUpdate_CookModeSelectOperationalMode(void); // called when Legato is updating

leWidget* screenGetRoot_CookModeSelectOperationalMode(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_COOKMODESELECTOPERATIONALMODE_H
