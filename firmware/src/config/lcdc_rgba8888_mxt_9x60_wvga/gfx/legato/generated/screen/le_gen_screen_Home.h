#ifndef LE_GEN_SCREEN_HOME_H
#define LE_GEN_SCREEN_HOME_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leImageWidget* Home_Layer0_FillPanel;
extern leImageWidget* Home_CookTekLOGO;
extern leLabelWidget* Home_ModelWattage;
extern leWidget* Home_PanelWidget0;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Home(void); // called when Legato is initialized
leResult screenShow_Home(void); // called when screen is shown
void screenHide_Home(void); // called when screen is hidden
void screenDestroy_Home(void); // called when Legato is destroyed
void screenUpdate_Home(void); // called when Legato is updating

leWidget* screenGetRoot_Home(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Home_OnShow(void); // called when this screen is shown
void Home_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_HOME_H
