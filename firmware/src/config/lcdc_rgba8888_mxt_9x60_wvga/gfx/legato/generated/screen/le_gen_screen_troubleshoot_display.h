#ifndef LE_GEN_SCREEN_TROUBLESHOOT_DISPLAY_H
#define LE_GEN_SCREEN_TROUBLESHOOT_DISPLAY_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* troubleshoot_display_Layer_0_FillPanel;
extern leLabelWidget* troubleshoot_display_LblTitle;
extern leWidget* troubleshoot_display_PanelTroubleshootDisplay;
extern leButtonWidget* troubleshoot_display_BtnExit;
extern leButtonWidget* troubleshoot_display_BtnHome;
extern leLabelWidget* troubleshoot_display_LblLine0;
extern leLabelWidget* troubleshoot_display_LblLine1;
extern leLabelWidget* troubleshoot_display_LblLine2;
extern leLabelWidget* troubleshoot_display_LblLine3;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_troubleshoot_display_BtnExit_OnReleased(leButtonWidget* btn);
void event_troubleshoot_display_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_troubleshoot_display(void); // called when Legato is initialized
leResult screenShow_troubleshoot_display(void); // called when screen is shown
void screenHide_troubleshoot_display(void); // called when screen is hidden
void screenDestroy_troubleshoot_display(void); // called when Legato is destroyed
void screenUpdate_troubleshoot_display(void); // called when Legato is updating

leWidget* screenGetRoot_troubleshoot_display(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void troubleshoot_display_OnShow(void); // called when this screen is shown
void troubleshoot_display_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_TROUBLESHOOT_DISPLAY_H
