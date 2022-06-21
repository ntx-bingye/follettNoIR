#ifndef LE_GEN_SCREEN_HELP_H
#define LE_GEN_SCREEN_HELP_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* help_PanelWidget1;
extern leButtonWidget* help_BtnExit;
extern leKeyPadWidget* help_KeyPadHelp;
extern leButtonWidget* help_ButtonWidget0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_help_BtnExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_help(void); // called when Legato is initialized
leResult screenShow_help(void); // called when screen is shown
void screenHide_help(void); // called when screen is hidden
void screenDestroy_help(void); // called when Legato is destroyed
void screenUpdate_help(void); // called when Legato is updating

leWidget* screenGetRoot_help(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void help_OnShow(void); // called when this screen is shown
void help_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_HELP_H
