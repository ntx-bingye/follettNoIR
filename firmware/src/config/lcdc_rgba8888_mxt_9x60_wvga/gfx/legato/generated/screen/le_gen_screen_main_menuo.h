#ifndef LE_GEN_SCREEN_MAIN_MENUO_H
#define LE_GEN_SCREEN_MAIN_MENUO_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* main_menuo_Layer_0_FillPanel;
extern leImageWidget* main_menuo_LblHome;
extern leLabelWidget* main_menuo_LblActiveMode;
extern leLabelWidget* main_menuo_LblLowBin;
extern leLabelWidget* main_menuo_LblLowWater;
extern leImageWidget* main_menuo_ImageWidget0;
extern leButtonWidget* main_menuo_Btn1;
extern leButtonWidget* main_menuo_BtnOperationSettings;
extern leButtonWidget* main_menuo_BtnMaintenance;
extern leButtonWidget* main_menuo_BtnService;
extern leButtonWidget* main_menuo_BtnSystem;
extern leButtonWidget* main_menuo_BtnTroubleshoot;
extern leButtonWidget* main_menuo_BtnHome;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_main_menuo_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_main_menuo_BtnMaintenance_OnReleased(leButtonWidget* btn);
void event_main_menuo_BtnService_OnReleased(leButtonWidget* btn);
void event_main_menuo_BtnSystem_OnReleased(leButtonWidget* btn);
void event_main_menuo_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_main_menuo_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_main_menuo(void); // called when Legato is initialized
leResult screenShow_main_menuo(void); // called when screen is shown
void screenHide_main_menuo(void); // called when screen is hidden
void screenDestroy_main_menuo(void); // called when Legato is destroyed
void screenUpdate_main_menuo(void); // called when Legato is updating

leWidget* screenGetRoot_main_menuo(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void main_menuo_OnShow(void); // called when this screen is shown
void main_menuo_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_MAIN_MENUO_H
