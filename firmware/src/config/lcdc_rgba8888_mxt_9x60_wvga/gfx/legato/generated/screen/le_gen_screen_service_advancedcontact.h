#ifndef LE_GEN_SCREEN_SERVICE_ADVANCEDCONTACT_H
#define LE_GEN_SCREEN_SERVICE_ADVANCEDCONTACT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advancedcontact_Layer_0_FillPanel;
extern leLabelWidget* service_advancedcontact_LblWebsite;
extern leLabelWidget* service_advancedcontact_LblPhone2;
extern leLabelWidget* service_advancedcontact_LblPhone1;
extern leLabelWidget* service_advancedcontact_LblCityState;
extern leLabelWidget* service_advancedcontact_LblStreet;
extern leLabelWidget* service_advancedcontact_LblName;
extern leButtonWidget* service_advancedcontact_BtnExit;
extern leButtonWidget* service_advancedcontact_BtnWebsite;
extern leButtonWidget* service_advancedcontact_BtnPhone2;
extern leButtonWidget* service_advancedcontact_BtnPhone1;
extern leButtonWidget* service_advancedcontact_BtnCityState;
extern leButtonWidget* service_advancedcontact_BtnStreet;
extern leButtonWidget* service_advancedcontact_BtnName;
extern leButtonWidget* service_advancedcontact_BtnHome;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advancedcontact_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_advancedcontact_BtnWebsite_OnReleased(leButtonWidget* btn);
void event_service_advancedcontact_BtnPhone2_OnReleased(leButtonWidget* btn);
void event_service_advancedcontact_BtnPhone1_OnReleased(leButtonWidget* btn);
void event_service_advancedcontact_BtnCityState_OnReleased(leButtonWidget* btn);
void event_service_advancedcontact_BtnStreet_OnReleased(leButtonWidget* btn);
void event_service_advancedcontact_BtnName_OnReleased(leButtonWidget* btn);
void event_service_advancedcontact_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advancedcontact(void); // called when Legato is initialized
leResult screenShow_service_advancedcontact(void); // called when screen is shown
void screenHide_service_advancedcontact(void); // called when screen is hidden
void screenDestroy_service_advancedcontact(void); // called when Legato is destroyed
void screenUpdate_service_advancedcontact(void); // called when Legato is updating

leWidget* screenGetRoot_service_advancedcontact(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advancedcontact_OnShow(void); // called when this screen is shown
void service_advancedcontact_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCEDCONTACT_H
