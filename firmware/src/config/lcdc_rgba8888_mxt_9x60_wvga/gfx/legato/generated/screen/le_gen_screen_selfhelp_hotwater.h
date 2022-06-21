#ifndef LE_GEN_SCREEN_SELFHELP_HOTWATER_H
#define LE_GEN_SCREEN_SELFHELP_HOTWATER_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_hotwater_Layer_0_FillPanel;
extern leLabelWidget* selfhelp_hotwater_LblTitle;
extern leButtonWidget* selfhelp_hotwater_BtnHome;
extern leButtonWidget* selfhelp_hotwater_BtnNoWater;
extern leButtonWidget* selfhelp_hotwater_BtnNoHotWater;
extern leButtonWidget* selfhelp_hotwater_BtnExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_hotwater_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_hotwater_BtnNoWater_OnPressed(leButtonWidget* btn);
void event_selfhelp_hotwater_BtnNoWater_OnReleased(leButtonWidget* btn);
void event_selfhelp_hotwater_BtnNoHotWater_OnPressed(leButtonWidget* btn);
void event_selfhelp_hotwater_BtnNoHotWater_OnReleased(leButtonWidget* btn);
void event_selfhelp_hotwater_BtnExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_hotwater(void); // called when Legato is initialized
leResult screenShow_selfhelp_hotwater(void); // called when screen is shown
void screenHide_selfhelp_hotwater(void); // called when screen is hidden
void screenDestroy_selfhelp_hotwater(void); // called when Legato is destroyed
void screenUpdate_selfhelp_hotwater(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_hotwater(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_hotwater_OnShow(void); // called when this screen is shown
void selfhelp_hotwater_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_HOTWATER_H
