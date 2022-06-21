#ifndef LE_GEN_SCREEN_OPSETTINGS_HOTWATER_H
#define LE_GEN_SCREEN_OPSETTINGS_HOTWATER_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* opsettings_hotwater_Layer_0_FillPanel;
extern leLabelWidget* opsettings_hotwater_LblTitle;
extern leImageWidget* opsettings_hotwater_ImgLine;
extern leLabelWidget* opsettings_hotwater_LblSubTitle;
extern leLabelWidget* opsettings_hotwater_LblRange;
extern leLabelWidget* opsettings_hotwater_LblHotWaterValue;
extern leButtonWidget* opsettings_hotwater_BtnExit;
extern leButtonWidget* opsettings_hotwater_BtnUnits;
extern leButtonWidget* opsettings_hotwater_BtnLeft;
extern leButtonWidget* opsettings_hotwater_BtnRight;
extern leButtonWidget* opsettings_hotwater_BtnHome;
extern leButtonWidget* opsettings_hotwater_BtnTroubleshoot;
extern leButtonWidget* opsettings_hotwater_BtnSystemInformation;
extern leButtonWidget* opsettings_hotwater_BtnService;
extern leButtonWidget* opsettings_hotwater_BtnOperationSettings;
extern leButtonWidget* opsettings_hotwater_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_opsettings_hotwater_BtnExit_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnUnits_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnLeft_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnRight_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnHome_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnService_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_opsettings_hotwater_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_opsettings_hotwater(void); // called when Legato is initialized
leResult screenShow_opsettings_hotwater(void); // called when screen is shown
void screenHide_opsettings_hotwater(void); // called when screen is hidden
void screenDestroy_opsettings_hotwater(void); // called when Legato is destroyed
void screenUpdate_opsettings_hotwater(void); // called when Legato is updating

leWidget* screenGetRoot_opsettings_hotwater(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void opsettings_hotwater_OnShow(void); // called when this screen is shown
void opsettings_hotwater_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_OPSETTINGS_HOTWATER_H
