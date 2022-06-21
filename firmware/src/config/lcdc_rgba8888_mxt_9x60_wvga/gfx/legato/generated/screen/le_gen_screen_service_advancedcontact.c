#include "gfx/legato/generated/screen/le_gen_screen_service_advancedcontact.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advancedcontact_Layer_0_FillPanel;
leLabelWidget* service_advancedcontact_LblWebsite;
leLabelWidget* service_advancedcontact_LblPhone2;
leLabelWidget* service_advancedcontact_LblPhone1;
leLabelWidget* service_advancedcontact_LblCityState;
leLabelWidget* service_advancedcontact_LblStreet;
leLabelWidget* service_advancedcontact_LblName;
leButtonWidget* service_advancedcontact_BtnExit;
leButtonWidget* service_advancedcontact_BtnWebsite;
leButtonWidget* service_advancedcontact_BtnPhone2;
leButtonWidget* service_advancedcontact_BtnPhone1;
leButtonWidget* service_advancedcontact_BtnCityState;
leButtonWidget* service_advancedcontact_BtnStreet;
leButtonWidget* service_advancedcontact_BtnName;
leButtonWidget* service_advancedcontact_BtnHome;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advancedcontact(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advancedcontact(void)
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

    service_advancedcontact_Layer_0_FillPanel = leWidget_New();
    service_advancedcontact_Layer_0_FillPanel->fn->setPosition(service_advancedcontact_Layer_0_FillPanel, 0, 0);
    service_advancedcontact_Layer_0_FillPanel->fn->setSize(service_advancedcontact_Layer_0_FillPanel, 480, 272);
    service_advancedcontact_Layer_0_FillPanel->fn->setScheme(service_advancedcontact_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_Layer_0_FillPanel);

    service_advancedcontact_LblWebsite = leLabelWidget_New();
    service_advancedcontact_LblWebsite->fn->setPosition(service_advancedcontact_LblWebsite, 10, 185);
    service_advancedcontact_LblWebsite->fn->setSize(service_advancedcontact_LblWebsite, 405, 35);
    service_advancedcontact_LblWebsite->fn->setScheme(service_advancedcontact_LblWebsite, &Button_Gray2A);
    service_advancedcontact_LblWebsite->fn->setBorderType(service_advancedcontact_LblWebsite, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_LblWebsite->fn->setString(service_advancedcontact_LblWebsite, (leString*)&string_SERVICE7_CONTACT_Website);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_LblWebsite);

    service_advancedcontact_LblPhone2 = leLabelWidget_New();
    service_advancedcontact_LblPhone2->fn->setPosition(service_advancedcontact_LblPhone2, 10, 150);
    service_advancedcontact_LblPhone2->fn->setSize(service_advancedcontact_LblPhone2, 405, 35);
    service_advancedcontact_LblPhone2->fn->setScheme(service_advancedcontact_LblPhone2, &Button_Gray2A);
    service_advancedcontact_LblPhone2->fn->setBorderType(service_advancedcontact_LblPhone2, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_LblPhone2->fn->setString(service_advancedcontact_LblPhone2, (leString*)&string_SERVICE7_CONTACT_Phone2);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_LblPhone2);

    service_advancedcontact_LblPhone1 = leLabelWidget_New();
    service_advancedcontact_LblPhone1->fn->setPosition(service_advancedcontact_LblPhone1, 10, 115);
    service_advancedcontact_LblPhone1->fn->setSize(service_advancedcontact_LblPhone1, 405, 35);
    service_advancedcontact_LblPhone1->fn->setScheme(service_advancedcontact_LblPhone1, &Button_Gray2A);
    service_advancedcontact_LblPhone1->fn->setBorderType(service_advancedcontact_LblPhone1, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_LblPhone1->fn->setString(service_advancedcontact_LblPhone1, (leString*)&string_SERVICE7_CONTACT_Phone1);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_LblPhone1);

    service_advancedcontact_LblCityState = leLabelWidget_New();
    service_advancedcontact_LblCityState->fn->setPosition(service_advancedcontact_LblCityState, 10, 80);
    service_advancedcontact_LblCityState->fn->setSize(service_advancedcontact_LblCityState, 405, 35);
    service_advancedcontact_LblCityState->fn->setScheme(service_advancedcontact_LblCityState, &Button_Gray2A);
    service_advancedcontact_LblCityState->fn->setBorderType(service_advancedcontact_LblCityState, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_LblCityState->fn->setString(service_advancedcontact_LblCityState, (leString*)&string_SERVICE7_CONTACT_CityState);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_LblCityState);

    service_advancedcontact_LblStreet = leLabelWidget_New();
    service_advancedcontact_LblStreet->fn->setPosition(service_advancedcontact_LblStreet, 10, 45);
    service_advancedcontact_LblStreet->fn->setSize(service_advancedcontact_LblStreet, 405, 35);
    service_advancedcontact_LblStreet->fn->setScheme(service_advancedcontact_LblStreet, &Button_Gray2A);
    service_advancedcontact_LblStreet->fn->setBorderType(service_advancedcontact_LblStreet, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_LblStreet->fn->setString(service_advancedcontact_LblStreet, (leString*)&string_SERVICE7_CONTACT_Street);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_LblStreet);

    service_advancedcontact_LblName = leLabelWidget_New();
    service_advancedcontact_LblName->fn->setPosition(service_advancedcontact_LblName, 10, 10);
    service_advancedcontact_LblName->fn->setSize(service_advancedcontact_LblName, 405, 35);
    service_advancedcontact_LblName->fn->setScheme(service_advancedcontact_LblName, &Button_Gray2A);
    service_advancedcontact_LblName->fn->setBorderType(service_advancedcontact_LblName, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_LblName->fn->setString(service_advancedcontact_LblName, (leString*)&string_SERVICE7_CONTACT_Name);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_LblName);

    service_advancedcontact_BtnExit = leButtonWidget_New();
    service_advancedcontact_BtnExit->fn->setPosition(service_advancedcontact_BtnExit, 415, 2);
    service_advancedcontact_BtnExit->fn->setSize(service_advancedcontact_BtnExit, 60, 60);
    service_advancedcontact_BtnExit->fn->setScheme(service_advancedcontact_BtnExit, &BlackBack);
    service_advancedcontact_BtnExit->fn->setBackgroundType(service_advancedcontact_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_advancedcontact_BtnExit->fn->setBorderType(service_advancedcontact_BtnExit, LE_WIDGET_BORDER_NONE);
    service_advancedcontact_BtnExit->fn->setHAlignment(service_advancedcontact_BtnExit, LE_HALIGN_RIGHT);
    service_advancedcontact_BtnExit->fn->setVAlignment(service_advancedcontact_BtnExit, LE_VALIGN_TOP);
    service_advancedcontact_BtnExit->fn->setMargins(service_advancedcontact_BtnExit, 4, 10, 10, 4);
    service_advancedcontact_BtnExit->fn->setPressedImage(service_advancedcontact_BtnExit, (leImage*)&Menu_exit_white);
    service_advancedcontact_BtnExit->fn->setReleasedImage(service_advancedcontact_BtnExit, (leImage*)&Menu_exit_white);
    service_advancedcontact_BtnExit->fn->setReleasedEventCallback(service_advancedcontact_BtnExit, event_service_advancedcontact_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_BtnExit);

    service_advancedcontact_BtnWebsite = leButtonWidget_New();
    service_advancedcontact_BtnWebsite->fn->setPosition(service_advancedcontact_BtnWebsite, 160, 185);
    service_advancedcontact_BtnWebsite->fn->setSize(service_advancedcontact_BtnWebsite, 255, 35);
    service_advancedcontact_BtnWebsite->fn->setScheme(service_advancedcontact_BtnWebsite, &Button_Gray2);
    service_advancedcontact_BtnWebsite->fn->setBorderType(service_advancedcontact_BtnWebsite, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_BtnWebsite->fn->setHAlignment(service_advancedcontact_BtnWebsite, LE_HALIGN_LEFT);
    service_advancedcontact_BtnWebsite->fn->setMargins(service_advancedcontact_BtnWebsite, 0, 4, 4, 4);
    service_advancedcontact_BtnWebsite->fn->setString(service_advancedcontact_BtnWebsite, (leString*)&string_SERVICE7_CONTACT_Website);
    service_advancedcontact_BtnWebsite->fn->setPressedImage(service_advancedcontact_BtnWebsite, (leImage*)&Menu_bar);
    service_advancedcontact_BtnWebsite->fn->setReleasedImage(service_advancedcontact_BtnWebsite, (leImage*)&Menu_bar_clear);
    service_advancedcontact_BtnWebsite->fn->setImageMargin(service_advancedcontact_BtnWebsite, 4);
    service_advancedcontact_BtnWebsite->fn->setReleasedEventCallback(service_advancedcontact_BtnWebsite, event_service_advancedcontact_BtnWebsite_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_BtnWebsite);

    service_advancedcontact_BtnPhone2 = leButtonWidget_New();
    service_advancedcontact_BtnPhone2->fn->setPosition(service_advancedcontact_BtnPhone2, 160, 150);
    service_advancedcontact_BtnPhone2->fn->setSize(service_advancedcontact_BtnPhone2, 255, 35);
    service_advancedcontact_BtnPhone2->fn->setScheme(service_advancedcontact_BtnPhone2, &Button_Gray2);
    service_advancedcontact_BtnPhone2->fn->setBorderType(service_advancedcontact_BtnPhone2, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_BtnPhone2->fn->setHAlignment(service_advancedcontact_BtnPhone2, LE_HALIGN_LEFT);
    service_advancedcontact_BtnPhone2->fn->setMargins(service_advancedcontact_BtnPhone2, 0, 4, 4, 4);
    service_advancedcontact_BtnPhone2->fn->setString(service_advancedcontact_BtnPhone2, (leString*)&string_SERVICE7_CONTACT_Phone2);
    service_advancedcontact_BtnPhone2->fn->setPressedImage(service_advancedcontact_BtnPhone2, (leImage*)&Menu_bar);
    service_advancedcontact_BtnPhone2->fn->setReleasedImage(service_advancedcontact_BtnPhone2, (leImage*)&Menu_bar_clear);
    service_advancedcontact_BtnPhone2->fn->setImageMargin(service_advancedcontact_BtnPhone2, 4);
    service_advancedcontact_BtnPhone2->fn->setReleasedEventCallback(service_advancedcontact_BtnPhone2, event_service_advancedcontact_BtnPhone2_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_BtnPhone2);

    service_advancedcontact_BtnPhone1 = leButtonWidget_New();
    service_advancedcontact_BtnPhone1->fn->setPosition(service_advancedcontact_BtnPhone1, 160, 115);
    service_advancedcontact_BtnPhone1->fn->setSize(service_advancedcontact_BtnPhone1, 255, 35);
    service_advancedcontact_BtnPhone1->fn->setScheme(service_advancedcontact_BtnPhone1, &Button_Gray2);
    service_advancedcontact_BtnPhone1->fn->setBorderType(service_advancedcontact_BtnPhone1, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_BtnPhone1->fn->setHAlignment(service_advancedcontact_BtnPhone1, LE_HALIGN_LEFT);
    service_advancedcontact_BtnPhone1->fn->setMargins(service_advancedcontact_BtnPhone1, 0, 4, 4, 4);
    service_advancedcontact_BtnPhone1->fn->setString(service_advancedcontact_BtnPhone1, (leString*)&string_SERVICE7_CONTACT_Phone1);
    service_advancedcontact_BtnPhone1->fn->setPressedImage(service_advancedcontact_BtnPhone1, (leImage*)&Menu_bar);
    service_advancedcontact_BtnPhone1->fn->setReleasedImage(service_advancedcontact_BtnPhone1, (leImage*)&Menu_bar_clear);
    service_advancedcontact_BtnPhone1->fn->setImageMargin(service_advancedcontact_BtnPhone1, 4);
    service_advancedcontact_BtnPhone1->fn->setReleasedEventCallback(service_advancedcontact_BtnPhone1, event_service_advancedcontact_BtnPhone1_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_BtnPhone1);

    service_advancedcontact_BtnCityState = leButtonWidget_New();
    service_advancedcontact_BtnCityState->fn->setPosition(service_advancedcontact_BtnCityState, 160, 80);
    service_advancedcontact_BtnCityState->fn->setSize(service_advancedcontact_BtnCityState, 255, 35);
    service_advancedcontact_BtnCityState->fn->setScheme(service_advancedcontact_BtnCityState, &Button_Gray2);
    service_advancedcontact_BtnCityState->fn->setBorderType(service_advancedcontact_BtnCityState, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_BtnCityState->fn->setHAlignment(service_advancedcontact_BtnCityState, LE_HALIGN_LEFT);
    service_advancedcontact_BtnCityState->fn->setMargins(service_advancedcontact_BtnCityState, 0, 4, 4, 4);
    service_advancedcontact_BtnCityState->fn->setString(service_advancedcontact_BtnCityState, (leString*)&string_SERVICE7_CONTACT_CityState);
    service_advancedcontact_BtnCityState->fn->setPressedImage(service_advancedcontact_BtnCityState, (leImage*)&Menu_bar);
    service_advancedcontact_BtnCityState->fn->setReleasedImage(service_advancedcontact_BtnCityState, (leImage*)&Menu_bar_clear);
    service_advancedcontact_BtnCityState->fn->setImageMargin(service_advancedcontact_BtnCityState, 4);
    service_advancedcontact_BtnCityState->fn->setReleasedEventCallback(service_advancedcontact_BtnCityState, event_service_advancedcontact_BtnCityState_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_BtnCityState);

    service_advancedcontact_BtnStreet = leButtonWidget_New();
    service_advancedcontact_BtnStreet->fn->setPosition(service_advancedcontact_BtnStreet, 160, 45);
    service_advancedcontact_BtnStreet->fn->setSize(service_advancedcontact_BtnStreet, 255, 35);
    service_advancedcontact_BtnStreet->fn->setScheme(service_advancedcontact_BtnStreet, &Button_Gray2);
    service_advancedcontact_BtnStreet->fn->setBorderType(service_advancedcontact_BtnStreet, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_BtnStreet->fn->setHAlignment(service_advancedcontact_BtnStreet, LE_HALIGN_LEFT);
    service_advancedcontact_BtnStreet->fn->setMargins(service_advancedcontact_BtnStreet, 0, 4, 4, 4);
    service_advancedcontact_BtnStreet->fn->setString(service_advancedcontact_BtnStreet, (leString*)&string_SERVICE7_CONTACT_Street);
    service_advancedcontact_BtnStreet->fn->setPressedImage(service_advancedcontact_BtnStreet, (leImage*)&Menu_bar);
    service_advancedcontact_BtnStreet->fn->setReleasedImage(service_advancedcontact_BtnStreet, (leImage*)&Menu_bar_clear);
    service_advancedcontact_BtnStreet->fn->setImageMargin(service_advancedcontact_BtnStreet, 4);
    service_advancedcontact_BtnStreet->fn->setReleasedEventCallback(service_advancedcontact_BtnStreet, event_service_advancedcontact_BtnStreet_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_BtnStreet);

    service_advancedcontact_BtnName = leButtonWidget_New();
    service_advancedcontact_BtnName->fn->setPosition(service_advancedcontact_BtnName, 160, 10);
    service_advancedcontact_BtnName->fn->setSize(service_advancedcontact_BtnName, 255, 35);
    service_advancedcontact_BtnName->fn->setScheme(service_advancedcontact_BtnName, &Button_Gray2);
    service_advancedcontact_BtnName->fn->setBorderType(service_advancedcontact_BtnName, LE_WIDGET_BORDER_LINE);
    service_advancedcontact_BtnName->fn->setHAlignment(service_advancedcontact_BtnName, LE_HALIGN_LEFT);
    service_advancedcontact_BtnName->fn->setMargins(service_advancedcontact_BtnName, 0, 4, 4, 4);
    service_advancedcontact_BtnName->fn->setString(service_advancedcontact_BtnName, (leString*)&string_SERVICE7_CONTACT_Name);
    service_advancedcontact_BtnName->fn->setPressedImage(service_advancedcontact_BtnName, (leImage*)&Menu_bar);
    service_advancedcontact_BtnName->fn->setReleasedImage(service_advancedcontact_BtnName, (leImage*)&Menu_bar_clear);
    service_advancedcontact_BtnName->fn->setImageMargin(service_advancedcontact_BtnName, 4);
    service_advancedcontact_BtnName->fn->setReleasedEventCallback(service_advancedcontact_BtnName, event_service_advancedcontact_BtnName_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_BtnName);

    service_advancedcontact_BtnHome = leButtonWidget_New();
    service_advancedcontact_BtnHome->fn->setPosition(service_advancedcontact_BtnHome, 435, 225);
    service_advancedcontact_BtnHome->fn->setSize(service_advancedcontact_BtnHome, 40, 40);
    service_advancedcontact_BtnHome->fn->setScheme(service_advancedcontact_BtnHome, &BlackBack);
    service_advancedcontact_BtnHome->fn->setBackgroundType(service_advancedcontact_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_advancedcontact_BtnHome->fn->setBorderType(service_advancedcontact_BtnHome, LE_WIDGET_BORDER_NONE);
    service_advancedcontact_BtnHome->fn->setPressedImage(service_advancedcontact_BtnHome, (leImage*)&Menu_home);
    service_advancedcontact_BtnHome->fn->setReleasedImage(service_advancedcontact_BtnHome, (leImage*)&Menu_home);
    service_advancedcontact_BtnHome->fn->setReleasedEventCallback(service_advancedcontact_BtnHome, event_service_advancedcontact_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedcontact_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advancedcontact_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advancedcontact(void)
{
}

void screenHide_service_advancedcontact(void)
{
    service_advancedcontact_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advancedcontact_Layer_0_FillPanel = NULL;
    service_advancedcontact_LblWebsite = NULL;
    service_advancedcontact_LblPhone2 = NULL;
    service_advancedcontact_LblPhone1 = NULL;
    service_advancedcontact_LblCityState = NULL;
    service_advancedcontact_LblStreet = NULL;
    service_advancedcontact_LblName = NULL;
    service_advancedcontact_BtnExit = NULL;
    service_advancedcontact_BtnWebsite = NULL;
    service_advancedcontact_BtnPhone2 = NULL;
    service_advancedcontact_BtnPhone1 = NULL;
    service_advancedcontact_BtnCityState = NULL;
    service_advancedcontact_BtnStreet = NULL;
    service_advancedcontact_BtnName = NULL;
    service_advancedcontact_BtnHome = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advancedcontact(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advancedcontact(uint32_t lyrIdx)
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

