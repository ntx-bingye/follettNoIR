#include "gfx/legato/generated/screen/le_gen_screen_service_screentimeout.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_screentimeout_Layer_0_FillPanel;
leLabelWidget* service_screentimeout_LblTitle;
leImageWidget* service_screentimeout_ImgLine;
leLabelWidget* service_screentimeout_LblSubTitle;
leLabelWidget* service_screentimeout_LblScreenTimeoutValue;
leLabelWidget* service_screentimeout_LblSeconds;
leButtonWidget* service_screentimeout_BtnExit;
leButtonWidget* service_screentimeout_BtnRight;
leButtonWidget* service_screentimeout_BtnLeft;
leButtonWidget* service_screentimeout_BtnHome;
leButtonWidget* service_screentimeout_BtnSystemInformation;
leButtonWidget* service_screentimeout_BtnTroubleshoot;
leButtonWidget* service_screentimeout_BtnService;
leButtonWidget* service_screentimeout_BtnOperationSettings;
leButtonWidget* service_screentimeout_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_screentimeout(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_screentimeout(void)
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

    service_screentimeout_Layer_0_FillPanel = leWidget_New();
    service_screentimeout_Layer_0_FillPanel->fn->setPosition(service_screentimeout_Layer_0_FillPanel, 0, 0);
    service_screentimeout_Layer_0_FillPanel->fn->setSize(service_screentimeout_Layer_0_FillPanel, 480, 272);
    service_screentimeout_Layer_0_FillPanel->fn->setScheme(service_screentimeout_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_screentimeout_Layer_0_FillPanel);

    service_screentimeout_LblTitle = leLabelWidget_New();
    service_screentimeout_LblTitle->fn->setPosition(service_screentimeout_LblTitle, 228, 29);
    service_screentimeout_LblTitle->fn->setSize(service_screentimeout_LblTitle, 222, 25);
    service_screentimeout_LblTitle->fn->setScheme(service_screentimeout_LblTitle, &Label_FontWhite);
    service_screentimeout_LblTitle->fn->setBackgroundType(service_screentimeout_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_LblTitle->fn->setHAlignment(service_screentimeout_LblTitle, LE_HALIGN_CENTER);
    service_screentimeout_LblTitle->fn->setString(service_screentimeout_LblTitle, (leString*)&string_SERVICE13_ScreenTimeout);
    root0->fn->addChild(root0, (leWidget*)service_screentimeout_LblTitle);

    service_screentimeout_ImgLine = leImageWidget_New();
    service_screentimeout_ImgLine->fn->setPosition(service_screentimeout_ImgLine, 218, 62);
    service_screentimeout_ImgLine->fn->setSize(service_screentimeout_ImgLine, 240, 5);
    service_screentimeout_ImgLine->fn->setScheme(service_screentimeout_ImgLine, &BlackBack);
    service_screentimeout_ImgLine->fn->setBackgroundType(service_screentimeout_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_ImgLine->fn->setBorderType(service_screentimeout_ImgLine, LE_WIDGET_BORDER_NONE);
    service_screentimeout_ImgLine->fn->setImage(service_screentimeout_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_screentimeout_ImgLine);

    service_screentimeout_LblSubTitle = leLabelWidget_New();
    service_screentimeout_LblSubTitle->fn->setPosition(service_screentimeout_LblSubTitle, 220, 80);
    service_screentimeout_LblSubTitle->fn->setSize(service_screentimeout_LblSubTitle, 237, 30);
    service_screentimeout_LblSubTitle->fn->setScheme(service_screentimeout_LblSubTitle, &Label_FontWhite);
    service_screentimeout_LblSubTitle->fn->setBackgroundType(service_screentimeout_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_LblSubTitle->fn->setHAlignment(service_screentimeout_LblSubTitle, LE_HALIGN_CENTER);
    service_screentimeout_LblSubTitle->fn->setString(service_screentimeout_LblSubTitle, (leString*)&string_SERVICE13_AdjusInterval);
    root0->fn->addChild(root0, (leWidget*)service_screentimeout_LblSubTitle);

    service_screentimeout_LblScreenTimeoutValue = leLabelWidget_New();
    service_screentimeout_LblScreenTimeoutValue->fn->setPosition(service_screentimeout_LblScreenTimeoutValue, 278, 136);
    service_screentimeout_LblScreenTimeoutValue->fn->setSize(service_screentimeout_LblScreenTimeoutValue, 112, 55);
    service_screentimeout_LblScreenTimeoutValue->fn->setScheme(service_screentimeout_LblScreenTimeoutValue, &Label_FontWhite);
    service_screentimeout_LblScreenTimeoutValue->fn->setBackgroundType(service_screentimeout_LblScreenTimeoutValue, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_LblScreenTimeoutValue->fn->setHAlignment(service_screentimeout_LblScreenTimeoutValue, LE_HALIGN_CENTER);
    service_screentimeout_LblScreenTimeoutValue->fn->setString(service_screentimeout_LblScreenTimeoutValue, (leString*)&string_SERVICE13_ScreenTimeoutValue);
    root0->fn->addChild(root0, (leWidget*)service_screentimeout_LblScreenTimeoutValue);

    service_screentimeout_LblSeconds = leLabelWidget_New();
    service_screentimeout_LblSeconds->fn->setPosition(service_screentimeout_LblSeconds, 220, 192);
    service_screentimeout_LblSeconds->fn->setSize(service_screentimeout_LblSeconds, 237, 24);
    service_screentimeout_LblSeconds->fn->setScheme(service_screentimeout_LblSeconds, &Label_FontWhite);
    service_screentimeout_LblSeconds->fn->setBackgroundType(service_screentimeout_LblSeconds, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_LblSeconds->fn->setHAlignment(service_screentimeout_LblSeconds, LE_HALIGN_CENTER);
    service_screentimeout_LblSeconds->fn->setString(service_screentimeout_LblSeconds, (leString*)&string_SERVICE13_Seconds);
    root0->fn->addChild(root0, (leWidget*)service_screentimeout_LblSeconds);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_screentimeout_BtnExit = leButtonWidget_New();
    service_screentimeout_BtnExit->fn->setPosition(service_screentimeout_BtnExit, 415, 2);
    service_screentimeout_BtnExit->fn->setSize(service_screentimeout_BtnExit, 60, 60);
    service_screentimeout_BtnExit->fn->setScheme(service_screentimeout_BtnExit, &BlackBack);
    service_screentimeout_BtnExit->fn->setBackgroundType(service_screentimeout_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_BtnExit->fn->setBorderType(service_screentimeout_BtnExit, LE_WIDGET_BORDER_NONE);
    service_screentimeout_BtnExit->fn->setHAlignment(service_screentimeout_BtnExit, LE_HALIGN_RIGHT);
    service_screentimeout_BtnExit->fn->setVAlignment(service_screentimeout_BtnExit, LE_VALIGN_TOP);
    service_screentimeout_BtnExit->fn->setMargins(service_screentimeout_BtnExit, 4, 10, 10, 4);
    service_screentimeout_BtnExit->fn->setPressedImage(service_screentimeout_BtnExit, (leImage*)&Menu_exit_white);
    service_screentimeout_BtnExit->fn->setReleasedImage(service_screentimeout_BtnExit, (leImage*)&Menu_exit_white);
    service_screentimeout_BtnExit->fn->setReleasedEventCallback(service_screentimeout_BtnExit, event_service_screentimeout_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnExit);

    service_screentimeout_BtnRight = leButtonWidget_New();
    service_screentimeout_BtnRight->fn->setPosition(service_screentimeout_BtnRight, 388, 142);
    service_screentimeout_BtnRight->fn->setSize(service_screentimeout_BtnRight, 40, 45);
    service_screentimeout_BtnRight->fn->setScheme(service_screentimeout_BtnRight, &BlackBack);
    service_screentimeout_BtnRight->fn->setBackgroundType(service_screentimeout_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_BtnRight->fn->setBorderType(service_screentimeout_BtnRight, LE_WIDGET_BORDER_NONE);
    service_screentimeout_BtnRight->fn->setPressedImage(service_screentimeout_BtnRight, (leImage*)&Menu_chevron_right);
    service_screentimeout_BtnRight->fn->setReleasedImage(service_screentimeout_BtnRight, (leImage*)&Menu_chevron_right);
    service_screentimeout_BtnRight->fn->setReleasedEventCallback(service_screentimeout_BtnRight, event_service_screentimeout_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnRight);

    service_screentimeout_BtnLeft = leButtonWidget_New();
    service_screentimeout_BtnLeft->fn->setPosition(service_screentimeout_BtnLeft, 241, 142);
    service_screentimeout_BtnLeft->fn->setSize(service_screentimeout_BtnLeft, 40, 45);
    service_screentimeout_BtnLeft->fn->setScheme(service_screentimeout_BtnLeft, &BlackBack);
    service_screentimeout_BtnLeft->fn->setBackgroundType(service_screentimeout_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_BtnLeft->fn->setBorderType(service_screentimeout_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_screentimeout_BtnLeft->fn->setPressedImage(service_screentimeout_BtnLeft, (leImage*)&Menu_chevron_left);
    service_screentimeout_BtnLeft->fn->setReleasedImage(service_screentimeout_BtnLeft, (leImage*)&Menu_chevron_left);
    service_screentimeout_BtnLeft->fn->setReleasedEventCallback(service_screentimeout_BtnLeft, event_service_screentimeout_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnLeft);

    service_screentimeout_BtnHome = leButtonWidget_New();
    service_screentimeout_BtnHome->fn->setPosition(service_screentimeout_BtnHome, 435, 225);
    service_screentimeout_BtnHome->fn->setSize(service_screentimeout_BtnHome, 40, 40);
    service_screentimeout_BtnHome->fn->setScheme(service_screentimeout_BtnHome, &BlackBack);
    service_screentimeout_BtnHome->fn->setBackgroundType(service_screentimeout_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_screentimeout_BtnHome->fn->setBorderType(service_screentimeout_BtnHome, LE_WIDGET_BORDER_NONE);
    service_screentimeout_BtnHome->fn->setPressedImage(service_screentimeout_BtnHome, (leImage*)&Menu_home);
    service_screentimeout_BtnHome->fn->setReleasedImage(service_screentimeout_BtnHome, (leImage*)&Menu_home);
    service_screentimeout_BtnHome->fn->setReleasedEventCallback(service_screentimeout_BtnHome, event_service_screentimeout_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnHome);

    service_screentimeout_BtnSystemInformation = leButtonWidget_New();
    service_screentimeout_BtnSystemInformation->fn->setPosition(service_screentimeout_BtnSystemInformation, 0, 163);
    service_screentimeout_BtnSystemInformation->fn->setSize(service_screentimeout_BtnSystemInformation, 200, 54);
    service_screentimeout_BtnSystemInformation->fn->setScheme(service_screentimeout_BtnSystemInformation, &menu_btn2);
    service_screentimeout_BtnSystemInformation->fn->setHAlignment(service_screentimeout_BtnSystemInformation, LE_HALIGN_LEFT);
    service_screentimeout_BtnSystemInformation->fn->setString(service_screentimeout_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_screentimeout_BtnSystemInformation->fn->setPressedImage(service_screentimeout_BtnSystemInformation, (leImage*)&Menu_bar);
    service_screentimeout_BtnSystemInformation->fn->setReleasedImage(service_screentimeout_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_screentimeout_BtnSystemInformation->fn->setImageMargin(service_screentimeout_BtnSystemInformation, 5);
    service_screentimeout_BtnSystemInformation->fn->setReleasedEventCallback(service_screentimeout_BtnSystemInformation, event_service_screentimeout_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnSystemInformation);

    service_screentimeout_BtnTroubleshoot = leButtonWidget_New();
    service_screentimeout_BtnTroubleshoot->fn->setPosition(service_screentimeout_BtnTroubleshoot, 0, 217);
    service_screentimeout_BtnTroubleshoot->fn->setSize(service_screentimeout_BtnTroubleshoot, 200, 55);
    service_screentimeout_BtnTroubleshoot->fn->setScheme(service_screentimeout_BtnTroubleshoot, &menu_btn2);
    service_screentimeout_BtnTroubleshoot->fn->setHAlignment(service_screentimeout_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_screentimeout_BtnTroubleshoot->fn->setString(service_screentimeout_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_screentimeout_BtnTroubleshoot->fn->setPressedImage(service_screentimeout_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_screentimeout_BtnTroubleshoot->fn->setReleasedImage(service_screentimeout_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_screentimeout_BtnTroubleshoot->fn->setImageMargin(service_screentimeout_BtnTroubleshoot, 5);
    service_screentimeout_BtnTroubleshoot->fn->setReleasedEventCallback(service_screentimeout_BtnTroubleshoot, event_service_screentimeout_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnTroubleshoot);

    service_screentimeout_BtnService = leButtonWidget_New();
    service_screentimeout_BtnService->fn->setPosition(service_screentimeout_BtnService, 0, 109);
    service_screentimeout_BtnService->fn->setSize(service_screentimeout_BtnService, 200, 54);
    service_screentimeout_BtnService->fn->setScheme(service_screentimeout_BtnService, &Button_Gray2);
    service_screentimeout_BtnService->fn->setHAlignment(service_screentimeout_BtnService, LE_HALIGN_LEFT);
    service_screentimeout_BtnService->fn->setString(service_screentimeout_BtnService, (leString*)&string_MENU_Service);
    service_screentimeout_BtnService->fn->setPressedImage(service_screentimeout_BtnService, (leImage*)&Menu_bar);
    service_screentimeout_BtnService->fn->setReleasedImage(service_screentimeout_BtnService, (leImage*)&Menu_bar);
    service_screentimeout_BtnService->fn->setImageMargin(service_screentimeout_BtnService, 5);
    service_screentimeout_BtnService->fn->setReleasedEventCallback(service_screentimeout_BtnService, event_service_screentimeout_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnService);

    service_screentimeout_BtnOperationSettings = leButtonWidget_New();
    service_screentimeout_BtnOperationSettings->fn->setPosition(service_screentimeout_BtnOperationSettings, 0, 55);
    service_screentimeout_BtnOperationSettings->fn->setSize(service_screentimeout_BtnOperationSettings, 200, 54);
    service_screentimeout_BtnOperationSettings->fn->setScheme(service_screentimeout_BtnOperationSettings, &menu_btn2);
    service_screentimeout_BtnOperationSettings->fn->setHAlignment(service_screentimeout_BtnOperationSettings, LE_HALIGN_LEFT);
    service_screentimeout_BtnOperationSettings->fn->setString(service_screentimeout_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_screentimeout_BtnOperationSettings->fn->setPressedImage(service_screentimeout_BtnOperationSettings, (leImage*)&Menu_bar);
    service_screentimeout_BtnOperationSettings->fn->setReleasedImage(service_screentimeout_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_screentimeout_BtnOperationSettings->fn->setImageMargin(service_screentimeout_BtnOperationSettings, 5);
    service_screentimeout_BtnOperationSettings->fn->setReleasedEventCallback(service_screentimeout_BtnOperationSettings, event_service_screentimeout_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnOperationSettings);

    service_screentimeout_BtnMaintenance = leButtonWidget_New();
    service_screentimeout_BtnMaintenance->fn->setPosition(service_screentimeout_BtnMaintenance, 0, 0);
    service_screentimeout_BtnMaintenance->fn->setSize(service_screentimeout_BtnMaintenance, 200, 55);
    service_screentimeout_BtnMaintenance->fn->setScheme(service_screentimeout_BtnMaintenance, &menu_btn2);
    service_screentimeout_BtnMaintenance->fn->setHAlignment(service_screentimeout_BtnMaintenance, LE_HALIGN_LEFT);
    service_screentimeout_BtnMaintenance->fn->setString(service_screentimeout_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_screentimeout_BtnMaintenance->fn->setPressedImage(service_screentimeout_BtnMaintenance, (leImage*)&Menu_bar);
    service_screentimeout_BtnMaintenance->fn->setReleasedImage(service_screentimeout_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_screentimeout_BtnMaintenance->fn->setImageMargin(service_screentimeout_BtnMaintenance, 5);
    service_screentimeout_BtnMaintenance->fn->setReleasedEventCallback(service_screentimeout_BtnMaintenance, event_service_screentimeout_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_screentimeout_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_screentimeout_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_screentimeout(void)
{
}

void screenHide_service_screentimeout(void)
{
    service_screentimeout_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_screentimeout_Layer_0_FillPanel = NULL;
    service_screentimeout_LblTitle = NULL;
    service_screentimeout_ImgLine = NULL;
    service_screentimeout_LblSubTitle = NULL;
    service_screentimeout_LblScreenTimeoutValue = NULL;
    service_screentimeout_LblSeconds = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_screentimeout_BtnExit = NULL;
    service_screentimeout_BtnRight = NULL;
    service_screentimeout_BtnLeft = NULL;
    service_screentimeout_BtnHome = NULL;
    service_screentimeout_BtnSystemInformation = NULL;
    service_screentimeout_BtnTroubleshoot = NULL;
    service_screentimeout_BtnService = NULL;
    service_screentimeout_BtnOperationSettings = NULL;
    service_screentimeout_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_screentimeout(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_screentimeout(uint32_t lyrIdx)
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

