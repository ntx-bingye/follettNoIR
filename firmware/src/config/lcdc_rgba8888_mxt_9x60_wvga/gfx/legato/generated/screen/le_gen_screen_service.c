#include "gfx/legato/generated/screen/le_gen_screen_service.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_Layer_0_FillPanel;
leScrollBarWidget* service_ScrollBar;
leWidget* service_PanelService;
leButtonWidget* service_BtnAdvanced;
leButtonWidget* service_BtnScreenTimeout;
leButtonWidget* service_BtnWakeOnSleep;
leButtonWidget* service_BtnTimeDelay;
leButtonWidget* service_BtnExit;
leButtonWidget* service_BtnWaterQuality;
leButtonWidget* service_BtnFlushEnable;
leButtonWidget* service_BtnHome;
leButtonWidget* service_BtnTroubleshoot;
leButtonWidget* service_BtnSystemInformation;
leButtonWidget* service_BtnService;
leButtonWidget* service_BtnOperationSettings;
leButtonWidget* service_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service(void)
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

    service_Layer_0_FillPanel = leWidget_New();
    service_Layer_0_FillPanel->fn->setPosition(service_Layer_0_FillPanel, 0, 0);
    service_Layer_0_FillPanel->fn->setSize(service_Layer_0_FillPanel, 480, 272);
    service_Layer_0_FillPanel->fn->setScheme(service_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_Layer_0_FillPanel);

    service_ScrollBar = leScrollBarWidget_New();
    service_ScrollBar->fn->setPosition(service_ScrollBar, 447, 50);
    service_ScrollBar->fn->setSize(service_ScrollBar, 33, 165);
    service_ScrollBar->fn->setEnabled(service_ScrollBar, LE_FALSE);
    service_ScrollBar->fn->setVisible(service_ScrollBar, LE_FALSE);
    service_ScrollBar->fn->setScheme(service_ScrollBar, &Scroll_Gray2A);
    service_ScrollBar->fn->setHAlignment(service_ScrollBar, LE_HALIGN_RIGHT);
    service_ScrollBar->fn->setVAlignment(service_ScrollBar, LE_VALIGN_BOTTOM);
    service_ScrollBar->fn->setMaximumValue(service_ScrollBar, 110);
    service_ScrollBar->fn->setExtentValue(service_ScrollBar, 40);
    service_ScrollBar->fn->setStepSize(service_ScrollBar, 40);
    service_ScrollBar->fn->setValueChangedEventCallback(service_ScrollBar, event_service_ScrollBar_OnValueChanged);
    root0->fn->addChild(root0, (leWidget*)service_ScrollBar);

    service_PanelService = leWidget_New();
    service_PanelService->fn->setPosition(service_PanelService, 210, 243);
    service_PanelService->fn->setSize(service_PanelService, 215, 29);
    service_PanelService->fn->setScheme(service_PanelService, &Button_Gray1);
    service_PanelService->fn->setBackgroundType(service_PanelService, LE_WIDGET_BACKGROUND_NONE);
    service_PanelService->fn->setHAlignment(service_PanelService, LE_HALIGN_RIGHT);
    service_PanelService->fn->setVAlignment(service_PanelService, LE_VALIGN_BOTTOM);
    root0->fn->addChild(root0, (leWidget*)service_PanelService);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_BtnAdvanced = leButtonWidget_New();
    service_BtnAdvanced->fn->setPosition(service_BtnAdvanced, 213, 197);
    service_BtnAdvanced->fn->setSize(service_BtnAdvanced, 220, 40);
    service_BtnAdvanced->fn->setScheme(service_BtnAdvanced, &Button_Gray1);
    service_BtnAdvanced->fn->setBackgroundType(service_BtnAdvanced, LE_WIDGET_BACKGROUND_NONE);
    service_BtnAdvanced->fn->setBorderType(service_BtnAdvanced, LE_WIDGET_BORDER_NONE);
    service_BtnAdvanced->fn->setMargins(service_BtnAdvanced, 0, 0, 0, 0);
    service_BtnAdvanced->fn->setString(service_BtnAdvanced, (leString*)&string_SERVICE_MENU_Advanced);
    service_BtnAdvanced->fn->setPressedImage(service_BtnAdvanced, (leImage*)&OpSetting_button_on);
    service_BtnAdvanced->fn->setReleasedImage(service_BtnAdvanced, (leImage*)&OpSetting_button_off);
    service_BtnAdvanced->fn->setImagePosition(service_BtnAdvanced, LE_RELATIVE_POSITION_BEHIND);
    service_BtnAdvanced->fn->setImageMargin(service_BtnAdvanced, 5);
    service_BtnAdvanced->fn->setReleasedEventCallback(service_BtnAdvanced, event_service_BtnAdvanced_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnAdvanced);

    service_BtnScreenTimeout = leButtonWidget_New();
    service_BtnScreenTimeout->fn->setPosition(service_BtnScreenTimeout, 213, 142);
    service_BtnScreenTimeout->fn->setSize(service_BtnScreenTimeout, 220, 40);
    service_BtnScreenTimeout->fn->setScheme(service_BtnScreenTimeout, &Button_Gray1);
    service_BtnScreenTimeout->fn->setBackgroundType(service_BtnScreenTimeout, LE_WIDGET_BACKGROUND_NONE);
    service_BtnScreenTimeout->fn->setBorderType(service_BtnScreenTimeout, LE_WIDGET_BORDER_NONE);
    service_BtnScreenTimeout->fn->setMargins(service_BtnScreenTimeout, 0, 0, 0, 0);
    service_BtnScreenTimeout->fn->setString(service_BtnScreenTimeout, (leString*)&string_SERVICE_MENU_ScreenTimeout);
    service_BtnScreenTimeout->fn->setPressedImage(service_BtnScreenTimeout, (leImage*)&OpSetting_button_on);
    service_BtnScreenTimeout->fn->setReleasedImage(service_BtnScreenTimeout, (leImage*)&OpSetting_button_off);
    service_BtnScreenTimeout->fn->setImagePosition(service_BtnScreenTimeout, LE_RELATIVE_POSITION_BEHIND);
    service_BtnScreenTimeout->fn->setImageMargin(service_BtnScreenTimeout, 5);
    service_BtnScreenTimeout->fn->setReleasedEventCallback(service_BtnScreenTimeout, event_service_BtnScreenTimeout_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnScreenTimeout);

    service_BtnWakeOnSleep = leButtonWidget_New();
    service_BtnWakeOnSleep->fn->setPosition(service_BtnWakeOnSleep, 213, 87);
    service_BtnWakeOnSleep->fn->setSize(service_BtnWakeOnSleep, 220, 40);
    service_BtnWakeOnSleep->fn->setScheme(service_BtnWakeOnSleep, &Button_Gray1);
    service_BtnWakeOnSleep->fn->setBackgroundType(service_BtnWakeOnSleep, LE_WIDGET_BACKGROUND_NONE);
    service_BtnWakeOnSleep->fn->setBorderType(service_BtnWakeOnSleep, LE_WIDGET_BORDER_NONE);
    service_BtnWakeOnSleep->fn->setMargins(service_BtnWakeOnSleep, 0, 0, 0, 0);
    service_BtnWakeOnSleep->fn->setString(service_BtnWakeOnSleep, (leString*)&string_SERVICE_MENU_WakeOnSleep);
    service_BtnWakeOnSleep->fn->setPressedImage(service_BtnWakeOnSleep, (leImage*)&OpSetting_button_on);
    service_BtnWakeOnSleep->fn->setReleasedImage(service_BtnWakeOnSleep, (leImage*)&OpSetting_button_off);
    service_BtnWakeOnSleep->fn->setImagePosition(service_BtnWakeOnSleep, LE_RELATIVE_POSITION_BEHIND);
    service_BtnWakeOnSleep->fn->setImageMargin(service_BtnWakeOnSleep, 5);
    service_BtnWakeOnSleep->fn->setReleasedEventCallback(service_BtnWakeOnSleep, event_service_BtnWakeOnSleep_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnWakeOnSleep);

    service_BtnTimeDelay = leButtonWidget_New();
    service_BtnTimeDelay->fn->setPosition(service_BtnTimeDelay, 213, 32);
    service_BtnTimeDelay->fn->setSize(service_BtnTimeDelay, 220, 40);
    service_BtnTimeDelay->fn->setScheme(service_BtnTimeDelay, &Button_Gray1);
    service_BtnTimeDelay->fn->setBackgroundType(service_BtnTimeDelay, LE_WIDGET_BACKGROUND_NONE);
    service_BtnTimeDelay->fn->setBorderType(service_BtnTimeDelay, LE_WIDGET_BORDER_NONE);
    service_BtnTimeDelay->fn->setMargins(service_BtnTimeDelay, 0, 0, 0, 0);
    service_BtnTimeDelay->fn->setString(service_BtnTimeDelay, (leString*)&string_SERVICE_MENU_TimeDelay);
    service_BtnTimeDelay->fn->setPressedImage(service_BtnTimeDelay, (leImage*)&OpSetting_button_on);
    service_BtnTimeDelay->fn->setReleasedImage(service_BtnTimeDelay, (leImage*)&OpSetting_button_off);
    service_BtnTimeDelay->fn->setImagePosition(service_BtnTimeDelay, LE_RELATIVE_POSITION_BEHIND);
    service_BtnTimeDelay->fn->setImageMargin(service_BtnTimeDelay, 5);
    service_BtnTimeDelay->fn->setReleasedEventCallback(service_BtnTimeDelay, event_service_BtnTimeDelay_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnTimeDelay);

    service_BtnExit = leButtonWidget_New();
    service_BtnExit->fn->setPosition(service_BtnExit, 425, 2);
    service_BtnExit->fn->setSize(service_BtnExit, 50, 60);
    service_BtnExit->fn->setScheme(service_BtnExit, &BlackBack);
    service_BtnExit->fn->setBackgroundType(service_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_BtnExit->fn->setBorderType(service_BtnExit, LE_WIDGET_BORDER_NONE);
    service_BtnExit->fn->setHAlignment(service_BtnExit, LE_HALIGN_RIGHT);
    service_BtnExit->fn->setVAlignment(service_BtnExit, LE_VALIGN_TOP);
    service_BtnExit->fn->setMargins(service_BtnExit, 4, 10, 10, 4);
    service_BtnExit->fn->setPressedImage(service_BtnExit, (leImage*)&Menu_exit_white);
    service_BtnExit->fn->setReleasedImage(service_BtnExit, (leImage*)&Menu_exit_white);
    service_BtnExit->fn->setReleasedEventCallback(service_BtnExit, event_service_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnExit);

    service_BtnWaterQuality = leButtonWidget_New();
    service_BtnWaterQuality->fn->setPosition(service_BtnWaterQuality, 210, 447);
    service_BtnWaterQuality->fn->setSize(service_BtnWaterQuality, 215, 39);
    service_BtnWaterQuality->fn->setEnabled(service_BtnWaterQuality, LE_FALSE);
    service_BtnWaterQuality->fn->setVisible(service_BtnWaterQuality, LE_FALSE);
    service_BtnWaterQuality->fn->setScheme(service_BtnWaterQuality, &Button_Gray2A);
    service_BtnWaterQuality->fn->setHAlignment(service_BtnWaterQuality, LE_HALIGN_LEFT);
    service_BtnWaterQuality->fn->setMargins(service_BtnWaterQuality, 0, 0, 0, 0);
    service_BtnWaterQuality->fn->setString(service_BtnWaterQuality, (leString*)&string_SERVICE_MENU_WaterQuality);
    service_BtnWaterQuality->fn->setPressedImage(service_BtnWaterQuality, (leImage*)&Menu_bar);
    service_BtnWaterQuality->fn->setReleasedImage(service_BtnWaterQuality, (leImage*)&Menu_bar_clear);
    service_BtnWaterQuality->fn->setImageMargin(service_BtnWaterQuality, 5);
    service_BtnWaterQuality->fn->setReleasedEventCallback(service_BtnWaterQuality, event_service_BtnWaterQuality_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnWaterQuality);

    service_BtnFlushEnable = leButtonWidget_New();
    service_BtnFlushEnable->fn->setPosition(service_BtnFlushEnable, 210, 447);
    service_BtnFlushEnable->fn->setSize(service_BtnFlushEnable, 215, 39);
    service_BtnFlushEnable->fn->setEnabled(service_BtnFlushEnable, LE_FALSE);
    service_BtnFlushEnable->fn->setVisible(service_BtnFlushEnable, LE_FALSE);
    service_BtnFlushEnable->fn->setScheme(service_BtnFlushEnable, &Button_Gray2A);
    service_BtnFlushEnable->fn->setHAlignment(service_BtnFlushEnable, LE_HALIGN_LEFT);
    service_BtnFlushEnable->fn->setMargins(service_BtnFlushEnable, 0, 0, 0, 0);
    service_BtnFlushEnable->fn->setString(service_BtnFlushEnable, (leString*)&string_SERVICE_MENU_FlushEnable);
    service_BtnFlushEnable->fn->setPressedImage(service_BtnFlushEnable, (leImage*)&Menu_bar);
    service_BtnFlushEnable->fn->setReleasedImage(service_BtnFlushEnable, (leImage*)&Menu_bar_clear);
    service_BtnFlushEnable->fn->setImageMargin(service_BtnFlushEnable, 5);
    service_BtnFlushEnable->fn->setReleasedEventCallback(service_BtnFlushEnable, event_service_BtnFlushEnable_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnFlushEnable);

    service_BtnHome = leButtonWidget_New();
    service_BtnHome->fn->setPosition(service_BtnHome, 435, 225);
    service_BtnHome->fn->setSize(service_BtnHome, 40, 40);
    service_BtnHome->fn->setScheme(service_BtnHome, &BlackBack);
    service_BtnHome->fn->setBackgroundType(service_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_BtnHome->fn->setBorderType(service_BtnHome, LE_WIDGET_BORDER_NONE);
    service_BtnHome->fn->setPressedImage(service_BtnHome, (leImage*)&Menu_home);
    service_BtnHome->fn->setReleasedImage(service_BtnHome, (leImage*)&Menu_home);
    service_BtnHome->fn->setReleasedEventCallback(service_BtnHome, event_service_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnHome);

    service_BtnTroubleshoot = leButtonWidget_New();
    service_BtnTroubleshoot->fn->setPosition(service_BtnTroubleshoot, 0, 217);
    service_BtnTroubleshoot->fn->setSize(service_BtnTroubleshoot, 200, 55);
    service_BtnTroubleshoot->fn->setScheme(service_BtnTroubleshoot, &menu_btn2);
    service_BtnTroubleshoot->fn->setHAlignment(service_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_BtnTroubleshoot->fn->setString(service_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_BtnTroubleshoot->fn->setPressedImage(service_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_BtnTroubleshoot->fn->setReleasedImage(service_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_BtnTroubleshoot->fn->setImageMargin(service_BtnTroubleshoot, 5);
    service_BtnTroubleshoot->fn->setReleasedEventCallback(service_BtnTroubleshoot, event_service_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnTroubleshoot);

    service_BtnSystemInformation = leButtonWidget_New();
    service_BtnSystemInformation->fn->setPosition(service_BtnSystemInformation, 0, 163);
    service_BtnSystemInformation->fn->setSize(service_BtnSystemInformation, 200, 54);
    service_BtnSystemInformation->fn->setScheme(service_BtnSystemInformation, &menu_btn2);
    service_BtnSystemInformation->fn->setHAlignment(service_BtnSystemInformation, LE_HALIGN_LEFT);
    service_BtnSystemInformation->fn->setString(service_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_BtnSystemInformation->fn->setPressedImage(service_BtnSystemInformation, (leImage*)&Menu_bar);
    service_BtnSystemInformation->fn->setReleasedImage(service_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_BtnSystemInformation->fn->setImageMargin(service_BtnSystemInformation, 5);
    service_BtnSystemInformation->fn->setReleasedEventCallback(service_BtnSystemInformation, event_service_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnSystemInformation);

    service_BtnService = leButtonWidget_New();
    service_BtnService->fn->setPosition(service_BtnService, 0, 109);
    service_BtnService->fn->setSize(service_BtnService, 200, 54);
    service_BtnService->fn->setScheme(service_BtnService, &Button_Gray2);
    service_BtnService->fn->setHAlignment(service_BtnService, LE_HALIGN_LEFT);
    service_BtnService->fn->setString(service_BtnService, (leString*)&string_MENU_Service);
    service_BtnService->fn->setPressedImage(service_BtnService, (leImage*)&Menu_bar);
    service_BtnService->fn->setReleasedImage(service_BtnService, (leImage*)&Menu_bar);
    service_BtnService->fn->setImageMargin(service_BtnService, 5);
    root1->fn->addChild(root1, (leWidget*)service_BtnService);

    service_BtnOperationSettings = leButtonWidget_New();
    service_BtnOperationSettings->fn->setPosition(service_BtnOperationSettings, 0, 55);
    service_BtnOperationSettings->fn->setSize(service_BtnOperationSettings, 200, 54);
    service_BtnOperationSettings->fn->setScheme(service_BtnOperationSettings, &menu_btn2);
    service_BtnOperationSettings->fn->setHAlignment(service_BtnOperationSettings, LE_HALIGN_LEFT);
    service_BtnOperationSettings->fn->setString(service_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_BtnOperationSettings->fn->setPressedImage(service_BtnOperationSettings, (leImage*)&Menu_bar);
    service_BtnOperationSettings->fn->setReleasedImage(service_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_BtnOperationSettings->fn->setImageMargin(service_BtnOperationSettings, 5);
    service_BtnOperationSettings->fn->setReleasedEventCallback(service_BtnOperationSettings, event_service_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnOperationSettings);

    service_BtnMaintenance = leButtonWidget_New();
    service_BtnMaintenance->fn->setPosition(service_BtnMaintenance, 0, 0);
    service_BtnMaintenance->fn->setSize(service_BtnMaintenance, 200, 55);
    service_BtnMaintenance->fn->setScheme(service_BtnMaintenance, &menu_btn2);
    service_BtnMaintenance->fn->setHAlignment(service_BtnMaintenance, LE_HALIGN_LEFT);
    service_BtnMaintenance->fn->setString(service_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_BtnMaintenance->fn->setPressedImage(service_BtnMaintenance, (leImage*)&Menu_bar);
    service_BtnMaintenance->fn->setReleasedImage(service_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_BtnMaintenance->fn->setImageMargin(service_BtnMaintenance, 5);
    service_BtnMaintenance->fn->setReleasedEventCallback(service_BtnMaintenance, event_service_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service(void)
{
}

void screenHide_service(void)
{
    service_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_Layer_0_FillPanel = NULL;
    service_ScrollBar = NULL;
    service_PanelService = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_BtnAdvanced = NULL;
    service_BtnScreenTimeout = NULL;
    service_BtnWakeOnSleep = NULL;
    service_BtnTimeDelay = NULL;
    service_BtnExit = NULL;
    service_BtnWaterQuality = NULL;
    service_BtnFlushEnable = NULL;
    service_BtnHome = NULL;
    service_BtnTroubleshoot = NULL;
    service_BtnSystemInformation = NULL;
    service_BtnService = NULL;
    service_BtnOperationSettings = NULL;
    service_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service(uint32_t lyrIdx)
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

