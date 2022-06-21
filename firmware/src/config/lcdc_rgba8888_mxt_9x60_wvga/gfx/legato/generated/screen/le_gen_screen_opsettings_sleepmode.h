#ifndef LE_GEN_SCREEN_OPSETTINGS_SLEEPMODE_H
#define LE_GEN_SCREEN_OPSETTINGS_SLEEPMODE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* opsettings_sleepmode_Layer_0_FillPanel;
extern leLabelWidget* opsettings_sleepmode_LblTitle;
extern leImageWidget* opsettings_sleepmode_ImgLine;
extern leLabelWidget* opsettings_sleepmode_LblSubTitle;
extern leLabelWidget* opsettings_sleepmode_LblSleepModeValue;
extern leLabelWidget* opsettings_sleepmode_LblMinutes;
extern leButtonWidget* opsettings_sleepmode_BtnExit;
extern leButtonWidget* opsettings_sleepmode_BtnRight;
extern leButtonWidget* opsettings_sleepmode_BtnLeft;
extern leButtonWidget* opsettings_sleepmode_BtnHome;
extern leButtonWidget* opsettings_sleepmode_BtnTroubleshoot;
extern leButtonWidget* opsettings_sleepmode_BtnSystemInformation;
extern leButtonWidget* opsettings_sleepmode_BtnService;
extern leButtonWidget* opsettings_sleepmode_BtnOperationSettings;
extern leButtonWidget* opsettings_sleepmode_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_opsettings_sleepmode_BtnExit_OnReleased(leButtonWidget* btn);
void event_opsettings_sleepmode_BtnRight_OnReleased(leButtonWidget* btn);
void event_opsettings_sleepmode_BtnLeft_OnReleased(leButtonWidget* btn);
void event_opsettings_sleepmode_BtnHome_OnReleased(leButtonWidget* btn);
void event_opsettings_sleepmode_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_opsettings_sleepmode_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_opsettings_sleepmode_BtnService_OnReleased(leButtonWidget* btn);
void event_opsettings_sleepmode_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_opsettings_sleepmode_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_opsettings_sleepmode(void); // called when Legato is initialized
leResult screenShow_opsettings_sleepmode(void); // called when screen is shown
void screenHide_opsettings_sleepmode(void); // called when screen is hidden
void screenDestroy_opsettings_sleepmode(void); // called when Legato is destroyed
void screenUpdate_opsettings_sleepmode(void); // called when Legato is updating

leWidget* screenGetRoot_opsettings_sleepmode(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void opsettings_sleepmode_OnShow(void); // called when this screen is shown
void opsettings_sleepmode_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_OPSETTINGS_SLEEPMODE_H
