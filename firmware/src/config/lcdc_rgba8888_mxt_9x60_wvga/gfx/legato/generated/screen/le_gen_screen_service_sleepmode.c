#include "gfx/legato/generated/screen/le_gen_screen_service_sleepmode.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_sleepmode_Layer_0_FillPanel;
leLabelWidget* service_sleepmode_LblTitle;
leImageWidget* service_sleepmode_ImgLine;
leLabelWidget* service_sleepmode_LblSubTitle;
leLabelWidget* service_sleepmode_LblSleepModeValue;
leLabelWidget* service_sleepmode_LblMinutes;
leButtonWidget* service_sleepmode_BtnExit;
leButtonWidget* service_sleepmode_BtnRight;
leButtonWidget* service_sleepmode_BtnLeft;
leButtonWidget* service_sleepmode_BtnHome;
leButtonWidget* service_sleepmode_BtnTroubleshoot;
leButtonWidget* service_sleepmode_BtnSystemInformation;
leButtonWidget* service_sleepmode_BtnService;
leButtonWidget* service_sleepmode_BtnOperationSettings;
leButtonWidget* service_sleepmode_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_sleepmode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_sleepmode(void)
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

    service_sleepmode_Layer_0_FillPanel = leWidget_New();
    service_sleepmode_Layer_0_FillPanel->fn->setPosition(service_sleepmode_Layer_0_FillPanel, 0, 0);
    service_sleepmode_Layer_0_FillPanel->fn->setSize(service_sleepmode_Layer_0_FillPanel, 480, 272);
    service_sleepmode_Layer_0_FillPanel->fn->setScheme(service_sleepmode_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_sleepmode_Layer_0_FillPanel);

    service_sleepmode_LblTitle = leLabelWidget_New();
    service_sleepmode_LblTitle->fn->setPosition(service_sleepmode_LblTitle, 228, 29);
    service_sleepmode_LblTitle->fn->setSize(service_sleepmode_LblTitle, 222, 25);
    service_sleepmode_LblTitle->fn->setScheme(service_sleepmode_LblTitle, &Label_FontWhite);
    service_sleepmode_LblTitle->fn->setBackgroundType(service_sleepmode_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_LblTitle->fn->setHAlignment(service_sleepmode_LblTitle, LE_HALIGN_CENTER);
    service_sleepmode_LblTitle->fn->setString(service_sleepmode_LblTitle, (leString*)&string_SERVICE12_SleepMode);
    root0->fn->addChild(root0, (leWidget*)service_sleepmode_LblTitle);

    service_sleepmode_ImgLine = leImageWidget_New();
    service_sleepmode_ImgLine->fn->setPosition(service_sleepmode_ImgLine, 218, 62);
    service_sleepmode_ImgLine->fn->setSize(service_sleepmode_ImgLine, 240, 5);
    service_sleepmode_ImgLine->fn->setScheme(service_sleepmode_ImgLine, &BlackBack);
    service_sleepmode_ImgLine->fn->setBackgroundType(service_sleepmode_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_ImgLine->fn->setBorderType(service_sleepmode_ImgLine, LE_WIDGET_BORDER_NONE);
    service_sleepmode_ImgLine->fn->setImage(service_sleepmode_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_sleepmode_ImgLine);

    service_sleepmode_LblSubTitle = leLabelWidget_New();
    service_sleepmode_LblSubTitle->fn->setPosition(service_sleepmode_LblSubTitle, 220, 80);
    service_sleepmode_LblSubTitle->fn->setSize(service_sleepmode_LblSubTitle, 237, 30);
    service_sleepmode_LblSubTitle->fn->setScheme(service_sleepmode_LblSubTitle, &Label_FontWhite);
    service_sleepmode_LblSubTitle->fn->setBackgroundType(service_sleepmode_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_LblSubTitle->fn->setHAlignment(service_sleepmode_LblSubTitle, LE_HALIGN_CENTER);
    service_sleepmode_LblSubTitle->fn->setString(service_sleepmode_LblSubTitle, (leString*)&string_SERVICE12_TimeUntilActivation);
    root0->fn->addChild(root0, (leWidget*)service_sleepmode_LblSubTitle);

    service_sleepmode_LblSleepModeValue = leLabelWidget_New();
    service_sleepmode_LblSleepModeValue->fn->setPosition(service_sleepmode_LblSleepModeValue, 278, 136);
    service_sleepmode_LblSleepModeValue->fn->setSize(service_sleepmode_LblSleepModeValue, 112, 55);
    service_sleepmode_LblSleepModeValue->fn->setScheme(service_sleepmode_LblSleepModeValue, &Label_FontWhite);
    service_sleepmode_LblSleepModeValue->fn->setBackgroundType(service_sleepmode_LblSleepModeValue, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_LblSleepModeValue->fn->setHAlignment(service_sleepmode_LblSleepModeValue, LE_HALIGN_CENTER);
    service_sleepmode_LblSleepModeValue->fn->setString(service_sleepmode_LblSleepModeValue, (leString*)&string_SERVICE12_SleepModeValue);
    root0->fn->addChild(root0, (leWidget*)service_sleepmode_LblSleepModeValue);

    service_sleepmode_LblMinutes = leLabelWidget_New();
    service_sleepmode_LblMinutes->fn->setPosition(service_sleepmode_LblMinutes, 220, 192);
    service_sleepmode_LblMinutes->fn->setSize(service_sleepmode_LblMinutes, 237, 24);
    service_sleepmode_LblMinutes->fn->setScheme(service_sleepmode_LblMinutes, &Label_FontWhite);
    service_sleepmode_LblMinutes->fn->setBackgroundType(service_sleepmode_LblMinutes, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_LblMinutes->fn->setHAlignment(service_sleepmode_LblMinutes, LE_HALIGN_CENTER);
    service_sleepmode_LblMinutes->fn->setString(service_sleepmode_LblMinutes, (leString*)&string_SERVICE12_Minutes);
    root0->fn->addChild(root0, (leWidget*)service_sleepmode_LblMinutes);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_sleepmode_BtnExit = leButtonWidget_New();
    service_sleepmode_BtnExit->fn->setPosition(service_sleepmode_BtnExit, 415, 2);
    service_sleepmode_BtnExit->fn->setSize(service_sleepmode_BtnExit, 60, 60);
    service_sleepmode_BtnExit->fn->setScheme(service_sleepmode_BtnExit, &BlackBack);
    service_sleepmode_BtnExit->fn->setBackgroundType(service_sleepmode_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_BtnExit->fn->setBorderType(service_sleepmode_BtnExit, LE_WIDGET_BORDER_NONE);
    service_sleepmode_BtnExit->fn->setHAlignment(service_sleepmode_BtnExit, LE_HALIGN_RIGHT);
    service_sleepmode_BtnExit->fn->setVAlignment(service_sleepmode_BtnExit, LE_VALIGN_TOP);
    service_sleepmode_BtnExit->fn->setPressedImage(service_sleepmode_BtnExit, (leImage*)&Menu_exit_white);
    service_sleepmode_BtnExit->fn->setReleasedImage(service_sleepmode_BtnExit, (leImage*)&Menu_exit_white);
    service_sleepmode_BtnExit->fn->setReleasedEventCallback(service_sleepmode_BtnExit, event_service_sleepmode_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnExit);

    service_sleepmode_BtnRight = leButtonWidget_New();
    service_sleepmode_BtnRight->fn->setPosition(service_sleepmode_BtnRight, 388, 142);
    service_sleepmode_BtnRight->fn->setSize(service_sleepmode_BtnRight, 40, 45);
    service_sleepmode_BtnRight->fn->setScheme(service_sleepmode_BtnRight, &BlackBack);
    service_sleepmode_BtnRight->fn->setBackgroundType(service_sleepmode_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_BtnRight->fn->setBorderType(service_sleepmode_BtnRight, LE_WIDGET_BORDER_NONE);
    service_sleepmode_BtnRight->fn->setPressedImage(service_sleepmode_BtnRight, (leImage*)&Menu_chevron_right);
    service_sleepmode_BtnRight->fn->setReleasedImage(service_sleepmode_BtnRight, (leImage*)&Menu_chevron_right);
    service_sleepmode_BtnRight->fn->setReleasedEventCallback(service_sleepmode_BtnRight, event_service_sleepmode_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnRight);

    service_sleepmode_BtnLeft = leButtonWidget_New();
    service_sleepmode_BtnLeft->fn->setPosition(service_sleepmode_BtnLeft, 241, 142);
    service_sleepmode_BtnLeft->fn->setSize(service_sleepmode_BtnLeft, 40, 45);
    service_sleepmode_BtnLeft->fn->setScheme(service_sleepmode_BtnLeft, &BlackBack);
    service_sleepmode_BtnLeft->fn->setBackgroundType(service_sleepmode_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_BtnLeft->fn->setBorderType(service_sleepmode_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_sleepmode_BtnLeft->fn->setPressedImage(service_sleepmode_BtnLeft, (leImage*)&Menu_chevron_left);
    service_sleepmode_BtnLeft->fn->setReleasedImage(service_sleepmode_BtnLeft, (leImage*)&Menu_chevron_left);
    service_sleepmode_BtnLeft->fn->setReleasedEventCallback(service_sleepmode_BtnLeft, event_service_sleepmode_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnLeft);

    service_sleepmode_BtnHome = leButtonWidget_New();
    service_sleepmode_BtnHome->fn->setPosition(service_sleepmode_BtnHome, 435, 225);
    service_sleepmode_BtnHome->fn->setSize(service_sleepmode_BtnHome, 40, 40);
    service_sleepmode_BtnHome->fn->setScheme(service_sleepmode_BtnHome, &BlackBack);
    service_sleepmode_BtnHome->fn->setBackgroundType(service_sleepmode_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_sleepmode_BtnHome->fn->setBorderType(service_sleepmode_BtnHome, LE_WIDGET_BORDER_NONE);
    service_sleepmode_BtnHome->fn->setPressedImage(service_sleepmode_BtnHome, (leImage*)&Menu_home);
    service_sleepmode_BtnHome->fn->setReleasedImage(service_sleepmode_BtnHome, (leImage*)&Menu_home);
    service_sleepmode_BtnHome->fn->setReleasedEventCallback(service_sleepmode_BtnHome, event_service_sleepmode_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnHome);

    service_sleepmode_BtnTroubleshoot = leButtonWidget_New();
    service_sleepmode_BtnTroubleshoot->fn->setPosition(service_sleepmode_BtnTroubleshoot, 0, 217);
    service_sleepmode_BtnTroubleshoot->fn->setSize(service_sleepmode_BtnTroubleshoot, 200, 55);
    service_sleepmode_BtnTroubleshoot->fn->setScheme(service_sleepmode_BtnTroubleshoot, &menu_btn2);
    service_sleepmode_BtnTroubleshoot->fn->setHAlignment(service_sleepmode_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_sleepmode_BtnTroubleshoot->fn->setString(service_sleepmode_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_sleepmode_BtnTroubleshoot->fn->setPressedImage(service_sleepmode_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_sleepmode_BtnTroubleshoot->fn->setReleasedImage(service_sleepmode_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_sleepmode_BtnTroubleshoot->fn->setImageMargin(service_sleepmode_BtnTroubleshoot, 5);
    service_sleepmode_BtnTroubleshoot->fn->setReleasedEventCallback(service_sleepmode_BtnTroubleshoot, event_service_sleepmode_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnTroubleshoot);

    service_sleepmode_BtnSystemInformation = leButtonWidget_New();
    service_sleepmode_BtnSystemInformation->fn->setPosition(service_sleepmode_BtnSystemInformation, 0, 163);
    service_sleepmode_BtnSystemInformation->fn->setSize(service_sleepmode_BtnSystemInformation, 200, 54);
    service_sleepmode_BtnSystemInformation->fn->setScheme(service_sleepmode_BtnSystemInformation, &menu_btn2);
    service_sleepmode_BtnSystemInformation->fn->setHAlignment(service_sleepmode_BtnSystemInformation, LE_HALIGN_LEFT);
    service_sleepmode_BtnSystemInformation->fn->setString(service_sleepmode_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_sleepmode_BtnSystemInformation->fn->setPressedImage(service_sleepmode_BtnSystemInformation, (leImage*)&Menu_bar);
    service_sleepmode_BtnSystemInformation->fn->setReleasedImage(service_sleepmode_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_sleepmode_BtnSystemInformation->fn->setImageMargin(service_sleepmode_BtnSystemInformation, 5);
    service_sleepmode_BtnSystemInformation->fn->setReleasedEventCallback(service_sleepmode_BtnSystemInformation, event_service_sleepmode_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnSystemInformation);

    service_sleepmode_BtnService = leButtonWidget_New();
    service_sleepmode_BtnService->fn->setPosition(service_sleepmode_BtnService, 0, 109);
    service_sleepmode_BtnService->fn->setSize(service_sleepmode_BtnService, 200, 54);
    service_sleepmode_BtnService->fn->setScheme(service_sleepmode_BtnService, &Button_Gray2);
    service_sleepmode_BtnService->fn->setHAlignment(service_sleepmode_BtnService, LE_HALIGN_LEFT);
    service_sleepmode_BtnService->fn->setString(service_sleepmode_BtnService, (leString*)&string_MENU_Service);
    service_sleepmode_BtnService->fn->setPressedImage(service_sleepmode_BtnService, (leImage*)&Menu_bar);
    service_sleepmode_BtnService->fn->setReleasedImage(service_sleepmode_BtnService, (leImage*)&Menu_bar);
    service_sleepmode_BtnService->fn->setImageMargin(service_sleepmode_BtnService, 5);
    service_sleepmode_BtnService->fn->setReleasedEventCallback(service_sleepmode_BtnService, event_service_sleepmode_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnService);

    service_sleepmode_BtnOperationSettings = leButtonWidget_New();
    service_sleepmode_BtnOperationSettings->fn->setPosition(service_sleepmode_BtnOperationSettings, 0, 55);
    service_sleepmode_BtnOperationSettings->fn->setSize(service_sleepmode_BtnOperationSettings, 200, 54);
    service_sleepmode_BtnOperationSettings->fn->setScheme(service_sleepmode_BtnOperationSettings, &menu_btn2);
    service_sleepmode_BtnOperationSettings->fn->setHAlignment(service_sleepmode_BtnOperationSettings, LE_HALIGN_LEFT);
    service_sleepmode_BtnOperationSettings->fn->setString(service_sleepmode_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_sleepmode_BtnOperationSettings->fn->setPressedImage(service_sleepmode_BtnOperationSettings, (leImage*)&Menu_bar);
    service_sleepmode_BtnOperationSettings->fn->setReleasedImage(service_sleepmode_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_sleepmode_BtnOperationSettings->fn->setImageMargin(service_sleepmode_BtnOperationSettings, 5);
    service_sleepmode_BtnOperationSettings->fn->setReleasedEventCallback(service_sleepmode_BtnOperationSettings, event_service_sleepmode_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnOperationSettings);

    service_sleepmode_BtnMaintenance = leButtonWidget_New();
    service_sleepmode_BtnMaintenance->fn->setPosition(service_sleepmode_BtnMaintenance, 0, 0);
    service_sleepmode_BtnMaintenance->fn->setSize(service_sleepmode_BtnMaintenance, 200, 55);
    service_sleepmode_BtnMaintenance->fn->setScheme(service_sleepmode_BtnMaintenance, &menu_btn2);
    service_sleepmode_BtnMaintenance->fn->setHAlignment(service_sleepmode_BtnMaintenance, LE_HALIGN_LEFT);
    service_sleepmode_BtnMaintenance->fn->setString(service_sleepmode_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_sleepmode_BtnMaintenance->fn->setPressedImage(service_sleepmode_BtnMaintenance, (leImage*)&Menu_bar);
    service_sleepmode_BtnMaintenance->fn->setReleasedImage(service_sleepmode_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_sleepmode_BtnMaintenance->fn->setImageMargin(service_sleepmode_BtnMaintenance, 5);
    service_sleepmode_BtnMaintenance->fn->setReleasedEventCallback(service_sleepmode_BtnMaintenance, event_service_sleepmode_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_sleepmode_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_sleepmode_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_sleepmode(void)
{
}

void screenHide_service_sleepmode(void)
{
    service_sleepmode_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_sleepmode_Layer_0_FillPanel = NULL;
    service_sleepmode_LblTitle = NULL;
    service_sleepmode_ImgLine = NULL;
    service_sleepmode_LblSubTitle = NULL;
    service_sleepmode_LblSleepModeValue = NULL;
    service_sleepmode_LblMinutes = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_sleepmode_BtnExit = NULL;
    service_sleepmode_BtnRight = NULL;
    service_sleepmode_BtnLeft = NULL;
    service_sleepmode_BtnHome = NULL;
    service_sleepmode_BtnTroubleshoot = NULL;
    service_sleepmode_BtnSystemInformation = NULL;
    service_sleepmode_BtnService = NULL;
    service_sleepmode_BtnOperationSettings = NULL;
    service_sleepmode_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_sleepmode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_sleepmode(uint32_t lyrIdx)
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

