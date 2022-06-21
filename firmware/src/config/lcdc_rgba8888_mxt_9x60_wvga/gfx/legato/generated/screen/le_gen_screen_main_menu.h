#ifndef LE_GEN_SCREEN_MAIN_MENU_H
#define LE_GEN_SCREEN_MAIN_MENU_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* main_menu_Layer_0_FillPanel;
extern leWidget* main_menu_PanelAlert;
extern leImageWidget* main_menu_ImgManualQR;
extern leWidget* main_menu_PanelSubtitle;
extern leWidget* main_menu_PanelBtn0_5;
extern leWidget* main_menu_PanelCleanScreen;
extern leButtonWidget* main_menu_BtnMaintenance;
extern leButtonWidget* main_menu_BtnOperationSettings;
extern leButtonWidget* main_menu_BtnExit;
extern leButtonWidget* main_menu_BtnHome;
extern leButtonWidget* main_menu_BtnTroubleshoot;
extern leButtonWidget* main_menu_BtnSystemInformation;
extern leButtonWidget* main_menu_BtnService;
extern leWidget* main_menu_PanelInterval;
extern leButtonWidget* main_menu_BtnUnits;
extern leLabelWidget* main_menu_LblSensor;
extern leLabelWidget* main_menu_LblLowWater;
extern leLabelWidget* main_menu_LblLowBIn;
extern leLabelWidget* main_menu_LblActiveMod;
extern leImageWidget* main_menu_ImgLine;
extern leLabelWidget* main_menu_LblSubmenu;
extern leButtonWidget* main_menu_Btn0;
extern leButtonWidget* main_menu_Btn1;
extern leButtonWidget* main_menu_Btn2;
extern leButtonWidget* main_menu_Btn3;
extern leButtonWidget* main_menu_Btn4;
extern leButtonWidget* main_menu_Btn5;
extern leButtonWidget* main_menu_BtnCleanLock;
extern leButtonWidget* main_menu_BtnCleanUnlock;
extern leWidget* main_menu_PanelHold5SLine;
extern leLineWidget* main_menu_LineClrUnlock;
extern leLabelWidget* main_menu_LblClearInstructions;
extern leLabelWidget* main_menu_LblMonth;
extern leLabelWidget* main_menu_LblFilterInterval;
extern leButtonWidget* main_menu_BtnRight;
extern leImageWidget* main_menu_ImgCancel;
extern leButtonWidget* main_menu_BtnLeft;
extern leLabelWidget* main_menu_LblSubtitle;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_main_menu_BtnMaintenance_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnOperationSettings_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnExit_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnHome_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnTroubleshoot_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnSystemInformation_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnService_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnUnits_OnReleased(leButtonWidget* btn);
void event_main_menu_Btn0_OnReleased(leButtonWidget* btn);
void event_main_menu_Btn1_OnReleased(leButtonWidget* btn);
void event_main_menu_Btn2_OnReleased(leButtonWidget* btn);
void event_main_menu_Btn3_OnReleased(leButtonWidget* btn);
void event_main_menu_Btn4_OnReleased(leButtonWidget* btn);
void event_main_menu_Btn5_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnCleanLock_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnCleanUnlock_OnPressed(leButtonWidget* btn);
void event_main_menu_BtnCleanUnlock_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnRight_OnReleased(leButtonWidget* btn);
void event_main_menu_BtnLeft_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_main_menu(void); // called when Legato is initialized
leResult screenShow_main_menu(void); // called when screen is shown
void screenHide_main_menu(void); // called when screen is hidden
void screenDestroy_main_menu(void); // called when Legato is destroyed
void screenUpdate_main_menu(void); // called when Legato is updating

leWidget* screenGetRoot_main_menu(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void main_menu_OnShow(void); // called when this screen is shown
void main_menu_OnHide(void); // called when this screen is hidden
void main_menu_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_MAIN_MENU_H
