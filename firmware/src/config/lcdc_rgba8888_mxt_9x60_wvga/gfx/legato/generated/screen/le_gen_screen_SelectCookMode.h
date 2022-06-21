#ifndef LE_GEN_SCREEN_SELECTCOOKMODE_H
#define LE_GEN_SCREEN_SELECTCOOKMODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* SelectCookMode_Layer0_FillPanel;
extern leWidget* SelectCookMode_PanelWidget0;
extern leButtonWidget* SelectCookMode_ButtonPower;
extern leButtonWidget* SelectCookMode_ButtonTemperature;
extern leButtonWidget* SelectCookMode_ButtonBack;
extern leLabelWidget* SelectCookMode_LabelSelectOne;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_SelectCookMode_ButtonPower_OnReleased(leButtonWidget* btn);
void event_SelectCookMode_ButtonTemperature_OnReleased(leButtonWidget* btn);
void event_SelectCookMode_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_SelectCookMode(void); // called when Legato is initialized
leResult screenShow_SelectCookMode(void); // called when screen is shown
void screenHide_SelectCookMode(void); // called when screen is hidden
void screenDestroy_SelectCookMode(void); // called when Legato is destroyed
void screenUpdate_SelectCookMode(void); // called when Legato is updating

leWidget* screenGetRoot_SelectCookMode(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void SelectCookMode_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELECTCOOKMODE_H
