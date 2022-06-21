#ifndef LE_GEN_SCREEN_SERVICE_ADVANCEDGEARMOTOR_H
#define LE_GEN_SCREEN_SERVICE_ADVANCEDGEARMOTOR_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advancedgearmotor_Layer_0_FillPanel;
extern leLabelWidget* service_advancedgearmotor_LblTitle;
extern leWidget* service_advancedgearmotor_PanelWidget2;
extern leButtonWidget* service_advancedgearmotor_BtnHome;
extern leButtonWidget* service_advancedgearmotor_BtnExit;
extern leLineGraphWidget* service_advancedgearmotor_Line;
extern leLabelWidget* service_advancedgearmotor_LblAmp6;
extern leLabelWidget* service_advancedgearmotor_LblAmp5;
extern leLabelWidget* service_advancedgearmotor_LblAmp4;
extern leLabelWidget* service_advancedgearmotor_LblAmp3;
extern leLabelWidget* service_advancedgearmotor_LblAmp2;
extern leLabelWidget* service_advancedgearmotor_LblAmp1;
extern leLabelWidget* service_advancedgearmotor_LblAmp0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advancedgearmotor_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_advancedgearmotor_BtnExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advancedgearmotor(void); // called when Legato is initialized
leResult screenShow_service_advancedgearmotor(void); // called when screen is shown
void screenHide_service_advancedgearmotor(void); // called when screen is hidden
void screenDestroy_service_advancedgearmotor(void); // called when Legato is destroyed
void screenUpdate_service_advancedgearmotor(void); // called when Legato is updating

leWidget* screenGetRoot_service_advancedgearmotor(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advancedgearmotor_OnShow(void); // called when this screen is shown
void service_advancedgearmotor_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCEDGEARMOTOR_H
