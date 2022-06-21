#include "gfx/legato/generated/screen/le_gen_screen_service_advancedwakeonDispense.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advancedwakeonDispense_Layer_0_FillPanel;
leLabelWidget* service_advancedwakeonDispense_LblSeconds;
leLabelWidget* service_advancedwakeonDispense_LblWakeOnSleepValue;
leLabelWidget* service_advancedwakeonDispense_LblSubTitle;
leImageWidget* service_advancedwakeonDispense_ImgLine;
leLabelWidget* service_advancedwakeonDispense_LblTitle;
leButtonWidget* service_advancedwakeonDispense_BtnExit;
leButtonWidget* service_advancedwakeonDispense_BtnRight;
leButtonWidget* service_advancedwakeonDispense_BtnLeft;
leButtonWidget* service_advancedwakeonDispense_BtnHome;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advancedwakeonDispense(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advancedwakeonDispense(void)
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

    service_advancedwakeonDispense_Layer_0_FillPanel = leWidget_New();
    service_advancedwakeonDispense_Layer_0_FillPanel->fn->setPosition(service_advancedwakeonDispense_Layer_0_FillPanel, 0, 0);
    service_advancedwakeonDispense_Layer_0_FillPanel->fn->setSize(service_advancedwakeonDispense_Layer_0_FillPanel, 480, 272);
    service_advancedwakeonDispense_Layer_0_FillPanel->fn->setScheme(service_advancedwakeonDispense_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_Layer_0_FillPanel);

    service_advancedwakeonDispense_LblSeconds = leLabelWidget_New();
    service_advancedwakeonDispense_LblSeconds->fn->setPosition(service_advancedwakeonDispense_LblSeconds, 103, 201);
    service_advancedwakeonDispense_LblSeconds->fn->setSize(service_advancedwakeonDispense_LblSeconds, 237, 24);
    service_advancedwakeonDispense_LblSeconds->fn->setScheme(service_advancedwakeonDispense_LblSeconds, &Label_FontWhite);
    service_advancedwakeonDispense_LblSeconds->fn->setBackgroundType(service_advancedwakeonDispense_LblSeconds, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_LblSeconds->fn->setHAlignment(service_advancedwakeonDispense_LblSeconds, LE_HALIGN_CENTER);
    service_advancedwakeonDispense_LblSeconds->fn->setString(service_advancedwakeonDispense_LblSeconds, (leString*)&string_SERVICE9_Seconds);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_LblSeconds);

    service_advancedwakeonDispense_LblWakeOnSleepValue = leLabelWidget_New();
    service_advancedwakeonDispense_LblWakeOnSleepValue->fn->setPosition(service_advancedwakeonDispense_LblWakeOnSleepValue, 159, 140);
    service_advancedwakeonDispense_LblWakeOnSleepValue->fn->setSize(service_advancedwakeonDispense_LblWakeOnSleepValue, 112, 55);
    service_advancedwakeonDispense_LblWakeOnSleepValue->fn->setScheme(service_advancedwakeonDispense_LblWakeOnSleepValue, &Label_FontWhite);
    service_advancedwakeonDispense_LblWakeOnSleepValue->fn->setBackgroundType(service_advancedwakeonDispense_LblWakeOnSleepValue, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_LblWakeOnSleepValue->fn->setHAlignment(service_advancedwakeonDispense_LblWakeOnSleepValue, LE_HALIGN_CENTER);
    service_advancedwakeonDispense_LblWakeOnSleepValue->fn->setString(service_advancedwakeonDispense_LblWakeOnSleepValue, (leString*)&string_SERVICE9_WakeOnSleepValue);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_LblWakeOnSleepValue);

    service_advancedwakeonDispense_LblSubTitle = leLabelWidget_New();
    service_advancedwakeonDispense_LblSubTitle->fn->setPosition(service_advancedwakeonDispense_LblSubTitle, 107, 93);
    service_advancedwakeonDispense_LblSubTitle->fn->setSize(service_advancedwakeonDispense_LblSubTitle, 237, 30);
    service_advancedwakeonDispense_LblSubTitle->fn->setScheme(service_advancedwakeonDispense_LblSubTitle, &Label_FontWhite);
    service_advancedwakeonDispense_LblSubTitle->fn->setBackgroundType(service_advancedwakeonDispense_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_LblSubTitle->fn->setHAlignment(service_advancedwakeonDispense_LblSubTitle, LE_HALIGN_CENTER);
    service_advancedwakeonDispense_LblSubTitle->fn->setString(service_advancedwakeonDispense_LblSubTitle, (leString*)&string_SERVICE9_AdjustInterval);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_LblSubTitle);

    service_advancedwakeonDispense_ImgLine = leImageWidget_New();
    service_advancedwakeonDispense_ImgLine->fn->setPosition(service_advancedwakeonDispense_ImgLine, 21, 46);
    service_advancedwakeonDispense_ImgLine->fn->setSize(service_advancedwakeonDispense_ImgLine, 240, 5);
    service_advancedwakeonDispense_ImgLine->fn->setScheme(service_advancedwakeonDispense_ImgLine, &BlackBack);
    service_advancedwakeonDispense_ImgLine->fn->setBackgroundType(service_advancedwakeonDispense_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_ImgLine->fn->setBorderType(service_advancedwakeonDispense_ImgLine, LE_WIDGET_BORDER_NONE);
    service_advancedwakeonDispense_ImgLine->fn->setImage(service_advancedwakeonDispense_ImgLine, (leImage*)&Menu_line);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_ImgLine);

    service_advancedwakeonDispense_LblTitle = leLabelWidget_New();
    service_advancedwakeonDispense_LblTitle->fn->setPosition(service_advancedwakeonDispense_LblTitle, 19, 14);
    service_advancedwakeonDispense_LblTitle->fn->setSize(service_advancedwakeonDispense_LblTitle, 222, 25);
    service_advancedwakeonDispense_LblTitle->fn->setScheme(service_advancedwakeonDispense_LblTitle, &Label_FontWhite);
    service_advancedwakeonDispense_LblTitle->fn->setBackgroundType(service_advancedwakeonDispense_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_LblTitle->fn->setString(service_advancedwakeonDispense_LblTitle, (leString*)&string_SERVICE9_WakeOnSleep);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_LblTitle);

    service_advancedwakeonDispense_BtnExit = leButtonWidget_New();
    service_advancedwakeonDispense_BtnExit->fn->setPosition(service_advancedwakeonDispense_BtnExit, 415, 2);
    service_advancedwakeonDispense_BtnExit->fn->setSize(service_advancedwakeonDispense_BtnExit, 60, 60);
    service_advancedwakeonDispense_BtnExit->fn->setScheme(service_advancedwakeonDispense_BtnExit, &BlackBack);
    service_advancedwakeonDispense_BtnExit->fn->setBackgroundType(service_advancedwakeonDispense_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_BtnExit->fn->setBorderType(service_advancedwakeonDispense_BtnExit, LE_WIDGET_BORDER_NONE);
    service_advancedwakeonDispense_BtnExit->fn->setHAlignment(service_advancedwakeonDispense_BtnExit, LE_HALIGN_RIGHT);
    service_advancedwakeonDispense_BtnExit->fn->setVAlignment(service_advancedwakeonDispense_BtnExit, LE_VALIGN_TOP);
    service_advancedwakeonDispense_BtnExit->fn->setMargins(service_advancedwakeonDispense_BtnExit, 4, 10, 10, 4);
    service_advancedwakeonDispense_BtnExit->fn->setPressedImage(service_advancedwakeonDispense_BtnExit, (leImage*)&Menu_exit_white);
    service_advancedwakeonDispense_BtnExit->fn->setReleasedImage(service_advancedwakeonDispense_BtnExit, (leImage*)&Menu_exit_white);
    service_advancedwakeonDispense_BtnExit->fn->setReleasedEventCallback(service_advancedwakeonDispense_BtnExit, event_service_advancedwakeonDispense_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_BtnExit);

    service_advancedwakeonDispense_BtnRight = leButtonWidget_New();
    service_advancedwakeonDispense_BtnRight->fn->setPosition(service_advancedwakeonDispense_BtnRight, 280, 140);
    service_advancedwakeonDispense_BtnRight->fn->setSize(service_advancedwakeonDispense_BtnRight, 40, 45);
    service_advancedwakeonDispense_BtnRight->fn->setScheme(service_advancedwakeonDispense_BtnRight, &BlackBack);
    service_advancedwakeonDispense_BtnRight->fn->setBackgroundType(service_advancedwakeonDispense_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_BtnRight->fn->setBorderType(service_advancedwakeonDispense_BtnRight, LE_WIDGET_BORDER_NONE);
    service_advancedwakeonDispense_BtnRight->fn->setPressedImage(service_advancedwakeonDispense_BtnRight, (leImage*)&Menu_chevron_right);
    service_advancedwakeonDispense_BtnRight->fn->setReleasedImage(service_advancedwakeonDispense_BtnRight, (leImage*)&Menu_chevron_right);
    service_advancedwakeonDispense_BtnRight->fn->setReleasedEventCallback(service_advancedwakeonDispense_BtnRight, event_service_advancedwakeonDispense_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_BtnRight);

    service_advancedwakeonDispense_BtnLeft = leButtonWidget_New();
    service_advancedwakeonDispense_BtnLeft->fn->setPosition(service_advancedwakeonDispense_BtnLeft, 119, 140);
    service_advancedwakeonDispense_BtnLeft->fn->setSize(service_advancedwakeonDispense_BtnLeft, 40, 45);
    service_advancedwakeonDispense_BtnLeft->fn->setScheme(service_advancedwakeonDispense_BtnLeft, &BlackBack);
    service_advancedwakeonDispense_BtnLeft->fn->setBackgroundType(service_advancedwakeonDispense_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_BtnLeft->fn->setBorderType(service_advancedwakeonDispense_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_advancedwakeonDispense_BtnLeft->fn->setPressedImage(service_advancedwakeonDispense_BtnLeft, (leImage*)&Menu_chevron_left);
    service_advancedwakeonDispense_BtnLeft->fn->setReleasedImage(service_advancedwakeonDispense_BtnLeft, (leImage*)&Menu_chevron_left);
    service_advancedwakeonDispense_BtnLeft->fn->setReleasedEventCallback(service_advancedwakeonDispense_BtnLeft, event_service_advancedwakeonDispense_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_BtnLeft);

    service_advancedwakeonDispense_BtnHome = leButtonWidget_New();
    service_advancedwakeonDispense_BtnHome->fn->setPosition(service_advancedwakeonDispense_BtnHome, 435, 225);
    service_advancedwakeonDispense_BtnHome->fn->setSize(service_advancedwakeonDispense_BtnHome, 40, 40);
    service_advancedwakeonDispense_BtnHome->fn->setScheme(service_advancedwakeonDispense_BtnHome, &BlackBack);
    service_advancedwakeonDispense_BtnHome->fn->setBackgroundType(service_advancedwakeonDispense_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_advancedwakeonDispense_BtnHome->fn->setBorderType(service_advancedwakeonDispense_BtnHome, LE_WIDGET_BORDER_NONE);
    service_advancedwakeonDispense_BtnHome->fn->setPressedImage(service_advancedwakeonDispense_BtnHome, (leImage*)&Menu_home);
    service_advancedwakeonDispense_BtnHome->fn->setReleasedImage(service_advancedwakeonDispense_BtnHome, (leImage*)&Menu_home);
    service_advancedwakeonDispense_BtnHome->fn->setReleasedEventCallback(service_advancedwakeonDispense_BtnHome, event_service_advancedwakeonDispense_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedwakeonDispense_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advancedwakeonDispense_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advancedwakeonDispense(void)
{
}

void screenHide_service_advancedwakeonDispense(void)
{
    service_advancedwakeonDispense_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advancedwakeonDispense_Layer_0_FillPanel = NULL;
    service_advancedwakeonDispense_LblSeconds = NULL;
    service_advancedwakeonDispense_LblWakeOnSleepValue = NULL;
    service_advancedwakeonDispense_LblSubTitle = NULL;
    service_advancedwakeonDispense_ImgLine = NULL;
    service_advancedwakeonDispense_LblTitle = NULL;
    service_advancedwakeonDispense_BtnExit = NULL;
    service_advancedwakeonDispense_BtnRight = NULL;
    service_advancedwakeonDispense_BtnLeft = NULL;
    service_advancedwakeonDispense_BtnHome = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advancedwakeonDispense(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advancedwakeonDispense(uint32_t lyrIdx)
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

