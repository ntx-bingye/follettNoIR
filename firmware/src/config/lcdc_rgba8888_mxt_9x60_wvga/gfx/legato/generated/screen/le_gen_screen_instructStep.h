#ifndef LE_GEN_SCREEN_INSTRUCTSTEP_H
#define LE_GEN_SCREEN_INSTRUCTSTEP_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* instructStep_Layer_0_FillPanel;
extern leLabelWidget* instructStep_LblInstructions;
extern leImageSequenceWidget* instructStep_ImgSqn;
extern leImageWidget* instructStep_ImgContact;
extern leImageWidget* instructStep_ImgComplete;
extern leImageWidget* instructStep_ImgStep1OfX;
extern leImageWidget* instructStep_ImgStepCount;
extern leLabelWidget* instructStep_LblStep1OfX;
extern leLabelWidget* instructStep_LblStepCount;
extern leButtonWidget* instructStep_BtnHome;
extern leButtonWidget* instructStep_BtnPrev;
extern leButtonWidget* instructStep_BtnNext;
extern leButtonWidget* instructStep_BtnExit;
extern leButtonWidget* instructStep_BtnComplete;
extern leButtonWidget* instructStep_BtnContact;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_instructStep_BtnHome_OnReleased(leButtonWidget* btn);
void event_instructStep_BtnPrev_OnReleased(leButtonWidget* btn);
void event_instructStep_BtnNext_OnReleased(leButtonWidget* btn);
void event_instructStep_BtnExit_OnReleased(leButtonWidget* btn);
void event_instructStep_BtnComplete_OnPressed(leButtonWidget* btn);
void event_instructStep_BtnComplete_OnReleased(leButtonWidget* btn);
void event_instructStep_BtnContact_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_instructStep(void); // called when Legato is initialized
leResult screenShow_instructStep(void); // called when screen is shown
void screenHide_instructStep(void); // called when screen is hidden
void screenDestroy_instructStep(void); // called when Legato is destroyed
void screenUpdate_instructStep(void); // called when Legato is updating

leWidget* screenGetRoot_instructStep(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void instructStep_OnShow(void); // called when this screen is shown
void instructStep_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_INSTRUCTSTEP_H
