#ifndef LE_GEN_SCREEN_VIEWERRORLOG_H
#define LE_GEN_SCREEN_VIEWERRORLOG_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ViewErrorLog_Layer0_FillPanel;
extern leLabelWidget* ViewErrorLog_LabelErrorList;
extern leButtonWidget* ViewErrorLog_ButtonBack;
extern leTextFieldWidget* ViewErrorLog_TextFieldErrorCount1;
extern leLabelWidget* ViewErrorLog_LabelErrorLog1;
extern leTextFieldWidget* ViewErrorLog_TextFieldErrorCount2;
extern leLabelWidget* ViewErrorLog_LabelErrorLog2;
extern leTextFieldWidget* ViewErrorLog_TextFieldErrorCount3;
extern leLabelWidget* ViewErrorLog_LabelErrorLog3;
extern leTextFieldWidget* ViewErrorLog_TextFieldErrorCount4;
extern leLabelWidget* ViewErrorLog_LabelErrorLog4;
extern leTextFieldWidget* ViewErrorLog_TextFieldErrorCount6;
extern leLabelWidget* ViewErrorLog_LabelErrorLog6;
extern leTextFieldWidget* ViewErrorLog_TextFieldErrorCount7;
extern leLabelWidget* ViewErrorLog_LabelErrorLog7;
extern leTextFieldWidget* ViewErrorLog_TextFieldErrorCount8;
extern leLabelWidget* ViewErrorLog_LabelErrorLog8;
extern leTextFieldWidget* ViewErrorLog_TextFieldErrorCount16;
extern leLabelWidget* ViewErrorLog_LabelErrorLog16;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ViewErrorLog_ButtonBack_OnPressed(leButtonWidget* btn);
void event_ViewErrorLog_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ViewErrorLog(void); // called when Legato is initialized
leResult screenShow_ViewErrorLog(void); // called when screen is shown
void screenHide_ViewErrorLog(void); // called when screen is hidden
void screenDestroy_ViewErrorLog(void); // called when Legato is destroyed
void screenUpdate_ViewErrorLog(void); // called when Legato is updating

leWidget* screenGetRoot_ViewErrorLog(uint32_t lyrIdx); // gets a root widget for this screen

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_VIEWERRORLOG_H
