#ifndef LE_GEN_SCREEN_OPSETTINGS_H
#define LE_GEN_SCREEN_OPSETTINGS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* opsettings_Layer_0_FillPanel;
extern leButtonWidget* opsettings_BtnMaintenance;
extern leButtonWidget* opsettings_BtnExit;
extern leButtonWidget* opsettings_BtnHotWater;
extern leButtonWidget* opsettings_BtnBrightness;
extern leButtonWidget* opsettings_BtnLanguage;
extern leButtonWidget* opsettings_BtnSleepMode;
extern leButtonWidget* opsettings_BtnHome;
extern leButtonWidget* opsettings_BtnTroubleshoot;
extern leButtonWidget* opsettings_BtnSystemInformation;
extern leButtonWidget* opsettings_BtnService;
extern leButtonWidget* opsettings_BtnOperationSettings;
extern leWidget* opsettings_PanelWidget0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_opsettings_BtnMaintenance_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnExit_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnHotWater_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnBrightness_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnLanguage_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnSleepMode_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnHome_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_opsettings_BtnService_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_opsettings(void); // called when Legato is initialized
leResult screenShow_opsettings(void); // called when screen is shown
void screenHide_opsettings(void); // called when screen is hidden
void screenDestroy_opsettings(void); // called when Legato is destroyed
void screenUpdate_opsettings(void); // called when Legato is updating

leWidget* screenGetRoot_opsettings(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void opsettings_OnShow(void); // called when this screen is shown
void opsettings_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_OPSETTINGS_H
