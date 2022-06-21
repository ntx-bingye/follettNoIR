#ifndef LE_GEN_SCREEN_SERVICE_ADVANCEDOUTPUT_H
#define LE_GEN_SCREEN_SERVICE_ADVANCEDOUTPUT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advancedoutput_Layer_0_FillPanel;
extern leLabelWidget* service_advancedoutput_LblTitle;
extern leWidget* service_advancedoutput_PanelPage1;
extern leWidget* service_advancedoutput_PanelPage2;
extern leButtonWidget* service_advancedoutput_BtnExit;
extern leButtonWidget* service_advancedoutput_BtnAutomatic;
extern leButtonWidget* service_advancedoutput_BtnManual;
extern leButtonWidget* service_advancedoutput_BtnHome;
extern leLabelWidget* service_advancedoutput_LblMotortitle;
extern leLabelWidget* service_advancedoutput_LblGearMotorValue;
extern leLabelWidget* service_advancedoutput_LblLabel1;
extern leLabelWidget* service_advancedoutput_LblLabel6;
extern leLabelWidget* service_advancedoutput_LblLabel2;
extern leLabelWidget* service_advancedoutput_LblLabel3;
extern leLabelWidget* service_advancedoutput_LblLabel4;
extern leLabelWidget* service_advancedoutput_LblLabel5;
extern leButtonWidget* service_advancedoutput_BtnToggle1;
extern leButtonWidget* service_advancedoutput_BtnToggle2;
extern leButtonWidget* service_advancedoutput_BtnToggle3;
extern leButtonWidget* service_advancedoutput_BtnToggle4;
extern leButtonWidget* service_advancedoutput_BtnToggle5;
extern leButtonWidget* service_advancedoutput_BtnToggle6;
extern leButtonWidget* service_advancedoutput_BtnDown;
extern leLabelWidget* service_advancedoutput_LblLabel7;
extern leLabelWidget* service_advancedoutput_lblLabel8;
extern leLabelWidget* service_advancedoutput_LblLabel9;
extern leLabelWidget* service_advancedoutput_LblLabel10;
extern leLabelWidget* service_advancedoutput_LblLabel11;
extern leLabelWidget* service_advancedoutput_LBlLabel12;
extern leLabelWidget* service_advancedoutput_LblLabel13;
extern leButtonWidget* service_advancedoutput_BtnToggle7;
extern leButtonWidget* service_advancedoutput_BtnToggle8;
extern leButtonWidget* service_advancedoutput_BtnToggle9;
extern leButtonWidget* service_advancedoutput_BtnToggle10;
extern leButtonWidget* service_advancedoutput_BtnToggle11;
extern leButtonWidget* service_advancedoutput_BtnToggle12;
extern leButtonWidget* service_advancedoutput_BtnToggle13;
extern leButtonWidget* service_advancedoutput_BtnUp;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advancedoutput_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnAutomatic_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnManual_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle1_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle2_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle3_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle4_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle5_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle6_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnDown_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle7_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle8_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle9_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle10_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle11_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle12_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnToggle13_OnReleased(leButtonWidget* btn);
void event_service_advancedoutput_BtnUp_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advancedoutput(void); // called when Legato is initialized
leResult screenShow_service_advancedoutput(void); // called when screen is shown
void screenHide_service_advancedoutput(void); // called when screen is hidden
void screenDestroy_service_advancedoutput(void); // called when Legato is destroyed
void screenUpdate_service_advancedoutput(void); // called when Legato is updating

leWidget* screenGetRoot_service_advancedoutput(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advancedoutput_OnShow(void); // called when this screen is shown
void service_advancedoutput_OnHide(void); // called when this screen is hidden
void service_advancedoutput_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCEDOUTPUT_H
