#ifndef LE_GEN_SCREEN_START_H
#define LE_GEN_SCREEN_START_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* start_Layer_0_FillPanel;
extern leLabelWidget* start_LabelVer;
extern leImageWidget* start_ImageStart_Logo;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_start(void); // called when Legato is initialized
leResult screenShow_start(void); // called when screen is shown
void screenHide_start(void); // called when screen is hidden
void screenDestroy_start(void); // called when Legato is destroyed
void screenUpdate_start(void); // called when Legato is updating

leWidget* screenGetRoot_start(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void start_OnShow(void); // called when this screen is shown
void start_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_START_H
