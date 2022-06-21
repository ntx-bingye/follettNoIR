#ifndef LE_GEN_SCREEN_SELFHELP_ICE_H
#define LE_GEN_SCREEN_SELFHELP_ICE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_ice_Layer_0_FillPanel;
extern leLabelWidget* selfhelp_ice_LblTitle;
extern leButtonWidget* selfhelp_ice_BtnHome;
extern leButtonWidget* selfhelp_ice_BtnNoIce;
extern leButtonWidget* selfhelp_ice_BtnExit;
extern leButtonWidget* selfhelp_ice_BtnSoftIce;
extern leButtonWidget* selfhelp_ice_BtnOffLooking;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_ice_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_ice_BtnNoIce_OnPressed(leButtonWidget* btn);
void event_selfhelp_ice_BtnNoIce_OnReleased(leButtonWidget* btn);
void event_selfhelp_ice_BtnExit_OnReleased(leButtonWidget* btn);
void event_selfhelp_ice_BtnSoftIce_OnPressed(leButtonWidget* btn);
void event_selfhelp_ice_BtnSoftIce_OnReleased(leButtonWidget* btn);
void event_selfhelp_ice_BtnOffLooking_OnPressed(leButtonWidget* btn);
void event_selfhelp_ice_BtnOffLooking_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_ice(void); // called when Legato is initialized
leResult screenShow_selfhelp_ice(void); // called when screen is shown
void screenHide_selfhelp_ice(void); // called when screen is hidden
void screenDestroy_selfhelp_ice(void); // called when Legato is destroyed
void screenUpdate_selfhelp_ice(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_ice(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_ice_OnShow(void); // called when this screen is shown
void selfhelp_ice_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_ICE_H
