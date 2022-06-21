#include "gfx/legato/generated/screen/le_gen_screen_service_keyboard.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_keyboard_Layer_0_FillPanel;
leRectangleWidget* service_keyboard_RectangleServiceKeyboard;
leLabelWidget* service_keyboard_LblInputBox;
leWidget* service_keyboard_PanelKeyChar;
leButtonWidget* service_keyboard_BtnExit;
leButtonWidget* service_keyboard_BtnSpace;
leButtonWidget* service_keyboard_Btn123;
leButtonWidget* service_keyboard_BtnSelect;
leButtonWidget* service_keyboard_BtnDot;
leLabelWidget* service_keyboard_LblLine1;
leLabelWidget* service_keyboard_LblLine2;
leLabelWidget* service_keyboard_LblLine3;
leButtonWidget* service_keyboard_Btn0;
leButtonWidget* service_keyboard_Btn1;
leButtonWidget* service_keyboard_Btn2;
leButtonWidget* service_keyboard_Btn3;
leButtonWidget* service_keyboard_Btn4;
leButtonWidget* service_keyboard_Btn5;
leButtonWidget* service_keyboard_Btn6;
leButtonWidget* service_keyboard_Btn7;
leButtonWidget* service_keyboard_Btn8;
leButtonWidget* service_keyboard_Btn9;
leButtonWidget* service_keyboard_Btn10;
leButtonWidget* service_keyboard_Btn11;
leButtonWidget* service_keyboard_Btn12;
leButtonWidget* service_keyboard_Btn13;
leButtonWidget* service_keyboard_Btn14;
leButtonWidget* service_keyboard_Btn15;
leButtonWidget* service_keyboard_Btn16;
leButtonWidget* service_keyboard_Btn17;
leButtonWidget* service_keyboard_Btn18;
leButtonWidget* service_keyboard_Btn19;
leButtonWidget* service_keyboard_Btn20;
leButtonWidget* service_keyboard_Btn21;
leButtonWidget* service_keyboard_Btn22;
leButtonWidget* service_keyboard_Btn23;
leButtonWidget* service_keyboard_Btn24;
leButtonWidget* service_keyboard_Btn25;
leButtonWidget* service_keyboard_Btn26;
leButtonWidget* service_keyboard_Btn27;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_keyboard(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_keyboard(void)
{
    if(showing == LE_TRUE)
        return LE_FAILURE;

    // layer 0
    root0 = leWidget_New();
    root0->fn->setSize(root0, 480, 272);
    root0->fn->setBackgroundType(root0, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->setMargins(root0, 0, 0, 0, 0);
    root0->flags |= LE_WIDGET_IGNOREEVENTS;
    root0->flags |= LE_WIDGET_IGNOREPICK;

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_keyboard_Layer_0_FillPanel = leWidget_New();
    service_keyboard_Layer_0_FillPanel->fn->setPosition(service_keyboard_Layer_0_FillPanel, 0, 0);
    service_keyboard_Layer_0_FillPanel->fn->setSize(service_keyboard_Layer_0_FillPanel, 480, 272);
    service_keyboard_Layer_0_FillPanel->fn->setScheme(service_keyboard_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_Layer_0_FillPanel);

    service_keyboard_RectangleServiceKeyboard = leRectangleWidget_New();
    service_keyboard_RectangleServiceKeyboard->fn->setPosition(service_keyboard_RectangleServiceKeyboard, 0, 0);
    service_keyboard_RectangleServiceKeyboard->fn->setSize(service_keyboard_RectangleServiceKeyboard, 480, 45);
    service_keyboard_RectangleServiceKeyboard->fn->setScheme(service_keyboard_RectangleServiceKeyboard, &Button_Gray1);
    service_keyboard_RectangleServiceKeyboard->fn->setBorderType(service_keyboard_RectangleServiceKeyboard, LE_WIDGET_BORDER_NONE);
    service_keyboard_RectangleServiceKeyboard->fn->setHAlignment(service_keyboard_RectangleServiceKeyboard, LE_HALIGN_RIGHT);
    service_keyboard_RectangleServiceKeyboard->fn->setVAlignment(service_keyboard_RectangleServiceKeyboard, LE_VALIGN_BOTTOM);
    service_keyboard_RectangleServiceKeyboard->fn->setMargins(service_keyboard_RectangleServiceKeyboard, 0, 0, 0, 0);
    service_keyboard_RectangleServiceKeyboard->fn->setThickness(service_keyboard_RectangleServiceKeyboard, 2);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_RectangleServiceKeyboard);

    service_keyboard_LblInputBox = leLabelWidget_New();
    service_keyboard_LblInputBox->fn->setPosition(service_keyboard_LblInputBox, 42, 10);
    service_keyboard_LblInputBox->fn->setSize(service_keyboard_LblInputBox, 396, 25);
    service_keyboard_LblInputBox->fn->setScheme(service_keyboard_LblInputBox, &Label_Gray4_FontBlack);
    service_keyboard_LblInputBox->fn->setString(service_keyboard_LblInputBox, (leString*)&string_SERVICE7_CONTACT_Name);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_LblInputBox);

    service_keyboard_PanelKeyChar = leWidget_New();
    service_keyboard_PanelKeyChar->fn->setPosition(service_keyboard_PanelKeyChar, 26, 55);
    service_keyboard_PanelKeyChar->fn->setSize(service_keyboard_PanelKeyChar, 424, 145);
    service_keyboard_PanelKeyChar->fn->setScheme(service_keyboard_PanelKeyChar, &ClearBackground);
    service_keyboard_PanelKeyChar->fn->setBackgroundType(service_keyboard_PanelKeyChar, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_PanelKeyChar);

    service_keyboard_LblLine1 = leLabelWidget_New();
    service_keyboard_LblLine1->fn->setPosition(service_keyboard_LblLine1, 15, 11);
    service_keyboard_LblLine1->fn->setSize(service_keyboard_LblLine1, 400, 40);
    service_keyboard_LblLine1->fn->setScheme(service_keyboard_LblLine1, &keyboard);
    service_keyboard_LblLine1->fn->setBackgroundType(service_keyboard_LblLine1, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_LblLine1->fn->setString(service_keyboard_LblLine1, (leString*)&string_key_ABC_line1);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_LblLine1);

    service_keyboard_LblLine2 = leLabelWidget_New();
    service_keyboard_LblLine2->fn->setPosition(service_keyboard_LblLine2, 34, 55);
    service_keyboard_LblLine2->fn->setSize(service_keyboard_LblLine2, 360, 40);
    service_keyboard_LblLine2->fn->setScheme(service_keyboard_LblLine2, &keyboard);
    service_keyboard_LblLine2->fn->setBackgroundType(service_keyboard_LblLine2, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_LblLine2->fn->setString(service_keyboard_LblLine2, (leString*)&string_key_ABC_line2);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_LblLine2);

    service_keyboard_LblLine3 = leLabelWidget_New();
    service_keyboard_LblLine3->fn->setPosition(service_keyboard_LblLine3, 74, 95);
    service_keyboard_LblLine3->fn->setSize(service_keyboard_LblLine3, 280, 40);
    service_keyboard_LblLine3->fn->setScheme(service_keyboard_LblLine3, &keyboard);
    service_keyboard_LblLine3->fn->setBackgroundType(service_keyboard_LblLine3, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_LblLine3->fn->setString(service_keyboard_LblLine3, (leString*)&string_key_ABC_line3);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_LblLine3);

    service_keyboard_Btn0 = leButtonWidget_New();
    service_keyboard_Btn0->fn->setPosition(service_keyboard_Btn0, 375, 11);
    service_keyboard_Btn0->fn->setSize(service_keyboard_Btn0, 40, 40);
    service_keyboard_Btn0->fn->setScheme(service_keyboard_Btn0, &keyboard);
    service_keyboard_Btn0->fn->setBackgroundType(service_keyboard_Btn0, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn0->fn->setReleasedEventCallback(service_keyboard_Btn0, event_service_keyboard_Btn0_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn0);

    service_keyboard_Btn1 = leButtonWidget_New();
    service_keyboard_Btn1->fn->setPosition(service_keyboard_Btn1, 15, 11);
    service_keyboard_Btn1->fn->setSize(service_keyboard_Btn1, 40, 40);
    service_keyboard_Btn1->fn->setScheme(service_keyboard_Btn1, &keyboard);
    service_keyboard_Btn1->fn->setBackgroundType(service_keyboard_Btn1, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn1->fn->setReleasedEventCallback(service_keyboard_Btn1, event_service_keyboard_Btn1_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn1);

    service_keyboard_Btn2 = leButtonWidget_New();
    service_keyboard_Btn2->fn->setPosition(service_keyboard_Btn2, 55, 11);
    service_keyboard_Btn2->fn->setSize(service_keyboard_Btn2, 40, 40);
    service_keyboard_Btn2->fn->setScheme(service_keyboard_Btn2, &keyboard);
    service_keyboard_Btn2->fn->setBackgroundType(service_keyboard_Btn2, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn2->fn->setReleasedEventCallback(service_keyboard_Btn2, event_service_keyboard_Btn2_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn2);

    service_keyboard_Btn3 = leButtonWidget_New();
    service_keyboard_Btn3->fn->setPosition(service_keyboard_Btn3, 95, 11);
    service_keyboard_Btn3->fn->setSize(service_keyboard_Btn3, 40, 40);
    service_keyboard_Btn3->fn->setScheme(service_keyboard_Btn3, &keyboard);
    service_keyboard_Btn3->fn->setBackgroundType(service_keyboard_Btn3, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn3->fn->setReleasedEventCallback(service_keyboard_Btn3, event_service_keyboard_Btn3_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn3);

    service_keyboard_Btn4 = leButtonWidget_New();
    service_keyboard_Btn4->fn->setPosition(service_keyboard_Btn4, 135, 11);
    service_keyboard_Btn4->fn->setSize(service_keyboard_Btn4, 40, 40);
    service_keyboard_Btn4->fn->setScheme(service_keyboard_Btn4, &keyboard);
    service_keyboard_Btn4->fn->setBackgroundType(service_keyboard_Btn4, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn4->fn->setReleasedEventCallback(service_keyboard_Btn4, event_service_keyboard_Btn4_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn4);

    service_keyboard_Btn5 = leButtonWidget_New();
    service_keyboard_Btn5->fn->setPosition(service_keyboard_Btn5, 175, 11);
    service_keyboard_Btn5->fn->setSize(service_keyboard_Btn5, 40, 40);
    service_keyboard_Btn5->fn->setScheme(service_keyboard_Btn5, &keyboard);
    service_keyboard_Btn5->fn->setBackgroundType(service_keyboard_Btn5, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn5->fn->setReleasedEventCallback(service_keyboard_Btn5, event_service_keyboard_Btn5_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn5);

    service_keyboard_Btn6 = leButtonWidget_New();
    service_keyboard_Btn6->fn->setPosition(service_keyboard_Btn6, 215, 11);
    service_keyboard_Btn6->fn->setSize(service_keyboard_Btn6, 40, 40);
    service_keyboard_Btn6->fn->setScheme(service_keyboard_Btn6, &keyboard);
    service_keyboard_Btn6->fn->setBackgroundType(service_keyboard_Btn6, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn6->fn->setReleasedEventCallback(service_keyboard_Btn6, event_service_keyboard_Btn6_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn6);

    service_keyboard_Btn7 = leButtonWidget_New();
    service_keyboard_Btn7->fn->setPosition(service_keyboard_Btn7, 255, 11);
    service_keyboard_Btn7->fn->setSize(service_keyboard_Btn7, 40, 40);
    service_keyboard_Btn7->fn->setScheme(service_keyboard_Btn7, &keyboard);
    service_keyboard_Btn7->fn->setBackgroundType(service_keyboard_Btn7, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn7->fn->setReleasedEventCallback(service_keyboard_Btn7, event_service_keyboard_Btn7_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn7);

    service_keyboard_Btn8 = leButtonWidget_New();
    service_keyboard_Btn8->fn->setPosition(service_keyboard_Btn8, 295, 11);
    service_keyboard_Btn8->fn->setSize(service_keyboard_Btn8, 40, 40);
    service_keyboard_Btn8->fn->setScheme(service_keyboard_Btn8, &keyboard);
    service_keyboard_Btn8->fn->setBackgroundType(service_keyboard_Btn8, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn8->fn->setReleasedEventCallback(service_keyboard_Btn8, event_service_keyboard_Btn8_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn8);

    service_keyboard_Btn9 = leButtonWidget_New();
    service_keyboard_Btn9->fn->setPosition(service_keyboard_Btn9, 335, 11);
    service_keyboard_Btn9->fn->setSize(service_keyboard_Btn9, 40, 40);
    service_keyboard_Btn9->fn->setScheme(service_keyboard_Btn9, &keyboard);
    service_keyboard_Btn9->fn->setBackgroundType(service_keyboard_Btn9, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn9->fn->setReleasedEventCallback(service_keyboard_Btn9, event_service_keyboard_Btn9_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn9);

    service_keyboard_Btn10 = leButtonWidget_New();
    service_keyboard_Btn10->fn->setPosition(service_keyboard_Btn10, 34, 55);
    service_keyboard_Btn10->fn->setSize(service_keyboard_Btn10, 40, 40);
    service_keyboard_Btn10->fn->setScheme(service_keyboard_Btn10, &keyboard);
    service_keyboard_Btn10->fn->setBackgroundType(service_keyboard_Btn10, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn10->fn->setReleasedEventCallback(service_keyboard_Btn10, event_service_keyboard_Btn10_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn10);

    service_keyboard_Btn11 = leButtonWidget_New();
    service_keyboard_Btn11->fn->setPosition(service_keyboard_Btn11, 74, 55);
    service_keyboard_Btn11->fn->setSize(service_keyboard_Btn11, 40, 40);
    service_keyboard_Btn11->fn->setScheme(service_keyboard_Btn11, &keyboard);
    service_keyboard_Btn11->fn->setBackgroundType(service_keyboard_Btn11, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn11->fn->setReleasedEventCallback(service_keyboard_Btn11, event_service_keyboard_Btn11_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn11);

    service_keyboard_Btn12 = leButtonWidget_New();
    service_keyboard_Btn12->fn->setPosition(service_keyboard_Btn12, 114, 55);
    service_keyboard_Btn12->fn->setSize(service_keyboard_Btn12, 40, 40);
    service_keyboard_Btn12->fn->setScheme(service_keyboard_Btn12, &keyboard);
    service_keyboard_Btn12->fn->setBackgroundType(service_keyboard_Btn12, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn12->fn->setReleasedEventCallback(service_keyboard_Btn12, event_service_keyboard_Btn12_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn12);

    service_keyboard_Btn13 = leButtonWidget_New();
    service_keyboard_Btn13->fn->setPosition(service_keyboard_Btn13, 154, 55);
    service_keyboard_Btn13->fn->setSize(service_keyboard_Btn13, 40, 40);
    service_keyboard_Btn13->fn->setScheme(service_keyboard_Btn13, &keyboard);
    service_keyboard_Btn13->fn->setBackgroundType(service_keyboard_Btn13, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn13->fn->setReleasedEventCallback(service_keyboard_Btn13, event_service_keyboard_Btn13_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn13);

    service_keyboard_Btn14 = leButtonWidget_New();
    service_keyboard_Btn14->fn->setPosition(service_keyboard_Btn14, 194, 55);
    service_keyboard_Btn14->fn->setSize(service_keyboard_Btn14, 40, 40);
    service_keyboard_Btn14->fn->setScheme(service_keyboard_Btn14, &keyboard);
    service_keyboard_Btn14->fn->setBackgroundType(service_keyboard_Btn14, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn14->fn->setReleasedEventCallback(service_keyboard_Btn14, event_service_keyboard_Btn14_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn14);

    service_keyboard_Btn15 = leButtonWidget_New();
    service_keyboard_Btn15->fn->setPosition(service_keyboard_Btn15, 234, 55);
    service_keyboard_Btn15->fn->setSize(service_keyboard_Btn15, 40, 40);
    service_keyboard_Btn15->fn->setScheme(service_keyboard_Btn15, &keyboard);
    service_keyboard_Btn15->fn->setBackgroundType(service_keyboard_Btn15, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn15->fn->setReleasedEventCallback(service_keyboard_Btn15, event_service_keyboard_Btn15_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn15);

    service_keyboard_Btn16 = leButtonWidget_New();
    service_keyboard_Btn16->fn->setPosition(service_keyboard_Btn16, 274, 55);
    service_keyboard_Btn16->fn->setSize(service_keyboard_Btn16, 40, 40);
    service_keyboard_Btn16->fn->setScheme(service_keyboard_Btn16, &keyboard);
    service_keyboard_Btn16->fn->setBackgroundType(service_keyboard_Btn16, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn16->fn->setReleasedEventCallback(service_keyboard_Btn16, event_service_keyboard_Btn16_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn16);

    service_keyboard_Btn17 = leButtonWidget_New();
    service_keyboard_Btn17->fn->setPosition(service_keyboard_Btn17, 314, 55);
    service_keyboard_Btn17->fn->setSize(service_keyboard_Btn17, 40, 40);
    service_keyboard_Btn17->fn->setScheme(service_keyboard_Btn17, &keyboard);
    service_keyboard_Btn17->fn->setBackgroundType(service_keyboard_Btn17, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn17->fn->setReleasedEventCallback(service_keyboard_Btn17, event_service_keyboard_Btn17_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn17);

    service_keyboard_Btn18 = leButtonWidget_New();
    service_keyboard_Btn18->fn->setPosition(service_keyboard_Btn18, 354, 55);
    service_keyboard_Btn18->fn->setSize(service_keyboard_Btn18, 40, 40);
    service_keyboard_Btn18->fn->setScheme(service_keyboard_Btn18, &keyboard);
    service_keyboard_Btn18->fn->setBackgroundType(service_keyboard_Btn18, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn18->fn->setReleasedEventCallback(service_keyboard_Btn18, event_service_keyboard_Btn18_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn18);

    service_keyboard_Btn19 = leButtonWidget_New();
    service_keyboard_Btn19->fn->setPosition(service_keyboard_Btn19, 34, 95);
    service_keyboard_Btn19->fn->setSize(service_keyboard_Btn19, 40, 40);
    service_keyboard_Btn19->fn->setScheme(service_keyboard_Btn19, &keyboard);
    service_keyboard_Btn19->fn->setBackgroundType(service_keyboard_Btn19, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn19->fn->setPressedImage(service_keyboard_Btn19, (leImage*)&Keyboard_case);
    service_keyboard_Btn19->fn->setReleasedImage(service_keyboard_Btn19, (leImage*)&Keyboard_case);
    service_keyboard_Btn19->fn->setReleasedEventCallback(service_keyboard_Btn19, event_service_keyboard_Btn19_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn19);

    service_keyboard_Btn20 = leButtonWidget_New();
    service_keyboard_Btn20->fn->setPosition(service_keyboard_Btn20, 74, 95);
    service_keyboard_Btn20->fn->setSize(service_keyboard_Btn20, 40, 40);
    service_keyboard_Btn20->fn->setScheme(service_keyboard_Btn20, &keyboard);
    service_keyboard_Btn20->fn->setBackgroundType(service_keyboard_Btn20, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn20->fn->setReleasedEventCallback(service_keyboard_Btn20, event_service_keyboard_Btn20_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn20);

    service_keyboard_Btn21 = leButtonWidget_New();
    service_keyboard_Btn21->fn->setPosition(service_keyboard_Btn21, 114, 95);
    service_keyboard_Btn21->fn->setSize(service_keyboard_Btn21, 40, 40);
    service_keyboard_Btn21->fn->setScheme(service_keyboard_Btn21, &keyboard);
    service_keyboard_Btn21->fn->setBackgroundType(service_keyboard_Btn21, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn21->fn->setReleasedEventCallback(service_keyboard_Btn21, event_service_keyboard_Btn21_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn21);

    service_keyboard_Btn22 = leButtonWidget_New();
    service_keyboard_Btn22->fn->setPosition(service_keyboard_Btn22, 154, 95);
    service_keyboard_Btn22->fn->setSize(service_keyboard_Btn22, 40, 40);
    service_keyboard_Btn22->fn->setScheme(service_keyboard_Btn22, &keyboard);
    service_keyboard_Btn22->fn->setBackgroundType(service_keyboard_Btn22, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn22->fn->setReleasedEventCallback(service_keyboard_Btn22, event_service_keyboard_Btn22_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn22);

    service_keyboard_Btn23 = leButtonWidget_New();
    service_keyboard_Btn23->fn->setPosition(service_keyboard_Btn23, 194, 95);
    service_keyboard_Btn23->fn->setSize(service_keyboard_Btn23, 40, 40);
    service_keyboard_Btn23->fn->setScheme(service_keyboard_Btn23, &keyboard);
    service_keyboard_Btn23->fn->setBackgroundType(service_keyboard_Btn23, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn23->fn->setReleasedEventCallback(service_keyboard_Btn23, event_service_keyboard_Btn23_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn23);

    service_keyboard_Btn24 = leButtonWidget_New();
    service_keyboard_Btn24->fn->setPosition(service_keyboard_Btn24, 234, 95);
    service_keyboard_Btn24->fn->setSize(service_keyboard_Btn24, 40, 40);
    service_keyboard_Btn24->fn->setScheme(service_keyboard_Btn24, &keyboard);
    service_keyboard_Btn24->fn->setBackgroundType(service_keyboard_Btn24, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn24->fn->setReleasedEventCallback(service_keyboard_Btn24, event_service_keyboard_Btn24_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn24);

    service_keyboard_Btn25 = leButtonWidget_New();
    service_keyboard_Btn25->fn->setPosition(service_keyboard_Btn25, 274, 95);
    service_keyboard_Btn25->fn->setSize(service_keyboard_Btn25, 40, 40);
    service_keyboard_Btn25->fn->setScheme(service_keyboard_Btn25, &keyboard);
    service_keyboard_Btn25->fn->setBackgroundType(service_keyboard_Btn25, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn25->fn->setReleasedEventCallback(service_keyboard_Btn25, event_service_keyboard_Btn25_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn25);

    service_keyboard_Btn26 = leButtonWidget_New();
    service_keyboard_Btn26->fn->setPosition(service_keyboard_Btn26, 314, 95);
    service_keyboard_Btn26->fn->setSize(service_keyboard_Btn26, 40, 40);
    service_keyboard_Btn26->fn->setScheme(service_keyboard_Btn26, &keyboard);
    service_keyboard_Btn26->fn->setBackgroundType(service_keyboard_Btn26, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn26->fn->setReleasedEventCallback(service_keyboard_Btn26, event_service_keyboard_Btn26_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn26);

    service_keyboard_Btn27 = leButtonWidget_New();
    service_keyboard_Btn27->fn->setPosition(service_keyboard_Btn27, 354, 95);
    service_keyboard_Btn27->fn->setSize(service_keyboard_Btn27, 40, 40);
    service_keyboard_Btn27->fn->setScheme(service_keyboard_Btn27, &keyboard);
    service_keyboard_Btn27->fn->setBackgroundType(service_keyboard_Btn27, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_Btn27->fn->setPressedImage(service_keyboard_Btn27, (leImage*)&Keyboard_cancel);
    service_keyboard_Btn27->fn->setReleasedImage(service_keyboard_Btn27, (leImage*)&Keyboard_cancel);
    service_keyboard_Btn27->fn->setReleasedEventCallback(service_keyboard_Btn27, event_service_keyboard_Btn27_OnReleased);
    service_keyboard_PanelKeyChar->fn->addChild(service_keyboard_PanelKeyChar, (leWidget*)service_keyboard_Btn27);

    service_keyboard_BtnExit = leButtonWidget_New();
    service_keyboard_BtnExit->fn->setPosition(service_keyboard_BtnExit, 436, 4);
    service_keyboard_BtnExit->fn->setSize(service_keyboard_BtnExit, 40, 40);
    service_keyboard_BtnExit->fn->setScheme(service_keyboard_BtnExit, &BlackBack);
    service_keyboard_BtnExit->fn->setBackgroundType(service_keyboard_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_keyboard_BtnExit->fn->setBorderType(service_keyboard_BtnExit, LE_WIDGET_BORDER_NONE);
    service_keyboard_BtnExit->fn->setPressedImage(service_keyboard_BtnExit, (leImage*)&Menu_exit_white);
    service_keyboard_BtnExit->fn->setReleasedImage(service_keyboard_BtnExit, (leImage*)&Menu_exit_white);
    service_keyboard_BtnExit->fn->setReleasedEventCallback(service_keyboard_BtnExit, event_service_keyboard_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_BtnExit);

    service_keyboard_BtnSpace = leButtonWidget_New();
    service_keyboard_BtnSpace->fn->setPosition(service_keyboard_BtnSpace, 120, 202);
    service_keyboard_BtnSpace->fn->setSize(service_keyboard_BtnSpace, 200, 40);
    service_keyboard_BtnSpace->fn->setScheme(service_keyboard_BtnSpace, &Panel_Gray4);
    service_keyboard_BtnSpace->fn->setBorderType(service_keyboard_BtnSpace, LE_WIDGET_BORDER_LINE);
    service_keyboard_BtnSpace->fn->setString(service_keyboard_BtnSpace, (leString*)&string_key_space);
    service_keyboard_BtnSpace->fn->setReleasedEventCallback(service_keyboard_BtnSpace, event_service_keyboard_BtnSpace_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_BtnSpace);

    service_keyboard_Btn123 = leButtonWidget_New();
    service_keyboard_Btn123->fn->setPosition(service_keyboard_Btn123, 40, 202);
    service_keyboard_Btn123->fn->setSize(service_keyboard_Btn123, 80, 40);
    service_keyboard_Btn123->fn->setScheme(service_keyboard_Btn123, &Panel_Gray4);
    service_keyboard_Btn123->fn->setBorderType(service_keyboard_Btn123, LE_WIDGET_BORDER_LINE);
    service_keyboard_Btn123->fn->setString(service_keyboard_Btn123, (leString*)&string_key_123);
    service_keyboard_Btn123->fn->setReleasedEventCallback(service_keyboard_Btn123, event_service_keyboard_Btn123_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_Btn123);

    service_keyboard_BtnSelect = leButtonWidget_New();
    service_keyboard_BtnSelect->fn->setPosition(service_keyboard_BtnSelect, 360, 202);
    service_keyboard_BtnSelect->fn->setSize(service_keyboard_BtnSelect, 80, 40);
    service_keyboard_BtnSelect->fn->setScheme(service_keyboard_BtnSelect, &Panel_Gray4);
    service_keyboard_BtnSelect->fn->setBorderType(service_keyboard_BtnSelect, LE_WIDGET_BORDER_LINE);
    service_keyboard_BtnSelect->fn->setPressedImage(service_keyboard_BtnSelect, (leImage*)&Keyboard_select);
    service_keyboard_BtnSelect->fn->setReleasedImage(service_keyboard_BtnSelect, (leImage*)&Keyboard_select);
    service_keyboard_BtnSelect->fn->setReleasedEventCallback(service_keyboard_BtnSelect, event_service_keyboard_BtnSelect_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_BtnSelect);

    service_keyboard_BtnDot = leButtonWidget_New();
    service_keyboard_BtnDot->fn->setPosition(service_keyboard_BtnDot, 320, 202);
    service_keyboard_BtnDot->fn->setSize(service_keyboard_BtnDot, 40, 40);
    service_keyboard_BtnDot->fn->setScheme(service_keyboard_BtnDot, &Panel_Gray4);
    service_keyboard_BtnDot->fn->setBorderType(service_keyboard_BtnDot, LE_WIDGET_BORDER_LINE);
    service_keyboard_BtnDot->fn->setString(service_keyboard_BtnDot, (leString*)&string_key_dot);
    service_keyboard_BtnDot->fn->setReleasedEventCallback(service_keyboard_BtnDot, event_service_keyboard_BtnDot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_keyboard_BtnDot);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_keyboard_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_keyboard(void)
{
}

void screenHide_service_keyboard(void)
{
    service_keyboard_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_keyboard_Layer_0_FillPanel = NULL;
    service_keyboard_RectangleServiceKeyboard = NULL;
    service_keyboard_LblInputBox = NULL;
    service_keyboard_PanelKeyChar = NULL;
    service_keyboard_BtnExit = NULL;
    service_keyboard_BtnSpace = NULL;
    service_keyboard_Btn123 = NULL;
    service_keyboard_BtnSelect = NULL;
    service_keyboard_BtnDot = NULL;
    service_keyboard_LblLine1 = NULL;
    service_keyboard_LblLine2 = NULL;
    service_keyboard_LblLine3 = NULL;
    service_keyboard_Btn0 = NULL;
    service_keyboard_Btn1 = NULL;
    service_keyboard_Btn2 = NULL;
    service_keyboard_Btn3 = NULL;
    service_keyboard_Btn4 = NULL;
    service_keyboard_Btn5 = NULL;
    service_keyboard_Btn6 = NULL;
    service_keyboard_Btn7 = NULL;
    service_keyboard_Btn8 = NULL;
    service_keyboard_Btn9 = NULL;
    service_keyboard_Btn10 = NULL;
    service_keyboard_Btn11 = NULL;
    service_keyboard_Btn12 = NULL;
    service_keyboard_Btn13 = NULL;
    service_keyboard_Btn14 = NULL;
    service_keyboard_Btn15 = NULL;
    service_keyboard_Btn16 = NULL;
    service_keyboard_Btn17 = NULL;
    service_keyboard_Btn18 = NULL;
    service_keyboard_Btn19 = NULL;
    service_keyboard_Btn20 = NULL;
    service_keyboard_Btn21 = NULL;
    service_keyboard_Btn22 = NULL;
    service_keyboard_Btn23 = NULL;
    service_keyboard_Btn24 = NULL;
    service_keyboard_Btn25 = NULL;
    service_keyboard_Btn26 = NULL;
    service_keyboard_Btn27 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_keyboard(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_keyboard(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        case 1:
        {
            return root1;
        }
        default:
        {
            return NULL;
        }
    }
}

