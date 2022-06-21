#include "gfx/legato/generated/screen/le_gen_screen_service_password.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_password_Layer_0_FillPanel;
leLabelWidget* service_password_LblInputBox;
leWidget* service_password_Panelcode;
leButtonWidget* service_password_BtnHome;
leButtonWidget* service_password_BtnExit;
leLabelWidget* service_password_LblPassword;
leButtonWidget* service_password_BtnSensor;
leKeyPadWidget* service_password_KeyPad;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_password(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_password(void)
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

    service_password_Layer_0_FillPanel = leWidget_New();
    service_password_Layer_0_FillPanel->fn->setPosition(service_password_Layer_0_FillPanel, 0, 0);
    service_password_Layer_0_FillPanel->fn->setSize(service_password_Layer_0_FillPanel, 480, 272);
    service_password_Layer_0_FillPanel->fn->setScheme(service_password_Layer_0_FillPanel, &Panel_Gray2A);
    root1->fn->addChild(root1, (leWidget*)service_password_Layer_0_FillPanel);

    service_password_LblInputBox = leLabelWidget_New();
    service_password_LblInputBox->fn->setPosition(service_password_LblInputBox, 160, 37);
    service_password_LblInputBox->fn->setSize(service_password_LblInputBox, 160, 25);
    service_password_LblInputBox->fn->setScheme(service_password_LblInputBox, &Label_Gray4_FontBlack);
    root1->fn->addChild(root1, (leWidget*)service_password_LblInputBox);

    service_password_Panelcode = leWidget_New();
    service_password_Panelcode->fn->setPosition(service_password_Panelcode, 0, 80);
    service_password_Panelcode->fn->setSize(service_password_Panelcode, 480, 192);
    service_password_Panelcode->fn->setScheme(service_password_Panelcode, &Label_FontWhite);
    root1->fn->addChild(root1, (leWidget*)service_password_Panelcode);

    service_password_KeyPad = leKeyPadWidget_New(4, 3);
    service_password_KeyPad->fn->setPosition(service_password_KeyPad, 86, 16);
    service_password_KeyPad->fn->setSize(service_password_KeyPad, 300, 160);
    service_password_KeyPad->fn->setScheme(service_password_KeyPad, &Panel_Gray4);
    service_password_KeyPad->fn->setBackgroundType(service_password_KeyPad, LE_WIDGET_BACKGROUND_NONE);
    service_password_KeyPad->fn->setBorderType(service_password_KeyPad, LE_WIDGET_BORDER_LINE);
    service_password_KeyPad->fn->setHAlignment(service_password_KeyPad, LE_HALIGN_LEFT);
    leButtonWidget* cell_0_0 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 0, 0);
    cell_0_0->fn->setString(cell_0_0, (leString*)&string_KEYPAD_1);
    leButtonWidget* cell_0_1 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 0, 1);
    cell_0_1->fn->setString(cell_0_1, (leString*)&string_KEYPAD_2);
    leButtonWidget* cell_0_2 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 0, 2);
    cell_0_2->fn->setString(cell_0_2, (leString*)&string_KEYPAD_3);
    leButtonWidget* cell_1_0 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 1, 0);
    cell_1_0->fn->setString(cell_1_0, (leString*)&string_KEYPAD_4);
    leButtonWidget* cell_1_1 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 1, 1);
    cell_1_1->fn->setString(cell_1_1, (leString*)&string_KEYPAD_5);
    leButtonWidget* cell_1_2 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 1, 2);
    cell_1_2->fn->setString(cell_1_2, (leString*)&string_KEYPAD_6);
    leButtonWidget* cell_2_0 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 2, 0);
    cell_2_0->fn->setString(cell_2_0, (leString*)&string_KEYPAD_7);
    leButtonWidget* cell_2_1 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 2, 1);
    cell_2_1->fn->setString(cell_2_1, (leString*)&string_KEYPAD_8);
    leButtonWidget* cell_2_2 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 2, 2);
    cell_2_2->fn->setString(cell_2_2, (leString*)&string_KEYPAD_9);
    leButtonWidget* cell_3_0 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 3, 0);
    cell_3_0->fn->setPressedImage(cell_3_0, &Keypad_cancel);
    cell_3_0->fn->setReleasedImage(cell_3_0, &Keypad_cancel);
    leButtonWidget* cell_3_1 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 3, 1);
    cell_3_1->fn->setString(cell_3_1, (leString*)&string_KEYPAD_0);
    leButtonWidget* cell_3_2 = service_password_KeyPad->fn->getCellButton(service_password_KeyPad, 3, 2);
    cell_3_2->fn->setPressedImage(cell_3_2, &Keypad_select);
    cell_3_2->fn->setReleasedImage(cell_3_2, &Keypad_select);
    service_password_KeyPad->fn->setKeyClickEventCallback(service_password_KeyPad, event_service_password_KeyPad_OnKeyClick);
    service_password_Panelcode->fn->addChild(service_password_Panelcode, (leWidget*)service_password_KeyPad);

    service_password_BtnHome = leButtonWidget_New();
    service_password_BtnHome->fn->setPosition(service_password_BtnHome, 435, 225);
    service_password_BtnHome->fn->setSize(service_password_BtnHome, 40, 40);
    service_password_BtnHome->fn->setScheme(service_password_BtnHome, &BlackBack);
    service_password_BtnHome->fn->setBackgroundType(service_password_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_password_BtnHome->fn->setBorderType(service_password_BtnHome, LE_WIDGET_BORDER_NONE);
    service_password_BtnHome->fn->setPressedImage(service_password_BtnHome, (leImage*)&Menu_home);
    service_password_BtnHome->fn->setReleasedImage(service_password_BtnHome, (leImage*)&Menu_home);
    service_password_BtnHome->fn->setReleasedEventCallback(service_password_BtnHome, event_service_password_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_password_BtnHome);

    service_password_BtnExit = leButtonWidget_New();
    service_password_BtnExit->fn->setPosition(service_password_BtnExit, 415, 2);
    service_password_BtnExit->fn->setSize(service_password_BtnExit, 60, 60);
    service_password_BtnExit->fn->setScheme(service_password_BtnExit, &BlackBack);
    service_password_BtnExit->fn->setBackgroundType(service_password_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_password_BtnExit->fn->setBorderType(service_password_BtnExit, LE_WIDGET_BORDER_NONE);
    service_password_BtnExit->fn->setHAlignment(service_password_BtnExit, LE_HALIGN_RIGHT);
    service_password_BtnExit->fn->setVAlignment(service_password_BtnExit, LE_VALIGN_TOP);
    service_password_BtnExit->fn->setMargins(service_password_BtnExit, 4, 10, 10, 4);
    service_password_BtnExit->fn->setPressedImage(service_password_BtnExit, (leImage*)&Menu_exit_white);
    service_password_BtnExit->fn->setReleasedImage(service_password_BtnExit, (leImage*)&Menu_exit_white);
    service_password_BtnExit->fn->setReleasedEventCallback(service_password_BtnExit, event_service_password_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_password_BtnExit);

    service_password_LblPassword = leLabelWidget_New();
    service_password_LblPassword->fn->setPosition(service_password_LblPassword, 160, 16);
    service_password_LblPassword->fn->setSize(service_password_LblPassword, 160, 18);
    service_password_LblPassword->fn->setScheme(service_password_LblPassword, &Label_Gray2A);
    service_password_LblPassword->fn->setMargins(service_password_LblPassword, 0, 0, 0, 0);
    service_password_LblPassword->fn->setString(service_password_LblPassword, (leString*)&string_KEYPAD_Password);
    root1->fn->addChild(root1, (leWidget*)service_password_LblPassword);

    service_password_BtnSensor = leButtonWidget_New();
    service_password_BtnSensor->fn->setPosition(service_password_BtnSensor, 1, 1);
    service_password_BtnSensor->fn->setSize(service_password_BtnSensor, 79, 73);
    service_password_BtnSensor->fn->setScheme(service_password_BtnSensor, &Button_Gray2A);
    service_password_BtnSensor->fn->setBackgroundType(service_password_BtnSensor, LE_WIDGET_BACKGROUND_NONE);
    service_password_BtnSensor->fn->setBorderType(service_password_BtnSensor, LE_WIDGET_BORDER_NONE);
    service_password_BtnSensor->fn->setReleasedEventCallback(service_password_BtnSensor, event_service_password_BtnSensor_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_password_BtnSensor);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_password_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_password(void)
{
}

void screenHide_service_password(void)
{
    service_password_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_password_Layer_0_FillPanel = NULL;
    service_password_LblInputBox = NULL;
    service_password_Panelcode = NULL;
    service_password_BtnHome = NULL;
    service_password_BtnExit = NULL;
    service_password_LblPassword = NULL;
    service_password_BtnSensor = NULL;
    service_password_KeyPad = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_password(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_password(uint32_t lyrIdx)
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

