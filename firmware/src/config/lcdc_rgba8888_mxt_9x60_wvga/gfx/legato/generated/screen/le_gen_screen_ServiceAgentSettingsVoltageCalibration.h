#ifndef LE_GEN_SCREEN_SERVICEAGENTSETTINGSVOLTAGECALIBRATION_H
#define LE_GEN_SCREEN_SERVICEAGENTSETTINGSVOLTAGECALIBRATION_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel;
extern leImageWidget* ServiceAgentSettingsVoltageCalibration_SettingsIcon;
extern leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration;
extern leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelActualVoltage;
extern leLabelWidget* ServiceAgentSettingsVoltageCalibration_ActialVoltageValue;
extern leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage;
extern leLabelWidget* ServiceAgentSettingsVoltageCalibration_LineVoltageValue;
extern leButtonWidget* ServiceAgentSettingsVoltageCalibration_ButtonExit;
extern leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue;
extern leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString;
extern leButtonWidget* ServiceAgentSettingsVoltageCalibration_ButtonPlus;
extern leButtonWidget* ServiceAgentSettingsVoltageCalibration_ButtonMinus;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ServiceAgentSettingsVoltageCalibration_ButtonExit_OnReleased(leButtonWidget* btn);
void event_ServiceAgentSettingsVoltageCalibration_ButtonPlus_OnPressed(leButtonWidget* btn);
void event_ServiceAgentSettingsVoltageCalibration_ButtonPlus_OnReleased(leButtonWidget* btn);
void event_ServiceAgentSettingsVoltageCalibration_ButtonMinus_OnPressed(leButtonWidget* btn);
void event_ServiceAgentSettingsVoltageCalibration_ButtonMinus_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ServiceAgentSettingsVoltageCalibration(void); // called when Legato is initialized
leResult screenShow_ServiceAgentSettingsVoltageCalibration(void); // called when screen is shown
void screenHide_ServiceAgentSettingsVoltageCalibration(void); // called when screen is hidden
void screenDestroy_ServiceAgentSettingsVoltageCalibration(void); // called when Legato is destroyed
void screenUpdate_ServiceAgentSettingsVoltageCalibration(void); // called when Legato is updating

leWidget* screenGetRoot_ServiceAgentSettingsVoltageCalibration(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void ServiceAgentSettingsVoltageCalibration_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICEAGENTSETTINGSVOLTAGECALIBRATION_H
