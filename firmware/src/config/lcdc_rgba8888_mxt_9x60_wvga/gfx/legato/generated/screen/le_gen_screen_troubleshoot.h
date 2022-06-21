#ifndef LE_GEN_SCREEN_TROUBLESHOOT_H
#define LE_GEN_SCREEN_TROUBLESHOOT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* troubleshoot_Layer_0_FillPanel;
extern leButtonWidget* troubleshoot_BtnExit;
extern leButtonWidget* troubleshoot_BtnManual;
extern leButtonWidget* troubleshoot_BtnEventLog;
extern leButtonWidget* troubleshoot_BtnWaterLeak;
extern leButtonWidget* troubleshoot_BtnLowWater;
extern leButtonWidget* troubleshoot_BtnHome;
extern leButtonWidget* troubleshoot_BtnTroubleshoot;
extern leButtonWidget* troubleshoot_BtnSystemInformation;
extern leButtonWidget* troubleshoot_BtnDripTrayFull;
extern leButtonWidget* troubleshoot_BtnService;
extern leButtonWidget* troubleshoot_BtnOperationSettings;
extern leButtonWidget* troubleshoot_BtnMaintenance;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_troubleshoot_BtnExit_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnManual_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnEventLog_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnWaterLeak_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnLowWater_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnHome_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnDripTrayFull_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnService_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_troubleshoot_BtnMaintenance_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_troubleshoot(void); // called when Legato is initialized
leResult screenShow_troubleshoot(void); // called when screen is shown
void screenHide_troubleshoot(void); // called when screen is hidden
void screenDestroy_troubleshoot(void); // called when Legato is destroyed
void screenUpdate_troubleshoot(void); // called when Legato is updating

leWidget* screenGetRoot_troubleshoot(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void troubleshoot_OnShow(void); // called when this screen is shown
void troubleshoot_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_TROUBLESHOOT_H
