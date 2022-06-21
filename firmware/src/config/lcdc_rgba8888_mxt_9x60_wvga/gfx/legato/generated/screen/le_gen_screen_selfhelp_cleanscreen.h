#ifndef LE_GEN_SCREEN_SELFHELP_CLEANSCREEN_H
#define LE_GEN_SCREEN_SELFHELP_CLEANSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_cleanscreen_Layer_0_FillPanel;
extern leLabelWidget* selfhelp_cleanscreen_LblTitle;
extern leLineWidget* selfhelp_cleanscreen_Line;
extern leLabelWidget* selfhelp_cleanscreen_LblInstructions;
extern leButtonWidget* selfhelp_cleanscreen_BtnHome;
extern leButtonWidget* selfhelp_cleanscreen_BtnLock;
extern leButtonWidget* selfhelp_cleanscreen_BtnExit;
extern leButtonWidget* selfhelp_cleanscreen_BtnUnlock;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_cleanscreen_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_cleanscreen_BtnLock_OnReleased(leButtonWidget* btn);
void event_selfhelp_cleanscreen_BtnExit_OnReleased(leButtonWidget* btn);
void event_selfhelp_cleanscreen_BtnUnlock_OnPressed(leButtonWidget* btn);
void event_selfhelp_cleanscreen_BtnUnlock_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_cleanscreen(void); // called when Legato is initialized
leResult screenShow_selfhelp_cleanscreen(void); // called when screen is shown
void screenHide_selfhelp_cleanscreen(void); // called when screen is hidden
void screenDestroy_selfhelp_cleanscreen(void); // called when Legato is destroyed
void screenUpdate_selfhelp_cleanscreen(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_cleanscreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_cleanscreen_OnShow(void); // called when this screen is shown
void selfhelp_cleanscreen_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_CLEANSCREEN_H
