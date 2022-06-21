#ifndef LE_GEN_SCREEN_SETTINGS_H
#define LE_GEN_SCREEN_SETTINGS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Settings_Layer0_FillPanel;
extern leLabelWidget* Settings_LabelSettings;
extern leImageWidget* Settings_SettingsIcon;
extern leWidget* Settings_PanelWidget0;
extern leWidget* Settings_PanelWidget1;
extern leKeyPadWidget* Settings_KeyPad;
extern leButtonWidget* Settings_ButtonBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Settings_KeyPad_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_Settings_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Settings(void); // called when Legato is initialized
leResult screenShow_Settings(void); // called when screen is shown
void screenHide_Settings(void); // called when screen is hidden
void screenDestroy_Settings(void); // called when Legato is destroyed
void screenUpdate_Settings(void); // called when Legato is updating

leWidget* screenGetRoot_Settings(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SETTINGS_H
