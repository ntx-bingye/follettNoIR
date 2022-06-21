#ifndef LE_GEN_SCREEN_SERVICE_ADVANCED_RESET_TO_FACTORY_H
#define LE_GEN_SCREEN_SERVICE_ADVANCED_RESET_TO_FACTORY_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advanced_Reset_to_Factory_Layer_0_FillPanel;
extern leLabelWidget* service_advanced_Reset_to_Factory_LblTitle;
extern leButtonWidget* service_advanced_Reset_to_Factory_Button_Yes;
extern leButtonWidget* service_advanced_Reset_to_Factory_Button_No;
extern leButtonWidget* service_advanced_Reset_to_Factory_Button_Exit;
extern leButtonWidget* service_advanced_Reset_to_Factory_Button_Home;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advanced_Reset_to_Factory_Button_Yes_OnReleased(leButtonWidget* btn);
void event_service_advanced_Reset_to_Factory_Button_No_OnReleased(leButtonWidget* btn);
void event_service_advanced_Reset_to_Factory_Button_Exit_OnReleased(leButtonWidget* btn);
void event_service_advanced_Reset_to_Factory_Button_Home_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advanced_Reset_to_Factory(void); // called when Legato is initialized
leResult screenShow_service_advanced_Reset_to_Factory(void); // called when screen is shown
void screenHide_service_advanced_Reset_to_Factory(void); // called when screen is hidden
void screenDestroy_service_advanced_Reset_to_Factory(void); // called when Legato is destroyed
void screenUpdate_service_advanced_Reset_to_Factory(void); // called when Legato is updating

leWidget* screenGetRoot_service_advanced_Reset_to_Factory(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advanced_Reset_to_Factory_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCED_RESET_TO_FACTORY_H
