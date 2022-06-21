#ifndef LE_GEN_SCREEN_MAINTENANCE_H
#define LE_GEN_SCREEN_MAINTENANCE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* maintenance_Layer_0_FillPanel;
extern leButtonWidget* maintenance_BtnMaintenance;
extern leButtonWidget* maintenance_BtnOperationSettings;
extern leButtonWidget* maintenance_BtnExit;
extern leButtonWidget* maintenance_BtnFilterInterval;
extern leButtonWidget* maintenance_BtnPMInterval;
extern leButtonWidget* maintenance_BtnReplaceFilter;
extern leButtonWidget* maintenance_BtnSanitize;
extern leButtonWidget* maintenance_BtnCleanScreen;
extern leButtonWidget* maintenance_BtnHome;
extern leButtonWidget* maintenance_BtnTroubleshoot;
extern leButtonWidget* maintenance_BtnSystemInformation;
extern leButtonWidget* maintenance_BtnService;
extern leButtonWidget* maintenance_ButtonWidget0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_maintenance_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnExit_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnFilterInterval_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnPMInterval_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnReplaceFilter_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnSanitize_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnCleanScreen_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnHome_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_maintenance_BtnService_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_maintenance(void); // called when Legato is initialized
leResult screenShow_maintenance(void); // called when screen is shown
void screenHide_maintenance(void); // called when screen is hidden
void screenDestroy_maintenance(void); // called when Legato is destroyed
void screenUpdate_maintenance(void); // called when Legato is updating

leWidget* screenGetRoot_maintenance(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void maintenance_OnShow(void); // called when this screen is shown
void maintenance_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_MAINTENANCE_H
