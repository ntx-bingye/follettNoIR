#ifndef LE_GEN_SCREEN_SERVICE_ADVANCED_H
#define LE_GEN_SCREEN_SERVICE_ADVANCED_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_advanced_Layer_0_FillPanel;
extern leButtonWidget* service_advanced_BntExit;
extern leButtonWidget* service_advanced_BntHome;
extern leKeyPadWidget* service_advanced_KeyPadServiceAdvaced;
extern leLabelWidget* service_advanced_LblTitle;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_advanced_BntExit_OnReleased(leButtonWidget* btn);
void event_service_advanced_BntHome_OnReleased(leButtonWidget* btn);
void event_service_advanced_KeyPadServiceAdvaced_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_advanced(void); // called when Legato is initialized
leResult screenShow_service_advanced(void); // called when screen is shown
void screenHide_service_advanced(void); // called when screen is hidden
void screenDestroy_service_advanced(void); // called when Legato is destroyed
void screenUpdate_service_advanced(void); // called when Legato is updating

leWidget* screenGetRoot_service_advanced(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_advanced_OnShow(void); // called when this screen is shown
void service_advanced_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_ADVANCED_H
