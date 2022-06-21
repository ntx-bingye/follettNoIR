#ifndef LE_GEN_SCREEN_TESTSCREEN_H
#define LE_GEN_SCREEN_TESTSCREEN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* TestScreen_PanelWidget2;
extern leButtonWidget* TestScreen_ButtonWidget1;
extern leWidget* TestScreen_PanelWidget1;
extern leButtonWidget* TestScreen_ButtonWidget0;
extern leWidget* TestScreen_PanelWidget0;
extern leCircleWidget* TestScreen_CircleWidget0;
extern leCircularSliderWidget* TestScreen_CircularSliderWidget0;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_TestScreen(void); // called when Legato is initialized
leResult screenShow_TestScreen(void); // called when screen is shown
void screenHide_TestScreen(void); // called when screen is hidden
void screenDestroy_TestScreen(void); // called when Legato is destroyed
void screenUpdate_TestScreen(void); // called when Legato is updating

leWidget* screenGetRoot_TestScreen(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_TESTSCREEN_H
