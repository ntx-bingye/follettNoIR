#ifndef LE_GEN_SCREEN_ALERT3_H
#define LE_GEN_SCREEN_ALERT3_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* alert3_Layer_0_FillPanel;
extern leLabelWidget* alert3_LblTitle;
extern leLabelWidget* alert3_LblLine1;
extern leLabelWidget* alert3_LblLine2;
extern leLabelWidget* alert3_LblLine3;
extern leButtonWidget* alert3_BtnContact;
extern leImageWidget* alert3_ImgError;
extern leImageWidget* alert3_ImgLogo;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_alert3_BtnContact_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_alert3(void); // called when Legato is initialized
leResult screenShow_alert3(void); // called when screen is shown
void screenHide_alert3(void); // called when screen is hidden
void screenDestroy_alert3(void); // called when Legato is destroyed
void screenUpdate_alert3(void); // called when Legato is updating

leWidget* screenGetRoot_alert3(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void alert3_OnShow(void); // called when this screen is shown
void alert3_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_ALERT3_H
