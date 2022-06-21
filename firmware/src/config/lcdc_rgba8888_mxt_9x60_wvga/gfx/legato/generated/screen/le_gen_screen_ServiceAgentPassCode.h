#ifndef LE_GEN_SCREEN_SERVICEAGENTPASSCODE_H
#define LE_GEN_SCREEN_SERVICEAGENTPASSCODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ServiceAgentPassCode_Layer0_FillPanel;
extern leLabelWidget* ServiceAgentPassCode_LabelServiceAgents;
extern leButtonWidget* ServiceAgentPassCode_ButtonReturn;
extern leLabelWidget* ServiceAgentPassCode_LabelEnterPasscode;
extern leRectangleWidget* ServiceAgentPassCode_RectangleKeypad;
extern leButtonWidget* ServiceAgentPassCode_ButtonKeyDelete;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey0;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey1;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey2;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey3;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey4;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey5;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey6;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey7;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey8;
extern leButtonWidget* ServiceAgentPassCode_ButtonKey9;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ServiceAgentPassCode_ButtonReturn_OnPressed(leButtonWidget* btn);
void event_ServiceAgentPassCode_ButtonReturn_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ServiceAgentPassCode(void); // called when Legato is initialized
leResult screenShow_ServiceAgentPassCode(void); // called when screen is shown
void screenHide_ServiceAgentPassCode(void); // called when screen is hidden
void screenDestroy_ServiceAgentPassCode(void); // called when Legato is destroyed
void screenUpdate_ServiceAgentPassCode(void); // called when Legato is updating

leWidget* screenGetRoot_ServiceAgentPassCode(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICEAGENTPASSCODE_H
