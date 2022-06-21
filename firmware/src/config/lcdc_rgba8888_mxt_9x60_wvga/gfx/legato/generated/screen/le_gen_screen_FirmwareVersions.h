#ifndef LE_GEN_SCREEN_FIRMWAREVERSIONS_H
#define LE_GEN_SCREEN_FIRMWAREVERSIONS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* FirmwareVersions_Layer0_FillPanel;
extern leLabelWidget* FirmwareVersions_LabelFirmwareVersions;
extern leImageWidget* FirmwareVersions_VersionIcon;
extern leLabelWidget* FirmwareVersions_LabelUI;
extern leLabelWidget* FirmwareVersions_LabelHOB1;
extern leLabelWidget* FirmwareVersions_LabelHOB2;
extern leLabelWidget* FirmwareVersions_VersionUIValue;
extern leLabelWidget* FirmwareVersions_VersionHOB1Value;
extern leLabelWidget* FirmwareVersions_VersionHOB2Value;
extern leWidget* FirmwareVersions_PanelWidget0;
extern leButtonWidget* FirmwareVersions_ButtonBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_FirmwareVersions_ButtonBack_OnPressed(leButtonWidget* btn);
void event_FirmwareVersions_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_FirmwareVersions(void); // called when Legato is initialized
leResult screenShow_FirmwareVersions(void); // called when screen is shown
void screenHide_FirmwareVersions(void); // called when screen is hidden
void screenDestroy_FirmwareVersions(void); // called when Legato is destroyed
void screenUpdate_FirmwareVersions(void); // called when Legato is updating

leWidget* screenGetRoot_FirmwareVersions(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void FirmwareVersions_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_FIRMWAREVERSIONS_H
