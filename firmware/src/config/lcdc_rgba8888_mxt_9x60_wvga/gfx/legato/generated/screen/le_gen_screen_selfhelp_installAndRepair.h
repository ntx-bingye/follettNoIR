#ifndef LE_GEN_SCREEN_SELFHELP_INSTALLANDREPAIR_H
#define LE_GEN_SCREEN_SELFHELP_INSTALLANDREPAIR_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_installAndRepair_PanelWidget0;
extern leButtonWidget* selfhelp_installAndRepair_BtnExit;
extern leButtonWidget* selfhelp_installAndRepair_BtnHome;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_installAndRepair_BtnExit_OnPressed(leButtonWidget* btn);
void event_selfhelp_installAndRepair_BtnExit_OnReleased(leButtonWidget* btn);
void event_selfhelp_installAndRepair_BtnHome_OnPressed(leButtonWidget* btn);
void event_selfhelp_installAndRepair_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_installAndRepair(void); // called when Legato is initialized
leResult screenShow_selfhelp_installAndRepair(void); // called when screen is shown
void screenHide_selfhelp_installAndRepair(void); // called when screen is hidden
void screenDestroy_selfhelp_installAndRepair(void); // called when Legato is destroyed
void screenUpdate_selfhelp_installAndRepair(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_installAndRepair(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_installAndRepair_OnShow(void); // called when this screen is shown
void selfhelp_installAndRepair_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_INSTALLANDREPAIR_H
