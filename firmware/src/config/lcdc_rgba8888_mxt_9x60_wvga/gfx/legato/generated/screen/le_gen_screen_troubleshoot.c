#include "gfx/legato/generated/screen/le_gen_screen_troubleshoot.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* troubleshoot_Layer_0_FillPanel;
leButtonWidget* troubleshoot_BtnExit;
leButtonWidget* troubleshoot_BtnManual;
leButtonWidget* troubleshoot_BtnEventLog;
leButtonWidget* troubleshoot_BtnWaterLeak;
leButtonWidget* troubleshoot_BtnLowWater;
leButtonWidget* troubleshoot_BtnHome;
leButtonWidget* troubleshoot_BtnTroubleshoot;
leButtonWidget* troubleshoot_BtnSystemInformation;
leButtonWidget* troubleshoot_BtnDripTrayFull;
leButtonWidget* troubleshoot_BtnService;
leButtonWidget* troubleshoot_BtnOperationSettings;
leButtonWidget* troubleshoot_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_troubleshoot(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_troubleshoot(void)
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

    troubleshoot_Layer_0_FillPanel = leWidget_New();
    troubleshoot_Layer_0_FillPanel->fn->setPosition(troubleshoot_Layer_0_FillPanel, 0, 0);
    troubleshoot_Layer_0_FillPanel->fn->setSize(troubleshoot_Layer_0_FillPanel, 480, 272);
    troubleshoot_Layer_0_FillPanel->fn->setScheme(troubleshoot_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)troubleshoot_Layer_0_FillPanel);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    troubleshoot_BtnExit = leButtonWidget_New();
    troubleshoot_BtnExit->fn->setPosition(troubleshoot_BtnExit, 435, 2);
    troubleshoot_BtnExit->fn->setSize(troubleshoot_BtnExit, 40, 60);
    troubleshoot_BtnExit->fn->setScheme(troubleshoot_BtnExit, &BlackBack);
    troubleshoot_BtnExit->fn->setBackgroundType(troubleshoot_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_BtnExit->fn->setBorderType(troubleshoot_BtnExit, LE_WIDGET_BORDER_NONE);
    troubleshoot_BtnExit->fn->setHAlignment(troubleshoot_BtnExit, LE_HALIGN_RIGHT);
    troubleshoot_BtnExit->fn->setVAlignment(troubleshoot_BtnExit, LE_VALIGN_TOP);
    troubleshoot_BtnExit->fn->setMargins(troubleshoot_BtnExit, 4, 10, 10, 4);
    troubleshoot_BtnExit->fn->setReleasedImage(troubleshoot_BtnExit, (leImage*)&Menu_exit_white);
    troubleshoot_BtnExit->fn->setReleasedEventCallback(troubleshoot_BtnExit, event_troubleshoot_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnExit);

    troubleshoot_BtnManual = leButtonWidget_New();
    troubleshoot_BtnManual->fn->setPosition(troubleshoot_BtnManual, 213, 202);
    troubleshoot_BtnManual->fn->setSize(troubleshoot_BtnManual, 220, 40);
    troubleshoot_BtnManual->fn->setScheme(troubleshoot_BtnManual, &Button_Transparent);
    troubleshoot_BtnManual->fn->setBackgroundType(troubleshoot_BtnManual, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_BtnManual->fn->setBorderType(troubleshoot_BtnManual, LE_WIDGET_BORDER_NONE);
    troubleshoot_BtnManual->fn->setString(troubleshoot_BtnManual, (leString*)&string_SERVICE_MENU_ManualQRCode);
    troubleshoot_BtnManual->fn->setPressedImage(troubleshoot_BtnManual, (leImage*)&OpSetting_button_on);
    troubleshoot_BtnManual->fn->setReleasedImage(troubleshoot_BtnManual, (leImage*)&OpSetting_button_off);
    troubleshoot_BtnManual->fn->setImagePosition(troubleshoot_BtnManual, LE_RELATIVE_POSITION_BEHIND);
    troubleshoot_BtnManual->fn->setReleasedEventCallback(troubleshoot_BtnManual, event_troubleshoot_BtnManual_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnManual);

    troubleshoot_BtnEventLog = leButtonWidget_New();
    troubleshoot_BtnEventLog->fn->setPosition(troubleshoot_BtnEventLog, 213, 157);
    troubleshoot_BtnEventLog->fn->setSize(troubleshoot_BtnEventLog, 220, 40);
    troubleshoot_BtnEventLog->fn->setScheme(troubleshoot_BtnEventLog, &Button_Transparent);
    troubleshoot_BtnEventLog->fn->setBackgroundType(troubleshoot_BtnEventLog, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_BtnEventLog->fn->setBorderType(troubleshoot_BtnEventLog, LE_WIDGET_BORDER_NONE);
    troubleshoot_BtnEventLog->fn->setString(troubleshoot_BtnEventLog, (leString*)&string_SERVICE_MENU_EventLog);
    troubleshoot_BtnEventLog->fn->setPressedImage(troubleshoot_BtnEventLog, (leImage*)&OpSetting_button_on);
    troubleshoot_BtnEventLog->fn->setReleasedImage(troubleshoot_BtnEventLog, (leImage*)&OpSetting_button_off);
    troubleshoot_BtnEventLog->fn->setImagePosition(troubleshoot_BtnEventLog, LE_RELATIVE_POSITION_BEHIND);
    troubleshoot_BtnEventLog->fn->setReleasedEventCallback(troubleshoot_BtnEventLog, event_troubleshoot_BtnEventLog_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnEventLog);

    troubleshoot_BtnWaterLeak = leButtonWidget_New();
    troubleshoot_BtnWaterLeak->fn->setPosition(troubleshoot_BtnWaterLeak, 213, 112);
    troubleshoot_BtnWaterLeak->fn->setSize(troubleshoot_BtnWaterLeak, 220, 40);
    troubleshoot_BtnWaterLeak->fn->setScheme(troubleshoot_BtnWaterLeak, &Button_Transparent);
    troubleshoot_BtnWaterLeak->fn->setBackgroundType(troubleshoot_BtnWaterLeak, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_BtnWaterLeak->fn->setBorderType(troubleshoot_BtnWaterLeak, LE_WIDGET_BORDER_NONE);
    troubleshoot_BtnWaterLeak->fn->setString(troubleshoot_BtnWaterLeak, (leString*)&string_TROUBLESHOOT_WaterLeak);
    troubleshoot_BtnWaterLeak->fn->setPressedImage(troubleshoot_BtnWaterLeak, (leImage*)&OpSetting_button_on);
    troubleshoot_BtnWaterLeak->fn->setReleasedImage(troubleshoot_BtnWaterLeak, (leImage*)&OpSetting_button_off);
    troubleshoot_BtnWaterLeak->fn->setImagePosition(troubleshoot_BtnWaterLeak, LE_RELATIVE_POSITION_BEHIND);
    troubleshoot_BtnWaterLeak->fn->setReleasedEventCallback(troubleshoot_BtnWaterLeak, event_troubleshoot_BtnWaterLeak_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnWaterLeak);

    troubleshoot_BtnLowWater = leButtonWidget_New();
    troubleshoot_BtnLowWater->fn->setPosition(troubleshoot_BtnLowWater, 213, 67);
    troubleshoot_BtnLowWater->fn->setSize(troubleshoot_BtnLowWater, 220, 40);
    troubleshoot_BtnLowWater->fn->setScheme(troubleshoot_BtnLowWater, &Button_Transparent);
    troubleshoot_BtnLowWater->fn->setBackgroundType(troubleshoot_BtnLowWater, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_BtnLowWater->fn->setBorderType(troubleshoot_BtnLowWater, LE_WIDGET_BORDER_NONE);
    troubleshoot_BtnLowWater->fn->setString(troubleshoot_BtnLowWater, (leString*)&string_TROUBLESHOOT_LowWater);
    troubleshoot_BtnLowWater->fn->setPressedImage(troubleshoot_BtnLowWater, (leImage*)&OpSetting_button_on);
    troubleshoot_BtnLowWater->fn->setReleasedImage(troubleshoot_BtnLowWater, (leImage*)&OpSetting_button_off);
    troubleshoot_BtnLowWater->fn->setImagePosition(troubleshoot_BtnLowWater, LE_RELATIVE_POSITION_BEHIND);
    troubleshoot_BtnLowWater->fn->setReleasedEventCallback(troubleshoot_BtnLowWater, event_troubleshoot_BtnLowWater_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnLowWater);

    troubleshoot_BtnHome = leButtonWidget_New();
    troubleshoot_BtnHome->fn->setPosition(troubleshoot_BtnHome, 435, 225);
    troubleshoot_BtnHome->fn->setSize(troubleshoot_BtnHome, 40, 40);
    troubleshoot_BtnHome->fn->setScheme(troubleshoot_BtnHome, &BlackBack);
    troubleshoot_BtnHome->fn->setBackgroundType(troubleshoot_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_BtnHome->fn->setBorderType(troubleshoot_BtnHome, LE_WIDGET_BORDER_NONE);
    troubleshoot_BtnHome->fn->setPressedImage(troubleshoot_BtnHome, (leImage*)&Menu_home);
    troubleshoot_BtnHome->fn->setReleasedImage(troubleshoot_BtnHome, (leImage*)&Menu_home);
    troubleshoot_BtnHome->fn->setReleasedEventCallback(troubleshoot_BtnHome, event_troubleshoot_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnHome);

    troubleshoot_BtnTroubleshoot = leButtonWidget_New();
    troubleshoot_BtnTroubleshoot->fn->setPosition(troubleshoot_BtnTroubleshoot, 0, 217);
    troubleshoot_BtnTroubleshoot->fn->setSize(troubleshoot_BtnTroubleshoot, 200, 55);
    troubleshoot_BtnTroubleshoot->fn->setScheme(troubleshoot_BtnTroubleshoot, &Button_Gray2);
    troubleshoot_BtnTroubleshoot->fn->setHAlignment(troubleshoot_BtnTroubleshoot, LE_HALIGN_LEFT);
    troubleshoot_BtnTroubleshoot->fn->setMargins(troubleshoot_BtnTroubleshoot, 0, 4, 4, 4);
    troubleshoot_BtnTroubleshoot->fn->setString(troubleshoot_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    troubleshoot_BtnTroubleshoot->fn->setPressedImage(troubleshoot_BtnTroubleshoot, (leImage*)&Menu_bar);
    troubleshoot_BtnTroubleshoot->fn->setReleasedImage(troubleshoot_BtnTroubleshoot, (leImage*)&Menu_bar);
    troubleshoot_BtnTroubleshoot->fn->setImageMargin(troubleshoot_BtnTroubleshoot, 5);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnTroubleshoot);

    troubleshoot_BtnSystemInformation = leButtonWidget_New();
    troubleshoot_BtnSystemInformation->fn->setPosition(troubleshoot_BtnSystemInformation, 0, 163);
    troubleshoot_BtnSystemInformation->fn->setSize(troubleshoot_BtnSystemInformation, 200, 54);
    troubleshoot_BtnSystemInformation->fn->setScheme(troubleshoot_BtnSystemInformation, &menu_btn2);
    troubleshoot_BtnSystemInformation->fn->setHAlignment(troubleshoot_BtnSystemInformation, LE_HALIGN_LEFT);
    troubleshoot_BtnSystemInformation->fn->setMargins(troubleshoot_BtnSystemInformation, 0, 4, 4, 4);
    troubleshoot_BtnSystemInformation->fn->setString(troubleshoot_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    troubleshoot_BtnSystemInformation->fn->setPressedImage(troubleshoot_BtnSystemInformation, (leImage*)&Menu_bar);
    troubleshoot_BtnSystemInformation->fn->setReleasedImage(troubleshoot_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    troubleshoot_BtnSystemInformation->fn->setImageMargin(troubleshoot_BtnSystemInformation, 5);
    troubleshoot_BtnSystemInformation->fn->setReleasedEventCallback(troubleshoot_BtnSystemInformation, event_troubleshoot_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnSystemInformation);

    troubleshoot_BtnDripTrayFull = leButtonWidget_New();
    troubleshoot_BtnDripTrayFull->fn->setPosition(troubleshoot_BtnDripTrayFull, 213, 22);
    troubleshoot_BtnDripTrayFull->fn->setSize(troubleshoot_BtnDripTrayFull, 220, 40);
    troubleshoot_BtnDripTrayFull->fn->setScheme(troubleshoot_BtnDripTrayFull, &Button_Transparent);
    troubleshoot_BtnDripTrayFull->fn->setBackgroundType(troubleshoot_BtnDripTrayFull, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_BtnDripTrayFull->fn->setBorderType(troubleshoot_BtnDripTrayFull, LE_WIDGET_BORDER_NONE);
    troubleshoot_BtnDripTrayFull->fn->setString(troubleshoot_BtnDripTrayFull, (leString*)&string_TROUBLESHOOT_DripTrayFull);
    troubleshoot_BtnDripTrayFull->fn->setPressedImage(troubleshoot_BtnDripTrayFull, (leImage*)&OpSetting_button_on);
    troubleshoot_BtnDripTrayFull->fn->setReleasedImage(troubleshoot_BtnDripTrayFull, (leImage*)&OpSetting_button_off);
    troubleshoot_BtnDripTrayFull->fn->setImagePosition(troubleshoot_BtnDripTrayFull, LE_RELATIVE_POSITION_BEHIND);
    troubleshoot_BtnDripTrayFull->fn->setReleasedEventCallback(troubleshoot_BtnDripTrayFull, event_troubleshoot_BtnDripTrayFull_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnDripTrayFull);

    troubleshoot_BtnService = leButtonWidget_New();
    troubleshoot_BtnService->fn->setPosition(troubleshoot_BtnService, 0, 109);
    troubleshoot_BtnService->fn->setSize(troubleshoot_BtnService, 200, 54);
    troubleshoot_BtnService->fn->setScheme(troubleshoot_BtnService, &menu_btn2);
    troubleshoot_BtnService->fn->setHAlignment(troubleshoot_BtnService, LE_HALIGN_LEFT);
    troubleshoot_BtnService->fn->setMargins(troubleshoot_BtnService, 0, 4, 4, 4);
    troubleshoot_BtnService->fn->setString(troubleshoot_BtnService, (leString*)&string_MENU_Service);
    troubleshoot_BtnService->fn->setPressedImage(troubleshoot_BtnService, (leImage*)&Menu_bar);
    troubleshoot_BtnService->fn->setReleasedImage(troubleshoot_BtnService, (leImage*)&Menu_bar_clear);
    troubleshoot_BtnService->fn->setImageMargin(troubleshoot_BtnService, 5);
    troubleshoot_BtnService->fn->setReleasedEventCallback(troubleshoot_BtnService, event_troubleshoot_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnService);

    troubleshoot_BtnOperationSettings = leButtonWidget_New();
    troubleshoot_BtnOperationSettings->fn->setPosition(troubleshoot_BtnOperationSettings, 0, 55);
    troubleshoot_BtnOperationSettings->fn->setSize(troubleshoot_BtnOperationSettings, 200, 54);
    troubleshoot_BtnOperationSettings->fn->setScheme(troubleshoot_BtnOperationSettings, &menu_btn2);
    troubleshoot_BtnOperationSettings->fn->setHAlignment(troubleshoot_BtnOperationSettings, LE_HALIGN_LEFT);
    troubleshoot_BtnOperationSettings->fn->setMargins(troubleshoot_BtnOperationSettings, 0, 4, 4, 4);
    troubleshoot_BtnOperationSettings->fn->setString(troubleshoot_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    troubleshoot_BtnOperationSettings->fn->setPressedImage(troubleshoot_BtnOperationSettings, (leImage*)&Menu_bar);
    troubleshoot_BtnOperationSettings->fn->setReleasedImage(troubleshoot_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    troubleshoot_BtnOperationSettings->fn->setImageMargin(troubleshoot_BtnOperationSettings, 5);
    troubleshoot_BtnOperationSettings->fn->setReleasedEventCallback(troubleshoot_BtnOperationSettings, event_troubleshoot_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnOperationSettings);

    troubleshoot_BtnMaintenance = leButtonWidget_New();
    troubleshoot_BtnMaintenance->fn->setPosition(troubleshoot_BtnMaintenance, 0, 0);
    troubleshoot_BtnMaintenance->fn->setSize(troubleshoot_BtnMaintenance, 200, 55);
    troubleshoot_BtnMaintenance->fn->setScheme(troubleshoot_BtnMaintenance, &menu_btn2);
    troubleshoot_BtnMaintenance->fn->setHAlignment(troubleshoot_BtnMaintenance, LE_HALIGN_LEFT);
    troubleshoot_BtnMaintenance->fn->setMargins(troubleshoot_BtnMaintenance, 0, 4, 4, 4);
    troubleshoot_BtnMaintenance->fn->setString(troubleshoot_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    troubleshoot_BtnMaintenance->fn->setPressedImage(troubleshoot_BtnMaintenance, (leImage*)&Menu_bar);
    troubleshoot_BtnMaintenance->fn->setReleasedImage(troubleshoot_BtnMaintenance, (leImage*)&Menu_bar_clear);
    troubleshoot_BtnMaintenance->fn->setImageMargin(troubleshoot_BtnMaintenance, 5);
    troubleshoot_BtnMaintenance->fn->setReleasedEventCallback(troubleshoot_BtnMaintenance, event_troubleshoot_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    troubleshoot_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_troubleshoot(void)
{
}

void screenHide_troubleshoot(void)
{
    troubleshoot_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    troubleshoot_Layer_0_FillPanel = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    troubleshoot_BtnExit = NULL;
    troubleshoot_BtnManual = NULL;
    troubleshoot_BtnEventLog = NULL;
    troubleshoot_BtnWaterLeak = NULL;
    troubleshoot_BtnLowWater = NULL;
    troubleshoot_BtnHome = NULL;
    troubleshoot_BtnTroubleshoot = NULL;
    troubleshoot_BtnSystemInformation = NULL;
    troubleshoot_BtnDripTrayFull = NULL;
    troubleshoot_BtnService = NULL;
    troubleshoot_BtnOperationSettings = NULL;
    troubleshoot_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_troubleshoot(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_troubleshoot(uint32_t lyrIdx)
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

