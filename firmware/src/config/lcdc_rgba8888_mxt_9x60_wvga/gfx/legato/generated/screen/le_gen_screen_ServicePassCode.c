#include "gfx/legato/generated/screen/le_gen_screen_ServicePassCode.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* ServicePassCode_Layer0_FillPanel;
leLabelWidget* ServicePassCode_LabelEnterPasscode;
leWidget* ServicePassCode_PanelKey;
leWidget* ServicePassCode_PanelPasscode;
leWidget* ServicePassCode_PanelBack;
leKeyPadWidget* ServicePassCode_KeyPadWidget0;
leLabelWidget* ServicePassCode_LabelPasscodeValue;
leButtonWidget* ServicePassCode_ButtonBack;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ServicePassCode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ServicePassCode(void)
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

    ServicePassCode_Layer0_FillPanel = leWidget_New();
    ServicePassCode_Layer0_FillPanel->fn->setPosition(ServicePassCode_Layer0_FillPanel, 0, 0);
    ServicePassCode_Layer0_FillPanel->fn->setSize(ServicePassCode_Layer0_FillPanel, 480, 272);
    ServicePassCode_Layer0_FillPanel->fn->setScheme(ServicePassCode_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ServicePassCode_Layer0_FillPanel);

    ServicePassCode_LabelEnterPasscode = leLabelWidget_New();
    ServicePassCode_LabelEnterPasscode->fn->setPosition(ServicePassCode_LabelEnterPasscode, 50, 36);
    ServicePassCode_LabelEnterPasscode->fn->setSize(ServicePassCode_LabelEnterPasscode, 375, 25);
    ServicePassCode_LabelEnterPasscode->fn->setScheme(ServicePassCode_LabelEnterPasscode, &ForegroundScheme);
    ServicePassCode_LabelEnterPasscode->fn->setBackgroundType(ServicePassCode_LabelEnterPasscode, LE_WIDGET_BACKGROUND_NONE);
    ServicePassCode_LabelEnterPasscode->fn->setHAlignment(ServicePassCode_LabelEnterPasscode, LE_HALIGN_CENTER);
    ServicePassCode_LabelEnterPasscode->fn->setString(ServicePassCode_LabelEnterPasscode, (leString*)&string_ServiceAgentsEnterPasscode);
    root0->fn->addChild(root0, (leWidget*)ServicePassCode_LabelEnterPasscode);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ServicePassCode_PanelKey = leWidget_New();
    ServicePassCode_PanelKey->fn->setPosition(ServicePassCode_PanelKey, 31, 128);
    ServicePassCode_PanelKey->fn->setSize(ServicePassCode_PanelKey, 423, 143);
    ServicePassCode_PanelKey->fn->setScheme(ServicePassCode_PanelKey, &BackgroundScheme);
    root1->fn->addChild(root1, (leWidget*)ServicePassCode_PanelKey);

    ServicePassCode_KeyPadWidget0 = leKeyPadWidget_New(2, 6);
    ServicePassCode_KeyPadWidget0->fn->setPosition(ServicePassCode_KeyPadWidget0, 13, 13);
    ServicePassCode_KeyPadWidget0->fn->setSize(ServicePassCode_KeyPadWidget0, 400, 120);
    ServicePassCode_KeyPadWidget0->fn->setScheme(ServicePassCode_KeyPadWidget0, &BackgroundScheme);
    leButtonWidget* cell_0_0 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 0, 0);
    cell_0_0->fn->setString(cell_0_0, (leString*)&string_Keypad0);
    leButtonWidget* cell_0_1 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 0, 1);
    cell_0_1->fn->setString(cell_0_1, (leString*)&string_Keypad1);
    leButtonWidget* cell_0_2 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 0, 2);
    cell_0_2->fn->setString(cell_0_2, (leString*)&string_Keypad2);
    leButtonWidget* cell_0_3 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 0, 3);
    cell_0_3->fn->setString(cell_0_3, (leString*)&string_Keypad3);
    leButtonWidget* cell_0_4 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 0, 4);
    cell_0_4->fn->setString(cell_0_4, (leString*)&string_Keypad4);
    leButtonWidget* cell_0_5 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 0, 5);
    cell_0_5->fn->setString(cell_0_5, (leString*)&string_Keypad5);
    leButtonWidget* cell_1_0 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 1, 0);
    cell_1_0->fn->setString(cell_1_0, (leString*)&string_Keypad6);
    leButtonWidget* cell_1_1 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 1, 1);
    cell_1_1->fn->setString(cell_1_1, (leString*)&string_Keypad7);
    leButtonWidget* cell_1_2 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 1, 2);
    cell_1_2->fn->setString(cell_1_2, (leString*)&string_keypad8);
    leButtonWidget* cell_1_3 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 1, 3);
    cell_1_3->fn->setString(cell_1_3, (leString*)&string_Keypad9);
    leButtonWidget* cell_1_4 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 1, 4);
    cell_1_4->fn->setString(cell_1_4, (leString*)&string_BACK);
    leButtonWidget* cell_1_5 = ServicePassCode_KeyPadWidget0->fn->getCellButton(ServicePassCode_KeyPadWidget0, 1, 5);
    cell_1_5->fn->setString(cell_1_5, (leString*)&string_ENTER);
    ServicePassCode_KeyPadWidget0->fn->setKeyClickEventCallback(ServicePassCode_KeyPadWidget0, event_ServicePassCode_KeyPadWidget0_OnKeyClick);
    ServicePassCode_PanelKey->fn->addChild(ServicePassCode_PanelKey, (leWidget*)ServicePassCode_KeyPadWidget0);

    ServicePassCode_PanelPasscode = leWidget_New();
    ServicePassCode_PanelPasscode->fn->setPosition(ServicePassCode_PanelPasscode, 183, 59);
    ServicePassCode_PanelPasscode->fn->setSize(ServicePassCode_PanelPasscode, 124, 35);
    ServicePassCode_PanelPasscode->fn->setScheme(ServicePassCode_PanelPasscode, &BackgroundScheme);
    root1->fn->addChild(root1, (leWidget*)ServicePassCode_PanelPasscode);

    ServicePassCode_LabelPasscodeValue = leLabelWidget_New();
    ServicePassCode_LabelPasscodeValue->fn->setPosition(ServicePassCode_LabelPasscodeValue, 5, 5);
    ServicePassCode_LabelPasscodeValue->fn->setScheme(ServicePassCode_LabelPasscodeValue, &LayerScheme);
    ServicePassCode_LabelPasscodeValue->fn->setString(ServicePassCode_LabelPasscodeValue, (leString*)&string_ServicePasscode);
    ServicePassCode_PanelPasscode->fn->addChild(ServicePassCode_PanelPasscode, (leWidget*)ServicePassCode_LabelPasscodeValue);

    ServicePassCode_PanelBack = leWidget_New();
    ServicePassCode_PanelBack->fn->setPosition(ServicePassCode_PanelBack, 406, 2);
    ServicePassCode_PanelBack->fn->setSize(ServicePassCode_PanelBack, 72, 61);
    ServicePassCode_PanelBack->fn->setScheme(ServicePassCode_PanelBack, &BackgroundScheme);
    root1->fn->addChild(root1, (leWidget*)ServicePassCode_PanelBack);

    ServicePassCode_ButtonBack = leButtonWidget_New();
    ServicePassCode_ButtonBack->fn->setPosition(ServicePassCode_ButtonBack, 11, 2);
    ServicePassCode_ButtonBack->fn->setSize(ServicePassCode_ButtonBack, 60, 60);
    ServicePassCode_ButtonBack->fn->setScheme(ServicePassCode_ButtonBack, &BackgroundScheme);
    ServicePassCode_ButtonBack->fn->setBorderType(ServicePassCode_ButtonBack, LE_WIDGET_BORDER_NONE);
    ServicePassCode_ButtonBack->fn->setPressedImage(ServicePassCode_ButtonBack, (leImage*)&ICON_goBackActive);
    ServicePassCode_ButtonBack->fn->setReleasedImage(ServicePassCode_ButtonBack, (leImage*)&ICON_goBackInactive);
    ServicePassCode_ButtonBack->fn->setReleasedEventCallback(ServicePassCode_ButtonBack, event_ServicePassCode_ButtonBack_OnReleased);
    ServicePassCode_PanelBack->fn->addChild(ServicePassCode_PanelBack, (leWidget*)ServicePassCode_ButtonBack);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    ServicePassCode_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ServicePassCode(void)
{
}

void screenHide_ServicePassCode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ServicePassCode_Layer0_FillPanel = NULL;
    ServicePassCode_LabelEnterPasscode = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ServicePassCode_PanelKey = NULL;
    ServicePassCode_PanelPasscode = NULL;
    ServicePassCode_PanelBack = NULL;
    ServicePassCode_KeyPadWidget0 = NULL;
    ServicePassCode_LabelPasscodeValue = NULL;
    ServicePassCode_ButtonBack = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ServicePassCode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ServicePassCode(uint32_t lyrIdx)
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

