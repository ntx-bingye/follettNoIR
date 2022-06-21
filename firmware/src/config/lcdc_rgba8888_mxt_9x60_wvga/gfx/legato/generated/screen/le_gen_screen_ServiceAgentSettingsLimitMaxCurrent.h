#ifndef LE_GEN_SCREEN_SERVICEAGENTSETTINGSLIMITMAXCURRENT_H
#define LE_GEN_SCREEN_SERVICEAGENTSETTINGSLIMITMAXCURRENT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel;
extern leImageWidget* ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon;
extern leLabelWidget* ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel;
extern leLabelWidget* ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent;
extern leLabelWidget* ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog;
extern leButtonWidget* ServiceAgentSettingsLimitMaxCurrent_ButtonBack;
extern leButtonWidget* ServiceAgentSettingsLimitMaxCurrent_ButtonReset;
extern leButtonWidget* ServiceAgentSettingsLimitMaxCurrent_ButtonOn;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ServiceAgentSettingsLimitMaxCurrent_ButtonBack_OnReleased(leButtonWidget* btn);
void event_ServiceAgentSettingsLimitMaxCurrent_ButtonReset_OnPressed(leButtonWidget* btn);
void event_ServiceAgentSettingsLimitMaxCurrent_ButtonReset_OnReleased(leButtonWidget* btn);
void event_ServiceAgentSettingsLimitMaxCurrent_ButtonOn_OnPressed(leButtonWidget* btn);
void event_ServiceAgentSettingsLimitMaxCurrent_ButtonOn_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ServiceAgentSettingsLimitMaxCurrent(void); // called when Legato is initialized
leResult screenShow_ServiceAgentSettingsLimitMaxCurrent(void); // called when screen is shown
void screenHide_ServiceAgentSettingsLimitMaxCurrent(void); // called when screen is hidden
void screenDestroy_ServiceAgentSettingsLimitMaxCurrent(void); // called when Legato is destroyed
void screenUpdate_ServiceAgentSettingsLimitMaxCurrent(void); // called when Legato is updating

leWidget* screenGetRoot_ServiceAgentSettingsLimitMaxCurrent(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICEAGENTSETTINGSLIMITMAXCURRENT_H
