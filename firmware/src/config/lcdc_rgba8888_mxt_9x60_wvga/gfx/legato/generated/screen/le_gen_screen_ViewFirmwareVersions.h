#ifndef LE_GEN_SCREEN_VIEWFIRMWAREVERSIONS_H
#define LE_GEN_SCREEN_VIEWFIRMWAREVERSIONS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ViewFirmwareVersions_Layer0_FillPanel;
extern leLabelWidget* ViewFirmwareVersions_LabelFirmwareVersions;
extern leButtonWidget* ViewFirmwareVersions_ButtonBack;
extern leTextFieldWidget* ViewFirmwareVersions_TextFieldUI;
extern leTextFieldWidget* ViewFirmwareVersions_TextFieldHOB1;
extern leTextFieldWidget* ViewFirmwareVersions_TextFieldHOB2;
extern leLabelWidget* ViewFirmwareVersions_LabelUI;
extern leLabelWidget* ViewFirmwareVersions_LabelHOB1;
extern leLabelWidget* ViewFirmwareVersions_LabelHOB2;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ViewFirmwareVersions_ButtonBack_OnPressed(leButtonWidget* btn);
void event_ViewFirmwareVersions_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ViewFirmwareVersions(void); // called when Legato is initialized
leResult screenShow_ViewFirmwareVersions(void); // called when screen is shown
void screenHide_ViewFirmwareVersions(void); // called when screen is hidden
void screenDestroy_ViewFirmwareVersions(void); // called when Legato is destroyed
void screenUpdate_ViewFirmwareVersions(void); // called when Legato is updating

leWidget* screenGetRoot_ViewFirmwareVersions(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_VIEWFIRMWAREVERSIONS_H
