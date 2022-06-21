#include "gfx/legato/generated/screen/le_gen_screen_opsettings_sleepmode.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* opsettings_sleepmode_Layer_0_FillPanel;
leLabelWidget* opsettings_sleepmode_LblTitle;
leImageWidget* opsettings_sleepmode_ImgLine;
leLabelWidget* opsettings_sleepmode_LblSubTitle;
leLabelWidget* opsettings_sleepmode_LblSleepModeValue;
leLabelWidget* opsettings_sleepmode_LblMinutes;
leButtonWidget* opsettings_sleepmode_BtnExit;
leButtonWidget* opsettings_sleepmode_BtnRight;
leButtonWidget* opsettings_sleepmode_BtnLeft;
leButtonWidget* opsettings_sleepmode_BtnHome;
leButtonWidget* opsettings_sleepmode_BtnTroubleshoot;
leButtonWidget* opsettings_sleepmode_BtnSystemInformation;
leButtonWidget* opsettings_sleepmode_BtnService;
leButtonWidget* opsettings_sleepmode_BtnOperationSettings;
leButtonWidget* opsettings_sleepmode_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_opsettings_sleepmode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_opsettings_sleepmode(void)
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

    opsettings_sleepmode_Layer_0_FillPanel = leWidget_New();
    opsettings_sleepmode_Layer_0_FillPanel->fn->setPosition(opsettings_sleepmode_Layer_0_FillPanel, 0, 0);
    opsettings_sleepmode_Layer_0_FillPanel->fn->setSize(opsettings_sleepmode_Layer_0_FillPanel, 480, 272);
    opsettings_sleepmode_Layer_0_FillPanel->fn->setScheme(opsettings_sleepmode_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)opsettings_sleepmode_Layer_0_FillPanel);

    opsettings_sleepmode_LblTitle = leLabelWidget_New();
    opsettings_sleepmode_LblTitle->fn->setPosition(opsettings_sleepmode_LblTitle, 228, 29);
    opsettings_sleepmode_LblTitle->fn->setSize(opsettings_sleepmode_LblTitle, 222, 25);
    opsettings_sleepmode_LblTitle->fn->setScheme(opsettings_sleepmode_LblTitle, &Label_FontWhite);
    opsettings_sleepmode_LblTitle->fn->setBackgroundType(opsettings_sleepmode_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_LblTitle->fn->setHAlignment(opsettings_sleepmode_LblTitle, LE_HALIGN_CENTER);
    opsettings_sleepmode_LblTitle->fn->setString(opsettings_sleepmode_LblTitle, (leString*)&string_OPSETTING_SLEEPMODE_SleepMode);
    root0->fn->addChild(root0, (leWidget*)opsettings_sleepmode_LblTitle);

    opsettings_sleepmode_ImgLine = leImageWidget_New();
    opsettings_sleepmode_ImgLine->fn->setPosition(opsettings_sleepmode_ImgLine, 218, 62);
    opsettings_sleepmode_ImgLine->fn->setSize(opsettings_sleepmode_ImgLine, 240, 5);
    opsettings_sleepmode_ImgLine->fn->setScheme(opsettings_sleepmode_ImgLine, &BlackBack);
    opsettings_sleepmode_ImgLine->fn->setBackgroundType(opsettings_sleepmode_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_ImgLine->fn->setBorderType(opsettings_sleepmode_ImgLine, LE_WIDGET_BORDER_NONE);
    opsettings_sleepmode_ImgLine->fn->setImage(opsettings_sleepmode_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)opsettings_sleepmode_ImgLine);

    opsettings_sleepmode_LblSubTitle = leLabelWidget_New();
    opsettings_sleepmode_LblSubTitle->fn->setPosition(opsettings_sleepmode_LblSubTitle, 220, 80);
    opsettings_sleepmode_LblSubTitle->fn->setSize(opsettings_sleepmode_LblSubTitle, 237, 30);
    opsettings_sleepmode_LblSubTitle->fn->setScheme(opsettings_sleepmode_LblSubTitle, &Label_FontWhite);
    opsettings_sleepmode_LblSubTitle->fn->setBackgroundType(opsettings_sleepmode_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_LblSubTitle->fn->setHAlignment(opsettings_sleepmode_LblSubTitle, LE_HALIGN_CENTER);
    opsettings_sleepmode_LblSubTitle->fn->setString(opsettings_sleepmode_LblSubTitle, (leString*)&string_OPSETTING_SLEEPMODE_TimeUntilActivation);
    root0->fn->addChild(root0, (leWidget*)opsettings_sleepmode_LblSubTitle);

    opsettings_sleepmode_LblSleepModeValue = leLabelWidget_New();
    opsettings_sleepmode_LblSleepModeValue->fn->setPosition(opsettings_sleepmode_LblSleepModeValue, 278, 136);
    opsettings_sleepmode_LblSleepModeValue->fn->setSize(opsettings_sleepmode_LblSleepModeValue, 112, 55);
    opsettings_sleepmode_LblSleepModeValue->fn->setScheme(opsettings_sleepmode_LblSleepModeValue, &Label_FontWhite);
    opsettings_sleepmode_LblSleepModeValue->fn->setBackgroundType(opsettings_sleepmode_LblSleepModeValue, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_LblSleepModeValue->fn->setHAlignment(opsettings_sleepmode_LblSleepModeValue, LE_HALIGN_CENTER);
    opsettings_sleepmode_LblSleepModeValue->fn->setString(opsettings_sleepmode_LblSleepModeValue, (leString*)&string_OPSETTING_SLEEPMODE_SleepModeValue);
    root0->fn->addChild(root0, (leWidget*)opsettings_sleepmode_LblSleepModeValue);

    opsettings_sleepmode_LblMinutes = leLabelWidget_New();
    opsettings_sleepmode_LblMinutes->fn->setPosition(opsettings_sleepmode_LblMinutes, 220, 192);
    opsettings_sleepmode_LblMinutes->fn->setSize(opsettings_sleepmode_LblMinutes, 237, 24);
    opsettings_sleepmode_LblMinutes->fn->setScheme(opsettings_sleepmode_LblMinutes, &Label_FontWhite);
    opsettings_sleepmode_LblMinutes->fn->setBackgroundType(opsettings_sleepmode_LblMinutes, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_LblMinutes->fn->setHAlignment(opsettings_sleepmode_LblMinutes, LE_HALIGN_CENTER);
    opsettings_sleepmode_LblMinutes->fn->setString(opsettings_sleepmode_LblMinutes, (leString*)&string_OPSETTING_SLEEPMODE_Minutes);
    root0->fn->addChild(root0, (leWidget*)opsettings_sleepmode_LblMinutes);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    opsettings_sleepmode_BtnExit = leButtonWidget_New();
    opsettings_sleepmode_BtnExit->fn->setPosition(opsettings_sleepmode_BtnExit, 415, 2);
    opsettings_sleepmode_BtnExit->fn->setSize(opsettings_sleepmode_BtnExit, 60, 60);
    opsettings_sleepmode_BtnExit->fn->setBackgroundType(opsettings_sleepmode_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_BtnExit->fn->setBorderType(opsettings_sleepmode_BtnExit, LE_WIDGET_BORDER_NONE);
    opsettings_sleepmode_BtnExit->fn->setHAlignment(opsettings_sleepmode_BtnExit, LE_HALIGN_RIGHT);
    opsettings_sleepmode_BtnExit->fn->setVAlignment(opsettings_sleepmode_BtnExit, LE_VALIGN_TOP);
    opsettings_sleepmode_BtnExit->fn->setMargins(opsettings_sleepmode_BtnExit, 4, 10, 10, 4);
    opsettings_sleepmode_BtnExit->fn->setPressedImage(opsettings_sleepmode_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_sleepmode_BtnExit->fn->setReleasedImage(opsettings_sleepmode_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_sleepmode_BtnExit->fn->setReleasedEventCallback(opsettings_sleepmode_BtnExit, event_opsettings_sleepmode_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnExit);

    opsettings_sleepmode_BtnRight = leButtonWidget_New();
    opsettings_sleepmode_BtnRight->fn->setPosition(opsettings_sleepmode_BtnRight, 388, 142);
    opsettings_sleepmode_BtnRight->fn->setSize(opsettings_sleepmode_BtnRight, 40, 45);
    opsettings_sleepmode_BtnRight->fn->setScheme(opsettings_sleepmode_BtnRight, &BlackBack);
    opsettings_sleepmode_BtnRight->fn->setBackgroundType(opsettings_sleepmode_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_BtnRight->fn->setBorderType(opsettings_sleepmode_BtnRight, LE_WIDGET_BORDER_NONE);
    opsettings_sleepmode_BtnRight->fn->setPressedImage(opsettings_sleepmode_BtnRight, (leImage*)&Menu_chevron_right);
    opsettings_sleepmode_BtnRight->fn->setReleasedImage(opsettings_sleepmode_BtnRight, (leImage*)&Menu_chevron_right);
    opsettings_sleepmode_BtnRight->fn->setReleasedEventCallback(opsettings_sleepmode_BtnRight, event_opsettings_sleepmode_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnRight);

    opsettings_sleepmode_BtnLeft = leButtonWidget_New();
    opsettings_sleepmode_BtnLeft->fn->setPosition(opsettings_sleepmode_BtnLeft, 241, 142);
    opsettings_sleepmode_BtnLeft->fn->setSize(opsettings_sleepmode_BtnLeft, 40, 45);
    opsettings_sleepmode_BtnLeft->fn->setScheme(opsettings_sleepmode_BtnLeft, &BlackBack);
    opsettings_sleepmode_BtnLeft->fn->setBackgroundType(opsettings_sleepmode_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_BtnLeft->fn->setBorderType(opsettings_sleepmode_BtnLeft, LE_WIDGET_BORDER_NONE);
    opsettings_sleepmode_BtnLeft->fn->setPressedImage(opsettings_sleepmode_BtnLeft, (leImage*)&Menu_chevron_left);
    opsettings_sleepmode_BtnLeft->fn->setReleasedImage(opsettings_sleepmode_BtnLeft, (leImage*)&Menu_chevron_left);
    opsettings_sleepmode_BtnLeft->fn->setReleasedEventCallback(opsettings_sleepmode_BtnLeft, event_opsettings_sleepmode_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnLeft);

    opsettings_sleepmode_BtnHome = leButtonWidget_New();
    opsettings_sleepmode_BtnHome->fn->setPosition(opsettings_sleepmode_BtnHome, 435, 225);
    opsettings_sleepmode_BtnHome->fn->setSize(opsettings_sleepmode_BtnHome, 40, 40);
    opsettings_sleepmode_BtnHome->fn->setScheme(opsettings_sleepmode_BtnHome, &BlackBack);
    opsettings_sleepmode_BtnHome->fn->setBackgroundType(opsettings_sleepmode_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    opsettings_sleepmode_BtnHome->fn->setBorderType(opsettings_sleepmode_BtnHome, LE_WIDGET_BORDER_NONE);
    opsettings_sleepmode_BtnHome->fn->setPressedImage(opsettings_sleepmode_BtnHome, (leImage*)&Menu_home);
    opsettings_sleepmode_BtnHome->fn->setReleasedImage(opsettings_sleepmode_BtnHome, (leImage*)&Menu_home);
    opsettings_sleepmode_BtnHome->fn->setReleasedEventCallback(opsettings_sleepmode_BtnHome, event_opsettings_sleepmode_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnHome);

    opsettings_sleepmode_BtnTroubleshoot = leButtonWidget_New();
    opsettings_sleepmode_BtnTroubleshoot->fn->setPosition(opsettings_sleepmode_BtnTroubleshoot, 0, 217);
    opsettings_sleepmode_BtnTroubleshoot->fn->setSize(opsettings_sleepmode_BtnTroubleshoot, 200, 55);
    opsettings_sleepmode_BtnTroubleshoot->fn->setScheme(opsettings_sleepmode_BtnTroubleshoot, &menu_btn2);
    opsettings_sleepmode_BtnTroubleshoot->fn->setHAlignment(opsettings_sleepmode_BtnTroubleshoot, LE_HALIGN_LEFT);
    opsettings_sleepmode_BtnTroubleshoot->fn->setString(opsettings_sleepmode_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    opsettings_sleepmode_BtnTroubleshoot->fn->setPressedImage(opsettings_sleepmode_BtnTroubleshoot, (leImage*)&Menu_bar);
    opsettings_sleepmode_BtnTroubleshoot->fn->setReleasedImage(opsettings_sleepmode_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    opsettings_sleepmode_BtnTroubleshoot->fn->setImageMargin(opsettings_sleepmode_BtnTroubleshoot, 5);
    opsettings_sleepmode_BtnTroubleshoot->fn->setReleasedEventCallback(opsettings_sleepmode_BtnTroubleshoot, event_opsettings_sleepmode_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnTroubleshoot);

    opsettings_sleepmode_BtnSystemInformation = leButtonWidget_New();
    opsettings_sleepmode_BtnSystemInformation->fn->setPosition(opsettings_sleepmode_BtnSystemInformation, 0, 163);
    opsettings_sleepmode_BtnSystemInformation->fn->setSize(opsettings_sleepmode_BtnSystemInformation, 200, 54);
    opsettings_sleepmode_BtnSystemInformation->fn->setScheme(opsettings_sleepmode_BtnSystemInformation, &menu_btn2);
    opsettings_sleepmode_BtnSystemInformation->fn->setHAlignment(opsettings_sleepmode_BtnSystemInformation, LE_HALIGN_LEFT);
    opsettings_sleepmode_BtnSystemInformation->fn->setString(opsettings_sleepmode_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    opsettings_sleepmode_BtnSystemInformation->fn->setPressedImage(opsettings_sleepmode_BtnSystemInformation, (leImage*)&Menu_bar);
    opsettings_sleepmode_BtnSystemInformation->fn->setReleasedImage(opsettings_sleepmode_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    opsettings_sleepmode_BtnSystemInformation->fn->setImageMargin(opsettings_sleepmode_BtnSystemInformation, 5);
    opsettings_sleepmode_BtnSystemInformation->fn->setReleasedEventCallback(opsettings_sleepmode_BtnSystemInformation, event_opsettings_sleepmode_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnSystemInformation);

    opsettings_sleepmode_BtnService = leButtonWidget_New();
    opsettings_sleepmode_BtnService->fn->setPosition(opsettings_sleepmode_BtnService, 0, 109);
    opsettings_sleepmode_BtnService->fn->setSize(opsettings_sleepmode_BtnService, 200, 54);
    opsettings_sleepmode_BtnService->fn->setScheme(opsettings_sleepmode_BtnService, &menu_btn2);
    opsettings_sleepmode_BtnService->fn->setHAlignment(opsettings_sleepmode_BtnService, LE_HALIGN_LEFT);
    opsettings_sleepmode_BtnService->fn->setString(opsettings_sleepmode_BtnService, (leString*)&string_MENU_Service);
    opsettings_sleepmode_BtnService->fn->setPressedImage(opsettings_sleepmode_BtnService, (leImage*)&Menu_bar);
    opsettings_sleepmode_BtnService->fn->setReleasedImage(opsettings_sleepmode_BtnService, (leImage*)&Menu_bar_clear);
    opsettings_sleepmode_BtnService->fn->setImageMargin(opsettings_sleepmode_BtnService, 5);
    opsettings_sleepmode_BtnService->fn->setReleasedEventCallback(opsettings_sleepmode_BtnService, event_opsettings_sleepmode_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnService);

    opsettings_sleepmode_BtnOperationSettings = leButtonWidget_New();
    opsettings_sleepmode_BtnOperationSettings->fn->setPosition(opsettings_sleepmode_BtnOperationSettings, 0, 55);
    opsettings_sleepmode_BtnOperationSettings->fn->setSize(opsettings_sleepmode_BtnOperationSettings, 200, 54);
    opsettings_sleepmode_BtnOperationSettings->fn->setScheme(opsettings_sleepmode_BtnOperationSettings, &Button_Gray2);
    opsettings_sleepmode_BtnOperationSettings->fn->setHAlignment(opsettings_sleepmode_BtnOperationSettings, LE_HALIGN_LEFT);
    opsettings_sleepmode_BtnOperationSettings->fn->setString(opsettings_sleepmode_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    opsettings_sleepmode_BtnOperationSettings->fn->setPressedImage(opsettings_sleepmode_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_sleepmode_BtnOperationSettings->fn->setReleasedImage(opsettings_sleepmode_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_sleepmode_BtnOperationSettings->fn->setImageMargin(opsettings_sleepmode_BtnOperationSettings, 5);
    opsettings_sleepmode_BtnOperationSettings->fn->setReleasedEventCallback(opsettings_sleepmode_BtnOperationSettings, event_opsettings_sleepmode_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnOperationSettings);

    opsettings_sleepmode_BtnMaintenance = leButtonWidget_New();
    opsettings_sleepmode_BtnMaintenance->fn->setPosition(opsettings_sleepmode_BtnMaintenance, 0, 0);
    opsettings_sleepmode_BtnMaintenance->fn->setSize(opsettings_sleepmode_BtnMaintenance, 200, 55);
    opsettings_sleepmode_BtnMaintenance->fn->setScheme(opsettings_sleepmode_BtnMaintenance, &menu_btn2);
    opsettings_sleepmode_BtnMaintenance->fn->setHAlignment(opsettings_sleepmode_BtnMaintenance, LE_HALIGN_LEFT);
    opsettings_sleepmode_BtnMaintenance->fn->setString(opsettings_sleepmode_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    opsettings_sleepmode_BtnMaintenance->fn->setPressedImage(opsettings_sleepmode_BtnMaintenance, (leImage*)&Menu_bar);
    opsettings_sleepmode_BtnMaintenance->fn->setReleasedImage(opsettings_sleepmode_BtnMaintenance, (leImage*)&Menu_bar_clear);
    opsettings_sleepmode_BtnMaintenance->fn->setImageMargin(opsettings_sleepmode_BtnMaintenance, 5);
    opsettings_sleepmode_BtnMaintenance->fn->setReleasedEventCallback(opsettings_sleepmode_BtnMaintenance, event_opsettings_sleepmode_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_sleepmode_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    opsettings_sleepmode_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_opsettings_sleepmode(void)
{
}

void screenHide_opsettings_sleepmode(void)
{
    opsettings_sleepmode_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    opsettings_sleepmode_Layer_0_FillPanel = NULL;
    opsettings_sleepmode_LblTitle = NULL;
    opsettings_sleepmode_ImgLine = NULL;
    opsettings_sleepmode_LblSubTitle = NULL;
    opsettings_sleepmode_LblSleepModeValue = NULL;
    opsettings_sleepmode_LblMinutes = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    opsettings_sleepmode_BtnExit = NULL;
    opsettings_sleepmode_BtnRight = NULL;
    opsettings_sleepmode_BtnLeft = NULL;
    opsettings_sleepmode_BtnHome = NULL;
    opsettings_sleepmode_BtnTroubleshoot = NULL;
    opsettings_sleepmode_BtnSystemInformation = NULL;
    opsettings_sleepmode_BtnService = NULL;
    opsettings_sleepmode_BtnOperationSettings = NULL;
    opsettings_sleepmode_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_opsettings_sleepmode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_opsettings_sleepmode(uint32_t lyrIdx)
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

