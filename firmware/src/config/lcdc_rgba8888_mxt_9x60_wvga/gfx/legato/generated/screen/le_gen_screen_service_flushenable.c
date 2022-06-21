#include "gfx/legato/generated/screen/le_gen_screen_service_flushenable.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_flushenable_Layer_0_FillPanel;
leLabelWidget* service_flushenable_LblTitle;
leImageWidget* service_flushenable_ImgLine;
leLabelWidget* service_flushenable_LblTimeDelay;
leLabelWidget* service_flushenable_LblSelf;
leLabelWidget* service_flushenable_LblShuttle;
leButtonWidget* service_flushenable_BtnExit;
leButtonWidget* service_flushenable_BtnShuttle;
leButtonWidget* service_flushenable_BtnSelf;
leButtonWidget* service_flushenable_BtnTimeDelay;
leButtonWidget* service_flushenable_BtnHome;
leButtonWidget* service_flushenable_BtnTroubleshoot;
leButtonWidget* service_flushenable_BtnSystemInformation;
leButtonWidget* service_flushenable_BtnService;
leButtonWidget* service_flushenable_BtnOperationSettings;
leButtonWidget* service_flushenable_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_flushenable(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_flushenable(void)
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

    service_flushenable_Layer_0_FillPanel = leWidget_New();
    service_flushenable_Layer_0_FillPanel->fn->setPosition(service_flushenable_Layer_0_FillPanel, 0, 0);
    service_flushenable_Layer_0_FillPanel->fn->setSize(service_flushenable_Layer_0_FillPanel, 480, 272);
    service_flushenable_Layer_0_FillPanel->fn->setScheme(service_flushenable_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_flushenable_Layer_0_FillPanel);

    service_flushenable_LblTitle = leLabelWidget_New();
    service_flushenable_LblTitle->fn->setPosition(service_flushenable_LblTitle, 228, 29);
    service_flushenable_LblTitle->fn->setSize(service_flushenable_LblTitle, 222, 25);
    service_flushenable_LblTitle->fn->setScheme(service_flushenable_LblTitle, &Label_FontWhite);
    service_flushenable_LblTitle->fn->setBackgroundType(service_flushenable_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_LblTitle->fn->setHAlignment(service_flushenable_LblTitle, LE_HALIGN_CENTER);
    service_flushenable_LblTitle->fn->setString(service_flushenable_LblTitle, (leString*)&string_SERVICE10_FlushEnable);
    root0->fn->addChild(root0, (leWidget*)service_flushenable_LblTitle);

    service_flushenable_ImgLine = leImageWidget_New();
    service_flushenable_ImgLine->fn->setPosition(service_flushenable_ImgLine, 218, 62);
    service_flushenable_ImgLine->fn->setSize(service_flushenable_ImgLine, 240, 5);
    service_flushenable_ImgLine->fn->setScheme(service_flushenable_ImgLine, &BlackBack);
    service_flushenable_ImgLine->fn->setBackgroundType(service_flushenable_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_ImgLine->fn->setBorderType(service_flushenable_ImgLine, LE_WIDGET_BORDER_NONE);
    service_flushenable_ImgLine->fn->setImage(service_flushenable_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_flushenable_ImgLine);

    service_flushenable_LblTimeDelay = leLabelWidget_New();
    service_flushenable_LblTimeDelay->fn->setPosition(service_flushenable_LblTimeDelay, 295, 100);
    service_flushenable_LblTimeDelay->fn->setSize(service_flushenable_LblTimeDelay, 170, 25);
    service_flushenable_LblTimeDelay->fn->setScheme(service_flushenable_LblTimeDelay, &Label_FontWhite);
    service_flushenable_LblTimeDelay->fn->setBackgroundType(service_flushenable_LblTimeDelay, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_LblTimeDelay->fn->setString(service_flushenable_LblTimeDelay, (leString*)&string_SERVICE10_TimeDelay);
    root0->fn->addChild(root0, (leWidget*)service_flushenable_LblTimeDelay);

    service_flushenable_LblSelf = leLabelWidget_New();
    service_flushenable_LblSelf->fn->setPosition(service_flushenable_LblSelf, 295, 140);
    service_flushenable_LblSelf->fn->setSize(service_flushenable_LblSelf, 170, 25);
    service_flushenable_LblSelf->fn->setScheme(service_flushenable_LblSelf, &Label_FontWhite);
    service_flushenable_LblSelf->fn->setBackgroundType(service_flushenable_LblSelf, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_LblSelf->fn->setString(service_flushenable_LblSelf, (leString*)&string_SERVICE10_Self);
    root0->fn->addChild(root0, (leWidget*)service_flushenable_LblSelf);

    service_flushenable_LblShuttle = leLabelWidget_New();
    service_flushenable_LblShuttle->fn->setPosition(service_flushenable_LblShuttle, 295, 180);
    service_flushenable_LblShuttle->fn->setSize(service_flushenable_LblShuttle, 170, 25);
    service_flushenable_LblShuttle->fn->setScheme(service_flushenable_LblShuttle, &Label_FontWhite);
    service_flushenable_LblShuttle->fn->setBackgroundType(service_flushenable_LblShuttle, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_LblShuttle->fn->setString(service_flushenable_LblShuttle, (leString*)&string_SERVICE10_Shuttle);
    root0->fn->addChild(root0, (leWidget*)service_flushenable_LblShuttle);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_flushenable_BtnExit = leButtonWidget_New();
    service_flushenable_BtnExit->fn->setPosition(service_flushenable_BtnExit, 415, 2);
    service_flushenable_BtnExit->fn->setSize(service_flushenable_BtnExit, 60, 60);
    service_flushenable_BtnExit->fn->setScheme(service_flushenable_BtnExit, &BlackBack);
    service_flushenable_BtnExit->fn->setBackgroundType(service_flushenable_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_BtnExit->fn->setBorderType(service_flushenable_BtnExit, LE_WIDGET_BORDER_NONE);
    service_flushenable_BtnExit->fn->setHAlignment(service_flushenable_BtnExit, LE_HALIGN_RIGHT);
    service_flushenable_BtnExit->fn->setVAlignment(service_flushenable_BtnExit, LE_VALIGN_TOP);
    service_flushenable_BtnExit->fn->setMargins(service_flushenable_BtnExit, 4, 10, 10, 4);
    service_flushenable_BtnExit->fn->setPressedImage(service_flushenable_BtnExit, (leImage*)&Menu_exit_white);
    service_flushenable_BtnExit->fn->setReleasedImage(service_flushenable_BtnExit, (leImage*)&Menu_exit_white);
    service_flushenable_BtnExit->fn->setReleasedEventCallback(service_flushenable_BtnExit, event_service_flushenable_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnExit);

    service_flushenable_BtnShuttle = leButtonWidget_New();
    service_flushenable_BtnShuttle->fn->setPosition(service_flushenable_BtnShuttle, 252, 175);
    service_flushenable_BtnShuttle->fn->setSize(service_flushenable_BtnShuttle, 40, 40);
    service_flushenable_BtnShuttle->fn->setScheme(service_flushenable_BtnShuttle, &BlackBack);
    service_flushenable_BtnShuttle->fn->setBackgroundType(service_flushenable_BtnShuttle, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_BtnShuttle->fn->setBorderType(service_flushenable_BtnShuttle, LE_WIDGET_BORDER_NONE);
    service_flushenable_BtnShuttle->fn->setPressedImage(service_flushenable_BtnShuttle, (leImage*)&Menu_check);
    service_flushenable_BtnShuttle->fn->setReleasedImage(service_flushenable_BtnShuttle, (leImage*)&Menu_check);
    service_flushenable_BtnShuttle->fn->setReleasedEventCallback(service_flushenable_BtnShuttle, event_service_flushenable_BtnShuttle_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnShuttle);

    service_flushenable_BtnSelf = leButtonWidget_New();
    service_flushenable_BtnSelf->fn->setPosition(service_flushenable_BtnSelf, 252, 135);
    service_flushenable_BtnSelf->fn->setSize(service_flushenable_BtnSelf, 40, 40);
    service_flushenable_BtnSelf->fn->setScheme(service_flushenable_BtnSelf, &BlackBack);
    service_flushenable_BtnSelf->fn->setBackgroundType(service_flushenable_BtnSelf, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_BtnSelf->fn->setBorderType(service_flushenable_BtnSelf, LE_WIDGET_BORDER_NONE);
    service_flushenable_BtnSelf->fn->setPressedImage(service_flushenable_BtnSelf, (leImage*)&Menu_check);
    service_flushenable_BtnSelf->fn->setReleasedImage(service_flushenable_BtnSelf, (leImage*)&Menu_check);
    service_flushenable_BtnSelf->fn->setReleasedEventCallback(service_flushenable_BtnSelf, event_service_flushenable_BtnSelf_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnSelf);

    service_flushenable_BtnTimeDelay = leButtonWidget_New();
    service_flushenable_BtnTimeDelay->fn->setPosition(service_flushenable_BtnTimeDelay, 252, 95);
    service_flushenable_BtnTimeDelay->fn->setSize(service_flushenable_BtnTimeDelay, 40, 40);
    service_flushenable_BtnTimeDelay->fn->setScheme(service_flushenable_BtnTimeDelay, &BlackBack);
    service_flushenable_BtnTimeDelay->fn->setBackgroundType(service_flushenable_BtnTimeDelay, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_BtnTimeDelay->fn->setBorderType(service_flushenable_BtnTimeDelay, LE_WIDGET_BORDER_NONE);
    service_flushenable_BtnTimeDelay->fn->setPressedImage(service_flushenable_BtnTimeDelay, (leImage*)&Menu_check);
    service_flushenable_BtnTimeDelay->fn->setReleasedImage(service_flushenable_BtnTimeDelay, (leImage*)&Menu_check);
    service_flushenable_BtnTimeDelay->fn->setReleasedEventCallback(service_flushenable_BtnTimeDelay, event_service_flushenable_BtnTimeDelay_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnTimeDelay);

    service_flushenable_BtnHome = leButtonWidget_New();
    service_flushenable_BtnHome->fn->setPosition(service_flushenable_BtnHome, 435, 225);
    service_flushenable_BtnHome->fn->setSize(service_flushenable_BtnHome, 40, 40);
    service_flushenable_BtnHome->fn->setScheme(service_flushenable_BtnHome, &BlackBack);
    service_flushenable_BtnHome->fn->setBackgroundType(service_flushenable_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_flushenable_BtnHome->fn->setBorderType(service_flushenable_BtnHome, LE_WIDGET_BORDER_NONE);
    service_flushenable_BtnHome->fn->setPressedImage(service_flushenable_BtnHome, (leImage*)&Menu_home);
    service_flushenable_BtnHome->fn->setReleasedImage(service_flushenable_BtnHome, (leImage*)&Menu_home);
    service_flushenable_BtnHome->fn->setReleasedEventCallback(service_flushenable_BtnHome, event_service_flushenable_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnHome);

    service_flushenable_BtnTroubleshoot = leButtonWidget_New();
    service_flushenable_BtnTroubleshoot->fn->setPosition(service_flushenable_BtnTroubleshoot, 0, 217);
    service_flushenable_BtnTroubleshoot->fn->setSize(service_flushenable_BtnTroubleshoot, 200, 55);
    service_flushenable_BtnTroubleshoot->fn->setScheme(service_flushenable_BtnTroubleshoot, &menu_btn2);
    service_flushenable_BtnTroubleshoot->fn->setHAlignment(service_flushenable_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_flushenable_BtnTroubleshoot->fn->setString(service_flushenable_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_flushenable_BtnTroubleshoot->fn->setPressedImage(service_flushenable_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_flushenable_BtnTroubleshoot->fn->setReleasedImage(service_flushenable_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_flushenable_BtnTroubleshoot->fn->setImageMargin(service_flushenable_BtnTroubleshoot, 5);
    service_flushenable_BtnTroubleshoot->fn->setReleasedEventCallback(service_flushenable_BtnTroubleshoot, event_service_flushenable_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnTroubleshoot);

    service_flushenable_BtnSystemInformation = leButtonWidget_New();
    service_flushenable_BtnSystemInformation->fn->setPosition(service_flushenable_BtnSystemInformation, 0, 163);
    service_flushenable_BtnSystemInformation->fn->setSize(service_flushenable_BtnSystemInformation, 200, 54);
    service_flushenable_BtnSystemInformation->fn->setScheme(service_flushenable_BtnSystemInformation, &menu_btn2);
    service_flushenable_BtnSystemInformation->fn->setHAlignment(service_flushenable_BtnSystemInformation, LE_HALIGN_LEFT);
    service_flushenable_BtnSystemInformation->fn->setString(service_flushenable_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_flushenable_BtnSystemInformation->fn->setPressedImage(service_flushenable_BtnSystemInformation, (leImage*)&Menu_bar);
    service_flushenable_BtnSystemInformation->fn->setReleasedImage(service_flushenable_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_flushenable_BtnSystemInformation->fn->setImageMargin(service_flushenable_BtnSystemInformation, 5);
    service_flushenable_BtnSystemInformation->fn->setReleasedEventCallback(service_flushenable_BtnSystemInformation, event_service_flushenable_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnSystemInformation);

    service_flushenable_BtnService = leButtonWidget_New();
    service_flushenable_BtnService->fn->setPosition(service_flushenable_BtnService, 0, 109);
    service_flushenable_BtnService->fn->setSize(service_flushenable_BtnService, 200, 54);
    service_flushenable_BtnService->fn->setScheme(service_flushenable_BtnService, &Button_Gray2);
    service_flushenable_BtnService->fn->setHAlignment(service_flushenable_BtnService, LE_HALIGN_LEFT);
    service_flushenable_BtnService->fn->setString(service_flushenable_BtnService, (leString*)&string_MENU_Service);
    service_flushenable_BtnService->fn->setPressedImage(service_flushenable_BtnService, (leImage*)&Menu_bar);
    service_flushenable_BtnService->fn->setReleasedImage(service_flushenable_BtnService, (leImage*)&Menu_bar);
    service_flushenable_BtnService->fn->setImageMargin(service_flushenable_BtnService, 5);
    service_flushenable_BtnService->fn->setReleasedEventCallback(service_flushenable_BtnService, event_service_flushenable_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnService);

    service_flushenable_BtnOperationSettings = leButtonWidget_New();
    service_flushenable_BtnOperationSettings->fn->setPosition(service_flushenable_BtnOperationSettings, 0, 55);
    service_flushenable_BtnOperationSettings->fn->setSize(service_flushenable_BtnOperationSettings, 200, 54);
    service_flushenable_BtnOperationSettings->fn->setScheme(service_flushenable_BtnOperationSettings, &menu_btn2);
    service_flushenable_BtnOperationSettings->fn->setHAlignment(service_flushenable_BtnOperationSettings, LE_HALIGN_LEFT);
    service_flushenable_BtnOperationSettings->fn->setString(service_flushenable_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_flushenable_BtnOperationSettings->fn->setPressedImage(service_flushenable_BtnOperationSettings, (leImage*)&Menu_bar);
    service_flushenable_BtnOperationSettings->fn->setReleasedImage(service_flushenable_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_flushenable_BtnOperationSettings->fn->setImageMargin(service_flushenable_BtnOperationSettings, 5);
    service_flushenable_BtnOperationSettings->fn->setReleasedEventCallback(service_flushenable_BtnOperationSettings, event_service_flushenable_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnOperationSettings);

    service_flushenable_BtnMaintenance = leButtonWidget_New();
    service_flushenable_BtnMaintenance->fn->setPosition(service_flushenable_BtnMaintenance, 0, 0);
    service_flushenable_BtnMaintenance->fn->setSize(service_flushenable_BtnMaintenance, 200, 55);
    service_flushenable_BtnMaintenance->fn->setScheme(service_flushenable_BtnMaintenance, &menu_btn2);
    service_flushenable_BtnMaintenance->fn->setHAlignment(service_flushenable_BtnMaintenance, LE_HALIGN_LEFT);
    service_flushenable_BtnMaintenance->fn->setString(service_flushenable_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_flushenable_BtnMaintenance->fn->setPressedImage(service_flushenable_BtnMaintenance, (leImage*)&Menu_bar);
    service_flushenable_BtnMaintenance->fn->setReleasedImage(service_flushenable_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_flushenable_BtnMaintenance->fn->setImageMargin(service_flushenable_BtnMaintenance, 5);
    service_flushenable_BtnMaintenance->fn->setReleasedEventCallback(service_flushenable_BtnMaintenance, event_service_flushenable_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_flushenable_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_flushenable_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_flushenable(void)
{
}

void screenHide_service_flushenable(void)
{
    service_flushenable_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_flushenable_Layer_0_FillPanel = NULL;
    service_flushenable_LblTitle = NULL;
    service_flushenable_ImgLine = NULL;
    service_flushenable_LblTimeDelay = NULL;
    service_flushenable_LblSelf = NULL;
    service_flushenable_LblShuttle = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_flushenable_BtnExit = NULL;
    service_flushenable_BtnShuttle = NULL;
    service_flushenable_BtnSelf = NULL;
    service_flushenable_BtnTimeDelay = NULL;
    service_flushenable_BtnHome = NULL;
    service_flushenable_BtnTroubleshoot = NULL;
    service_flushenable_BtnSystemInformation = NULL;
    service_flushenable_BtnService = NULL;
    service_flushenable_BtnOperationSettings = NULL;
    service_flushenable_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_flushenable(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_flushenable(uint32_t lyrIdx)
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

