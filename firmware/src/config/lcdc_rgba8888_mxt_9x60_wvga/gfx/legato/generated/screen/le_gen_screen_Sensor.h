#ifndef LE_GEN_SCREEN_SENSOR_H
#define LE_GEN_SCREEN_SENSOR_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Sensor_PanelWidget0;
extern leButtonWidget* Sensor_BtnHome;
extern leButtonWidget* Sensor_BtnExit;
extern leButtonWidget* Sensor_BtnSave;
extern leWidget* Sensor_PnlSensor1;
extern leWidget* Sensor_PnlSensor2;
extern leWidget* Sensor_PnlSensor3;
extern leLabelWidget* Sensor_LblDisplay;
extern leButtonWidget* Sensor_BtnRstUI;
extern leButtonWidget* Sensor_BtnUp1;
extern leButtonWidget* Sensor_BtnDown1;
extern leLabelWidget* Sensor_Lblsensor1;
extern leButtonWidget* Sensor_BtnUp2;
extern leButtonWidget* Sensor_BtnDown2;
extern leLabelWidget* Sensor_Lblsensor2;
extern leLabelWidget* Sensor_Lblsensor3;
extern leButtonWidget* Sensor_BtnDown3;
extern leButtonWidget* Sensor_BtnUp3;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Sensor_BtnHome_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnExit_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnSave_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnRstUI_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnUp1_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnDown1_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnUp2_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnDown2_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnDown3_OnReleased(leButtonWidget* btn);
void event_Sensor_BtnUp3_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Sensor(void); // called when Legato is initialized
leResult screenShow_Sensor(void); // called when screen is shown
void screenHide_Sensor(void); // called when screen is hidden
void screenDestroy_Sensor(void); // called when Legato is destroyed
void screenUpdate_Sensor(void); // called when Legato is updating

leWidget* screenGetRoot_Sensor(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Sensor_OnShow(void); // called when this screen is shown
void Sensor_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SENSOR_H
