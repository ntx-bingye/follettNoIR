#include "gfx/legato/generated/screen/le_gen_screen_service_advanced_screentimeout.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advanced_screentimeout_Layer_0_FillPanel;
leLabelWidget* service_advanced_screentimeout_LblSeconds;
leLabelWidget* service_advanced_screentimeout_LblScreenTimeoutValue;
leLabelWidget* service_advanced_screentimeout_LblSubTitle;
leImageWidget* service_advanced_screentimeout_ImgLine;
leLabelWidget* service_advanced_screentimeout_LblTitle;
leButtonWidget* service_advanced_screentimeout_BtnExit;
leButtonWidget* service_advanced_screentimeout_BtnRight;
leButtonWidget* service_advanced_screentimeout_BtnLeft;
leButtonWidget* service_advanced_screentimeout_BtnHome;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advanced_screentimeout(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advanced_screentimeout(void)
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

    service_advanced_screentimeout_Layer_0_FillPanel = leWidget_New();
    service_advanced_screentimeout_Layer_0_FillPanel->fn->setPosition(service_advanced_screentimeout_Layer_0_FillPanel, 0, 0);
    service_advanced_screentimeout_Layer_0_FillPanel->fn->setSize(service_advanced_screentimeout_Layer_0_FillPanel, 480, 272);
    service_advanced_screentimeout_Layer_0_FillPanel->fn->setScheme(service_advanced_screentimeout_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_Layer_0_FillPanel);

    service_advanced_screentimeout_LblSeconds = leLabelWidget_New();
    service_advanced_screentimeout_LblSeconds->fn->setPosition(service_advanced_screentimeout_LblSeconds, 103, 201);
    service_advanced_screentimeout_LblSeconds->fn->setSize(service_advanced_screentimeout_LblSeconds, 237, 24);
    service_advanced_screentimeout_LblSeconds->fn->setScheme(service_advanced_screentimeout_LblSeconds, &Label_FontWhite);
    service_advanced_screentimeout_LblSeconds->fn->setBackgroundType(service_advanced_screentimeout_LblSeconds, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_LblSeconds->fn->setHAlignment(service_advanced_screentimeout_LblSeconds, LE_HALIGN_CENTER);
    service_advanced_screentimeout_LblSeconds->fn->setString(service_advanced_screentimeout_LblSeconds, (leString*)&string_SERVICE13_Seconds);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_LblSeconds);

    service_advanced_screentimeout_LblScreenTimeoutValue = leLabelWidget_New();
    service_advanced_screentimeout_LblScreenTimeoutValue->fn->setPosition(service_advanced_screentimeout_LblScreenTimeoutValue, 159, 140);
    service_advanced_screentimeout_LblScreenTimeoutValue->fn->setSize(service_advanced_screentimeout_LblScreenTimeoutValue, 112, 55);
    service_advanced_screentimeout_LblScreenTimeoutValue->fn->setScheme(service_advanced_screentimeout_LblScreenTimeoutValue, &Label_FontWhite);
    service_advanced_screentimeout_LblScreenTimeoutValue->fn->setBackgroundType(service_advanced_screentimeout_LblScreenTimeoutValue, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_LblScreenTimeoutValue->fn->setHAlignment(service_advanced_screentimeout_LblScreenTimeoutValue, LE_HALIGN_CENTER);
    service_advanced_screentimeout_LblScreenTimeoutValue->fn->setString(service_advanced_screentimeout_LblScreenTimeoutValue, (leString*)&string_SERVICE13_ScreenTimeoutValue);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_LblScreenTimeoutValue);

    service_advanced_screentimeout_LblSubTitle = leLabelWidget_New();
    service_advanced_screentimeout_LblSubTitle->fn->setPosition(service_advanced_screentimeout_LblSubTitle, 121, 91);
    service_advanced_screentimeout_LblSubTitle->fn->setSize(service_advanced_screentimeout_LblSubTitle, 237, 30);
    service_advanced_screentimeout_LblSubTitle->fn->setScheme(service_advanced_screentimeout_LblSubTitle, &Label_FontWhite);
    service_advanced_screentimeout_LblSubTitle->fn->setBackgroundType(service_advanced_screentimeout_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_LblSubTitle->fn->setHAlignment(service_advanced_screentimeout_LblSubTitle, LE_HALIGN_CENTER);
    service_advanced_screentimeout_LblSubTitle->fn->setString(service_advanced_screentimeout_LblSubTitle, (leString*)&string_SERVICE13_AdjusInterval);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_LblSubTitle);

    service_advanced_screentimeout_ImgLine = leImageWidget_New();
    service_advanced_screentimeout_ImgLine->fn->setPosition(service_advanced_screentimeout_ImgLine, 21, 46);
    service_advanced_screentimeout_ImgLine->fn->setSize(service_advanced_screentimeout_ImgLine, 240, 5);
    service_advanced_screentimeout_ImgLine->fn->setScheme(service_advanced_screentimeout_ImgLine, &BlackBack);
    service_advanced_screentimeout_ImgLine->fn->setBackgroundType(service_advanced_screentimeout_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_ImgLine->fn->setBorderType(service_advanced_screentimeout_ImgLine, LE_WIDGET_BORDER_NONE);
    service_advanced_screentimeout_ImgLine->fn->setImage(service_advanced_screentimeout_ImgLine, (leImage*)&Menu_line);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_ImgLine);

    service_advanced_screentimeout_LblTitle = leLabelWidget_New();
    service_advanced_screentimeout_LblTitle->fn->setPosition(service_advanced_screentimeout_LblTitle, 19, 14);
    service_advanced_screentimeout_LblTitle->fn->setSize(service_advanced_screentimeout_LblTitle, 169, 31);
    service_advanced_screentimeout_LblTitle->fn->setScheme(service_advanced_screentimeout_LblTitle, &Label_FontWhite);
    service_advanced_screentimeout_LblTitle->fn->setBackgroundType(service_advanced_screentimeout_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_LblTitle->fn->setString(service_advanced_screentimeout_LblTitle, (leString*)&string_SERVICE13_ScreenTimeout);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_LblTitle);

    service_advanced_screentimeout_BtnExit = leButtonWidget_New();
    service_advanced_screentimeout_BtnExit->fn->setPosition(service_advanced_screentimeout_BtnExit, 415, 2);
    service_advanced_screentimeout_BtnExit->fn->setSize(service_advanced_screentimeout_BtnExit, 60, 60);
    service_advanced_screentimeout_BtnExit->fn->setScheme(service_advanced_screentimeout_BtnExit, &BlackBack);
    service_advanced_screentimeout_BtnExit->fn->setBackgroundType(service_advanced_screentimeout_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_BtnExit->fn->setBorderType(service_advanced_screentimeout_BtnExit, LE_WIDGET_BORDER_NONE);
    service_advanced_screentimeout_BtnExit->fn->setHAlignment(service_advanced_screentimeout_BtnExit, LE_HALIGN_RIGHT);
    service_advanced_screentimeout_BtnExit->fn->setVAlignment(service_advanced_screentimeout_BtnExit, LE_VALIGN_TOP);
    service_advanced_screentimeout_BtnExit->fn->setMargins(service_advanced_screentimeout_BtnExit, 4, 10, 10, 4);
    service_advanced_screentimeout_BtnExit->fn->setPressedImage(service_advanced_screentimeout_BtnExit, (leImage*)&Menu_exit_white);
    service_advanced_screentimeout_BtnExit->fn->setReleasedImage(service_advanced_screentimeout_BtnExit, (leImage*)&Menu_exit_white);
    service_advanced_screentimeout_BtnExit->fn->setReleasedEventCallback(service_advanced_screentimeout_BtnExit, event_service_advanced_screentimeout_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_BtnExit);

    service_advanced_screentimeout_BtnRight = leButtonWidget_New();
    service_advanced_screentimeout_BtnRight->fn->setPosition(service_advanced_screentimeout_BtnRight, 280, 140);
    service_advanced_screentimeout_BtnRight->fn->setSize(service_advanced_screentimeout_BtnRight, 40, 45);
    service_advanced_screentimeout_BtnRight->fn->setScheme(service_advanced_screentimeout_BtnRight, &BlackBack);
    service_advanced_screentimeout_BtnRight->fn->setBackgroundType(service_advanced_screentimeout_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_BtnRight->fn->setBorderType(service_advanced_screentimeout_BtnRight, LE_WIDGET_BORDER_NONE);
    service_advanced_screentimeout_BtnRight->fn->setPressedImage(service_advanced_screentimeout_BtnRight, (leImage*)&Menu_chevron_right);
    service_advanced_screentimeout_BtnRight->fn->setReleasedImage(service_advanced_screentimeout_BtnRight, (leImage*)&Menu_chevron_right);
    service_advanced_screentimeout_BtnRight->fn->setReleasedEventCallback(service_advanced_screentimeout_BtnRight, event_service_advanced_screentimeout_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_BtnRight);

    service_advanced_screentimeout_BtnLeft = leButtonWidget_New();
    service_advanced_screentimeout_BtnLeft->fn->setPosition(service_advanced_screentimeout_BtnLeft, 119, 140);
    service_advanced_screentimeout_BtnLeft->fn->setSize(service_advanced_screentimeout_BtnLeft, 40, 45);
    service_advanced_screentimeout_BtnLeft->fn->setScheme(service_advanced_screentimeout_BtnLeft, &BlackBack);
    service_advanced_screentimeout_BtnLeft->fn->setBackgroundType(service_advanced_screentimeout_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_BtnLeft->fn->setBorderType(service_advanced_screentimeout_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_advanced_screentimeout_BtnLeft->fn->setPressedImage(service_advanced_screentimeout_BtnLeft, (leImage*)&Menu_chevron_left);
    service_advanced_screentimeout_BtnLeft->fn->setReleasedImage(service_advanced_screentimeout_BtnLeft, (leImage*)&Menu_chevron_left);
    service_advanced_screentimeout_BtnLeft->fn->setReleasedEventCallback(service_advanced_screentimeout_BtnLeft, event_service_advanced_screentimeout_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_BtnLeft);

    service_advanced_screentimeout_BtnHome = leButtonWidget_New();
    service_advanced_screentimeout_BtnHome->fn->setPosition(service_advanced_screentimeout_BtnHome, 435, 225);
    service_advanced_screentimeout_BtnHome->fn->setSize(service_advanced_screentimeout_BtnHome, 40, 40);
    service_advanced_screentimeout_BtnHome->fn->setScheme(service_advanced_screentimeout_BtnHome, &BlackBack);
    service_advanced_screentimeout_BtnHome->fn->setBackgroundType(service_advanced_screentimeout_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_screentimeout_BtnHome->fn->setBorderType(service_advanced_screentimeout_BtnHome, LE_WIDGET_BORDER_NONE);
    service_advanced_screentimeout_BtnHome->fn->setPressedImage(service_advanced_screentimeout_BtnHome, (leImage*)&Menu_home);
    service_advanced_screentimeout_BtnHome->fn->setReleasedImage(service_advanced_screentimeout_BtnHome, (leImage*)&Menu_home);
    service_advanced_screentimeout_BtnHome->fn->setReleasedEventCallback(service_advanced_screentimeout_BtnHome, event_service_advanced_screentimeout_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_screentimeout_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advanced_screentimeout_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advanced_screentimeout(void)
{
}

void screenHide_service_advanced_screentimeout(void)
{
    service_advanced_screentimeout_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advanced_screentimeout_Layer_0_FillPanel = NULL;
    service_advanced_screentimeout_LblSeconds = NULL;
    service_advanced_screentimeout_LblScreenTimeoutValue = NULL;
    service_advanced_screentimeout_LblSubTitle = NULL;
    service_advanced_screentimeout_ImgLine = NULL;
    service_advanced_screentimeout_LblTitle = NULL;
    service_advanced_screentimeout_BtnExit = NULL;
    service_advanced_screentimeout_BtnRight = NULL;
    service_advanced_screentimeout_BtnLeft = NULL;
    service_advanced_screentimeout_BtnHome = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advanced_screentimeout(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advanced_screentimeout(uint32_t lyrIdx)
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

