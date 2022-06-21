#ifndef LE_GEN_SCREEN_SELECTOPERATIONACOOKLMODE_H
#define LE_GEN_SCREEN_SELECTOPERATIONACOOKLMODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* SelectOperationaCooklMode_Layer0_FillPanel;
extern leLabelWidget* SelectOperationaCooklMode_LabelSelectOne;
extern leButtonWidget* SelectOperationaCooklMode_ButtonPower;
extern leButtonWidget* SelectOperationaCooklMode_ButtonTemperature;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_SelectOperationaCooklMode_ButtonPower_OnPressed(leButtonWidget* btn);
void event_SelectOperationaCooklMode_ButtonPower_OnReleased(leButtonWidget* btn);
void event_SelectOperationaCooklMode_ButtonTemperature_OnPressed(leButtonWidget* btn);
void event_SelectOperationaCooklMode_ButtonTemperature_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_SelectOperationaCooklMode(void); // called when Legato is initialized
leResult screenShow_SelectOperationaCooklMode(void); // called when screen is shown
void screenHide_SelectOperationaCooklMode(void); // called when screen is hidden
void screenDestroy_SelectOperationaCooklMode(void); // called when Legato is destroyed
void screenUpdate_SelectOperationaCooklMode(void); // called when Legato is updating

leWidget* screenGetRoot_SelectOperationaCooklMode(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELECTOPERATIONACOOKLMODE_H
