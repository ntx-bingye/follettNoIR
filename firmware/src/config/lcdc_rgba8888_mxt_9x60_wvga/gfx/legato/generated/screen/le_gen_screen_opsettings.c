#include "gfx/legato/generated/screen/le_gen_screen_opsettings.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* opsettings_Layer_0_FillPanel;
leButtonWidget* opsettings_BtnMaintenance;
leButtonWidget* opsettings_BtnExit;
leButtonWidget* opsettings_BtnHotWater;
leButtonWidget* opsettings_BtnBrightness;
leButtonWidget* opsettings_BtnLanguage;
leButtonWidget* opsettings_BtnSleepMode;
leButtonWidget* opsettings_BtnHome;
leButtonWidget* opsettings_BtnTroubleshoot;
leButtonWidget* opsettings_BtnSystemInformation;
leButtonWidget* opsettings_BtnService;
leButtonWidget* opsettings_BtnOperationSettings;
leWidget* opsettings_PanelWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_opsettings(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_opsettings(void)
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

    opsettings_Layer_0_FillPanel = leWidget_New();
    opsettings_Layer_0_FillPanel->fn->setPosition(opsettings_Layer_0_FillPanel, 0, 0);
    opsettings_Layer_0_FillPanel->fn->setSize(opsettings_Layer_0_FillPanel, 480, 272);
    opsettings_Layer_0_FillPanel->fn->setScheme(opsettings_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)opsettings_Layer_0_FillPanel);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    opsettings_BtnMaintenance = leButtonWidget_New();
    opsettings_BtnMaintenance->fn->setPosition(opsettings_BtnMaintenance, 0, 0);
    opsettings_BtnMaintenance->fn->setSize(opsettings_BtnMaintenance, 200, 55);
    opsettings_BtnMaintenance->fn->setScheme(opsettings_BtnMaintenance, &menu_btn2);
    opsettings_BtnMaintenance->fn->setHAlignment(opsettings_BtnMaintenance, LE_HALIGN_LEFT);
    opsettings_BtnMaintenance->fn->setString(opsettings_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    opsettings_BtnMaintenance->fn->setPressedImage(opsettings_BtnMaintenance, (leImage*)&Menu_bar);
    opsettings_BtnMaintenance->fn->setReleasedImage(opsettings_BtnMaintenance, (leImage*)&Menu_bar_clear);
    opsettings_BtnMaintenance->fn->setImageMargin(opsettings_BtnMaintenance, 5);
    opsettings_BtnMaintenance->fn->setReleasedEventCallback(opsettings_BtnMaintenance, event_opsettings_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnMaintenance);

    opsettings_BtnExit = leButtonWidget_New();
    opsettings_BtnExit->fn->setPosition(opsettings_BtnExit, 432, 2);
    opsettings_BtnExit->fn->setSize(opsettings_BtnExit, 45, 60);
    opsettings_BtnExit->fn->setScheme(opsettings_BtnExit, &BlackBack);
    opsettings_BtnExit->fn->setBackgroundType(opsettings_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    opsettings_BtnExit->fn->setBorderType(opsettings_BtnExit, LE_WIDGET_BORDER_NONE);
    opsettings_BtnExit->fn->setHAlignment(opsettings_BtnExit, LE_HALIGN_RIGHT);
    opsettings_BtnExit->fn->setVAlignment(opsettings_BtnExit, LE_VALIGN_TOP);
    opsettings_BtnExit->fn->setMargins(opsettings_BtnExit, 4, 10, 10, 4);
    opsettings_BtnExit->fn->setPressedImage(opsettings_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_BtnExit->fn->setReleasedImage(opsettings_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_BtnExit->fn->setReleasedEventCallback(opsettings_BtnExit, event_opsettings_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnExit);

    opsettings_BtnHotWater = leButtonWidget_New();
    opsettings_BtnHotWater->fn->setPosition(opsettings_BtnHotWater, 213, 197);
    opsettings_BtnHotWater->fn->setSize(opsettings_BtnHotWater, 220, 40);
    opsettings_BtnHotWater->fn->setScheme(opsettings_BtnHotWater, &Button_Gray1);
    opsettings_BtnHotWater->fn->setBackgroundType(opsettings_BtnHotWater, LE_WIDGET_BACKGROUND_NONE);
    opsettings_BtnHotWater->fn->setBorderType(opsettings_BtnHotWater, LE_WIDGET_BORDER_NONE);
    opsettings_BtnHotWater->fn->setMargins(opsettings_BtnHotWater, 0, 0, 0, 0);
    opsettings_BtnHotWater->fn->setString(opsettings_BtnHotWater, (leString*)&string_OPSETTING_HOTWATER_HotWater);
    opsettings_BtnHotWater->fn->setPressedImage(opsettings_BtnHotWater, (leImage*)&OpSetting_button_on);
    opsettings_BtnHotWater->fn->setReleasedImage(opsettings_BtnHotWater, (leImage*)&OpSetting_button_off);
    opsettings_BtnHotWater->fn->setImagePosition(opsettings_BtnHotWater, LE_RELATIVE_POSITION_BEHIND);
    opsettings_BtnHotWater->fn->setReleasedEventCallback(opsettings_BtnHotWater, event_opsettings_BtnHotWater_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnHotWater);

    opsettings_BtnBrightness = leButtonWidget_New();
    opsettings_BtnBrightness->fn->setPosition(opsettings_BtnBrightness, 213, 142);
    opsettings_BtnBrightness->fn->setSize(opsettings_BtnBrightness, 220, 40);
    opsettings_BtnBrightness->fn->setScheme(opsettings_BtnBrightness, &Button_Gray1);
    opsettings_BtnBrightness->fn->setBackgroundType(opsettings_BtnBrightness, LE_WIDGET_BACKGROUND_NONE);
    opsettings_BtnBrightness->fn->setBorderType(opsettings_BtnBrightness, LE_WIDGET_BORDER_NONE);
    opsettings_BtnBrightness->fn->setMargins(opsettings_BtnBrightness, 0, 0, 0, 0);
    opsettings_BtnBrightness->fn->setString(opsettings_BtnBrightness, (leString*)&string_OPSETTING_BRIGHTNESS_Brightness);
    opsettings_BtnBrightness->fn->setPressedImage(opsettings_BtnBrightness, (leImage*)&OpSetting_button_on);
    opsettings_BtnBrightness->fn->setReleasedImage(opsettings_BtnBrightness, (leImage*)&OpSetting_button_off);
    opsettings_BtnBrightness->fn->setImagePosition(opsettings_BtnBrightness, LE_RELATIVE_POSITION_BEHIND);
    opsettings_BtnBrightness->fn->setReleasedEventCallback(opsettings_BtnBrightness, event_opsettings_BtnBrightness_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnBrightness);

    opsettings_BtnLanguage = leButtonWidget_New();
    opsettings_BtnLanguage->fn->setPosition(opsettings_BtnLanguage, 213, 87);
    opsettings_BtnLanguage->fn->setSize(opsettings_BtnLanguage, 220, 40);
    opsettings_BtnLanguage->fn->setScheme(opsettings_BtnLanguage, &Button_Gray1);
    opsettings_BtnLanguage->fn->setBackgroundType(opsettings_BtnLanguage, LE_WIDGET_BACKGROUND_NONE);
    opsettings_BtnLanguage->fn->setBorderType(opsettings_BtnLanguage, LE_WIDGET_BORDER_NONE);
    opsettings_BtnLanguage->fn->setMargins(opsettings_BtnLanguage, 0, 0, 0, 0);
    opsettings_BtnLanguage->fn->setString(opsettings_BtnLanguage, (leString*)&string_OPSETTING_LANGUAGE_Language);
    opsettings_BtnLanguage->fn->setPressedImage(opsettings_BtnLanguage, (leImage*)&OpSetting_button_on);
    opsettings_BtnLanguage->fn->setReleasedImage(opsettings_BtnLanguage, (leImage*)&OpSetting_button_off);
    opsettings_BtnLanguage->fn->setImagePosition(opsettings_BtnLanguage, LE_RELATIVE_POSITION_BEHIND);
    opsettings_BtnLanguage->fn->setReleasedEventCallback(opsettings_BtnLanguage, event_opsettings_BtnLanguage_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnLanguage);

    opsettings_BtnSleepMode = leButtonWidget_New();
    opsettings_BtnSleepMode->fn->setPosition(opsettings_BtnSleepMode, 213, 32);
    opsettings_BtnSleepMode->fn->setSize(opsettings_BtnSleepMode, 220, 40);
    opsettings_BtnSleepMode->fn->setScheme(opsettings_BtnSleepMode, &Button_Gray1);
    opsettings_BtnSleepMode->fn->setBackgroundType(opsettings_BtnSleepMode, LE_WIDGET_BACKGROUND_NONE);
    opsettings_BtnSleepMode->fn->setBorderType(opsettings_BtnSleepMode, LE_WIDGET_BORDER_NONE);
    opsettings_BtnSleepMode->fn->setMargins(opsettings_BtnSleepMode, 0, 0, 0, 0);
    opsettings_BtnSleepMode->fn->setString(opsettings_BtnSleepMode, (leString*)&string_OPSETTING_SLEEPMODE_SleepMode);
    opsettings_BtnSleepMode->fn->setPressedImage(opsettings_BtnSleepMode, (leImage*)&OpSetting_button_on);
    opsettings_BtnSleepMode->fn->setReleasedImage(opsettings_BtnSleepMode, (leImage*)&OpSetting_button_off);
    opsettings_BtnSleepMode->fn->setImagePosition(opsettings_BtnSleepMode, LE_RELATIVE_POSITION_BEHIND);
    opsettings_BtnSleepMode->fn->setReleasedEventCallback(opsettings_BtnSleepMode, event_opsettings_BtnSleepMode_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnSleepMode);

    opsettings_BtnHome = leButtonWidget_New();
    opsettings_BtnHome->fn->setPosition(opsettings_BtnHome, 435, 225);
    opsettings_BtnHome->fn->setSize(opsettings_BtnHome, 40, 40);
    opsettings_BtnHome->fn->setScheme(opsettings_BtnHome, &BlackBack);
    opsettings_BtnHome->fn->setBackgroundType(opsettings_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    opsettings_BtnHome->fn->setBorderType(opsettings_BtnHome, LE_WIDGET_BORDER_NONE);
    opsettings_BtnHome->fn->setPressedImage(opsettings_BtnHome, (leImage*)&Menu_home);
    opsettings_BtnHome->fn->setReleasedImage(opsettings_BtnHome, (leImage*)&Menu_home);
    opsettings_BtnHome->fn->setReleasedEventCallback(opsettings_BtnHome, event_opsettings_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnHome);

    opsettings_BtnTroubleshoot = leButtonWidget_New();
    opsettings_BtnTroubleshoot->fn->setPosition(opsettings_BtnTroubleshoot, 0, 217);
    opsettings_BtnTroubleshoot->fn->setSize(opsettings_BtnTroubleshoot, 200, 55);
    opsettings_BtnTroubleshoot->fn->setScheme(opsettings_BtnTroubleshoot, &menu_btn2);
    opsettings_BtnTroubleshoot->fn->setHAlignment(opsettings_BtnTroubleshoot, LE_HALIGN_LEFT);
    opsettings_BtnTroubleshoot->fn->setString(opsettings_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    opsettings_BtnTroubleshoot->fn->setPressedImage(opsettings_BtnTroubleshoot, (leImage*)&Menu_bar);
    opsettings_BtnTroubleshoot->fn->setReleasedImage(opsettings_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    opsettings_BtnTroubleshoot->fn->setImageMargin(opsettings_BtnTroubleshoot, 5);
    opsettings_BtnTroubleshoot->fn->setReleasedEventCallback(opsettings_BtnTroubleshoot, event_opsettings_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnTroubleshoot);

    opsettings_BtnSystemInformation = leButtonWidget_New();
    opsettings_BtnSystemInformation->fn->setPosition(opsettings_BtnSystemInformation, 0, 163);
    opsettings_BtnSystemInformation->fn->setSize(opsettings_BtnSystemInformation, 200, 54);
    opsettings_BtnSystemInformation->fn->setScheme(opsettings_BtnSystemInformation, &menu_btn2);
    opsettings_BtnSystemInformation->fn->setHAlignment(opsettings_BtnSystemInformation, LE_HALIGN_LEFT);
    opsettings_BtnSystemInformation->fn->setString(opsettings_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    opsettings_BtnSystemInformation->fn->setPressedImage(opsettings_BtnSystemInformation, (leImage*)&Menu_bar);
    opsettings_BtnSystemInformation->fn->setReleasedImage(opsettings_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    opsettings_BtnSystemInformation->fn->setImageMargin(opsettings_BtnSystemInformation, 5);
    opsettings_BtnSystemInformation->fn->setReleasedEventCallback(opsettings_BtnSystemInformation, event_opsettings_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnSystemInformation);

    opsettings_BtnService = leButtonWidget_New();
    opsettings_BtnService->fn->setPosition(opsettings_BtnService, 0, 109);
    opsettings_BtnService->fn->setSize(opsettings_BtnService, 200, 54);
    opsettings_BtnService->fn->setScheme(opsettings_BtnService, &menu_btn2);
    opsettings_BtnService->fn->setHAlignment(opsettings_BtnService, LE_HALIGN_LEFT);
    opsettings_BtnService->fn->setString(opsettings_BtnService, (leString*)&string_MENU_Service);
    opsettings_BtnService->fn->setPressedImage(opsettings_BtnService, (leImage*)&Menu_bar);
    opsettings_BtnService->fn->setReleasedImage(opsettings_BtnService, (leImage*)&Menu_bar_clear);
    opsettings_BtnService->fn->setImageMargin(opsettings_BtnService, 5);
    opsettings_BtnService->fn->setReleasedEventCallback(opsettings_BtnService, event_opsettings_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnService);

    opsettings_BtnOperationSettings = leButtonWidget_New();
    opsettings_BtnOperationSettings->fn->setPosition(opsettings_BtnOperationSettings, 0, 55);
    opsettings_BtnOperationSettings->fn->setSize(opsettings_BtnOperationSettings, 200, 54);
    opsettings_BtnOperationSettings->fn->setScheme(opsettings_BtnOperationSettings, &Button_Gray2);
    opsettings_BtnOperationSettings->fn->setHAlignment(opsettings_BtnOperationSettings, LE_HALIGN_LEFT);
    opsettings_BtnOperationSettings->fn->setString(opsettings_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    opsettings_BtnOperationSettings->fn->setPressedImage(opsettings_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_BtnOperationSettings->fn->setReleasedImage(opsettings_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_BtnOperationSettings->fn->setImageMargin(opsettings_BtnOperationSettings, 5);
    root1->fn->addChild(root1, (leWidget*)opsettings_BtnOperationSettings);

    opsettings_PanelWidget0 = leWidget_New();
    opsettings_PanelWidget0->fn->setPosition(opsettings_PanelWidget0, 319, 73);
    root1->fn->addChild(root1, (leWidget*)opsettings_PanelWidget0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    opsettings_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_opsettings(void)
{
}

void screenHide_opsettings(void)
{
    opsettings_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    opsettings_Layer_0_FillPanel = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    opsettings_BtnMaintenance = NULL;
    opsettings_BtnExit = NULL;
    opsettings_BtnHotWater = NULL;
    opsettings_BtnBrightness = NULL;
    opsettings_BtnLanguage = NULL;
    opsettings_BtnSleepMode = NULL;
    opsettings_BtnHome = NULL;
    opsettings_BtnTroubleshoot = NULL;
    opsettings_BtnSystemInformation = NULL;
    opsettings_BtnService = NULL;
    opsettings_BtnOperationSettings = NULL;
    opsettings_PanelWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_opsettings(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_opsettings(uint32_t lyrIdx)
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

