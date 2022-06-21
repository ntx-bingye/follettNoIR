#include "gfx/legato/generated/screen/le_gen_screen_service_advanced.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advanced_Layer_0_FillPanel;
leButtonWidget* service_advanced_BntExit;
leButtonWidget* service_advanced_BntHome;
leKeyPadWidget* service_advanced_KeyPadServiceAdvaced;
leLabelWidget* service_advanced_LblTitle;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advanced(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advanced(void)
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

    service_advanced_Layer_0_FillPanel = leWidget_New();
    service_advanced_Layer_0_FillPanel->fn->setPosition(service_advanced_Layer_0_FillPanel, 0, 0);
    service_advanced_Layer_0_FillPanel->fn->setSize(service_advanced_Layer_0_FillPanel, 480, 272);
    service_advanced_Layer_0_FillPanel->fn->setScheme(service_advanced_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advanced_Layer_0_FillPanel);

    service_advanced_BntExit = leButtonWidget_New();
    service_advanced_BntExit->fn->setPosition(service_advanced_BntExit, 415, 2);
    service_advanced_BntExit->fn->setSize(service_advanced_BntExit, 60, 60);
    service_advanced_BntExit->fn->setScheme(service_advanced_BntExit, &BlackBack);
    service_advanced_BntExit->fn->setBackgroundType(service_advanced_BntExit, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_BntExit->fn->setBorderType(service_advanced_BntExit, LE_WIDGET_BORDER_NONE);
    service_advanced_BntExit->fn->setHAlignment(service_advanced_BntExit, LE_HALIGN_RIGHT);
    service_advanced_BntExit->fn->setVAlignment(service_advanced_BntExit, LE_VALIGN_TOP);
    service_advanced_BntExit->fn->setMargins(service_advanced_BntExit, 4, 10, 10, 4);
    service_advanced_BntExit->fn->setPressedImage(service_advanced_BntExit, (leImage*)&Menu_exit_white);
    service_advanced_BntExit->fn->setReleasedImage(service_advanced_BntExit, (leImage*)&Menu_exit_white);
    service_advanced_BntExit->fn->setReleasedEventCallback(service_advanced_BntExit, event_service_advanced_BntExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_BntExit);

    service_advanced_BntHome = leButtonWidget_New();
    service_advanced_BntHome->fn->setPosition(service_advanced_BntHome, 435, 225);
    service_advanced_BntHome->fn->setSize(service_advanced_BntHome, 40, 40);
    service_advanced_BntHome->fn->setScheme(service_advanced_BntHome, &BlackBack);
    service_advanced_BntHome->fn->setBackgroundType(service_advanced_BntHome, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_BntHome->fn->setBorderType(service_advanced_BntHome, LE_WIDGET_BORDER_NONE);
    service_advanced_BntHome->fn->setPressedImage(service_advanced_BntHome, (leImage*)&Menu_home);
    service_advanced_BntHome->fn->setReleasedImage(service_advanced_BntHome, (leImage*)&Menu_home);
    service_advanced_BntHome->fn->setReleasedEventCallback(service_advanced_BntHome, event_service_advanced_BntHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_BntHome);

    service_advanced_KeyPadServiceAdvaced = leKeyPadWidget_New(4, 2);
    service_advanced_KeyPadServiceAdvaced->fn->setPosition(service_advanced_KeyPadServiceAdvaced, 9, 56);
    service_advanced_KeyPadServiceAdvaced->fn->setSize(service_advanced_KeyPadServiceAdvaced, 419, 200);
    service_advanced_KeyPadServiceAdvaced->fn->setScheme(service_advanced_KeyPadServiceAdvaced, &Label_Gray2A);
    service_advanced_KeyPadServiceAdvaced->fn->setHAlignment(service_advanced_KeyPadServiceAdvaced, LE_HALIGN_LEFT);
    service_advanced_KeyPadServiceAdvaced->fn->setMargins(service_advanced_KeyPadServiceAdvaced, 10, 10, 10, 10);
    leButtonWidget* cell_0_0 = service_advanced_KeyPadServiceAdvaced->fn->getCellButton(service_advanced_KeyPadServiceAdvaced, 0, 0);
    cell_0_0->fn->setString(cell_0_0, (leString*)&string_SERVICE_ADVANCED_Contact);
    leButtonWidget* cell_0_1 = service_advanced_KeyPadServiceAdvaced->fn->getCellButton(service_advanced_KeyPadServiceAdvaced, 0, 1);
    cell_0_1->fn->setString(cell_0_1, (leString*)&string_SERVICE_ADVANCED_Output);
    leButtonWidget* cell_1_0 = service_advanced_KeyPadServiceAdvaced->fn->getCellButton(service_advanced_KeyPadServiceAdvaced, 1, 0);
    cell_1_0->fn->setString(cell_1_0, (leString*)&string_SERVICE_ADVANCED_Input);
    leButtonWidget* cell_1_1 = service_advanced_KeyPadServiceAdvaced->fn->getCellButton(service_advanced_KeyPadServiceAdvaced, 1, 1);
    cell_1_1->fn->setString(cell_1_1, (leString*)&string_SERVICE_ADVANCED_Factory);
    leButtonWidget* cell_2_0 = service_advanced_KeyPadServiceAdvaced->fn->getCellButton(service_advanced_KeyPadServiceAdvaced, 2, 0);
    cell_2_0->fn->setString(cell_2_0, (leString*)&string_SERVICE_ADVANCED_Config);
    leButtonWidget* cell_2_1 = service_advanced_KeyPadServiceAdvaced->fn->getCellButton(service_advanced_KeyPadServiceAdvaced, 2, 1);
    cell_2_1->fn->setString(cell_2_1, (leString*)&string_OPSETTING_SLEEPMODE_SleepMode);
    leButtonWidget* cell_3_0 = service_advanced_KeyPadServiceAdvaced->fn->getCellButton(service_advanced_KeyPadServiceAdvaced, 3, 0);
    cell_3_0->fn->setString(cell_3_0, (leString*)&string_SERVICE9_WakeOnSleep);
    leButtonWidget* cell_3_1 = service_advanced_KeyPadServiceAdvaced->fn->getCellButton(service_advanced_KeyPadServiceAdvaced, 3, 1);
    cell_3_1->fn->setString(cell_3_1, (leString*)&string_SERVICE13_ScreenTimeout);
    service_advanced_KeyPadServiceAdvaced->fn->setKeyClickEventCallback(service_advanced_KeyPadServiceAdvaced, event_service_advanced_KeyPadServiceAdvaced_OnKeyClick);
    root1->fn->addChild(root1, (leWidget*)service_advanced_KeyPadServiceAdvaced);

    service_advanced_LblTitle = leLabelWidget_New();
    service_advanced_LblTitle->fn->setPosition(service_advanced_LblTitle, 7, 10);
    service_advanced_LblTitle->fn->setSize(service_advanced_LblTitle, 221, 36);
    service_advanced_LblTitle->fn->setScheme(service_advanced_LblTitle, &Label_Gray2A);
    service_advanced_LblTitle->fn->setBackgroundType(service_advanced_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_LblTitle->fn->setString(service_advanced_LblTitle, (leString*)&string_SERVICE_MENU_Advanced);
    root1->fn->addChild(root1, (leWidget*)service_advanced_LblTitle);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advanced_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advanced(void)
{
}

void screenHide_service_advanced(void)
{
    service_advanced_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advanced_Layer_0_FillPanel = NULL;
    service_advanced_BntExit = NULL;
    service_advanced_BntHome = NULL;
    service_advanced_KeyPadServiceAdvaced = NULL;
    service_advanced_LblTitle = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advanced(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advanced(uint32_t lyrIdx)
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

