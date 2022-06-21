#ifndef LE_GEN_SCREEN_MAXCURRENTUNCHECK_H
#define LE_GEN_SCREEN_MAXCURRENTUNCHECK_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* MaxCurrentUncheck_PanelWidget0;
extern leImageWidget* MaxCurrentUncheck_CurrentScreenIcon;
extern leButtonWidget* MaxCurrentUncheck_ButtonBack;
extern leLabelWidget* MaxCurrentUncheck_LabelLimitMaximumCurrent;
extern leLabelWidget* MaxCurrentUncheck_ResetErrorLog;
extern leButtonWidget* MaxCurrentUncheck_ButtonReset;
extern leLabelWidget* MaxCurrentUncheck_LabelWidget0;
extern leCheckBoxWidget* MaxCurrentUncheck_CheckBox10A;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_MaxCurrentUncheck_ButtonBack_OnReleased(leButtonWidget* btn);
void event_MaxCurrentUncheck_ButtonReset_OnReleased(leButtonWidget* btn);
void event_MaxCurrentUncheck_CheckBox10A_OnChecked(leCheckBoxWidget* btn);
void event_MaxCurrentUncheck_CheckBox10A_OnUnchecked(leCheckBoxWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_MaxCurrentUncheck(void); // called when Legato is initialized
leResult screenShow_MaxCurrentUncheck(void); // called when screen is shown
void screenHide_MaxCurrentUncheck(void); // called when screen is hidden
void screenDestroy_MaxCurrentUncheck(void); // called when Legato is destroyed
void screenUpdate_MaxCurrentUncheck(void); // called when Legato is updating

leWidget* screenGetRoot_MaxCurrentUncheck(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_MAXCURRENTUNCHECK_H
