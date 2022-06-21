#ifndef LE_GEN_SCREEN_MAINTENANCE_FILTER_H
#define LE_GEN_SCREEN_MAINTENANCE_FILTER_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* maintenance_filter_Layer_0_FillPanel;
extern leImageWidget* maintenance_filter_ImgFilter;
extern leImageWidget* maintenance_filter_ImgStepCount;
extern leImageWidget* maintenance_filter_ImgStep1OfX;
extern leImageWidget* maintenance_filter_ImgContact;
extern leImageWidget* maintenance_filter_ImgComplete;
extern leLabelWidget* maintenance_filter_LblInstructions;
extern leLabelWidget* maintenance_filter_LblStepCount;
extern leLabelWidget* maintenance_filter_LblStep1OfX;
extern leButtonWidget* maintenance_filter_BtnHome;
extern leButtonWidget* maintenance_filter_BtnExit;
extern leButtonWidget* maintenance_filter_BtnComplete;
extern leButtonWidget* maintenance_filter_BtnContact;
extern leButtonWidget* maintenance_filter_BtnNext;
extern leButtonWidget* maintenance_filter_BtnPrev;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_maintenance_filter_BtnHome_OnReleased(leButtonWidget* btn);
void event_maintenance_filter_BtnExit_OnReleased(leButtonWidget* btn);
void event_maintenance_filter_BtnComplete_OnReleased(leButtonWidget* btn);
void event_maintenance_filter_BtnContact_OnReleased(leButtonWidget* btn);
void event_maintenance_filter_BtnNext_OnReleased(leButtonWidget* btn);
void event_maintenance_filter_BtnPrev_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_maintenance_filter(void); // called when Legato is initialized
leResult screenShow_maintenance_filter(void); // called when screen is shown
void screenHide_maintenance_filter(void); // called when screen is hidden
void screenDestroy_maintenance_filter(void); // called when Legato is destroyed
void screenUpdate_maintenance_filter(void); // called when Legato is updating

leWidget* screenGetRoot_maintenance_filter(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void maintenance_filter_OnShow(void); // called when this screen is shown
void maintenance_filter_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_MAINTENANCE_FILTER_H
