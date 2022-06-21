#ifndef LE_GEN_SCREEN_SERVICE_PASSWORD_H
#define LE_GEN_SCREEN_SERVICE_PASSWORD_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_password_Layer_0_FillPanel;
extern leLabelWidget* service_password_LblInputBox;
extern leWidget* service_password_Panelcode;
extern leButtonWidget* service_password_BtnHome;
extern leButtonWidget* service_password_BtnExit;
extern leLabelWidget* service_password_LblPassword;
extern leButtonWidget* service_password_BtnSensor;
extern leKeyPadWidget* service_password_KeyPad;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_password_BtnHome_OnReleased(leButtonWidget* btn);
void event_service_password_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_password_BtnSensor_OnReleased(leButtonWidget* btn);
void event_service_password_KeyPad_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_password(void); // called when Legato is initialized
leResult screenShow_service_password(void); // called when screen is shown
void screenHide_service_password(void); // called when screen is hidden
void screenDestroy_service_password(void); // called when Legato is destroyed
void screenUpdate_service_password(void); // called when Legato is updating

leWidget* screenGetRoot_service_password(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_password_OnShow(void); // called when this screen is shown
void service_password_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_PASSWORD_H
