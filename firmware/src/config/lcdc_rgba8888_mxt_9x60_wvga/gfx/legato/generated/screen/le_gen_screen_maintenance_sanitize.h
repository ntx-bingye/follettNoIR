#ifndef LE_GEN_SCREEN_MAINTENANCE_SANITIZE_H
#define LE_GEN_SCREEN_MAINTENANCE_SANITIZE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* maintenance_sanitize_Layer_0_FillPanel;
extern leImageWidget* maintenance_sanitize_ImgSanitize;
extern leImageWidget* maintenance_sanitize_ImgContact;
extern leImageWidget* maintenance_sanitize_ImgComplete;
extern leImageWidget* maintenance_sanitize_ImgStep1OfX;
extern leImageWidget* maintenance_sanitize_ImgStepCount;
extern leLabelWidget* maintenance_sanitize_LblInstructions;
extern leLabelWidget* maintenance_sanitize_LblStep1OfX;
extern leLabelWidget* maintenance_sanitize_LblStepCount;
extern leButtonWidget* maintenance_sanitize_BtnHome;
extern leButtonWidget* maintenance_sanitize_BtnPrev;
extern leButtonWidget* maintenance_sanitize_BtnNext;
extern leButtonWidget* maintenance_sanitize_BtnExit;
extern leButtonWidget* maintenance_sanitize_BtnComplete;
extern leButtonWidget* maintenance_sanitize_BtnContact;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_maintenance_sanitize_BtnHome_OnReleased(leButtonWidget* btn);
void event_maintenance_sanitize_BtnPrev_OnReleased(leButtonWidget* btn);
void event_maintenance_sanitize_BtnNext_OnReleased(leButtonWidget* btn);
void event_maintenance_sanitize_BtnExit_OnReleased(leButtonWidget* btn);
void event_maintenance_sanitize_BtnComplete_OnPressed(leButtonWidget* btn);
void event_maintenance_sanitize_BtnComplete_OnReleased(leButtonWidget* btn);
void event_maintenance_sanitize_BtnContact_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_maintenance_sanitize(void); // called when Legato is initialized
leResult screenShow_maintenance_sanitize(void); // called when screen is shown
void screenHide_maintenance_sanitize(void); // called when screen is hidden
void screenDestroy_maintenance_sanitize(void); // called when Legato is destroyed
void screenUpdate_maintenance_sanitize(void); // called when Legato is updating

leWidget* screenGetRoot_maintenance_sanitize(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void maintenance_sanitize_OnShow(void); // called when this screen is shown
void maintenance_sanitize_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_MAINTENANCE_SANITIZE_H
