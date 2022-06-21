#ifndef LE_GEN_SCREEN_SERVICEPASSCODE_H
#define LE_GEN_SCREEN_SERVICEPASSCODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ServicePassCode_Layer0_FillPanel;
extern leLabelWidget* ServicePassCode_LabelEnterPasscode;
extern leWidget* ServicePassCode_PanelKey;
extern leWidget* ServicePassCode_PanelPasscode;
extern leWidget* ServicePassCode_PanelBack;
extern leKeyPadWidget* ServicePassCode_KeyPadWidget0;
extern leLabelWidget* ServicePassCode_LabelPasscodeValue;
extern leButtonWidget* ServicePassCode_ButtonBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ServicePassCode_KeyPadWidget0_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);
void event_ServicePassCode_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ServicePassCode(void); // called when Legato is initialized
leResult screenShow_ServicePassCode(void); // called when screen is shown
void screenHide_ServicePassCode(void); // called when screen is hidden
void screenDestroy_ServicePassCode(void); // called when Legato is destroyed
void screenUpdate_ServicePassCode(void); // called when Legato is updating

leWidget* screenGetRoot_ServicePassCode(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void ServicePassCode_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICEPASSCODE_H
