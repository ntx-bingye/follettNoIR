#ifndef LE_GEN_SCREEN_ERROR_H
#define LE_GEN_SCREEN_ERROR_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Error_Layer0_FillPanel;
extern leImageWidget* Error_WarningIcon;
extern leLabelWidget* Error_LabelOperatorNote;
extern leLabelWidget* Error_LabelOperatorNoteA;
extern leWidget* Error_PanelWidget0;

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Error(void); // called when Legato is initialized
leResult screenShow_Error(void); // called when screen is shown
void screenHide_Error(void); // called when screen is hidden
void screenDestroy_Error(void); // called when Legato is destroyed
void screenUpdate_Error(void); // called when Legato is updating

leWidget* screenGetRoot_Error(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Error_OnShow(void); // called when this screen is shown

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_ERROR_H
