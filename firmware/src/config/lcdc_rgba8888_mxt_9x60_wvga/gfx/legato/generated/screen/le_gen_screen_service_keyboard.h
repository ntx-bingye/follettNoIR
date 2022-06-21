#ifndef LE_GEN_SCREEN_SERVICE_KEYBOARD_H
#define LE_GEN_SCREEN_SERVICE_KEYBOARD_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* service_keyboard_Layer_0_FillPanel;
extern leRectangleWidget* service_keyboard_RectangleServiceKeyboard;
extern leLabelWidget* service_keyboard_LblInputBox;
extern leWidget* service_keyboard_PanelKeyChar;
extern leButtonWidget* service_keyboard_BtnExit;
extern leButtonWidget* service_keyboard_BtnSpace;
extern leButtonWidget* service_keyboard_Btn123;
extern leButtonWidget* service_keyboard_BtnSelect;
extern leButtonWidget* service_keyboard_BtnDot;
extern leLabelWidget* service_keyboard_LblLine1;
extern leLabelWidget* service_keyboard_LblLine2;
extern leLabelWidget* service_keyboard_LblLine3;
extern leButtonWidget* service_keyboard_Btn0;
extern leButtonWidget* service_keyboard_Btn1;
extern leButtonWidget* service_keyboard_Btn2;
extern leButtonWidget* service_keyboard_Btn3;
extern leButtonWidget* service_keyboard_Btn4;
extern leButtonWidget* service_keyboard_Btn5;
extern leButtonWidget* service_keyboard_Btn6;
extern leButtonWidget* service_keyboard_Btn7;
extern leButtonWidget* service_keyboard_Btn8;
extern leButtonWidget* service_keyboard_Btn9;
extern leButtonWidget* service_keyboard_Btn10;
extern leButtonWidget* service_keyboard_Btn11;
extern leButtonWidget* service_keyboard_Btn12;
extern leButtonWidget* service_keyboard_Btn13;
extern leButtonWidget* service_keyboard_Btn14;
extern leButtonWidget* service_keyboard_Btn15;
extern leButtonWidget* service_keyboard_Btn16;
extern leButtonWidget* service_keyboard_Btn17;
extern leButtonWidget* service_keyboard_Btn18;
extern leButtonWidget* service_keyboard_Btn19;
extern leButtonWidget* service_keyboard_Btn20;
extern leButtonWidget* service_keyboard_Btn21;
extern leButtonWidget* service_keyboard_Btn22;
extern leButtonWidget* service_keyboard_Btn23;
extern leButtonWidget* service_keyboard_Btn24;
extern leButtonWidget* service_keyboard_Btn25;
extern leButtonWidget* service_keyboard_Btn26;
extern leButtonWidget* service_keyboard_Btn27;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_service_keyboard_BtnExit_OnReleased(leButtonWidget* btn);
void event_service_keyboard_BtnSpace_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn123_OnReleased(leButtonWidget* btn);
void event_service_keyboard_BtnSelect_OnReleased(leButtonWidget* btn);
void event_service_keyboard_BtnDot_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn0_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn1_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn2_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn3_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn4_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn5_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn6_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn7_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn8_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn9_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn10_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn11_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn12_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn13_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn14_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn15_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn16_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn17_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn18_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn19_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn20_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn21_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn22_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn23_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn24_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn25_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn26_OnReleased(leButtonWidget* btn);
void event_service_keyboard_Btn27_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_service_keyboard(void); // called when Legato is initialized
leResult screenShow_service_keyboard(void); // called when screen is shown
void screenHide_service_keyboard(void); // called when screen is hidden
void screenDestroy_service_keyboard(void); // called when Legato is destroyed
void screenUpdate_service_keyboard(void); // called when Legato is updating

leWidget* screenGetRoot_service_keyboard(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void service_keyboard_OnShow(void); // called when this screen is shown
void service_keyboard_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SERVICE_KEYBOARD_H
