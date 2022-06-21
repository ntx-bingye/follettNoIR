#include "gfx/legato/generated/screen/le_gen_screen_service_advanced_sleepmode.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advanced_sleepmode_Layer_0_FillPanel;
leButtonWidget* service_advanced_sleepmode_BtnExit;
leButtonWidget* service_advanced_sleepmode_BtnRight;
leButtonWidget* service_advanced_sleepmode_BtnLeft;
leButtonWidget* service_advanced_sleepmode_BtnHome;
leLabelWidget* service_advanced_sleepmode_LblMinutes;
leLabelWidget* service_advanced_sleepmode_LblSleepModeValue;
leLabelWidget* service_advanced_sleepmode_LblSubTitle;
leImageWidget* service_advanced_sleepmode_ImgLine;
leLabelWidget* service_advanced_sleepmode_LblTitle;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advanced_sleepmode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advanced_sleepmode(void)
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

    service_advanced_sleepmode_Layer_0_FillPanel = leWidget_New();
    service_advanced_sleepmode_Layer_0_FillPanel->fn->setPosition(service_advanced_sleepmode_Layer_0_FillPanel, 0, 0);
    service_advanced_sleepmode_Layer_0_FillPanel->fn->setSize(service_advanced_sleepmode_Layer_0_FillPanel, 480, 272);
    service_advanced_sleepmode_Layer_0_FillPanel->fn->setScheme(service_advanced_sleepmode_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_Layer_0_FillPanel);

    service_advanced_sleepmode_BtnExit = leButtonWidget_New();
    service_advanced_sleepmode_BtnExit->fn->setPosition(service_advanced_sleepmode_BtnExit, 415, 2);
    service_advanced_sleepmode_BtnExit->fn->setSize(service_advanced_sleepmode_BtnExit, 60, 60);
    service_advanced_sleepmode_BtnExit->fn->setBackgroundType(service_advanced_sleepmode_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_BtnExit->fn->setBorderType(service_advanced_sleepmode_BtnExit, LE_WIDGET_BORDER_NONE);
    service_advanced_sleepmode_BtnExit->fn->setHAlignment(service_advanced_sleepmode_BtnExit, LE_HALIGN_RIGHT);
    service_advanced_sleepmode_BtnExit->fn->setVAlignment(service_advanced_sleepmode_BtnExit, LE_VALIGN_TOP);
    service_advanced_sleepmode_BtnExit->fn->setMargins(service_advanced_sleepmode_BtnExit, 4, 10, 10, 4);
    service_advanced_sleepmode_BtnExit->fn->setPressedImage(service_advanced_sleepmode_BtnExit, (leImage*)&Menu_exit_white);
    service_advanced_sleepmode_BtnExit->fn->setReleasedImage(service_advanced_sleepmode_BtnExit, (leImage*)&Menu_exit_white);
    service_advanced_sleepmode_BtnExit->fn->setReleasedEventCallback(service_advanced_sleepmode_BtnExit, event_service_advanced_sleepmode_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_BtnExit);

    service_advanced_sleepmode_BtnRight = leButtonWidget_New();
    service_advanced_sleepmode_BtnRight->fn->setPosition(service_advanced_sleepmode_BtnRight, 280, 140);
    service_advanced_sleepmode_BtnRight->fn->setSize(service_advanced_sleepmode_BtnRight, 40, 45);
    service_advanced_sleepmode_BtnRight->fn->setScheme(service_advanced_sleepmode_BtnRight, &BlackBack);
    service_advanced_sleepmode_BtnRight->fn->setBackgroundType(service_advanced_sleepmode_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_BtnRight->fn->setBorderType(service_advanced_sleepmode_BtnRight, LE_WIDGET_BORDER_NONE);
    service_advanced_sleepmode_BtnRight->fn->setPressedImage(service_advanced_sleepmode_BtnRight, (leImage*)&Menu_chevron_right);
    service_advanced_sleepmode_BtnRight->fn->setReleasedImage(service_advanced_sleepmode_BtnRight, (leImage*)&Menu_chevron_right);
    service_advanced_sleepmode_BtnRight->fn->setReleasedEventCallback(service_advanced_sleepmode_BtnRight, event_service_advanced_sleepmode_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_BtnRight);

    service_advanced_sleepmode_BtnLeft = leButtonWidget_New();
    service_advanced_sleepmode_BtnLeft->fn->setPosition(service_advanced_sleepmode_BtnLeft, 119, 140);
    service_advanced_sleepmode_BtnLeft->fn->setSize(service_advanced_sleepmode_BtnLeft, 40, 45);
    service_advanced_sleepmode_BtnLeft->fn->setScheme(service_advanced_sleepmode_BtnLeft, &BlackBack);
    service_advanced_sleepmode_BtnLeft->fn->setBackgroundType(service_advanced_sleepmode_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_BtnLeft->fn->setBorderType(service_advanced_sleepmode_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_advanced_sleepmode_BtnLeft->fn->setPressedImage(service_advanced_sleepmode_BtnLeft, (leImage*)&Menu_chevron_left);
    service_advanced_sleepmode_BtnLeft->fn->setReleasedImage(service_advanced_sleepmode_BtnLeft, (leImage*)&Menu_chevron_left);
    service_advanced_sleepmode_BtnLeft->fn->setReleasedEventCallback(service_advanced_sleepmode_BtnLeft, event_service_advanced_sleepmode_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_BtnLeft);

    service_advanced_sleepmode_BtnHome = leButtonWidget_New();
    service_advanced_sleepmode_BtnHome->fn->setPosition(service_advanced_sleepmode_BtnHome, 435, 225);
    service_advanced_sleepmode_BtnHome->fn->setSize(service_advanced_sleepmode_BtnHome, 40, 40);
    service_advanced_sleepmode_BtnHome->fn->setScheme(service_advanced_sleepmode_BtnHome, &BlackBack);
    service_advanced_sleepmode_BtnHome->fn->setBackgroundType(service_advanced_sleepmode_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_BtnHome->fn->setBorderType(service_advanced_sleepmode_BtnHome, LE_WIDGET_BORDER_NONE);
    service_advanced_sleepmode_BtnHome->fn->setPressedImage(service_advanced_sleepmode_BtnHome, (leImage*)&Menu_home);
    service_advanced_sleepmode_BtnHome->fn->setReleasedImage(service_advanced_sleepmode_BtnHome, (leImage*)&Menu_home);
    service_advanced_sleepmode_BtnHome->fn->setReleasedEventCallback(service_advanced_sleepmode_BtnHome, event_service_advanced_sleepmode_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_BtnHome);

    service_advanced_sleepmode_LblMinutes = leLabelWidget_New();
    service_advanced_sleepmode_LblMinutes->fn->setPosition(service_advanced_sleepmode_LblMinutes, 103, 201);
    service_advanced_sleepmode_LblMinutes->fn->setSize(service_advanced_sleepmode_LblMinutes, 237, 24);
    service_advanced_sleepmode_LblMinutes->fn->setScheme(service_advanced_sleepmode_LblMinutes, &Label_FontWhite);
    service_advanced_sleepmode_LblMinutes->fn->setBackgroundType(service_advanced_sleepmode_LblMinutes, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_LblMinutes->fn->setHAlignment(service_advanced_sleepmode_LblMinutes, LE_HALIGN_CENTER);
    service_advanced_sleepmode_LblMinutes->fn->setString(service_advanced_sleepmode_LblMinutes, (leString*)&string_OPSETTING_SLEEPMODE_Minutes);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_LblMinutes);

    service_advanced_sleepmode_LblSleepModeValue = leLabelWidget_New();
    service_advanced_sleepmode_LblSleepModeValue->fn->setPosition(service_advanced_sleepmode_LblSleepModeValue, 159, 140);
    service_advanced_sleepmode_LblSleepModeValue->fn->setSize(service_advanced_sleepmode_LblSleepModeValue, 112, 55);
    service_advanced_sleepmode_LblSleepModeValue->fn->setScheme(service_advanced_sleepmode_LblSleepModeValue, &Label_FontWhite);
    service_advanced_sleepmode_LblSleepModeValue->fn->setBackgroundType(service_advanced_sleepmode_LblSleepModeValue, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_LblSleepModeValue->fn->setHAlignment(service_advanced_sleepmode_LblSleepModeValue, LE_HALIGN_CENTER);
    service_advanced_sleepmode_LblSleepModeValue->fn->setString(service_advanced_sleepmode_LblSleepModeValue, (leString*)&string_OPSETTING_SLEEPMODE_SleepModeValue);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_LblSleepModeValue);

    service_advanced_sleepmode_LblSubTitle = leLabelWidget_New();
    service_advanced_sleepmode_LblSubTitle->fn->setPosition(service_advanced_sleepmode_LblSubTitle, 107, 93);
    service_advanced_sleepmode_LblSubTitle->fn->setSize(service_advanced_sleepmode_LblSubTitle, 237, 30);
    service_advanced_sleepmode_LblSubTitle->fn->setScheme(service_advanced_sleepmode_LblSubTitle, &Label_FontWhite);
    service_advanced_sleepmode_LblSubTitle->fn->setBackgroundType(service_advanced_sleepmode_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_LblSubTitle->fn->setHAlignment(service_advanced_sleepmode_LblSubTitle, LE_HALIGN_CENTER);
    service_advanced_sleepmode_LblSubTitle->fn->setString(service_advanced_sleepmode_LblSubTitle, (leString*)&string_OPSETTING_SLEEPMODE_TimeUntilActivation);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_LblSubTitle);

    service_advanced_sleepmode_ImgLine = leImageWidget_New();
    service_advanced_sleepmode_ImgLine->fn->setPosition(service_advanced_sleepmode_ImgLine, 21, 46);
    service_advanced_sleepmode_ImgLine->fn->setSize(service_advanced_sleepmode_ImgLine, 240, 5);
    service_advanced_sleepmode_ImgLine->fn->setScheme(service_advanced_sleepmode_ImgLine, &BlackBack);
    service_advanced_sleepmode_ImgLine->fn->setBackgroundType(service_advanced_sleepmode_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_ImgLine->fn->setBorderType(service_advanced_sleepmode_ImgLine, LE_WIDGET_BORDER_NONE);
    service_advanced_sleepmode_ImgLine->fn->setImage(service_advanced_sleepmode_ImgLine, (leImage*)&Menu_line);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_ImgLine);

    service_advanced_sleepmode_LblTitle = leLabelWidget_New();
    service_advanced_sleepmode_LblTitle->fn->setPosition(service_advanced_sleepmode_LblTitle, 19, 14);
    service_advanced_sleepmode_LblTitle->fn->setSize(service_advanced_sleepmode_LblTitle, 222, 25);
    service_advanced_sleepmode_LblTitle->fn->setScheme(service_advanced_sleepmode_LblTitle, &Label_FontWhite);
    service_advanced_sleepmode_LblTitle->fn->setBackgroundType(service_advanced_sleepmode_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advanced_sleepmode_LblTitle->fn->setString(service_advanced_sleepmode_LblTitle, (leString*)&string_OPSETTING_SLEEPMODE_SleepMode);
    root1->fn->addChild(root1, (leWidget*)service_advanced_sleepmode_LblTitle);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advanced_sleepmode_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advanced_sleepmode(void)
{
}

void screenHide_service_advanced_sleepmode(void)
{
    service_advanced_sleepmode_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advanced_sleepmode_Layer_0_FillPanel = NULL;
    service_advanced_sleepmode_BtnExit = NULL;
    service_advanced_sleepmode_BtnRight = NULL;
    service_advanced_sleepmode_BtnLeft = NULL;
    service_advanced_sleepmode_BtnHome = NULL;
    service_advanced_sleepmode_LblMinutes = NULL;
    service_advanced_sleepmode_LblSleepModeValue = NULL;
    service_advanced_sleepmode_LblSubTitle = NULL;
    service_advanced_sleepmode_ImgLine = NULL;
    service_advanced_sleepmode_LblTitle = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advanced_sleepmode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advanced_sleepmode(uint32_t lyrIdx)
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

