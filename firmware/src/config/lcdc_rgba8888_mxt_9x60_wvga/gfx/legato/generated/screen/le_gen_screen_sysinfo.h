#ifndef LE_GEN_SCREEN_SYSINFO_H
#define LE_GEN_SCREEN_SYSINFO_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* sysinfo_Layer_0_FillPanel;
extern leLabelWidget* sysinfo_LblModel;
extern leLabelWidget* sysinfo_LblSerial;
extern leLabelWidget* sysinfo_LblWaterFilter;
extern leLabelWidget* sysinfo_LblDrain;
extern leLabelWidget* sysinfo_LblHotWater;
extern leLabelWidget* sysinfo_LblAmWater;
extern leLabelWidget* sysinfo_LblIMCVersion;
extern leLabelWidget* sysinfo_LblUIVersion;
extern leButtonWidget* sysinfo_BtnExit;
extern leButtonWidget* sysinfo_BtnHome;
extern leLabelWidget* sysinfo_LblModelValue;
extern leLabelWidget* sysinfo_LblSerialValue;
extern leLabelWidget* sysinfo_LblWaterFilterValue;
extern leLabelWidget* sysinfo_LblDrainValue;
extern leLabelWidget* sysinfo_LblHotWaterValue;
extern leLabelWidget* sysinfo_LblAmWaterValue;
extern leLabelWidget* sysinfo_LblIMCVersionValue;
extern leLabelWidget* sysinfo_LblUIVersionValue;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_sysinfo_BtnExit_OnReleased(leButtonWidget* btn);
void event_sysinfo_BtnHome_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_sysinfo(void); // called when Legato is initialized
leResult screenShow_sysinfo(void); // called when screen is shown
void screenHide_sysinfo(void); // called when screen is hidden
void screenDestroy_sysinfo(void); // called when Legato is destroyed
void screenUpdate_sysinfo(void); // called when Legato is updating

leWidget* screenGetRoot_sysinfo(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void sysinfo_OnShow(void); // called when this screen is shown
void sysinfo_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SYSINFO_H
