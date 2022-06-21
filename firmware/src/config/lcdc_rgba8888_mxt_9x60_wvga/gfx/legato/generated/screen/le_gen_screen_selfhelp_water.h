#ifndef LE_GEN_SCREEN_SELFHELP_WATER_H
#define LE_GEN_SCREEN_SELFHELP_WATER_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_water_Layer_0_FillPanel;
extern leLabelWidget* selfhelp_water_LblTitle;
extern leButtonWidget* selfhelp_water_BtnHome;
extern leButtonWidget* selfhelp_water_BtnNoWater;
extern leButtonWidget* selfhelp_water_BtnLowWaterFlow;
extern leButtonWidget* selfhelp_water_BtnWarmWater;
extern leButtonWidget* selfhelp_water_BtnOffLooking;
extern leButtonWidget* selfhelp_water_BtnExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_water_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_water_BtnNoWater_OnReleased(leButtonWidget* btn);
void event_selfhelp_water_BtnLowWaterFlow_OnReleased(leButtonWidget* btn);
void event_selfhelp_water_BtnWarmWater_OnReleased(leButtonWidget* btn);
void event_selfhelp_water_BtnOffLooking_OnReleased(leButtonWidget* btn);
void event_selfhelp_water_BtnExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_water(void); // called when Legato is initialized
leResult screenShow_selfhelp_water(void); // called when screen is shown
void screenHide_selfhelp_water(void); // called when screen is hidden
void screenDestroy_selfhelp_water(void); // called when Legato is destroyed
void screenUpdate_selfhelp_water(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_water(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_water_OnShow(void); // called when this screen is shown
void selfhelp_water_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_WATER_H
