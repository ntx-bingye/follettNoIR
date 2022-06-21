#include "gfx/legato/generated/screen/le_gen_screen_main_menuo.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* main_menuo_Layer_0_FillPanel;
leImageWidget* main_menuo_LblHome;
leLabelWidget* main_menuo_LblActiveMode;
leLabelWidget* main_menuo_LblLowBin;
leLabelWidget* main_menuo_LblLowWater;
leImageWidget* main_menuo_ImageWidget0;
leButtonWidget* main_menuo_Btn1;
leButtonWidget* main_menuo_BtnOperationSettings;
leButtonWidget* main_menuo_BtnMaintenance;
leButtonWidget* main_menuo_BtnService;
leButtonWidget* main_menuo_BtnSystem;
leButtonWidget* main_menuo_BtnTroubleshoot;
leButtonWidget* main_menuo_BtnHome;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_main_menuo(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_main_menuo(void)
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

    main_menuo_Layer_0_FillPanel = leWidget_New();
    main_menuo_Layer_0_FillPanel->fn->setPosition(main_menuo_Layer_0_FillPanel, -1, 0);
    main_menuo_Layer_0_FillPanel->fn->setSize(main_menuo_Layer_0_FillPanel, 480, 272);
    main_menuo_Layer_0_FillPanel->fn->setScheme(main_menuo_Layer_0_FillPanel, &BlackBack);
    root1->fn->addChild(root1, (leWidget*)main_menuo_Layer_0_FillPanel);

    main_menuo_LblHome = leImageWidget_New();
    main_menuo_LblHome->fn->setPosition(main_menuo_LblHome, 435, 225);
    main_menuo_LblHome->fn->setSize(main_menuo_LblHome, 40, 40);
    main_menuo_LblHome->fn->setAlphaEnabled(main_menuo_LblHome, LE_TRUE);
    main_menuo_LblHome->fn->setScheme(main_menuo_LblHome, &BlackBack);
    main_menuo_LblHome->fn->setBackgroundType(main_menuo_LblHome, LE_WIDGET_BACKGROUND_NONE);
    main_menuo_LblHome->fn->setBorderType(main_menuo_LblHome, LE_WIDGET_BORDER_NONE);
    main_menuo_LblHome->fn->setImage(main_menuo_LblHome, (leImage*)&Menu_home);
    root1->fn->addChild(root1, (leWidget*)main_menuo_LblHome);

    main_menuo_LblActiveMode = leLabelWidget_New();
    main_menuo_LblActiveMode->fn->setPosition(main_menuo_LblActiveMode, 442, 45);
    main_menuo_LblActiveMode->fn->setSize(main_menuo_LblActiveMode, 37, 42);
    main_menuo_LblActiveMode->fn->setScheme(main_menuo_LblActiveMode, &Label_FontLightBlue);
    main_menuo_LblActiveMode->fn->setBackgroundType(main_menuo_LblActiveMode, LE_WIDGET_BACKGROUND_NONE);
    main_menuo_LblActiveMode->fn->setHAlignment(main_menuo_LblActiveMode, LE_HALIGN_CENTER);
    main_menuo_LblActiveMode->fn->setString(main_menuo_LblActiveMode, (leString*)&string_STATUS_TimeDelay);
    root1->fn->addChild(root1, (leWidget*)main_menuo_LblActiveMode);

    main_menuo_LblLowBin = leLabelWidget_New();
    main_menuo_LblLowBin->fn->setPosition(main_menuo_LblLowBin, 439, 105);
    main_menuo_LblLowBin->fn->setSize(main_menuo_LblLowBin, 40, 42);
    main_menuo_LblLowBin->fn->setScheme(main_menuo_LblLowBin, &Label_FontLightBlue);
    main_menuo_LblLowBin->fn->setBackgroundType(main_menuo_LblLowBin, LE_WIDGET_BACKGROUND_NONE);
    main_menuo_LblLowBin->fn->setHAlignment(main_menuo_LblLowBin, LE_HALIGN_CENTER);
    main_menuo_LblLowBin->fn->setString(main_menuo_LblLowBin, (leString*)&string_STATUS_LowBin);
    root1->fn->addChild(root1, (leWidget*)main_menuo_LblLowBin);

    main_menuo_LblLowWater = leLabelWidget_New();
    main_menuo_LblLowWater->fn->setPosition(main_menuo_LblLowWater, 438, 162);
    main_menuo_LblLowWater->fn->setSize(main_menuo_LblLowWater, 42, 42);
    main_menuo_LblLowWater->fn->setScheme(main_menuo_LblLowWater, &Label_FontLightBlue);
    main_menuo_LblLowWater->fn->setBackgroundType(main_menuo_LblLowWater, LE_WIDGET_BACKGROUND_NONE);
    main_menuo_LblLowWater->fn->setHAlignment(main_menuo_LblLowWater, LE_HALIGN_CENTER);
    main_menuo_LblLowWater->fn->setString(main_menuo_LblLowWater, (leString*)&string_STATUS_LowWater);
    root1->fn->addChild(root1, (leWidget*)main_menuo_LblLowWater);

    main_menuo_ImageWidget0 = leImageWidget_New();
    main_menuo_ImageWidget0->fn->setPosition(main_menuo_ImageWidget0, 203, -98);
    main_menuo_ImageWidget0->fn->setSize(main_menuo_ImageWidget0, 221, 43);
    main_menuo_ImageWidget0->fn->setBackgroundType(main_menuo_ImageWidget0, LE_WIDGET_BACKGROUND_NONE);
    main_menuo_ImageWidget0->fn->setBorderType(main_menuo_ImageWidget0, LE_WIDGET_BORDER_NONE);
    main_menuo_ImageWidget0->fn->setImage(main_menuo_ImageWidget0, (leImage*)&OpSetting_button_on);
    root1->fn->addChild(root1, (leWidget*)main_menuo_ImageWidget0);

    main_menuo_Btn1 = leButtonWidget_New();
    main_menuo_Btn1->fn->setPosition(main_menuo_Btn1, 201, 2);
    main_menuo_Btn1->fn->setSize(main_menuo_Btn1, 229, 47);
    main_menuo_Btn1->fn->setScheme(main_menuo_Btn1, &menu_btn2);
    main_menuo_Btn1->fn->setBackgroundType(main_menuo_Btn1, LE_WIDGET_BACKGROUND_NONE);
    main_menuo_Btn1->fn->setBorderType(main_menuo_Btn1, LE_WIDGET_BORDER_NONE);
    main_menuo_Btn1->fn->setString(main_menuo_Btn1, (leString*)&string_MAINTENANCE_CLEANSCREEN_CleanScreen);
    main_menuo_Btn1->fn->setPressedImage(main_menuo_Btn1, (leImage*)&OpSetting_button_on);
    main_menuo_Btn1->fn->setReleasedImage(main_menuo_Btn1, (leImage*)&OpSetting_button_off);
    main_menuo_Btn1->fn->setImagePosition(main_menuo_Btn1, LE_RELATIVE_POSITION_BEHIND);
    root1->fn->addChild(root1, (leWidget*)main_menuo_Btn1);

    main_menuo_BtnOperationSettings = leButtonWidget_New();
    main_menuo_BtnOperationSettings->fn->setPosition(main_menuo_BtnOperationSettings, 0, 55);
    main_menuo_BtnOperationSettings->fn->setSize(main_menuo_BtnOperationSettings, 200, 54);
    main_menuo_BtnOperationSettings->fn->setScheme(main_menuo_BtnOperationSettings, &menu_btn2);
    main_menuo_BtnOperationSettings->fn->setHAlignment(main_menuo_BtnOperationSettings, LE_HALIGN_LEFT);
    main_menuo_BtnOperationSettings->fn->setString(main_menuo_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    main_menuo_BtnOperationSettings->fn->setPressedImage(main_menuo_BtnOperationSettings, (leImage*)&Menu_bar);
    main_menuo_BtnOperationSettings->fn->setReleasedImage(main_menuo_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    main_menuo_BtnOperationSettings->fn->setImageMargin(main_menuo_BtnOperationSettings, 5);
    main_menuo_BtnOperationSettings->fn->setReleasedEventCallback(main_menuo_BtnOperationSettings, event_main_menuo_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menuo_BtnOperationSettings);

    main_menuo_BtnMaintenance = leButtonWidget_New();
    main_menuo_BtnMaintenance->fn->setPosition(main_menuo_BtnMaintenance, 0, 0);
    main_menuo_BtnMaintenance->fn->setSize(main_menuo_BtnMaintenance, 200, 55);
    main_menuo_BtnMaintenance->fn->setScheme(main_menuo_BtnMaintenance, &menu_btn2);
    main_menuo_BtnMaintenance->fn->setHAlignment(main_menuo_BtnMaintenance, LE_HALIGN_LEFT);
    main_menuo_BtnMaintenance->fn->setString(main_menuo_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    main_menuo_BtnMaintenance->fn->setPressedImage(main_menuo_BtnMaintenance, (leImage*)&Menu_bar);
    main_menuo_BtnMaintenance->fn->setReleasedImage(main_menuo_BtnMaintenance, (leImage*)&Menu_bar_clear);
    main_menuo_BtnMaintenance->fn->setImageMargin(main_menuo_BtnMaintenance, 5);
    main_menuo_BtnMaintenance->fn->setReleasedEventCallback(main_menuo_BtnMaintenance, event_main_menuo_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menuo_BtnMaintenance);

    main_menuo_BtnService = leButtonWidget_New();
    main_menuo_BtnService->fn->setPosition(main_menuo_BtnService, 0, 109);
    main_menuo_BtnService->fn->setSize(main_menuo_BtnService, 200, 54);
    main_menuo_BtnService->fn->setScheme(main_menuo_BtnService, &menu_btn2);
    main_menuo_BtnService->fn->setHAlignment(main_menuo_BtnService, LE_HALIGN_LEFT);
    main_menuo_BtnService->fn->setString(main_menuo_BtnService, (leString*)&string_MENU_Service);
    main_menuo_BtnService->fn->setPressedImage(main_menuo_BtnService, (leImage*)&Menu_bar);
    main_menuo_BtnService->fn->setReleasedImage(main_menuo_BtnService, (leImage*)&Menu_bar_clear);
    main_menuo_BtnService->fn->setImageMargin(main_menuo_BtnService, 5);
    main_menuo_BtnService->fn->setReleasedEventCallback(main_menuo_BtnService, event_main_menuo_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menuo_BtnService);

    main_menuo_BtnSystem = leButtonWidget_New();
    main_menuo_BtnSystem->fn->setPosition(main_menuo_BtnSystem, 0, 163);
    main_menuo_BtnSystem->fn->setSize(main_menuo_BtnSystem, 200, 54);
    main_menuo_BtnSystem->fn->setScheme(main_menuo_BtnSystem, &menu_btn2);
    main_menuo_BtnSystem->fn->setHAlignment(main_menuo_BtnSystem, LE_HALIGN_LEFT);
    main_menuo_BtnSystem->fn->setString(main_menuo_BtnSystem, (leString*)&string_MENU_SystemInformation);
    main_menuo_BtnSystem->fn->setPressedImage(main_menuo_BtnSystem, (leImage*)&Menu_bar);
    main_menuo_BtnSystem->fn->setReleasedImage(main_menuo_BtnSystem, (leImage*)&Menu_bar_clear);
    main_menuo_BtnSystem->fn->setImageMargin(main_menuo_BtnSystem, 5);
    main_menuo_BtnSystem->fn->setReleasedEventCallback(main_menuo_BtnSystem, event_main_menuo_BtnSystem_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menuo_BtnSystem);

    main_menuo_BtnTroubleshoot = leButtonWidget_New();
    main_menuo_BtnTroubleshoot->fn->setPosition(main_menuo_BtnTroubleshoot, 0, 217);
    main_menuo_BtnTroubleshoot->fn->setSize(main_menuo_BtnTroubleshoot, 200, 55);
    main_menuo_BtnTroubleshoot->fn->setScheme(main_menuo_BtnTroubleshoot, &menu_btn2);
    main_menuo_BtnTroubleshoot->fn->setHAlignment(main_menuo_BtnTroubleshoot, LE_HALIGN_LEFT);
    main_menuo_BtnTroubleshoot->fn->setString(main_menuo_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    main_menuo_BtnTroubleshoot->fn->setPressedImage(main_menuo_BtnTroubleshoot, (leImage*)&Menu_bar);
    main_menuo_BtnTroubleshoot->fn->setReleasedImage(main_menuo_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    main_menuo_BtnTroubleshoot->fn->setImageMargin(main_menuo_BtnTroubleshoot, 5);
    main_menuo_BtnTroubleshoot->fn->setReleasedEventCallback(main_menuo_BtnTroubleshoot, event_main_menuo_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menuo_BtnTroubleshoot);

    main_menuo_BtnHome = leButtonWidget_New();
    main_menuo_BtnHome->fn->setPosition(main_menuo_BtnHome, 435, 225);
    main_menuo_BtnHome->fn->setSize(main_menuo_BtnHome, 40, 40);
    main_menuo_BtnHome->fn->setScheme(main_menuo_BtnHome, &BlackBack);
    main_menuo_BtnHome->fn->setBackgroundType(main_menuo_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    main_menuo_BtnHome->fn->setBorderType(main_menuo_BtnHome, LE_WIDGET_BORDER_NONE);
    main_menuo_BtnHome->fn->setPressedImage(main_menuo_BtnHome, (leImage*)&Menu_home);
    main_menuo_BtnHome->fn->setReleasedImage(main_menuo_BtnHome, (leImage*)&Menu_home);
    main_menuo_BtnHome->fn->setReleasedEventCallback(main_menuo_BtnHome, event_main_menuo_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menuo_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    main_menuo_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_main_menuo(void)
{
}

void screenHide_main_menuo(void)
{
    main_menuo_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    main_menuo_Layer_0_FillPanel = NULL;
    main_menuo_LblHome = NULL;
    main_menuo_LblActiveMode = NULL;
    main_menuo_LblLowBin = NULL;
    main_menuo_LblLowWater = NULL;
    main_menuo_ImageWidget0 = NULL;
    main_menuo_Btn1 = NULL;
    main_menuo_BtnOperationSettings = NULL;
    main_menuo_BtnMaintenance = NULL;
    main_menuo_BtnService = NULL;
    main_menuo_BtnSystem = NULL;
    main_menuo_BtnTroubleshoot = NULL;
    main_menuo_BtnHome = NULL;


    showing = LE_FALSE;
}

void screenDestroy_main_menuo(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_main_menuo(uint32_t lyrIdx)
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

