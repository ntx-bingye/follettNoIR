#ifndef LE_GEN_SCREEN_SETTINGSBRIGHTNESS_H
#define LE_GEN_SCREEN_SETTINGSBRIGHTNESS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* SettingsBrightness_Layer0_FillPane;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_SettingsBrightness(void); // called when Legato is initialized
leResult screenShow_SettingsBrightness(void); // called when screen is shown
void screenHide_SettingsBrightness(void); // called when screen is hidden
void screenDestroy_SettingsBrightness(void); // called when Legato is destroyed
void screenUpdate_SettingsBrightness(void); // called when Legato is updating

leWidget* screenGetRoot_SettingsBrightness(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SETTINGSBRIGHTNESS_H
