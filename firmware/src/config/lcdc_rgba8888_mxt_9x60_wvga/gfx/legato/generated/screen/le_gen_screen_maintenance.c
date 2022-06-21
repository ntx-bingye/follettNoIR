#include "gfx/legato/generated/screen/le_gen_screen_maintenance.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* maintenance_Layer_0_FillPanel;
leButtonWidget* maintenance_BtnMaintenance;
leButtonWidget* maintenance_BtnOperationSettings;
leButtonWidget* maintenance_BtnExit;
leButtonWidget* maintenance_BtnFilterInterval;
leButtonWidget* maintenance_BtnPMInterval;
leButtonWidget* maintenance_BtnReplaceFilter;
leButtonWidget* maintenance_BtnSanitize;
leButtonWidget* maintenance_BtnCleanScreen;
leButtonWidget* maintenance_BtnHome;
leButtonWidget* maintenance_BtnTroubleshoot;
leButtonWidget* maintenance_BtnSystemInformation;
leButtonWidget* maintenance_BtnService;
leButtonWidget* maintenance_ButtonWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_maintenance(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_maintenance(void)
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

    maintenance_Layer_0_FillPanel = leWidget_New();
    maintenance_Layer_0_FillPanel->fn->setPosition(maintenance_Layer_0_FillPanel, 0, 0);
    maintenance_Layer_0_FillPanel->fn->setSize(maintenance_Layer_0_FillPanel, 480, 272);
    maintenance_Layer_0_FillPanel->fn->setScheme(maintenance_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)maintenance_Layer_0_FillPanel);

    maintenance_BtnMaintenance = leButtonWidget_New();
    maintenance_BtnMaintenance->fn->setPosition(maintenance_BtnMaintenance, 0, 0);
    maintenance_BtnMaintenance->fn->setSize(maintenance_BtnMaintenance, 200, 55);
    maintenance_BtnMaintenance->fn->setScheme(maintenance_BtnMaintenance, &Button_Gray2);
    maintenance_BtnMaintenance->fn->setHAlignment(maintenance_BtnMaintenance, LE_HALIGN_LEFT);
    maintenance_BtnMaintenance->fn->setString(maintenance_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    maintenance_BtnMaintenance->fn->setPressedImage(maintenance_BtnMaintenance, (leImage*)&Menu_bar);
    maintenance_BtnMaintenance->fn->setReleasedImage(maintenance_BtnMaintenance, (leImage*)&Menu_bar);
    maintenance_BtnMaintenance->fn->setImageMargin(maintenance_BtnMaintenance, 5);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnMaintenance);

    maintenance_BtnOperationSettings = leButtonWidget_New();
    maintenance_BtnOperationSettings->fn->setPosition(maintenance_BtnOperationSettings, 0, 55);
    maintenance_BtnOperationSettings->fn->setSize(maintenance_BtnOperationSettings, 200, 54);
    maintenance_BtnOperationSettings->fn->setScheme(maintenance_BtnOperationSettings, &menu_btn2);
    maintenance_BtnOperationSettings->fn->setHAlignment(maintenance_BtnOperationSettings, LE_HALIGN_LEFT);
    maintenance_BtnOperationSettings->fn->setString(maintenance_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    maintenance_BtnOperationSettings->fn->setPressedImage(maintenance_BtnOperationSettings, (leImage*)&Menu_bar);
    maintenance_BtnOperationSettings->fn->setReleasedImage(maintenance_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    maintenance_BtnOperationSettings->fn->setImageMargin(maintenance_BtnOperationSettings, 5);
    maintenance_BtnOperationSettings->fn->setReleasedEventCallback(maintenance_BtnOperationSettings, event_maintenance_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnOperationSettings);

    maintenance_BtnExit = leButtonWidget_New();
    maintenance_BtnExit->fn->setPosition(maintenance_BtnExit, 435, 2);
    maintenance_BtnExit->fn->setSize(maintenance_BtnExit, 45, 90);
    maintenance_BtnExit->fn->setScheme(maintenance_BtnExit, &BlackBack);
    maintenance_BtnExit->fn->setBackgroundType(maintenance_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    maintenance_BtnExit->fn->setBorderType(maintenance_BtnExit, LE_WIDGET_BORDER_NONE);
    maintenance_BtnExit->fn->setHAlignment(maintenance_BtnExit, LE_HALIGN_RIGHT);
    maintenance_BtnExit->fn->setVAlignment(maintenance_BtnExit, LE_VALIGN_TOP);
    maintenance_BtnExit->fn->setMargins(maintenance_BtnExit, 4, 10, 10, 4);
    maintenance_BtnExit->fn->setPressedImage(maintenance_BtnExit, (leImage*)&Menu_exit_white);
    maintenance_BtnExit->fn->setReleasedImage(maintenance_BtnExit, (leImage*)&Menu_exit_white);
    maintenance_BtnExit->fn->setReleasedEventCallback(maintenance_BtnExit, event_maintenance_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnExit);

    maintenance_BtnFilterInterval = leButtonWidget_New();
    maintenance_BtnFilterInterval->fn->setPosition(maintenance_BtnFilterInterval, 213, 185);
    maintenance_BtnFilterInterval->fn->setSize(maintenance_BtnFilterInterval, 220, 40);
    maintenance_BtnFilterInterval->fn->setScheme(maintenance_BtnFilterInterval, &Button_Transparent);
    maintenance_BtnFilterInterval->fn->setBackgroundType(maintenance_BtnFilterInterval, LE_WIDGET_BACKGROUND_NONE);
    maintenance_BtnFilterInterval->fn->setBorderType(maintenance_BtnFilterInterval, LE_WIDGET_BORDER_NONE);
    maintenance_BtnFilterInterval->fn->setString(maintenance_BtnFilterInterval, (leString*)&string_SERVICE5_FilterInterval);
    maintenance_BtnFilterInterval->fn->setPressedImage(maintenance_BtnFilterInterval, (leImage*)&OpSetting_button_on);
    maintenance_BtnFilterInterval->fn->setReleasedImage(maintenance_BtnFilterInterval, (leImage*)&OpSetting_button_off);
    maintenance_BtnFilterInterval->fn->setImagePosition(maintenance_BtnFilterInterval, LE_RELATIVE_POSITION_BEHIND);
    maintenance_BtnFilterInterval->fn->setReleasedEventCallback(maintenance_BtnFilterInterval, event_maintenance_BtnFilterInterval_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnFilterInterval);

    maintenance_BtnPMInterval = leButtonWidget_New();
    maintenance_BtnPMInterval->fn->setPosition(maintenance_BtnPMInterval, 213, 140);
    maintenance_BtnPMInterval->fn->setSize(maintenance_BtnPMInterval, 220, 40);
    maintenance_BtnPMInterval->fn->setScheme(maintenance_BtnPMInterval, &Button_Transparent);
    maintenance_BtnPMInterval->fn->setBackgroundType(maintenance_BtnPMInterval, LE_WIDGET_BACKGROUND_NONE);
    maintenance_BtnPMInterval->fn->setBorderType(maintenance_BtnPMInterval, LE_WIDGET_BORDER_NONE);
    maintenance_BtnPMInterval->fn->setString(maintenance_BtnPMInterval, (leString*)&string_SERVICE4_PMInterval);
    maintenance_BtnPMInterval->fn->setPressedImage(maintenance_BtnPMInterval, (leImage*)&OpSetting_button_on);
    maintenance_BtnPMInterval->fn->setReleasedImage(maintenance_BtnPMInterval, (leImage*)&OpSetting_button_off);
    maintenance_BtnPMInterval->fn->setImagePosition(maintenance_BtnPMInterval, LE_RELATIVE_POSITION_BEHIND);
    maintenance_BtnPMInterval->fn->setReleasedEventCallback(maintenance_BtnPMInterval, event_maintenance_BtnPMInterval_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnPMInterval);

    maintenance_BtnReplaceFilter = leButtonWidget_New();
    maintenance_BtnReplaceFilter->fn->setPosition(maintenance_BtnReplaceFilter, 213, 95);
    maintenance_BtnReplaceFilter->fn->setSize(maintenance_BtnReplaceFilter, 220, 40);
    maintenance_BtnReplaceFilter->fn->setScheme(maintenance_BtnReplaceFilter, &Button_Transparent);
    maintenance_BtnReplaceFilter->fn->setBackgroundType(maintenance_BtnReplaceFilter, LE_WIDGET_BACKGROUND_NONE);
    maintenance_BtnReplaceFilter->fn->setBorderType(maintenance_BtnReplaceFilter, LE_WIDGET_BORDER_NONE);
    maintenance_BtnReplaceFilter->fn->setString(maintenance_BtnReplaceFilter, (leString*)&string_MAINTENANCE_FILTER_ReplaceFilter);
    maintenance_BtnReplaceFilter->fn->setPressedImage(maintenance_BtnReplaceFilter, (leImage*)&OpSetting_button_on);
    maintenance_BtnReplaceFilter->fn->setReleasedImage(maintenance_BtnReplaceFilter, (leImage*)&OpSetting_button_off);
    maintenance_BtnReplaceFilter->fn->setImagePosition(maintenance_BtnReplaceFilter, LE_RELATIVE_POSITION_BEHIND);
    maintenance_BtnReplaceFilter->fn->setReleasedEventCallback(maintenance_BtnReplaceFilter, event_maintenance_BtnReplaceFilter_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnReplaceFilter);

    maintenance_BtnSanitize = leButtonWidget_New();
    maintenance_BtnSanitize->fn->setPosition(maintenance_BtnSanitize, 213, 50);
    maintenance_BtnSanitize->fn->setSize(maintenance_BtnSanitize, 220, 40);
    maintenance_BtnSanitize->fn->setScheme(maintenance_BtnSanitize, &Button_Transparent);
    maintenance_BtnSanitize->fn->setBackgroundType(maintenance_BtnSanitize, LE_WIDGET_BACKGROUND_NONE);
    maintenance_BtnSanitize->fn->setBorderType(maintenance_BtnSanitize, LE_WIDGET_BORDER_NONE);
    maintenance_BtnSanitize->fn->setString(maintenance_BtnSanitize, (leString*)&string_MAINTENANCE_SANITIZE_CleanAndSanitize);
    maintenance_BtnSanitize->fn->setPressedImage(maintenance_BtnSanitize, (leImage*)&OpSetting_button_on);
    maintenance_BtnSanitize->fn->setReleasedImage(maintenance_BtnSanitize, (leImage*)&OpSetting_button_off);
    maintenance_BtnSanitize->fn->setImagePosition(maintenance_BtnSanitize, LE_RELATIVE_POSITION_BEHIND);
    maintenance_BtnSanitize->fn->setReleasedEventCallback(maintenance_BtnSanitize, event_maintenance_BtnSanitize_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnSanitize);

    maintenance_BtnCleanScreen = leButtonWidget_New();
    maintenance_BtnCleanScreen->fn->setPosition(maintenance_BtnCleanScreen, 213, 5);
    maintenance_BtnCleanScreen->fn->setSize(maintenance_BtnCleanScreen, 220, 40);
    maintenance_BtnCleanScreen->fn->setScheme(maintenance_BtnCleanScreen, &Button_Transparent);
    maintenance_BtnCleanScreen->fn->setBackgroundType(maintenance_BtnCleanScreen, LE_WIDGET_BACKGROUND_NONE);
    maintenance_BtnCleanScreen->fn->setBorderType(maintenance_BtnCleanScreen, LE_WIDGET_BORDER_NONE);
    maintenance_BtnCleanScreen->fn->setString(maintenance_BtnCleanScreen, (leString*)&string_MAINTENANCE_CLEANSCREEN_CleanScreen);
    maintenance_BtnCleanScreen->fn->setPressedImage(maintenance_BtnCleanScreen, (leImage*)&OpSetting_button_on);
    maintenance_BtnCleanScreen->fn->setReleasedImage(maintenance_BtnCleanScreen, (leImage*)&OpSetting_button_off);
    maintenance_BtnCleanScreen->fn->setImagePosition(maintenance_BtnCleanScreen, LE_RELATIVE_POSITION_BEHIND);
    maintenance_BtnCleanScreen->fn->setReleasedEventCallback(maintenance_BtnCleanScreen, event_maintenance_BtnCleanScreen_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnCleanScreen);

    maintenance_BtnHome = leButtonWidget_New();
    maintenance_BtnHome->fn->setPosition(maintenance_BtnHome, 435, 225);
    maintenance_BtnHome->fn->setSize(maintenance_BtnHome, 40, 40);
    maintenance_BtnHome->fn->setScheme(maintenance_BtnHome, &BlackBack);
    maintenance_BtnHome->fn->setBackgroundType(maintenance_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    maintenance_BtnHome->fn->setBorderType(maintenance_BtnHome, LE_WIDGET_BORDER_NONE);
    maintenance_BtnHome->fn->setPressedImage(maintenance_BtnHome, (leImage*)&Menu_home);
    maintenance_BtnHome->fn->setReleasedImage(maintenance_BtnHome, (leImage*)&Menu_home);
    maintenance_BtnHome->fn->setReleasedEventCallback(maintenance_BtnHome, event_maintenance_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnHome);

    maintenance_BtnTroubleshoot = leButtonWidget_New();
    maintenance_BtnTroubleshoot->fn->setPosition(maintenance_BtnTroubleshoot, 0, 217);
    maintenance_BtnTroubleshoot->fn->setSize(maintenance_BtnTroubleshoot, 200, 55);
    maintenance_BtnTroubleshoot->fn->setScheme(maintenance_BtnTroubleshoot, &menu_btn2);
    maintenance_BtnTroubleshoot->fn->setHAlignment(maintenance_BtnTroubleshoot, LE_HALIGN_LEFT);
    maintenance_BtnTroubleshoot->fn->setString(maintenance_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    maintenance_BtnTroubleshoot->fn->setPressedImage(maintenance_BtnTroubleshoot, (leImage*)&Menu_bar);
    maintenance_BtnTroubleshoot->fn->setReleasedImage(maintenance_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    maintenance_BtnTroubleshoot->fn->setImageMargin(maintenance_BtnTroubleshoot, 5);
    maintenance_BtnTroubleshoot->fn->setReleasedEventCallback(maintenance_BtnTroubleshoot, event_maintenance_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnTroubleshoot);

    maintenance_BtnSystemInformation = leButtonWidget_New();
    maintenance_BtnSystemInformation->fn->setPosition(maintenance_BtnSystemInformation, 0, 163);
    maintenance_BtnSystemInformation->fn->setSize(maintenance_BtnSystemInformation, 200, 54);
    maintenance_BtnSystemInformation->fn->setScheme(maintenance_BtnSystemInformation, &menu_btn2);
    maintenance_BtnSystemInformation->fn->setHAlignment(maintenance_BtnSystemInformation, LE_HALIGN_LEFT);
    maintenance_BtnSystemInformation->fn->setString(maintenance_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    maintenance_BtnSystemInformation->fn->setPressedImage(maintenance_BtnSystemInformation, (leImage*)&Menu_bar);
    maintenance_BtnSystemInformation->fn->setReleasedImage(maintenance_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    maintenance_BtnSystemInformation->fn->setImageMargin(maintenance_BtnSystemInformation, 5);
    maintenance_BtnSystemInformation->fn->setReleasedEventCallback(maintenance_BtnSystemInformation, event_maintenance_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnSystemInformation);

    maintenance_BtnService = leButtonWidget_New();
    maintenance_BtnService->fn->setPosition(maintenance_BtnService, 0, 109);
    maintenance_BtnService->fn->setSize(maintenance_BtnService, 200, 54);
    maintenance_BtnService->fn->setScheme(maintenance_BtnService, &menu_btn2);
    maintenance_BtnService->fn->setHAlignment(maintenance_BtnService, LE_HALIGN_LEFT);
    maintenance_BtnService->fn->setString(maintenance_BtnService, (leString*)&string_MENU_Service);
    maintenance_BtnService->fn->setPressedImage(maintenance_BtnService, (leImage*)&Menu_bar);
    maintenance_BtnService->fn->setReleasedImage(maintenance_BtnService, (leImage*)&Menu_bar_clear);
    maintenance_BtnService->fn->setImageMargin(maintenance_BtnService, 5);
    maintenance_BtnService->fn->setReleasedEventCallback(maintenance_BtnService, event_maintenance_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_BtnService);

    maintenance_ButtonWidget0 = leButtonWidget_New();
    maintenance_ButtonWidget0->fn->setPosition(maintenance_ButtonWidget0, 213, 230);
    maintenance_ButtonWidget0->fn->setSize(maintenance_ButtonWidget0, 220, 40);
    maintenance_ButtonWidget0->fn->setScheme(maintenance_ButtonWidget0, &Button_Transparent);
    maintenance_ButtonWidget0->fn->setBackgroundType(maintenance_ButtonWidget0, LE_WIDGET_BACKGROUND_NONE);
    maintenance_ButtonWidget0->fn->setBorderType(maintenance_ButtonWidget0, LE_WIDGET_BORDER_NONE);
    maintenance_ButtonWidget0->fn->setPressedImage(maintenance_ButtonWidget0, (leImage*)&OpSetting_button_on);
    maintenance_ButtonWidget0->fn->setReleasedImage(maintenance_ButtonWidget0, (leImage*)&OpSetting_button_off);
    root1->fn->addChild(root1, (leWidget*)maintenance_ButtonWidget0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    maintenance_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_maintenance(void)
{
}

void screenHide_maintenance(void)
{
    maintenance_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    maintenance_Layer_0_FillPanel = NULL;
    maintenance_BtnMaintenance = NULL;
    maintenance_BtnOperationSettings = NULL;
    maintenance_BtnExit = NULL;
    maintenance_BtnFilterInterval = NULL;
    maintenance_BtnPMInterval = NULL;
    maintenance_BtnReplaceFilter = NULL;
    maintenance_BtnSanitize = NULL;
    maintenance_BtnCleanScreen = NULL;
    maintenance_BtnHome = NULL;
    maintenance_BtnTroubleshoot = NULL;
    maintenance_BtnSystemInformation = NULL;
    maintenance_BtnService = NULL;
    maintenance_ButtonWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_maintenance(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_maintenance(uint32_t lyrIdx)
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

