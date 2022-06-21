#ifndef LE_GEN_SCREEN_SERVICETECHNICIANPASSCODE_H
#define LE_GEN_SCREEN_SERVICETECHNICIANPASSCODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ServiceTechnicianPassCode_Layer0_FillPanel;
extern leLabelWidget* ServiceTechnicianPassCode_LabelServiceAgents;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonReturn;
extern leLabelWidget* ServiceTechnicianPassCode_LabelEnterPasscode;
extern leWidget* ServiceTechnicianPassCode_PanelKeyBackground;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey0;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey1;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey2;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey3;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey4;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey5;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey6;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey7;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey8;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKey9;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKeyBackspace;
extern leButtonWidget* ServiceTechnicianPassCode_ButtonKeyEnter;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ServiceTechnicianPassCode_ButtonReturn_OnPressed(leButtonWidget* btn);
void event_ServiceTechnicianPassCode_ButtonReturn_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ServiceTechnicianPassCode(void); // called when Legato is initialized
leResult screenShow_ServiceTechnicianPassCode(void); // called when screen is shown
void screenHide_ServiceTechnicianPassCode(void); // called when screen is hidden
void screenDestroy_ServiceTechnicianPassCode(void); // called when Legato is destroyed
void screenUpdate_ServiceTechnicianPassCode(void); // called when Legato is updating

leWidget* screenGetRoot_ServiceTechnicianPassCode(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICETECHNICIANPASSCODE_H
