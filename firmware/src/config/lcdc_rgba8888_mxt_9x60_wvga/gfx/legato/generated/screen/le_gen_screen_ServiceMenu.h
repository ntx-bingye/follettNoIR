#ifndef LE_GEN_SCREEN_SERVICEMENU_H
#define LE_GEN_SCREEN_SERVICEMENU_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ServiceMenu_PanelBack;
extern leImageWidget* ServiceMenu_ServiceMenuIcon;
extern leLabelWidget* ServiceMenu_LabelServiceSettings;
extern leWidget* ServiceMenu_PanelWidget0;
extern leButtonWidget* ServiceMenu_BurronWattageSelection;
extern leButtonWidget* ServiceMenu_ButtonLineVoltage;
extern leButtonWidget* ServiceMenu_ButtonOtherSettings;
extern leButtonWidget* ServiceMenu_ButtonBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ServiceMenu_BurronWattageSelection_OnPressed(leButtonWidget* btn);
void event_ServiceMenu_BurronWattageSelection_OnReleased(leButtonWidget* btn);
void event_ServiceMenu_ButtonLineVoltage_OnPressed(leButtonWidget* btn);
void event_ServiceMenu_ButtonLineVoltage_OnReleased(leButtonWidget* btn);
void event_ServiceMenu_ButtonOtherSettings_OnPressed(leButtonWidget* btn);
void event_ServiceMenu_ButtonOtherSettings_OnReleased(leButtonWidget* btn);
void event_ServiceMenu_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ServiceMenu(void); // called when Legato is initialized
leResult screenShow_ServiceMenu(void); // called when screen is shown
void screenHide_ServiceMenu(void); // called when screen is hidden
void screenDestroy_ServiceMenu(void); // called when Legato is destroyed
void screenUpdate_ServiceMenu(void); // called when Legato is updating

leWidget* screenGetRoot_ServiceMenu(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICEMENU_H
