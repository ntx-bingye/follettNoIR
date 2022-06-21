#ifndef LE_GEN_SCREEN_COOKMODESELECTPOWER_H
#define LE_GEN_SCREEN_COOKMODESELECTPOWER_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* CookModeSelectPower_Layer0_FillPanel;
extern leLabelWidget* CookModeSelectPower_LabelSelectOne;
extern leButtonWidget* CookModeSelectPower_ButtonPower;
extern leButtonWidget* CookModeSelectPower_ButtonTemperature;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_CookModeSelectPower_ButtonPower_OnPressed(leButtonWidget* btn);
void event_CookModeSelectPower_ButtonPower_OnReleased(leButtonWidget* btn);
void event_CookModeSelectPower_ButtonTemperature_OnPressed(leButtonWidget* btn);
void event_CookModeSelectPower_ButtonTemperature_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_CookModeSelectPower(void); // called when Legato is initialized
leResult screenShow_CookModeSelectPower(void); // called when screen is shown
void screenHide_CookModeSelectPower(void); // called when screen is hidden
void screenDestroy_CookModeSelectPower(void); // called when Legato is destroyed
void screenUpdate_CookModeSelectPower(void); // called when Legato is updating

leWidget* screenGetRoot_CookModeSelectPower(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void CookModeSelectPower_OnShow(void); // called when this screen is shown
void CookModeSelectPower_OnHide(void); // called when this screen is hidden
void CookModeSelectPower_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_COOKMODESELECTPOWER_H
