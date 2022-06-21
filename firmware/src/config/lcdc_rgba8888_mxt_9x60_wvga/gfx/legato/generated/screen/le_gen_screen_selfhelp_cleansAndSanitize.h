#ifndef LE_GEN_SCREEN_SELFHELP_CLEANSANDSANITIZE_H
#define LE_GEN_SCREEN_SELFHELP_CLEANSANDSANITIZE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_cleansAndSanitize_PanelWidget0;
extern leImageWidget* selfhelp_cleansAndSanitize_ImgStep1OfX;
extern leLabelWidget* selfhelp_cleansAndSanitize_LblStep1OX;
extern leImageWidget* selfhelp_cleansAndSanitize_ImgStepCount;
extern leLabelWidget* selfhelp_cleansAndSanitize_LblSteptCount;
extern leButtonWidget* selfhelp_cleansAndSanitize_BtnHome;
extern leButtonWidget* selfhelp_cleansAndSanitize_BtnExit;
extern leButtonWidget* selfhelp_cleansAndSanitize_BtnPre;
extern leButtonWidget* selfhelp_cleansAndSanitize_ButtonWidget1;
extern leButtonWidget* selfhelp_cleansAndSanitize_BtnNext;
extern leLabelWidget* selfhelp_cleansAndSanitize_LblInstructions;
extern leImageWidget* selfhelp_cleansAndSanitize_Img;
extern leButtonWidget* selfhelp_cleansAndSanitize_BtnRst;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_cleansAndSanitize_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_cleansAndSanitize_BtnExit_OnReleased(leButtonWidget* btn);
void event_selfhelp_cleansAndSanitize_BtnPre_OnReleased(leButtonWidget* btn);
void event_selfhelp_cleansAndSanitize_ButtonWidget1_OnReleased(leButtonWidget* btn);
void event_selfhelp_cleansAndSanitize_BtnNext_OnReleased(leButtonWidget* btn);
void event_selfhelp_cleansAndSanitize_BtnRst_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_cleansAndSanitize(void); // called when Legato is initialized
leResult screenShow_selfhelp_cleansAndSanitize(void); // called when screen is shown
void screenHide_selfhelp_cleansAndSanitize(void); // called when screen is hidden
void screenDestroy_selfhelp_cleansAndSanitize(void); // called when Legato is destroyed
void screenUpdate_selfhelp_cleansAndSanitize(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_cleansAndSanitize(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_cleansAndSanitize_OnShow(void); // called when this screen is shown
void selfhelp_cleansAndSanitize_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_CLEANSANDSANITIZE_H
