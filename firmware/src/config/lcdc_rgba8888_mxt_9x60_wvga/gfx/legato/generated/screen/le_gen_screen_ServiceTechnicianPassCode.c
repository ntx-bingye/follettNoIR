#include "gfx/legato/generated/screen/le_gen_screen_ServiceTechnicianPassCode.h"

// screen member widget declarations
leWidget* root0;

leWidget* ServiceTechnicianPassCode_Layer0_FillPanel;
leLabelWidget* ServiceTechnicianPassCode_LabelServiceAgents;
leButtonWidget* ServiceTechnicianPassCode_ButtonReturn;
leLabelWidget* ServiceTechnicianPassCode_LabelEnterPasscode;
leWidget* ServiceTechnicianPassCode_PanelKeyBackground;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey0;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey1;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey2;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey3;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey4;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey5;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey6;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey7;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey8;
leButtonWidget* ServiceTechnicianPassCode_ButtonKey9;
leButtonWidget* ServiceTechnicianPassCode_ButtonKeyBackspace;
leButtonWidget* ServiceTechnicianPassCode_ButtonKeyEnter;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ServiceTechnicianPassCode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ServiceTechnicianPassCode(void)
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

    ServiceTechnicianPassCode_Layer0_FillPanel = leWidget_New();
    ServiceTechnicianPassCode_Layer0_FillPanel->fn->setPosition(ServiceTechnicianPassCode_Layer0_FillPanel, 0, 0);
    ServiceTechnicianPassCode_Layer0_FillPanel->fn->setSize(ServiceTechnicianPassCode_Layer0_FillPanel, 480, 272);
    ServiceTechnicianPassCode_Layer0_FillPanel->fn->setScheme(ServiceTechnicianPassCode_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_Layer0_FillPanel);

    ServiceTechnicianPassCode_LabelServiceAgents = leLabelWidget_New();
    ServiceTechnicianPassCode_LabelServiceAgents->fn->setPosition(ServiceTechnicianPassCode_LabelServiceAgents, 32, 7);
    ServiceTechnicianPassCode_LabelServiceAgents->fn->setScheme(ServiceTechnicianPassCode_LabelServiceAgents, &ForegroundScheme);
    ServiceTechnicianPassCode_LabelServiceAgents->fn->setBackgroundType(ServiceTechnicianPassCode_LabelServiceAgents, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_LabelServiceAgents);

    ServiceTechnicianPassCode_ButtonReturn = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonReturn->fn->setPosition(ServiceTechnicianPassCode_ButtonReturn, 431, 4);
    ServiceTechnicianPassCode_ButtonReturn->fn->setSize(ServiceTechnicianPassCode_ButtonReturn, 45, 45);
    ServiceTechnicianPassCode_ButtonReturn->fn->setScheme(ServiceTechnicianPassCode_ButtonReturn, &BackgroundScheme);
    ServiceTechnicianPassCode_ButtonReturn->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonReturn, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonReturn->fn->setBorderType(ServiceTechnicianPassCode_ButtonReturn, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonReturn->fn->setPressedImage(ServiceTechnicianPassCode_ButtonReturn, (leImage*)&ICON_goBackActive);
    ServiceTechnicianPassCode_ButtonReturn->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonReturn, (leImage*)&ICON_goBackInactive);
    ServiceTechnicianPassCode_ButtonReturn->fn->setPressedEventCallback(ServiceTechnicianPassCode_ButtonReturn, event_ServiceTechnicianPassCode_ButtonReturn_OnPressed);
    ServiceTechnicianPassCode_ButtonReturn->fn->setReleasedEventCallback(ServiceTechnicianPassCode_ButtonReturn, event_ServiceTechnicianPassCode_ButtonReturn_OnReleased);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonReturn);

    ServiceTechnicianPassCode_LabelEnterPasscode = leLabelWidget_New();
    ServiceTechnicianPassCode_LabelEnterPasscode->fn->setPosition(ServiceTechnicianPassCode_LabelEnterPasscode, 197, 36);
    ServiceTechnicianPassCode_LabelEnterPasscode->fn->setSize(ServiceTechnicianPassCode_LabelEnterPasscode, 87, 25);
    ServiceTechnicianPassCode_LabelEnterPasscode->fn->setScheme(ServiceTechnicianPassCode_LabelEnterPasscode, &ForegroundScheme);
    ServiceTechnicianPassCode_LabelEnterPasscode->fn->setBackgroundType(ServiceTechnicianPassCode_LabelEnterPasscode, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_LabelEnterPasscode->fn->setString(ServiceTechnicianPassCode_LabelEnterPasscode, (leString*)&string_ServiceAgentsEnterPasscode);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_LabelEnterPasscode);

    ServiceTechnicianPassCode_PanelKeyBackground = leWidget_New();
    ServiceTechnicianPassCode_PanelKeyBackground->fn->setPosition(ServiceTechnicianPassCode_PanelKeyBackground, 0, 106);
    ServiceTechnicianPassCode_PanelKeyBackground->fn->setSize(ServiceTechnicianPassCode_PanelKeyBackground, 480, 166);
    ServiceTechnicianPassCode_PanelKeyBackground->fn->setScheme(ServiceTechnicianPassCode_PanelKeyBackground, &KeypadBack);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_PanelKeyBackground);

    ServiceTechnicianPassCode_ButtonKey0 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey0->fn->setPosition(ServiceTechnicianPassCode_ButtonKey0, 8, 114);
    ServiceTechnicianPassCode_ButtonKey0->fn->setSize(ServiceTechnicianPassCode_ButtonKey0, 74, 74);
    ServiceTechnicianPassCode_ButtonKey0->fn->setScheme(ServiceTechnicianPassCode_ButtonKey0, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey0->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey0, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey0->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey0, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey0->fn->setString(ServiceTechnicianPassCode_ButtonKey0, (leString*)&string_Keypad0);
    ServiceTechnicianPassCode_ButtonKey0->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey0, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey0->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey0, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey0->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey0, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey0);

    ServiceTechnicianPassCode_ButtonKey1 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey1->fn->setPosition(ServiceTechnicianPassCode_ButtonKey1, 86, 114);
    ServiceTechnicianPassCode_ButtonKey1->fn->setSize(ServiceTechnicianPassCode_ButtonKey1, 74, 74);
    ServiceTechnicianPassCode_ButtonKey1->fn->setScheme(ServiceTechnicianPassCode_ButtonKey1, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey1->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey1, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey1->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey1, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey1->fn->setString(ServiceTechnicianPassCode_ButtonKey1, (leString*)&string_Keypad1);
    ServiceTechnicianPassCode_ButtonKey1->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey1, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey1->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey1, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey1->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey1, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey1);

    ServiceTechnicianPassCode_ButtonKey2 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey2->fn->setPosition(ServiceTechnicianPassCode_ButtonKey2, 164, 114);
    ServiceTechnicianPassCode_ButtonKey2->fn->setSize(ServiceTechnicianPassCode_ButtonKey2, 74, 74);
    ServiceTechnicianPassCode_ButtonKey2->fn->setScheme(ServiceTechnicianPassCode_ButtonKey2, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey2->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey2, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey2->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey2, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey2->fn->setString(ServiceTechnicianPassCode_ButtonKey2, (leString*)&string_Keypad2);
    ServiceTechnicianPassCode_ButtonKey2->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey2, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey2->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey2, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey2->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey2, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey2);

    ServiceTechnicianPassCode_ButtonKey3 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey3->fn->setPosition(ServiceTechnicianPassCode_ButtonKey3, 242, 114);
    ServiceTechnicianPassCode_ButtonKey3->fn->setSize(ServiceTechnicianPassCode_ButtonKey3, 74, 74);
    ServiceTechnicianPassCode_ButtonKey3->fn->setScheme(ServiceTechnicianPassCode_ButtonKey3, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey3->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey3, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey3->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey3, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey3->fn->setString(ServiceTechnicianPassCode_ButtonKey3, (leString*)&string_Keypad3);
    ServiceTechnicianPassCode_ButtonKey3->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey3, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey3->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey3, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey3->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey3, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey3);

    ServiceTechnicianPassCode_ButtonKey4 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey4->fn->setPosition(ServiceTechnicianPassCode_ButtonKey4, 320, 114);
    ServiceTechnicianPassCode_ButtonKey4->fn->setSize(ServiceTechnicianPassCode_ButtonKey4, 74, 74);
    ServiceTechnicianPassCode_ButtonKey4->fn->setScheme(ServiceTechnicianPassCode_ButtonKey4, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey4->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey4, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey4->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey4, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey4->fn->setString(ServiceTechnicianPassCode_ButtonKey4, (leString*)&string_Keypad4);
    ServiceTechnicianPassCode_ButtonKey4->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey4, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey4->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey4, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey4->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey4, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey4);

    ServiceTechnicianPassCode_ButtonKey5 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey5->fn->setPosition(ServiceTechnicianPassCode_ButtonKey5, 398, 114);
    ServiceTechnicianPassCode_ButtonKey5->fn->setSize(ServiceTechnicianPassCode_ButtonKey5, 74, 74);
    ServiceTechnicianPassCode_ButtonKey5->fn->setScheme(ServiceTechnicianPassCode_ButtonKey5, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey5->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey5, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey5->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey5, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey5->fn->setString(ServiceTechnicianPassCode_ButtonKey5, (leString*)&string_Keypad5);
    ServiceTechnicianPassCode_ButtonKey5->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey5, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey5->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey5, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey5->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey5, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey5);

    ServiceTechnicianPassCode_ButtonKey6 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey6->fn->setPosition(ServiceTechnicianPassCode_ButtonKey6, 8, 191);
    ServiceTechnicianPassCode_ButtonKey6->fn->setSize(ServiceTechnicianPassCode_ButtonKey6, 74, 74);
    ServiceTechnicianPassCode_ButtonKey6->fn->setScheme(ServiceTechnicianPassCode_ButtonKey6, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey6->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey6, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey6->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey6, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey6->fn->setString(ServiceTechnicianPassCode_ButtonKey6, (leString*)&string_Keypad6);
    ServiceTechnicianPassCode_ButtonKey6->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey6, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey6->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey6, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey6->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey6, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey6);

    ServiceTechnicianPassCode_ButtonKey7 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey7->fn->setPosition(ServiceTechnicianPassCode_ButtonKey7, 86, 191);
    ServiceTechnicianPassCode_ButtonKey7->fn->setSize(ServiceTechnicianPassCode_ButtonKey7, 74, 74);
    ServiceTechnicianPassCode_ButtonKey7->fn->setScheme(ServiceTechnicianPassCode_ButtonKey7, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey7->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey7, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey7->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey7, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey7->fn->setString(ServiceTechnicianPassCode_ButtonKey7, (leString*)&string_Keypad7);
    ServiceTechnicianPassCode_ButtonKey7->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey7, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey7->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey7, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey7->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey7, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey7);

    ServiceTechnicianPassCode_ButtonKey8 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey8->fn->setPosition(ServiceTechnicianPassCode_ButtonKey8, 164, 191);
    ServiceTechnicianPassCode_ButtonKey8->fn->setSize(ServiceTechnicianPassCode_ButtonKey8, 74, 74);
    ServiceTechnicianPassCode_ButtonKey8->fn->setScheme(ServiceTechnicianPassCode_ButtonKey8, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey8->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey8, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey8->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey8, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey8->fn->setString(ServiceTechnicianPassCode_ButtonKey8, (leString*)&string_keypad8);
    ServiceTechnicianPassCode_ButtonKey8->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey8, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey8->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey8, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey8->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey8, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey8);

    ServiceTechnicianPassCode_ButtonKey9 = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKey9->fn->setPosition(ServiceTechnicianPassCode_ButtonKey9, 242, 191);
    ServiceTechnicianPassCode_ButtonKey9->fn->setSize(ServiceTechnicianPassCode_ButtonKey9, 74, 74);
    ServiceTechnicianPassCode_ButtonKey9->fn->setScheme(ServiceTechnicianPassCode_ButtonKey9, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKey9->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKey9, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKey9->fn->setBorderType(ServiceTechnicianPassCode_ButtonKey9, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKey9->fn->setString(ServiceTechnicianPassCode_ButtonKey9, (leString*)&string_Keypad9);
    ServiceTechnicianPassCode_ButtonKey9->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKey9, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey9->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKey9, (leImage*)&ICON_keypad_number2);
    ServiceTechnicianPassCode_ButtonKey9->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKey9, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKey9);

    ServiceTechnicianPassCode_ButtonKeyBackspace = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKeyBackspace->fn->setPosition(ServiceTechnicianPassCode_ButtonKeyBackspace, 320, 191);
    ServiceTechnicianPassCode_ButtonKeyBackspace->fn->setSize(ServiceTechnicianPassCode_ButtonKeyBackspace, 74, 74);
    ServiceTechnicianPassCode_ButtonKeyBackspace->fn->setScheme(ServiceTechnicianPassCode_ButtonKeyBackspace, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKeyBackspace->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKeyBackspace, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKeyBackspace->fn->setBorderType(ServiceTechnicianPassCode_ButtonKeyBackspace, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKeyBackspace->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKeyBackspace, (leImage*)&ICON_keypad_del);
    ServiceTechnicianPassCode_ButtonKeyBackspace->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKeyBackspace, (leImage*)&ICON_keypad_del);
    ServiceTechnicianPassCode_ButtonKeyBackspace->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKeyBackspace, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKeyBackspace);

    ServiceTechnicianPassCode_ButtonKeyEnter = leButtonWidget_New();
    ServiceTechnicianPassCode_ButtonKeyEnter->fn->setPosition(ServiceTechnicianPassCode_ButtonKeyEnter, 398, 191);
    ServiceTechnicianPassCode_ButtonKeyEnter->fn->setSize(ServiceTechnicianPassCode_ButtonKeyEnter, 74, 74);
    ServiceTechnicianPassCode_ButtonKeyEnter->fn->setScheme(ServiceTechnicianPassCode_ButtonKeyEnter, &LayerScheme);
    ServiceTechnicianPassCode_ButtonKeyEnter->fn->setBackgroundType(ServiceTechnicianPassCode_ButtonKeyEnter, LE_WIDGET_BACKGROUND_NONE);
    ServiceTechnicianPassCode_ButtonKeyEnter->fn->setBorderType(ServiceTechnicianPassCode_ButtonKeyEnter, LE_WIDGET_BORDER_NONE);
    ServiceTechnicianPassCode_ButtonKeyEnter->fn->setPressedImage(ServiceTechnicianPassCode_ButtonKeyEnter, (leImage*)&ICON_keypad_enter);
    ServiceTechnicianPassCode_ButtonKeyEnter->fn->setReleasedImage(ServiceTechnicianPassCode_ButtonKeyEnter, (leImage*)&ICON_keypad_enter);
    ServiceTechnicianPassCode_ButtonKeyEnter->fn->setImagePosition(ServiceTechnicianPassCode_ButtonKeyEnter, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)ServiceTechnicianPassCode_ButtonKeyEnter);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ServiceTechnicianPassCode(void)
{
}

void screenHide_ServiceTechnicianPassCode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ServiceTechnicianPassCode_Layer0_FillPanel = NULL;
    ServiceTechnicianPassCode_LabelServiceAgents = NULL;
    ServiceTechnicianPassCode_ButtonReturn = NULL;
    ServiceTechnicianPassCode_LabelEnterPasscode = NULL;
    ServiceTechnicianPassCode_PanelKeyBackground = NULL;
    ServiceTechnicianPassCode_ButtonKey0 = NULL;
    ServiceTechnicianPassCode_ButtonKey1 = NULL;
    ServiceTechnicianPassCode_ButtonKey2 = NULL;
    ServiceTechnicianPassCode_ButtonKey3 = NULL;
    ServiceTechnicianPassCode_ButtonKey4 = NULL;
    ServiceTechnicianPassCode_ButtonKey5 = NULL;
    ServiceTechnicianPassCode_ButtonKey6 = NULL;
    ServiceTechnicianPassCode_ButtonKey7 = NULL;
    ServiceTechnicianPassCode_ButtonKey8 = NULL;
    ServiceTechnicianPassCode_ButtonKey9 = NULL;
    ServiceTechnicianPassCode_ButtonKeyBackspace = NULL;
    ServiceTechnicianPassCode_ButtonKeyEnter = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ServiceTechnicianPassCode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ServiceTechnicianPassCode(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

