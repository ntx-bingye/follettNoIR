#ifndef LE_GEN_SCREEN_SELFHELP_SPARKLING_H
#define LE_GEN_SCREEN_SELFHELP_SPARKLING_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_sparkling_Layer_0_FillPanel;
extern leLabelWidget* selfhelp_sparkling_LblTitle;
extern leButtonWidget* selfhelp_sparkling_BtnHome;
extern leButtonWidget* selfhelp_sparkling_BtnNoSparklingWater;
extern leButtonWidget* selfhelp_sparkling_BtnWaterNotChilled;
extern leButtonWidget* selfhelp_sparkling_BtnWaterNotCarbonated;
extern leButtonWidget* selfhelp_sparkling_BntExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_sparkling_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_sparkling_BtnNoSparklingWater_OnReleased(leButtonWidget* btn);
void event_selfhelp_sparkling_BtnWaterNotChilled_OnReleased(leButtonWidget* btn);
void event_selfhelp_sparkling_BtnWaterNotCarbonated_OnReleased(leButtonWidget* btn);
void event_selfhelp_sparkling_BntExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_sparkling(void); // called when Legato is initialized
leResult screenShow_selfhelp_sparkling(void); // called when screen is shown
void screenHide_selfhelp_sparkling(void); // called when screen is hidden
void screenDestroy_selfhelp_sparkling(void); // called when Legato is destroyed
void screenUpdate_selfhelp_sparkling(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_sparkling(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_sparkling_OnShow(void); // called when this screen is shown
void selfhelp_sparkling_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_SPARKLING_H
