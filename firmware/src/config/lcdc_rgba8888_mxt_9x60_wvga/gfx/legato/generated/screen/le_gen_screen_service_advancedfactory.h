#ifndef LE_GEN_SCREEN_SERVICE_ADVANCEDFACTORY_H
#define LE_GEN_SCREEN_SERVICE_ADVANCEDFACTORY_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advancedfactory_Layer_0_FillPanel;
extern leLabelWidget* service_advancedfactory_LblTitle;
extern leButtonWidget* service_advancedfactory_Button_Yes;
extern leButtonWidget* service_advancedfactory_Button_No;
extern leButtonWidget* service_advancedfactory_Button_Exit;
extern leButtonWidget* service_advancedfactory_Button_Home;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advancedfactory_Button_Yes_OnReleased(leButtonWidget* btn);
void event_service_advancedfactory_Button_No_OnReleased(leButtonWidget* btn);
void event_service_advancedfactory_Button_Exit_OnReleased(leButtonWidget* btn);
void event_service_advancedfactory_Button_Home_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advancedfactory(void); // called when Legato is initialized
leResult screenShow_service_advancedfactory(void); // called when screen is shown
void screenHide_service_advancedfactory(void); // called when screen is hidden
void screenDestroy_service_advancedfactory(void); // called when Legato is destroyed
void screenUpdate_service_advancedfactory(void); // called when Legato is updating

leWidget* screenGetRoot_service_advancedfactory(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advancedfactory_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCEDFACTORY_H
