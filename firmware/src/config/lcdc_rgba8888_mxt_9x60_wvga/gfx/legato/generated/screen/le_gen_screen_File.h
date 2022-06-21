#ifndef LE_GEN_SCREEN_FILE_H
#define LE_GEN_SCREEN_FILE_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* File_PanelWidget0;
extern leButtonWidget* File_BtnUsb2Sst_cfg;
extern leButtonWidget* File_BtnUsb2Sst_Setting;
extern leButtonWidget* File_BtnSst2Usb_cfg;
extern leButtonWidget* File_BtnSst2Usb_setting;
extern leButtonWidget* File_BtnExit;
extern leButtonWidget* File_BtnHome;
extern leLabelWidget* File_lblDisplay;
extern leLabelWidget* File_lblUsbStatus;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_File_BtnUsb2Sst_cfg_OnReleased(leButtonWidget* btn);
void event_File_BtnUsb2Sst_Setting_OnReleased(leButtonWidget* btn);
void event_File_BtnSst2Usb_cfg_OnReleased(leButtonWidget* btn);
void event_File_BtnSst2Usb_setting_OnReleased(leButtonWidget* btn);
void event_File_BtnExit_OnReleased(leButtonWidget* btn);
void event_File_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_File(void); // called when Legato is initialized
leResult screenShow_File(void); // called when screen is shown
void screenHide_File(void); // called when screen is hidden
void screenDestroy_File(void); // called when Legato is destroyed
void screenUpdate_File(void); // called when Legato is updating

leWidget* screenGetRoot_File(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void File_OnShow(void); // called when this screen is shown
void File_OnHide(void); // called when this screen is hidden
void File_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_FILE_H
