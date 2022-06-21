#include "gfx/legato/generated/screen/le_gen_screen_ServiceAgentPassCode.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* ServiceAgentPassCode_Layer0_FillPanel;
leLabelWidget* ServiceAgentPassCode_LabelServiceAgents;
leButtonWidget* ServiceAgentPassCode_ButtonReturn;
leLabelWidget* ServiceAgentPassCode_LabelEnterPasscode;
leRectangleWidget* ServiceAgentPassCode_RectangleKeypad;
leButtonWidget* ServiceAgentPassCode_ButtonKeyDelete;
leButtonWidget* ServiceAgentPassCode_ButtonKey0;
leButtonWidget* ServiceAgentPassCode_ButtonKey1;
leButtonWidget* ServiceAgentPassCode_ButtonKey2;
leButtonWidget* ServiceAgentPassCode_ButtonKey3;
leButtonWidget* ServiceAgentPassCode_ButtonKey4;
leButtonWidget* ServiceAgentPassCode_ButtonKey5;
leButtonWidget* ServiceAgentPassCode_ButtonKey6;
leButtonWidget* ServiceAgentPassCode_ButtonKey7;
leButtonWidget* ServiceAgentPassCode_ButtonKey8;
leButtonWidget* ServiceAgentPassCode_ButtonKey9;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ServiceAgentPassCode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ServiceAgentPassCode(void)
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

    ServiceAgentPassCode_Layer0_FillPanel = leWidget_New();
    ServiceAgentPassCode_Layer0_FillPanel->fn->setPosition(ServiceAgentPassCode_Layer0_FillPanel, 0, 0);
    ServiceAgentPassCode_Layer0_FillPanel->fn->setSize(ServiceAgentPassCode_Layer0_FillPanel, 480, 272);
    ServiceAgentPassCode_Layer0_FillPanel->fn->setScheme(ServiceAgentPassCode_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentPassCode_Layer0_FillPanel);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ServiceAgentPassCode_LabelServiceAgents = leLabelWidget_New();
    ServiceAgentPassCode_LabelServiceAgents->fn->setPosition(ServiceAgentPassCode_LabelServiceAgents, 32, 7);
    ServiceAgentPassCode_LabelServiceAgents->fn->setScheme(ServiceAgentPassCode_LabelServiceAgents, &ForegroundScheme);
    ServiceAgentPassCode_LabelServiceAgents->fn->setBackgroundType(ServiceAgentPassCode_LabelServiceAgents, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_LabelServiceAgents);

    ServiceAgentPassCode_ButtonReturn = leButtonWidget_New();
    ServiceAgentPassCode_ButtonReturn->fn->setPosition(ServiceAgentPassCode_ButtonReturn, 431, 4);
    ServiceAgentPassCode_ButtonReturn->fn->setSize(ServiceAgentPassCode_ButtonReturn, 45, 45);
    ServiceAgentPassCode_ButtonReturn->fn->setScheme(ServiceAgentPassCode_ButtonReturn, &BackgroundScheme);
    ServiceAgentPassCode_ButtonReturn->fn->setBackgroundType(ServiceAgentPassCode_ButtonReturn, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentPassCode_ButtonReturn->fn->setBorderType(ServiceAgentPassCode_ButtonReturn, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonReturn->fn->setPressedImage(ServiceAgentPassCode_ButtonReturn, (leImage*)&ICON_goBackActive);
    ServiceAgentPassCode_ButtonReturn->fn->setReleasedImage(ServiceAgentPassCode_ButtonReturn, (leImage*)&ICON_goBackInactive);
    ServiceAgentPassCode_ButtonReturn->fn->setPressedEventCallback(ServiceAgentPassCode_ButtonReturn, event_ServiceAgentPassCode_ButtonReturn_OnPressed);
    ServiceAgentPassCode_ButtonReturn->fn->setReleasedEventCallback(ServiceAgentPassCode_ButtonReturn, event_ServiceAgentPassCode_ButtonReturn_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonReturn);

    ServiceAgentPassCode_LabelEnterPasscode = leLabelWidget_New();
    ServiceAgentPassCode_LabelEnterPasscode->fn->setPosition(ServiceAgentPassCode_LabelEnterPasscode, 197, 36);
    ServiceAgentPassCode_LabelEnterPasscode->fn->setSize(ServiceAgentPassCode_LabelEnterPasscode, 87, 25);
    ServiceAgentPassCode_LabelEnterPasscode->fn->setScheme(ServiceAgentPassCode_LabelEnterPasscode, &ForegroundScheme);
    ServiceAgentPassCode_LabelEnterPasscode->fn->setBackgroundType(ServiceAgentPassCode_LabelEnterPasscode, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentPassCode_LabelEnterPasscode->fn->setString(ServiceAgentPassCode_LabelEnterPasscode, (leString*)&string_ServiceAgentsEnterPasscode);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_LabelEnterPasscode);

    ServiceAgentPassCode_RectangleKeypad = leRectangleWidget_New();
    ServiceAgentPassCode_RectangleKeypad->fn->setPosition(ServiceAgentPassCode_RectangleKeypad, 0, 106);
    ServiceAgentPassCode_RectangleKeypad->fn->setSize(ServiceAgentPassCode_RectangleKeypad, 480, 166);
    ServiceAgentPassCode_RectangleKeypad->fn->setScheme(ServiceAgentPassCode_RectangleKeypad, &defaultScheme);
    ServiceAgentPassCode_RectangleKeypad->fn->setBorderType(ServiceAgentPassCode_RectangleKeypad, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_RectangleKeypad->fn->setThickness(ServiceAgentPassCode_RectangleKeypad, 2);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_RectangleKeypad);

    ServiceAgentPassCode_ButtonKeyDelete = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKeyDelete->fn->setPosition(ServiceAgentPassCode_ButtonKeyDelete, 320, 191);
    ServiceAgentPassCode_ButtonKeyDelete->fn->setSize(ServiceAgentPassCode_ButtonKeyDelete, 152, 74);
    ServiceAgentPassCode_ButtonKeyDelete->fn->setScheme(ServiceAgentPassCode_ButtonKeyDelete, &LayerScheme);
    ServiceAgentPassCode_ButtonKeyDelete->fn->setBorderType(ServiceAgentPassCode_ButtonKeyDelete, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKeyDelete->fn->setPressedImage(ServiceAgentPassCode_ButtonKeyDelete, (leImage*)&ICON_keypad_back_icon);
    ServiceAgentPassCode_ButtonKeyDelete->fn->setReleasedImage(ServiceAgentPassCode_ButtonKeyDelete, (leImage*)&ICON_keypad_back_icon);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKeyDelete);

    ServiceAgentPassCode_ButtonKey0 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey0->fn->setPosition(ServiceAgentPassCode_ButtonKey0, 8, 114);
    ServiceAgentPassCode_ButtonKey0->fn->setSize(ServiceAgentPassCode_ButtonKey0, 74, 74);
    ServiceAgentPassCode_ButtonKey0->fn->setScheme(ServiceAgentPassCode_ButtonKey0, &LayerScheme);
    ServiceAgentPassCode_ButtonKey0->fn->setBorderType(ServiceAgentPassCode_ButtonKey0, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey0->fn->setString(ServiceAgentPassCode_ButtonKey0, (leString*)&string_Keypad0);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey0);

    ServiceAgentPassCode_ButtonKey1 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey1->fn->setPosition(ServiceAgentPassCode_ButtonKey1, 86, 114);
    ServiceAgentPassCode_ButtonKey1->fn->setSize(ServiceAgentPassCode_ButtonKey1, 74, 74);
    ServiceAgentPassCode_ButtonKey1->fn->setScheme(ServiceAgentPassCode_ButtonKey1, &LayerScheme);
    ServiceAgentPassCode_ButtonKey1->fn->setBorderType(ServiceAgentPassCode_ButtonKey1, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey1->fn->setString(ServiceAgentPassCode_ButtonKey1, (leString*)&string_Keypad1);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey1);

    ServiceAgentPassCode_ButtonKey2 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey2->fn->setPosition(ServiceAgentPassCode_ButtonKey2, 164, 114);
    ServiceAgentPassCode_ButtonKey2->fn->setSize(ServiceAgentPassCode_ButtonKey2, 74, 74);
    ServiceAgentPassCode_ButtonKey2->fn->setScheme(ServiceAgentPassCode_ButtonKey2, &LayerScheme);
    ServiceAgentPassCode_ButtonKey2->fn->setBorderType(ServiceAgentPassCode_ButtonKey2, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey2->fn->setString(ServiceAgentPassCode_ButtonKey2, (leString*)&string_Keypad2);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey2);

    ServiceAgentPassCode_ButtonKey3 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey3->fn->setPosition(ServiceAgentPassCode_ButtonKey3, 242, 114);
    ServiceAgentPassCode_ButtonKey3->fn->setSize(ServiceAgentPassCode_ButtonKey3, 74, 74);
    ServiceAgentPassCode_ButtonKey3->fn->setScheme(ServiceAgentPassCode_ButtonKey3, &LayerScheme);
    ServiceAgentPassCode_ButtonKey3->fn->setBorderType(ServiceAgentPassCode_ButtonKey3, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey3->fn->setString(ServiceAgentPassCode_ButtonKey3, (leString*)&string_Keypad3);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey3);

    ServiceAgentPassCode_ButtonKey4 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey4->fn->setPosition(ServiceAgentPassCode_ButtonKey4, 320, 114);
    ServiceAgentPassCode_ButtonKey4->fn->setSize(ServiceAgentPassCode_ButtonKey4, 74, 74);
    ServiceAgentPassCode_ButtonKey4->fn->setScheme(ServiceAgentPassCode_ButtonKey4, &LayerScheme);
    ServiceAgentPassCode_ButtonKey4->fn->setBorderType(ServiceAgentPassCode_ButtonKey4, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey4->fn->setString(ServiceAgentPassCode_ButtonKey4, (leString*)&string_Keypad4);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey4);

    ServiceAgentPassCode_ButtonKey5 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey5->fn->setPosition(ServiceAgentPassCode_ButtonKey5, 398, 114);
    ServiceAgentPassCode_ButtonKey5->fn->setSize(ServiceAgentPassCode_ButtonKey5, 74, 74);
    ServiceAgentPassCode_ButtonKey5->fn->setScheme(ServiceAgentPassCode_ButtonKey5, &LayerScheme);
    ServiceAgentPassCode_ButtonKey5->fn->setBorderType(ServiceAgentPassCode_ButtonKey5, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey5->fn->setString(ServiceAgentPassCode_ButtonKey5, (leString*)&string_Keypad5);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey5);

    ServiceAgentPassCode_ButtonKey6 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey6->fn->setPosition(ServiceAgentPassCode_ButtonKey6, 8, 191);
    ServiceAgentPassCode_ButtonKey6->fn->setSize(ServiceAgentPassCode_ButtonKey6, 74, 74);
    ServiceAgentPassCode_ButtonKey6->fn->setScheme(ServiceAgentPassCode_ButtonKey6, &LayerScheme);
    ServiceAgentPassCode_ButtonKey6->fn->setBorderType(ServiceAgentPassCode_ButtonKey6, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey6->fn->setString(ServiceAgentPassCode_ButtonKey6, (leString*)&string_Keypad6);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey6);

    ServiceAgentPassCode_ButtonKey7 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey7->fn->setPosition(ServiceAgentPassCode_ButtonKey7, 86, 191);
    ServiceAgentPassCode_ButtonKey7->fn->setSize(ServiceAgentPassCode_ButtonKey7, 74, 74);
    ServiceAgentPassCode_ButtonKey7->fn->setScheme(ServiceAgentPassCode_ButtonKey7, &LayerScheme);
    ServiceAgentPassCode_ButtonKey7->fn->setBorderType(ServiceAgentPassCode_ButtonKey7, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey7->fn->setString(ServiceAgentPassCode_ButtonKey7, (leString*)&string_Keypad7);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey7);

    ServiceAgentPassCode_ButtonKey8 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey8->fn->setPosition(ServiceAgentPassCode_ButtonKey8, 164, 191);
    ServiceAgentPassCode_ButtonKey8->fn->setSize(ServiceAgentPassCode_ButtonKey8, 74, 74);
    ServiceAgentPassCode_ButtonKey8->fn->setScheme(ServiceAgentPassCode_ButtonKey8, &LayerScheme);
    ServiceAgentPassCode_ButtonKey8->fn->setBorderType(ServiceAgentPassCode_ButtonKey8, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey8->fn->setString(ServiceAgentPassCode_ButtonKey8, (leString*)&string_keypad8);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey8);

    ServiceAgentPassCode_ButtonKey9 = leButtonWidget_New();
    ServiceAgentPassCode_ButtonKey9->fn->setPosition(ServiceAgentPassCode_ButtonKey9, 242, 191);
    ServiceAgentPassCode_ButtonKey9->fn->setSize(ServiceAgentPassCode_ButtonKey9, 74, 74);
    ServiceAgentPassCode_ButtonKey9->fn->setScheme(ServiceAgentPassCode_ButtonKey9, &LayerScheme);
    ServiceAgentPassCode_ButtonKey9->fn->setBorderType(ServiceAgentPassCode_ButtonKey9, LE_WIDGET_BORDER_NONE);
    ServiceAgentPassCode_ButtonKey9->fn->setString(ServiceAgentPassCode_ButtonKey9, (leString*)&string_Keypad9);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentPassCode_ButtonKey9);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ServiceAgentPassCode(void)
{
}

void screenHide_ServiceAgentPassCode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ServiceAgentPassCode_Layer0_FillPanel = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ServiceAgentPassCode_LabelServiceAgents = NULL;
    ServiceAgentPassCode_ButtonReturn = NULL;
    ServiceAgentPassCode_LabelEnterPasscode = NULL;
    ServiceAgentPassCode_RectangleKeypad = NULL;
    ServiceAgentPassCode_ButtonKeyDelete = NULL;
    ServiceAgentPassCode_ButtonKey0 = NULL;
    ServiceAgentPassCode_ButtonKey1 = NULL;
    ServiceAgentPassCode_ButtonKey2 = NULL;
    ServiceAgentPassCode_ButtonKey3 = NULL;
    ServiceAgentPassCode_ButtonKey4 = NULL;
    ServiceAgentPassCode_ButtonKey5 = NULL;
    ServiceAgentPassCode_ButtonKey6 = NULL;
    ServiceAgentPassCode_ButtonKey7 = NULL;
    ServiceAgentPassCode_ButtonKey8 = NULL;
    ServiceAgentPassCode_ButtonKey9 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ServiceAgentPassCode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ServiceAgentPassCode(uint32_t lyrIdx)
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

