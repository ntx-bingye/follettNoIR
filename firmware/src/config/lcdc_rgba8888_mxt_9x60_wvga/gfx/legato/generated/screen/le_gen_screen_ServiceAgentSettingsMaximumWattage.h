#ifndef LE_GEN_SCREEN_SERVICEAGENTSETTINGSMAXIMUMWATTAGE_H
#define LE_GEN_SCREEN_SERVICEAGENTSETTINGSMAXIMUMWATTAGE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ServiceAgentSettingsMaximumWattage_Layer0_FillPanel;
extern leButtonWidget* ServiceAgentSettingsMaximumWattage_ButtonGearICON;
extern leLabelWidget* ServiceAgentSettingsMaximumWattage_LabelMaximumWattage;
extern leLabelWidget* ServiceAgentSettingsMaximumWattage_ServiceAgentSettings;
extern leWidget* ServiceAgentSettingsMaximumWattage_PanelWidget0;
extern leListWheelWidget* ServiceAgentSettingsMaximumWattage_ListWheelWattage;
extern leButtonWidget* ServiceAgentSettingsMaximumWattage_ButtonExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ServiceAgentSettingsMaximumWattage_ListWheelWattage_OnSelectionChanged(leListWheelWidget* wgt, int32_t idx);
void event_ServiceAgentSettingsMaximumWattage_ButtonExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ServiceAgentSettingsMaximumWattage(void); // called when Legato is initialized
leResult screenShow_ServiceAgentSettingsMaximumWattage(void); // called when screen is shown
void screenHide_ServiceAgentSettingsMaximumWattage(void); // called when screen is hidden
void screenDestroy_ServiceAgentSettingsMaximumWattage(void); // called when Legato is destroyed
void screenUpdate_ServiceAgentSettingsMaximumWattage(void); // called when Legato is updating

leWidget* screenGetRoot_ServiceAgentSettingsMaximumWattage(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void ServiceAgentSettingsMaximumWattage_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICEAGENTSETTINGSMAXIMUMWATTAGE_H
