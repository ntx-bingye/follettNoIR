#include "gfx/legato/generated/screen/le_gen_screen_service_wakeonsleep.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_wakeonsleep_Layer_0_FillPanel;
leLabelWidget* service_wakeonsleep_LblTitle;
leImageWidget* service_wakeonsleep_ImgLine;
leLabelWidget* service_wakeonsleep_LblSubTitle;
leLabelWidget* service_wakeonsleep_LblWakeOnSleepValue;
leLabelWidget* service_wakeonsleep_LblSeconds;
leButtonWidget* service_wakeonsleep_BtnExit;
leButtonWidget* service_wakeonsleep_BtnRight;
leButtonWidget* service_wakeonsleep_BtnLeft;
leButtonWidget* service_wakeonsleep_BtnHome;
leButtonWidget* service_wakeonsleep_BtnTroubleshoot;
leButtonWidget* service_wakeonsleep_BtnSystemInformation;
leButtonWidget* service_wakeonsleep_BtnService;
leButtonWidget* service_wakeonsleep_BtnOperationSettings;
leButtonWidget* service_wakeonsleep_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_wakeonsleep(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_wakeonsleep(void)
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

    service_wakeonsleep_Layer_0_FillPanel = leWidget_New();
    service_wakeonsleep_Layer_0_FillPanel->fn->setPosition(service_wakeonsleep_Layer_0_FillPanel, 0, 0);
    service_wakeonsleep_Layer_0_FillPanel->fn->setSize(service_wakeonsleep_Layer_0_FillPanel, 480, 272);
    service_wakeonsleep_Layer_0_FillPanel->fn->setScheme(service_wakeonsleep_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_wakeonsleep_Layer_0_FillPanel);

    service_wakeonsleep_LblTitle = leLabelWidget_New();
    service_wakeonsleep_LblTitle->fn->setPosition(service_wakeonsleep_LblTitle, 228, 29);
    service_wakeonsleep_LblTitle->fn->setSize(service_wakeonsleep_LblTitle, 222, 25);
    service_wakeonsleep_LblTitle->fn->setScheme(service_wakeonsleep_LblTitle, &Label_FontWhite);
    service_wakeonsleep_LblTitle->fn->setBackgroundType(service_wakeonsleep_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_LblTitle->fn->setHAlignment(service_wakeonsleep_LblTitle, LE_HALIGN_CENTER);
    service_wakeonsleep_LblTitle->fn->setString(service_wakeonsleep_LblTitle, (leString*)&string_SERVICE9_WakeOnSleep);
    root0->fn->addChild(root0, (leWidget*)service_wakeonsleep_LblTitle);

    service_wakeonsleep_ImgLine = leImageWidget_New();
    service_wakeonsleep_ImgLine->fn->setPosition(service_wakeonsleep_ImgLine, 218, 62);
    service_wakeonsleep_ImgLine->fn->setSize(service_wakeonsleep_ImgLine, 240, 5);
    service_wakeonsleep_ImgLine->fn->setScheme(service_wakeonsleep_ImgLine, &BlackBack);
    service_wakeonsleep_ImgLine->fn->setBackgroundType(service_wakeonsleep_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_ImgLine->fn->setBorderType(service_wakeonsleep_ImgLine, LE_WIDGET_BORDER_NONE);
    service_wakeonsleep_ImgLine->fn->setImage(service_wakeonsleep_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_wakeonsleep_ImgLine);

    service_wakeonsleep_LblSubTitle = leLabelWidget_New();
    service_wakeonsleep_LblSubTitle->fn->setPosition(service_wakeonsleep_LblSubTitle, 220, 80);
    service_wakeonsleep_LblSubTitle->fn->setSize(service_wakeonsleep_LblSubTitle, 237, 30);
    service_wakeonsleep_LblSubTitle->fn->setScheme(service_wakeonsleep_LblSubTitle, &Label_FontWhite);
    service_wakeonsleep_LblSubTitle->fn->setBackgroundType(service_wakeonsleep_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_LblSubTitle->fn->setHAlignment(service_wakeonsleep_LblSubTitle, LE_HALIGN_CENTER);
    service_wakeonsleep_LblSubTitle->fn->setString(service_wakeonsleep_LblSubTitle, (leString*)&string_SERVICE9_AdjustInterval);
    root0->fn->addChild(root0, (leWidget*)service_wakeonsleep_LblSubTitle);

    service_wakeonsleep_LblWakeOnSleepValue = leLabelWidget_New();
    service_wakeonsleep_LblWakeOnSleepValue->fn->setPosition(service_wakeonsleep_LblWakeOnSleepValue, 278, 136);
    service_wakeonsleep_LblWakeOnSleepValue->fn->setSize(service_wakeonsleep_LblWakeOnSleepValue, 112, 55);
    service_wakeonsleep_LblWakeOnSleepValue->fn->setScheme(service_wakeonsleep_LblWakeOnSleepValue, &Label_FontWhite);
    service_wakeonsleep_LblWakeOnSleepValue->fn->setBackgroundType(service_wakeonsleep_LblWakeOnSleepValue, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_LblWakeOnSleepValue->fn->setHAlignment(service_wakeonsleep_LblWakeOnSleepValue, LE_HALIGN_CENTER);
    service_wakeonsleep_LblWakeOnSleepValue->fn->setString(service_wakeonsleep_LblWakeOnSleepValue, (leString*)&string_SERVICE9_WakeOnSleepValue);
    root0->fn->addChild(root0, (leWidget*)service_wakeonsleep_LblWakeOnSleepValue);

    service_wakeonsleep_LblSeconds = leLabelWidget_New();
    service_wakeonsleep_LblSeconds->fn->setPosition(service_wakeonsleep_LblSeconds, 220, 192);
    service_wakeonsleep_LblSeconds->fn->setSize(service_wakeonsleep_LblSeconds, 237, 24);
    service_wakeonsleep_LblSeconds->fn->setScheme(service_wakeonsleep_LblSeconds, &Label_FontWhite);
    service_wakeonsleep_LblSeconds->fn->setBackgroundType(service_wakeonsleep_LblSeconds, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_LblSeconds->fn->setHAlignment(service_wakeonsleep_LblSeconds, LE_HALIGN_CENTER);
    service_wakeonsleep_LblSeconds->fn->setString(service_wakeonsleep_LblSeconds, (leString*)&string_SERVICE9_Seconds);
    root0->fn->addChild(root0, (leWidget*)service_wakeonsleep_LblSeconds);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_wakeonsleep_BtnExit = leButtonWidget_New();
    service_wakeonsleep_BtnExit->fn->setPosition(service_wakeonsleep_BtnExit, 415, 2);
    service_wakeonsleep_BtnExit->fn->setSize(service_wakeonsleep_BtnExit, 60, 60);
    service_wakeonsleep_BtnExit->fn->setScheme(service_wakeonsleep_BtnExit, &BlackBack);
    service_wakeonsleep_BtnExit->fn->setBackgroundType(service_wakeonsleep_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_BtnExit->fn->setBorderType(service_wakeonsleep_BtnExit, LE_WIDGET_BORDER_NONE);
    service_wakeonsleep_BtnExit->fn->setHAlignment(service_wakeonsleep_BtnExit, LE_HALIGN_RIGHT);
    service_wakeonsleep_BtnExit->fn->setVAlignment(service_wakeonsleep_BtnExit, LE_VALIGN_TOP);
    service_wakeonsleep_BtnExit->fn->setMargins(service_wakeonsleep_BtnExit, 4, 10, 10, 4);
    service_wakeonsleep_BtnExit->fn->setPressedImage(service_wakeonsleep_BtnExit, (leImage*)&Menu_exit_white);
    service_wakeonsleep_BtnExit->fn->setReleasedImage(service_wakeonsleep_BtnExit, (leImage*)&Menu_exit_white);
    service_wakeonsleep_BtnExit->fn->setReleasedEventCallback(service_wakeonsleep_BtnExit, event_service_wakeonsleep_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnExit);

    service_wakeonsleep_BtnRight = leButtonWidget_New();
    service_wakeonsleep_BtnRight->fn->setPosition(service_wakeonsleep_BtnRight, 388, 142);
    service_wakeonsleep_BtnRight->fn->setSize(service_wakeonsleep_BtnRight, 40, 45);
    service_wakeonsleep_BtnRight->fn->setScheme(service_wakeonsleep_BtnRight, &BlackBack);
    service_wakeonsleep_BtnRight->fn->setBackgroundType(service_wakeonsleep_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_BtnRight->fn->setBorderType(service_wakeonsleep_BtnRight, LE_WIDGET_BORDER_NONE);
    service_wakeonsleep_BtnRight->fn->setPressedImage(service_wakeonsleep_BtnRight, (leImage*)&Menu_chevron_right);
    service_wakeonsleep_BtnRight->fn->setReleasedImage(service_wakeonsleep_BtnRight, (leImage*)&Menu_chevron_right);
    service_wakeonsleep_BtnRight->fn->setReleasedEventCallback(service_wakeonsleep_BtnRight, event_service_wakeonsleep_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnRight);

    service_wakeonsleep_BtnLeft = leButtonWidget_New();
    service_wakeonsleep_BtnLeft->fn->setPosition(service_wakeonsleep_BtnLeft, 241, 142);
    service_wakeonsleep_BtnLeft->fn->setSize(service_wakeonsleep_BtnLeft, 40, 45);
    service_wakeonsleep_BtnLeft->fn->setScheme(service_wakeonsleep_BtnLeft, &BlackBack);
    service_wakeonsleep_BtnLeft->fn->setBackgroundType(service_wakeonsleep_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_BtnLeft->fn->setBorderType(service_wakeonsleep_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_wakeonsleep_BtnLeft->fn->setPressedImage(service_wakeonsleep_BtnLeft, (leImage*)&Menu_chevron_left);
    service_wakeonsleep_BtnLeft->fn->setReleasedImage(service_wakeonsleep_BtnLeft, (leImage*)&Menu_chevron_left);
    service_wakeonsleep_BtnLeft->fn->setReleasedEventCallback(service_wakeonsleep_BtnLeft, event_service_wakeonsleep_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnLeft);

    service_wakeonsleep_BtnHome = leButtonWidget_New();
    service_wakeonsleep_BtnHome->fn->setPosition(service_wakeonsleep_BtnHome, 435, 225);
    service_wakeonsleep_BtnHome->fn->setSize(service_wakeonsleep_BtnHome, 40, 40);
    service_wakeonsleep_BtnHome->fn->setScheme(service_wakeonsleep_BtnHome, &BlackBack);
    service_wakeonsleep_BtnHome->fn->setBackgroundType(service_wakeonsleep_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_wakeonsleep_BtnHome->fn->setBorderType(service_wakeonsleep_BtnHome, LE_WIDGET_BORDER_NONE);
    service_wakeonsleep_BtnHome->fn->setPressedImage(service_wakeonsleep_BtnHome, (leImage*)&Menu_home);
    service_wakeonsleep_BtnHome->fn->setReleasedImage(service_wakeonsleep_BtnHome, (leImage*)&Menu_home);
    service_wakeonsleep_BtnHome->fn->setReleasedEventCallback(service_wakeonsleep_BtnHome, event_service_wakeonsleep_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnHome);

    service_wakeonsleep_BtnTroubleshoot = leButtonWidget_New();
    service_wakeonsleep_BtnTroubleshoot->fn->setPosition(service_wakeonsleep_BtnTroubleshoot, 0, 217);
    service_wakeonsleep_BtnTroubleshoot->fn->setSize(service_wakeonsleep_BtnTroubleshoot, 200, 55);
    service_wakeonsleep_BtnTroubleshoot->fn->setScheme(service_wakeonsleep_BtnTroubleshoot, &menu_btn2);
    service_wakeonsleep_BtnTroubleshoot->fn->setHAlignment(service_wakeonsleep_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_wakeonsleep_BtnTroubleshoot->fn->setString(service_wakeonsleep_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_wakeonsleep_BtnTroubleshoot->fn->setPressedImage(service_wakeonsleep_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_wakeonsleep_BtnTroubleshoot->fn->setReleasedImage(service_wakeonsleep_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_wakeonsleep_BtnTroubleshoot->fn->setImageMargin(service_wakeonsleep_BtnTroubleshoot, 5);
    service_wakeonsleep_BtnTroubleshoot->fn->setReleasedEventCallback(service_wakeonsleep_BtnTroubleshoot, event_service_wakeonsleep_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnTroubleshoot);

    service_wakeonsleep_BtnSystemInformation = leButtonWidget_New();
    service_wakeonsleep_BtnSystemInformation->fn->setPosition(service_wakeonsleep_BtnSystemInformation, 0, 163);
    service_wakeonsleep_BtnSystemInformation->fn->setSize(service_wakeonsleep_BtnSystemInformation, 200, 54);
    service_wakeonsleep_BtnSystemInformation->fn->setScheme(service_wakeonsleep_BtnSystemInformation, &menu_btn2);
    service_wakeonsleep_BtnSystemInformation->fn->setHAlignment(service_wakeonsleep_BtnSystemInformation, LE_HALIGN_LEFT);
    service_wakeonsleep_BtnSystemInformation->fn->setString(service_wakeonsleep_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_wakeonsleep_BtnSystemInformation->fn->setPressedImage(service_wakeonsleep_BtnSystemInformation, (leImage*)&Menu_bar);
    service_wakeonsleep_BtnSystemInformation->fn->setReleasedImage(service_wakeonsleep_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_wakeonsleep_BtnSystemInformation->fn->setImageMargin(service_wakeonsleep_BtnSystemInformation, 5);
    service_wakeonsleep_BtnSystemInformation->fn->setReleasedEventCallback(service_wakeonsleep_BtnSystemInformation, event_service_wakeonsleep_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnSystemInformation);

    service_wakeonsleep_BtnService = leButtonWidget_New();
    service_wakeonsleep_BtnService->fn->setPosition(service_wakeonsleep_BtnService, 0, 109);
    service_wakeonsleep_BtnService->fn->setSize(service_wakeonsleep_BtnService, 200, 54);
    service_wakeonsleep_BtnService->fn->setScheme(service_wakeonsleep_BtnService, &Button_Gray2);
    service_wakeonsleep_BtnService->fn->setHAlignment(service_wakeonsleep_BtnService, LE_HALIGN_LEFT);
    service_wakeonsleep_BtnService->fn->setString(service_wakeonsleep_BtnService, (leString*)&string_MENU_Service);
    service_wakeonsleep_BtnService->fn->setPressedImage(service_wakeonsleep_BtnService, (leImage*)&Menu_bar);
    service_wakeonsleep_BtnService->fn->setReleasedImage(service_wakeonsleep_BtnService, (leImage*)&Menu_bar);
    service_wakeonsleep_BtnService->fn->setImageMargin(service_wakeonsleep_BtnService, 5);
    service_wakeonsleep_BtnService->fn->setReleasedEventCallback(service_wakeonsleep_BtnService, event_service_wakeonsleep_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnService);

    service_wakeonsleep_BtnOperationSettings = leButtonWidget_New();
    service_wakeonsleep_BtnOperationSettings->fn->setPosition(service_wakeonsleep_BtnOperationSettings, 0, 55);
    service_wakeonsleep_BtnOperationSettings->fn->setSize(service_wakeonsleep_BtnOperationSettings, 200, 54);
    service_wakeonsleep_BtnOperationSettings->fn->setScheme(service_wakeonsleep_BtnOperationSettings, &menu_btn2);
    service_wakeonsleep_BtnOperationSettings->fn->setHAlignment(service_wakeonsleep_BtnOperationSettings, LE_HALIGN_LEFT);
    service_wakeonsleep_BtnOperationSettings->fn->setString(service_wakeonsleep_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_wakeonsleep_BtnOperationSettings->fn->setPressedImage(service_wakeonsleep_BtnOperationSettings, (leImage*)&Menu_bar);
    service_wakeonsleep_BtnOperationSettings->fn->setReleasedImage(service_wakeonsleep_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_wakeonsleep_BtnOperationSettings->fn->setImageMargin(service_wakeonsleep_BtnOperationSettings, 5);
    service_wakeonsleep_BtnOperationSettings->fn->setReleasedEventCallback(service_wakeonsleep_BtnOperationSettings, event_service_wakeonsleep_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnOperationSettings);

    service_wakeonsleep_BtnMaintenance = leButtonWidget_New();
    service_wakeonsleep_BtnMaintenance->fn->setPosition(service_wakeonsleep_BtnMaintenance, 0, 0);
    service_wakeonsleep_BtnMaintenance->fn->setSize(service_wakeonsleep_BtnMaintenance, 200, 55);
    service_wakeonsleep_BtnMaintenance->fn->setScheme(service_wakeonsleep_BtnMaintenance, &menu_btn2);
    service_wakeonsleep_BtnMaintenance->fn->setHAlignment(service_wakeonsleep_BtnMaintenance, LE_HALIGN_LEFT);
    service_wakeonsleep_BtnMaintenance->fn->setString(service_wakeonsleep_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_wakeonsleep_BtnMaintenance->fn->setPressedImage(service_wakeonsleep_BtnMaintenance, (leImage*)&Menu_bar);
    service_wakeonsleep_BtnMaintenance->fn->setReleasedImage(service_wakeonsleep_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_wakeonsleep_BtnMaintenance->fn->setImageMargin(service_wakeonsleep_BtnMaintenance, 5);
    service_wakeonsleep_BtnMaintenance->fn->setReleasedEventCallback(service_wakeonsleep_BtnMaintenance, event_service_wakeonsleep_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_wakeonsleep_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_wakeonsleep_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_wakeonsleep(void)
{
}

void screenHide_service_wakeonsleep(void)
{
    service_wakeonsleep_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_wakeonsleep_Layer_0_FillPanel = NULL;
    service_wakeonsleep_LblTitle = NULL;
    service_wakeonsleep_ImgLine = NULL;
    service_wakeonsleep_LblSubTitle = NULL;
    service_wakeonsleep_LblWakeOnSleepValue = NULL;
    service_wakeonsleep_LblSeconds = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_wakeonsleep_BtnExit = NULL;
    service_wakeonsleep_BtnRight = NULL;
    service_wakeonsleep_BtnLeft = NULL;
    service_wakeonsleep_BtnHome = NULL;
    service_wakeonsleep_BtnTroubleshoot = NULL;
    service_wakeonsleep_BtnSystemInformation = NULL;
    service_wakeonsleep_BtnService = NULL;
    service_wakeonsleep_BtnOperationSettings = NULL;
    service_wakeonsleep_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_wakeonsleep(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_wakeonsleep(uint32_t lyrIdx)
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

