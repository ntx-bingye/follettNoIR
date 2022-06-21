#ifndef LE_GEN_SCREEN_ERRORLOG_H
#define LE_GEN_SCREEN_ERRORLOG_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* ErrorLog_Layer0_FillPanel;
extern leLabelWidget* ErrorLog_LabelErrorList;
extern leTextFieldWidget* ErrorLog_TextFieldErrorCount1;
extern leLabelWidget* ErrorLog_LabelErrorLog1;
extern leTextFieldWidget* ErrorLog_TextFieldErrorCount2;
extern leLabelWidget* ErrorLog_LabelErrorLog2;
extern leTextFieldWidget* ErrorLog_TextFieldErrorCount3;
extern leLabelWidget* ErrorLog_LabelErrorLog3;
extern leTextFieldWidget* ErrorLog_TextFieldErrorCount4;
extern leLabelWidget* ErrorLog_LabelErrorLog4;
extern leTextFieldWidget* ErrorLog_TextFieldErrorCount6;
extern leLabelWidget* ErrorLog_LabelErrorLog6;
extern leTextFieldWidget* ErrorLog_TextFieldErrorCount7;
extern leLabelWidget* ErrorLog_LabelErrorLog7;
extern leTextFieldWidget* ErrorLog_TextFieldErrorCount8;
extern leLabelWidget* ErrorLog_LabelErrorLog8;
extern leTextFieldWidget* ErrorLog_TextFieldErrorCount16;
extern leLabelWidget* ErrorLog_LabelErrorLog16;
extern leImageWidget* ErrorLog_ImageWidget0;
extern leWidget* ErrorLog_PanelWidget0;
extern leButtonWidget* ErrorLog_ButtonBack;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_ErrorLog_ButtonBack_OnPressed(leButtonWidget* btn);
void event_ErrorLog_ButtonBack_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_ErrorLog(void); // called when Legato is initialized
leResult screenShow_ErrorLog(void); // called when screen is shown
void screenHide_ErrorLog(void); // called when screen is hidden
void screenDestroy_ErrorLog(void); // called when Legato is destroyed
void screenUpdate_ErrorLog(void); // called when Legato is updating

leWidget* screenGetRoot_ErrorLog(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void ErrorLog_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_ERRORLOG_H
