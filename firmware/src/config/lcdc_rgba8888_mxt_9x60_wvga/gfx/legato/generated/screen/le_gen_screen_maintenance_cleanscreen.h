#ifndef LE_GEN_SCREEN_MAINTENANCE_CLEANSCREEN_H
#define LE_GEN_SCREEN_MAINTENANCE_CLEANSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* maintenance_cleanscreen_Layer_0_FillPanel;
extern leLabelWidget* maintenance_cleanscreen_LblTitle;
extern leImageWidget* maintenance_cleanscreen_ImgLine;
extern leLineWidget* maintenance_cleanscreen_LineUnlock;
extern leLabelWidget* maintenance_cleanscreen_LblInstructions;
extern leButtonWidget* maintenance_cleanscreen_BtnMaintenance;
extern leButtonWidget* maintenance_cleanscreen_BtnExit;
extern leButtonWidget* maintenance_cleanscreen_BtnLock;
extern leButtonWidget* maintenance_cleanscreen_BtnUnlock;
extern leButtonWidget* maintenance_cleanscreen_BtnHome;
extern leButtonWidget* maintenance_cleanscreen_BtnTroubleshoot;
extern leButtonWidget* maintenance_cleanscreen_BtnSystemInformation;
extern leButtonWidget* maintenance_cleanscreen_BtnService;
extern leButtonWidget* maintenance_cleanscreen_BtnOperationSettings;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_maintenance_cleanscreen_BtnMaintenance_OnReleased(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnExit_OnReleased(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnLock_OnReleased(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnUnlock_OnPressed(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnUnlock_OnReleased(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnHome_OnReleased(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnService_OnReleased(leButtonWidget* btn);
void event_maintenance_cleanscreen_BtnOperationSettings_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_maintenance_cleanscreen(void); // called when Legato is initialized
leResult screenShow_maintenance_cleanscreen(void); // called when screen is shown
void screenHide_maintenance_cleanscreen(void); // called when screen is hidden
void screenDestroy_maintenance_cleanscreen(void); // called when Legato is destroyed
void screenUpdate_maintenance_cleanscreen(void); // called when Legato is updating

leWidget* screenGetRoot_maintenance_cleanscreen(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void maintenance_cleanscreen_OnShow(void); // called when this screen is shown
void maintenance_cleanscreen_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_MAINTENANCE_CLEANSCREEN_H
