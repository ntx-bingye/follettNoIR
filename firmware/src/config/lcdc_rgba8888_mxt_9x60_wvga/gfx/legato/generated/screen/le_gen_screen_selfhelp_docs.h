#ifndef LE_GEN_SCREEN_SELFHELP_DOCS_H
#define LE_GEN_SCREEN_SELFHELP_DOCS_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* selfhelp_docs_Layer_0_FillPanel;
extern leWidget* selfhelp_docs_PanelSelhHelpDocs;
extern leLabelWidget* selfhelp_docs_LblTitle;
extern leLabelWidget* selfhelp_docs_LabelWidget3;
extern leLabelWidget* selfhelp_docs_LabelWidget2;
extern leImageWidget* selfhelp_docs_ImgQRCode;
extern leButtonWidget* selfhelp_docs_BtnHome;
extern leButtonWidget* selfhelp_docs_BtnExit;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_selfhelp_docs_BtnHome_OnReleased(leButtonWidget* btn);
void event_selfhelp_docs_BtnExit_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_selfhelp_docs(void); // called when Legato is initialized
leResult screenShow_selfhelp_docs(void); // called when screen is shown
void screenHide_selfhelp_docs(void); // called when screen is hidden
void screenDestroy_selfhelp_docs(void); // called when Legato is destroyed
void screenUpdate_selfhelp_docs(void); // called when Legato is updating

leWidget* screenGetRoot_selfhelp_docs(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void selfhelp_docs_OnShow(void); // called when this screen is shown
void selfhelp_docs_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SELFHELP_DOCS_H
