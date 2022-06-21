#ifndef LE_GEN_SCREEN_SERVICE_ADVANCEDINPUT_H
#define LE_GEN_SCREEN_SERVICE_ADVANCEDINPUT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advancedinput_Layer_0_FillPanel;
extern leLabelWidget* service_advancedinput_LabelTitle;
extern leButtonWidget* service_advancedinput_BnHome;
extern leButtonWidget* service_advancedinput_BnExit;
extern leWidget* service_advancedinput_PanelPage2;
extern leWidget* service_advancedinput_PanelPage1;
extern leLabelWidget* service_advancedinput_LblHotWaterSensorH;
extern leLabelWidget* service_advancedinput_LblHotWaterSensorL;
extern leLabelWidget* service_advancedinput_LblGearMotorCurrent;
extern leLabelWidget* service_advancedinput_LblPMRequiredIn;
extern leLabelWidget* service_advancedinput_LblFilterChangeRequiredIn;
extern leLabelWidget* service_advancedinput_LblWaterQuality;
extern leButtonWidget* service_advancedinput_BtnPre;
extern leImageWidget* service_advancedinput_ImgHotWaterSensorH;
extern leImageWidget* service_advancedinput_ImgHotWaterSensorL;
extern leLabelWidget* service_advancedinput_lblGearMotorCurrentVal;
extern leLabelWidget* service_advancedinput_LblPMRequiredInVal;
extern leLabelWidget* service_advancedinput_LblFilterChangeRequiredInVal;
extern leLabelWidget* service_advancedinput_LblWaterQualityVal;
extern leLabelWidget* service_advancedinput_LblActiveMode;
extern leLabelWidget* service_advancedinput_LblErrorStatus;
extern leLabelWidget* service_advancedinput_LblHighWaterSensor;
extern leLabelWidget* service_advancedinput_LblLowWaterSensor;
extern leLabelWidget* service_advancedinput_LblDripTrayFull;
extern leLabelWidget* service_advancedinput_LblChassisWaterSensor;
extern leButtonWidget* service_advancedinput_BtnNext;
extern leLabelWidget* service_advancedinput_LblActiveModeVal;
extern leLabelWidget* service_advancedinput_LblErrorStatusVal;
extern leImageWidget* service_advancedinput_ImgHighWaterSensor;
extern leImageWidget* service_advancedinput_ImgLowWaterSensor;
extern leImageWidget* service_advancedinput_ImgDripTrayFull;
extern leImageWidget* service_advancedinput_ImgChassisWaterSensor;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advancedinput_BnHome_OnReleased(leButtonWidget* btn);
void event_service_advancedinput_BnExit_OnReleased(leButtonWidget* btn);
void event_service_advancedinput_BtnPre_OnReleased(leButtonWidget* btn);
void event_service_advancedinput_BtnNext_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advancedinput(void); // called when Legato is initialized
leResult screenShow_service_advancedinput(void); // called when screen is shown
void screenHide_service_advancedinput(void); // called when screen is hidden
void screenDestroy_service_advancedinput(void); // called when Legato is destroyed
void screenUpdate_service_advancedinput(void); // called when Legato is updating

leWidget* screenGetRoot_service_advancedinput(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advancedinput_OnShow(void); // called when this screen is shown
void service_advancedinput_OnHide(void); // called when this screen is hidden
void service_advancedinput_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCEDINPUT_H
