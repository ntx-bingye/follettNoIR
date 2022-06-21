#ifndef LE_GEN_SCREEN_TIMERINIT_H
#define LE_GEN_SCREEN_TIMERINIT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* TimerInit_PanelWidget0;
extern leLabelWidget* TimerInit_LabelTimerUserNote;
extern leLabelWidget* TimerInit_TimerValue;
extern leButtonWidget* TimerInit_ButtonExit;
extern leKeyPadWidget* TimerInit_KeyPadWidget0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_TimerInit_ButtonExit_OnPressed(leButtonWidget* btn);
void event_TimerInit_ButtonExit_OnReleased(leButtonWidget* btn);
void event_TimerInit_KeyPadWidget0_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_TimerInit(void); // called when Legato is initialized
leResult screenShow_TimerInit(void); // called when screen is shown
void screenHide_TimerInit(void); // called when screen is hidden
void screenDestroy_TimerInit(void); // called when Legato is destroyed
void screenUpdate_TimerInit(void); // called when Legato is updating

leWidget* screenGetRoot_TimerInit(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void TimerInit_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_TIMERINIT_H
