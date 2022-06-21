#ifndef LE_GEN_SCREEN_SELFHELP_DISPLAY_H
#define LE_GEN_SCREEN_SELFHELP_DISPLAY_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_display_Layer_0_FillPanel;
extern leWidget* selfhelp_display_PanelSelfHelpDisplay;
extern leLabelWidget* selfhelp_display_LblTitle;
extern leButtonWidget* selfhelp_display_BtnExit;
extern leButtonWidget* selfhelp_display_BtnContactService;
extern leButtonWidget* selfhelp_display_BtnHome;
extern leLabelWidget* selfhelp_display_LblLine0;
extern leLabelWidget* selfhelp_display_LblLine1;
extern leLabelWidget* selfhelp_display_LblLine2;
extern leLabelWidget* selfhelp_display_LblLine3;
extern leLabelWidget* selfhelp_display_LblLine4;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_display_BtnExit_OnReleased(leButtonWidget* btn);
void event_selfhelp_display_BtnContactService_OnReleased(leButtonWidget* btn);
void event_selfhelp_display_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_display(void); // called when Legato is initialized
leResult screenShow_selfhelp_display(void); // called when screen is shown
void screenHide_selfhelp_display(void); // called when screen is hidden
void screenDestroy_selfhelp_display(void); // called when Legato is destroyed
void screenUpdate_selfhelp_display(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_display(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_display_OnShow(void); // called when this screen is shown
void selfhelp_display_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_DISPLAY_H
