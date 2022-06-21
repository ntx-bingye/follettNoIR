#include "gfx/legato/generated/screen/le_gen_screen_service_advanced_Reset_to_Factory.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advanced_Reset_to_Factory_Layer_0_FillPanel;
leLabelWidget* service_advanced_Reset_to_Factory_LblTitle;
leButtonWidget* service_advanced_Reset_to_Factory_Button_Yes;
leButtonWidget* service_advanced_Reset_to_Factory_Button_No;
leButtonWidget* service_advanced_Reset_to_Factory_Button_Exit;
leButtonWidget* service_advanced_Reset_to_Factory_Button_Home;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advanced_Reset_to_Factory(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advanced_Reset_to_Factory(void)
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

    service_advanced_Reset_to_Factory_Layer_0_FillPanel = leWidget_New();
    service_advanced_Reset_to_Factory_Layer_0_FillPanel->fn->setPosition(service_advanced_Reset_to_Factory_Layer_0_FillPanel, 0, 0);
    service_advanced_Reset_to_Factory_Layer_0_FillPanel->fn->setSize(service_advanced_Reset_to_Factory_Layer_0_FillPanel, 480, 272);
    service_advanced_Reset_to_Factory_Layer_0_FillPanel->fn->setScheme(service_advanced_Reset_to_Factory_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advanced_Reset_to_Factory_Layer_0_FillPanel);

    service_advanced_Reset_to_Factory_LblTitle = leLabelWidget_New();
    service_advanced_Reset_to_Factory_LblTitle->fn->setPosition(service_advanced_Reset_to_Factory_LblTitle, 50, 29);
    service_advanced_Reset_to_Factory_LblTitle->fn->setSize(service_advanced_Reset_to_Factory_LblTitle, 380, 30);
    service_advanced_Reset_to_Factory_LblTitle->fn->setScheme(service_advanced_Reset_to_Factory_LblTitle, &Label_FontWhite);
    service_advanced_Reset_to_Factory_LblTitle->fn->setBackgroundType(service_advanced_Reset_to_Factory_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_Reset_to_Factory_LblTitle->fn->setHAlignment(service_advanced_Reset_to_Factory_LblTitle, LE_HALIGN_CENTER);
    service_advanced_Reset_to_Factory_LblTitle->fn->setString(service_advanced_Reset_to_Factory_LblTitle, (leString*)&string_SERVICE7_FACTORY_Title);
    root1->fn->addChild(root1, (leWidget*)service_advanced_Reset_to_Factory_LblTitle);

    service_advanced_Reset_to_Factory_Button_Yes = leButtonWidget_New();
    service_advanced_Reset_to_Factory_Button_Yes->fn->setPosition(service_advanced_Reset_to_Factory_Button_Yes, 125, 115);
    service_advanced_Reset_to_Factory_Button_Yes->fn->setSize(service_advanced_Reset_to_Factory_Button_Yes, 88, 72);
    service_advanced_Reset_to_Factory_Button_Yes->fn->setScheme(service_advanced_Reset_to_Factory_Button_Yes, &Button_Gray2);
    service_advanced_Reset_to_Factory_Button_Yes->fn->setBorderType(service_advanced_Reset_to_Factory_Button_Yes, LE_WIDGET_BORDER_LINE);
    service_advanced_Reset_to_Factory_Button_Yes->fn->setString(service_advanced_Reset_to_Factory_Button_Yes, (leString*)&string_SERVICE7_FACTORY_Yes);
    service_advanced_Reset_to_Factory_Button_Yes->fn->setReleasedEventCallback(service_advanced_Reset_to_Factory_Button_Yes, event_service_advanced_Reset_to_Factory_Button_Yes_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_Reset_to_Factory_Button_Yes);

    service_advanced_Reset_to_Factory_Button_No = leButtonWidget_New();
    service_advanced_Reset_to_Factory_Button_No->fn->setPosition(service_advanced_Reset_to_Factory_Button_No, 250, 115);
    service_advanced_Reset_to_Factory_Button_No->fn->setSize(service_advanced_Reset_to_Factory_Button_No, 88, 72);
    service_advanced_Reset_to_Factory_Button_No->fn->setScheme(service_advanced_Reset_to_Factory_Button_No, &Button_Gray2);
    service_advanced_Reset_to_Factory_Button_No->fn->setBorderType(service_advanced_Reset_to_Factory_Button_No, LE_WIDGET_BORDER_LINE);
    service_advanced_Reset_to_Factory_Button_No->fn->setString(service_advanced_Reset_to_Factory_Button_No, (leString*)&string_SERVICE7_FACTORY_No);
    service_advanced_Reset_to_Factory_Button_No->fn->setReleasedEventCallback(service_advanced_Reset_to_Factory_Button_No, event_service_advanced_Reset_to_Factory_Button_No_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_Reset_to_Factory_Button_No);

    service_advanced_Reset_to_Factory_Button_Exit = leButtonWidget_New();
    service_advanced_Reset_to_Factory_Button_Exit->fn->setPosition(service_advanced_Reset_to_Factory_Button_Exit, 415, 2);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setSize(service_advanced_Reset_to_Factory_Button_Exit, 60, 60);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setScheme(service_advanced_Reset_to_Factory_Button_Exit, &BlackBack);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setBackgroundType(service_advanced_Reset_to_Factory_Button_Exit, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setBorderType(service_advanced_Reset_to_Factory_Button_Exit, LE_WIDGET_BORDER_NONE);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setHAlignment(service_advanced_Reset_to_Factory_Button_Exit, LE_HALIGN_RIGHT);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setVAlignment(service_advanced_Reset_to_Factory_Button_Exit, LE_VALIGN_TOP);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setMargins(service_advanced_Reset_to_Factory_Button_Exit, 4, 10, 10, 4);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setPressedImage(service_advanced_Reset_to_Factory_Button_Exit, (leImage*)&Menu_exit_white);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setReleasedImage(service_advanced_Reset_to_Factory_Button_Exit, (leImage*)&Menu_exit_white);
    service_advanced_Reset_to_Factory_Button_Exit->fn->setReleasedEventCallback(service_advanced_Reset_to_Factory_Button_Exit, event_service_advanced_Reset_to_Factory_Button_Exit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_Reset_to_Factory_Button_Exit);

    service_advanced_Reset_to_Factory_Button_Home = leButtonWidget_New();
    service_advanced_Reset_to_Factory_Button_Home->fn->setPosition(service_advanced_Reset_to_Factory_Button_Home, 435, 225);
    service_advanced_Reset_to_Factory_Button_Home->fn->setSize(service_advanced_Reset_to_Factory_Button_Home, 40, 40);
    service_advanced_Reset_to_Factory_Button_Home->fn->setScheme(service_advanced_Reset_to_Factory_Button_Home, &BlackBack);
    service_advanced_Reset_to_Factory_Button_Home->fn->setBackgroundType(service_advanced_Reset_to_Factory_Button_Home, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_Reset_to_Factory_Button_Home->fn->setBorderType(service_advanced_Reset_to_Factory_Button_Home, LE_WIDGET_BORDER_NONE);
    service_advanced_Reset_to_Factory_Button_Home->fn->setPressedImage(service_advanced_Reset_to_Factory_Button_Home, (leImage*)&Menu_home);
    service_advanced_Reset_to_Factory_Button_Home->fn->setReleasedImage(service_advanced_Reset_to_Factory_Button_Home, (leImage*)&Menu_home);
    service_advanced_Reset_to_Factory_Button_Home->fn->setReleasedEventCallback(service_advanced_Reset_to_Factory_Button_Home, event_service_advanced_Reset_to_Factory_Button_Home_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_Reset_to_Factory_Button_Home);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advanced_Reset_to_Factory_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advanced_Reset_to_Factory(void)
{
}

void screenHide_service_advanced_Reset_to_Factory(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advanced_Reset_to_Factory_Layer_0_FillPanel = NULL;
    service_advanced_Reset_to_Factory_LblTitle = NULL;
    service_advanced_Reset_to_Factory_Button_Yes = NULL;
    service_advanced_Reset_to_Factory_Button_No = NULL;
    service_advanced_Reset_to_Factory_Button_Exit = NULL;
    service_advanced_Reset_to_Factory_Button_Home = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advanced_Reset_to_Factory(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advanced_Reset_to_Factory(uint32_t lyrIdx)
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

