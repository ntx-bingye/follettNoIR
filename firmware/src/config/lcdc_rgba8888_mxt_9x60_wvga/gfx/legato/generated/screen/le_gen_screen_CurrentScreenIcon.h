#ifndef LE_GEN_SCREEN_CURRENTSCREENICON_H
#define LE_GEN_SCREEN_CURRENTSCREENICON_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* CurrentScreenIcon_PanelWidget0;
extern leImageWidget* CurrentScreenIcon_CurrentScreenIcon;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_CurrentScreenIcon(void); // called when Legato is initialized
leResult screenShow_CurrentScreenIcon(void); // called when screen is shown
void screenHide_CurrentScreenIcon(void); // called when screen is hidden
void screenDestroy_CurrentScreenIcon(void); // called when Legato is destroyed
void screenUpdate_CurrentScreenIcon(void); // called when Legato is updating

leWidget* screenGetRoot_CurrentScreenIcon(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_CURRENTSCREENICON_H
