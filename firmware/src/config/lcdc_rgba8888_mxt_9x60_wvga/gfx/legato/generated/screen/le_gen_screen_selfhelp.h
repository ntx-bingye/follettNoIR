#ifndef LE_GEN_SCREEN_SELFHELP_H
#define LE_GEN_SCREEN_SELFHELP_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_Layer_0_FillPanel;
extern leLabelWidget* selfhelp_LblLowWater;
extern leLabelWidget* selfhelp_LblLowBin;
extern leLabelWidget* selfhelp_LblActiveMode;
extern leLabelWidget* selfhelp_LblTitle;
extern leButtonWidget* selfhelp_Btn0;
extern leButtonWidget* selfhelp_Btn1;
extern leButtonWidget* selfhelp_Btn2;
extern leButtonWidget* selfhelp_Btn3;
extern leButtonWidget* selfhelp_BtnHome;
extern leButtonWidget* selfhelp_BtnExit;
extern leButtonWidget* selfhelp_BtnPre;
extern leButtonWidget* selfhelp_BtnNext;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_Btn0_OnReleased(leButtonWidget* btn);
void event_selfhelp_Btn1_OnReleased(leButtonWidget* btn);
void event_selfhelp_Btn2_OnReleased(leButtonWidget* btn);
void event_selfhelp_Btn3_OnReleased(leButtonWidget* btn);
void event_selfhelp_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_BtnExit_OnReleased(leButtonWidget* btn);
void event_selfhelp_BtnPre_OnReleased(leButtonWidget* btn);
void event_selfhelp_BtnNext_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp(void); // called when Legato is initialized
leResult screenShow_selfhelp(void); // called when screen is shown
void screenHide_selfhelp(void); // called when screen is hidden
void screenDestroy_selfhelp(void); // called when Legato is destroyed
void screenUpdate_selfhelp(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_OnShow(void); // called when this screen is shown
void selfhelp_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_H
