#ifndef LE_GEN_SCREEN_OPSETTINGS_LANGUAGE_H
#define LE_GEN_SCREEN_OPSETTINGS_LANGUAGE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* opsettings_language_Layer_0_FillPanel;
extern leLabelWidget* opsettings_language_LblTitle;
extern leImageWidget* opsettings_language_ImgLine;
extern leLabelWidget* opsettings_language_LblSubTitle;
extern leButtonWidget* opsettings_language_BtnMaintenance;
extern leButtonWidget* opsettings_language_BtnOperationSettings;
extern leButtonWidget* opsettings_language_BtnExit;
extern leButtonWidget* opsettings_language_BtnFrench;
extern leButtonWidget* opsettings_language_BtnSpanish;
extern leButtonWidget* opsettings_language_BtnEnglish;
extern leButtonWidget* opsettings_language_BtnCurrent;
extern leButtonWidget* opsettings_language_BtnHome;
extern leButtonWidget* opsettings_language_BtnTroubleshoot;
extern leButtonWidget* opsettings_language_BtnSystemInformation;
extern leButtonWidget* opsettings_language_BtnService;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_opsettings_language_BtnMaintenance_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnExit_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnFrench_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnSpanish_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnEnglish_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnCurrent_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnHome_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_opsettings_language_BtnService_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_opsettings_language(void); // called when Legato is initialized
leResult screenShow_opsettings_language(void); // called when screen is shown
void screenHide_opsettings_language(void); // called when screen is hidden
void screenDestroy_opsettings_language(void); // called when Legato is destroyed
void screenUpdate_opsettings_language(void); // called when Legato is updating

leWidget* screenGetRoot_opsettings_language(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void opsettings_language_OnShow(void); // called when this screen is shown
void opsettings_language_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_OPSETTINGS_LANGUAGE_H
