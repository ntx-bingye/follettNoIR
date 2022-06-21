#ifndef LE_GEN_SCREEN_TESTSCREENAGAIN_H
#define LE_GEN_SCREEN_TESTSCREENAGAIN_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* TestScreenAgain_PanelWidget2;
extern leButtonWidget* TestScreenAgain_ButtonWidget1;
extern leWidget* TestScreenAgain_PanelWidget1;
extern leButtonWidget* TestScreenAgain_ButtonWidget0;
extern leWidget* TestScreenAgain_PanelWidget0;
extern leCircleWidget* TestScreenAgain_CircleWidget0;
extern leCircularSliderWidget* TestScreenAgain_CircularSliderWidget0;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_TestScreenAgain(void); // called when Legato is initialized
leResult screenShow_TestScreenAgain(void); // called when screen is shown
void screenHide_TestScreenAgain(void); // called when screen is hidden
void screenDestroy_TestScreenAgain(void); // called when Legato is destroyed
void screenUpdate_TestScreenAgain(void); // called when Legato is updating

leWidget* screenGetRoot_TestScreenAgain(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_TESTSCREENAGAIN_H
