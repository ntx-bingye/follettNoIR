#ifndef LE_GEN_SCREEN_SERVICE_ADVANCEDSOFTWARERESET_H
#define LE_GEN_SCREEN_SERVICE_ADVANCEDSOFTWARERESET_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advancedsoftwarereset_Layer_0_FillPanel;
extern leLabelWidget* service_advancedsoftwarereset_LblTitle;
extern leButtonWidget* service_advancedsoftwarereset_BtnExit;
extern leButtonWidget* service_advancedsoftwarereset_BtnHome;
extern leButtonWidget* service_advancedsoftwarereset_BtnYes;
extern leButtonWidget* service_advancedsoftwarereset_BtnNo;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advancedsoftwarereset_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_advancedsoftwarereset_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_advancedsoftwarereset_BtnYes_OnReleased(leButtonWidget* btn);
void event_service_advancedsoftwarereset_BtnNo_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advancedsoftwarereset(void); // called when Legato is initialized
leResult screenShow_service_advancedsoftwarereset(void); // called when screen is shown
void screenHide_service_advancedsoftwarereset(void); // called when screen is hidden
void screenDestroy_service_advancedsoftwarereset(void); // called when Legato is destroyed
void screenUpdate_service_advancedsoftwarereset(void); // called when Legato is updating

leWidget* screenGetRoot_service_advancedsoftwarereset(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advancedsoftwarereset_OnShow(void); // called when this screen is shown
void service_advancedsoftwarereset_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCEDSOFTWARERESET_H
