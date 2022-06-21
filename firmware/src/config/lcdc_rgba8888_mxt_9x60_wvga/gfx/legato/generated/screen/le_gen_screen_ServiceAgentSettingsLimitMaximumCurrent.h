#ifndef LE_GEN_SCREEN_SERVICEAGENTSETTINGSLIMITMAXIMUMCURRENT_H
#define LE_GEN_SCREEN_SERVICEAGENTSETTINGSLIMITMAXIMUMCURRENT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel;
extern leImageWidget* ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon;
extern leLabelWidget* ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel;
extern leLabelWidget* ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent;
extern leLabelWidget* ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog;
extern leButtonWidget* ServiceAgentSettingsLimitMaximumCurrent_ButtonReset;
extern leButtonWidget* ServiceAgentSettingsLimitMaximumCurrent_ButtonBack;
extern leCheckBoxWidget* ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ServiceAgentSettingsLimitMaximumCurrent_ButtonReset_OnPressed(leButtonWidget* btn);
void event_ServiceAgentSettingsLimitMaximumCurrent_ButtonReset_OnReleased(leButtonWidget* btn);
void event_ServiceAgentSettingsLimitMaximumCurrent_ButtonBack_OnReleased(leButtonWidget* btn);
void event_ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit_OnChecked(leCheckBoxWidget* btn);
void event_ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit_OnUnchecked(leCheckBoxWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ServiceAgentSettingsLimitMaximumCurrent(void); // called when Legato is initialized
leResult screenShow_ServiceAgentSettingsLimitMaximumCurrent(void); // called when screen is shown
void screenHide_ServiceAgentSettingsLimitMaximumCurrent(void); // called when screen is hidden
void screenDestroy_ServiceAgentSettingsLimitMaximumCurrent(void); // called when Legato is destroyed
void screenUpdate_ServiceAgentSettingsLimitMaximumCurrent(void); // called when Legato is updating

leWidget* screenGetRoot_ServiceAgentSettingsLimitMaximumCurrent(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICEAGENTSETTINGSLIMITMAXIMUMCURRENT_H
