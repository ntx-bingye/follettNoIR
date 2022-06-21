#ifndef LE_GEN_SCREEN_OPSETTINGS_BRIGHTNESS_H
#define LE_GEN_SCREEN_OPSETTINGS_BRIGHTNESS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* opsettings_brightness_Layer_0_FillPanel;
extern leLabelWidget* opsettings_brightness_LblTitle;
extern leImageWidget* opsettings_brightness_ImgLine;
extern leLabelWidget* opsettings_brightness_LblSubTitle;
extern leLabelWidget* opsettings_brightness_LblBrightnessValue;
extern leButtonWidget* opsettings_brightness_BtnMaintenance;
extern leButtonWidget* opsettings_brightness_BtnExit;
extern leButtonWidget* opsettings_brightness_BtnLeft;
extern leButtonWidget* opsettings_brightness_BtnRight;
extern leButtonWidget* opsettings_brightness_BtnHome;
extern leButtonWidget* opsettings_brightness_BtnTroubleshoot;
extern leButtonWidget* opsettings_brightness_BtnSystemInformation;
extern leButtonWidget* opsettings_brightness_BtnService;
extern leButtonWidget* opsettings_brightness_BtnOperationSettings;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_opsettings_brightness_BtnMaintenance_OnReleased(leButtonWidget* btn);
void event_opsettings_brightness_BtnExit_OnReleased(leButtonWidget* btn);
void event_opsettings_brightness_BtnLeft_OnPressed(leButtonWidget* btn);
void event_opsettings_brightness_BtnLeft_OnReleased(leButtonWidget* btn);
void event_opsettings_brightness_BtnRight_OnPressed(leButtonWidget* btn);
void event_opsettings_brightness_BtnRight_OnReleased(leButtonWidget* btn);
void event_opsettings_brightness_BtnHome_OnReleased(leButtonWidget* btn);
void event_opsettings_brightness_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_opsettings_brightness_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_opsettings_brightness_BtnService_OnReleased(leButtonWidget* btn);
void event_opsettings_brightness_BtnOperationSettings_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_opsettings_brightness(void); // called when Legato is initialized
leResult screenShow_opsettings_brightness(void); // called when screen is shown
void screenHide_opsettings_brightness(void); // called when screen is hidden
void screenDestroy_opsettings_brightness(void); // called when Legato is destroyed
void screenUpdate_opsettings_brightness(void); // called when Legato is updating

leWidget* screenGetRoot_opsettings_brightness(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void opsettings_brightness_OnShow(void); // called when this screen is shown
void opsettings_brightness_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_OPSETTINGS_BRIGHTNESS_H
