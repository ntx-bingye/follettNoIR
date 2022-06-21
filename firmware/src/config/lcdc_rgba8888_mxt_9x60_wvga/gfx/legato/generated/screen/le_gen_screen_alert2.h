#ifndef LE_GEN_SCREEN_ALERT2_H
#define LE_GEN_SCREEN_ALERT2_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* alert2_Layer_0_FillPanel;
extern leImageWidget* alert2_Img;
extern leLabelWidget* alert2_Lbl;
extern leButtonWidget* alert2_BtnContact;
extern leButtonWidget* alert2_BtnHelp;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_alert2_BtnContact_OnReleased(leButtonWidget* btn);
void event_alert2_BtnHelp_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_alert2(void); // called when Legato is initialized
leResult screenShow_alert2(void); // called when screen is shown
void screenHide_alert2(void); // called when screen is hidden
void screenDestroy_alert2(void); // called when Legato is destroyed
void screenUpdate_alert2(void); // called when Legato is updating

leWidget* screenGetRoot_alert2(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void alert2_OnShow(void); // called when this screen is shown
void alert2_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_ALERT2_H
