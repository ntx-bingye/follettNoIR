#include "gfx/legato/generated/screen/le_gen_screen_service_manual.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_manual_Layer_0_FillPanel;
leImageWidget* service_manual_ImgQRCode;
leImageWidget* service_manual_ImgQRLine;
leLabelWidget* service_manual_LblQRTitle;
leButtonWidget* service_manual_BtnQRMaintenance;
leButtonWidget* service_manual_BtnQROperationSettings;
leButtonWidget* service_manual_BtnQRService;
leButtonWidget* service_manual_BtnQRSystemInformation;
leButtonWidget* service_manual_BtnQRTroubleshoot;
leButtonWidget* service_manual_BtnQRHome;
leButtonWidget* service_manual_BtnQRExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_manual(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_manual(void)
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

    service_manual_Layer_0_FillPanel = leWidget_New();
    service_manual_Layer_0_FillPanel->fn->setPosition(service_manual_Layer_0_FillPanel, 0, 0);
    service_manual_Layer_0_FillPanel->fn->setSize(service_manual_Layer_0_FillPanel, 480, 272);
    service_manual_Layer_0_FillPanel->fn->setScheme(service_manual_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)service_manual_Layer_0_FillPanel);

    service_manual_ImgQRCode = leImageWidget_New();
    service_manual_ImgQRCode->fn->setPosition(service_manual_ImgQRCode, 275, 105);
    service_manual_ImgQRCode->fn->setSize(service_manual_ImgQRCode, 120, 120);
    service_manual_ImgQRCode->fn->setScheme(service_manual_ImgQRCode, &BlackBack);
    service_manual_ImgQRCode->fn->setBackgroundType(service_manual_ImgQRCode, LE_WIDGET_BACKGROUND_NONE);
    service_manual_ImgQRCode->fn->setBorderType(service_manual_ImgQRCode, LE_WIDGET_BORDER_NONE);
    service_manual_ImgQRCode->fn->setImage(service_manual_ImgQRCode, (leImage*)&QRCode_manual);
    root1->fn->addChild(root1, (leWidget*)service_manual_ImgQRCode);

    service_manual_ImgQRLine = leImageWidget_New();
    service_manual_ImgQRLine->fn->setPosition(service_manual_ImgQRLine, 218, 62);
    service_manual_ImgQRLine->fn->setSize(service_manual_ImgQRLine, 240, 5);
    service_manual_ImgQRLine->fn->setScheme(service_manual_ImgQRLine, &BlackBack);
    service_manual_ImgQRLine->fn->setBackgroundType(service_manual_ImgQRLine, LE_WIDGET_BACKGROUND_NONE);
    service_manual_ImgQRLine->fn->setBorderType(service_manual_ImgQRLine, LE_WIDGET_BORDER_NONE);
    service_manual_ImgQRLine->fn->setImage(service_manual_ImgQRLine, (leImage*)&Menu_line);
    root1->fn->addChild(root1, (leWidget*)service_manual_ImgQRLine);

    service_manual_LblQRTitle = leLabelWidget_New();
    service_manual_LblQRTitle->fn->setPosition(service_manual_LblQRTitle, 228, 29);
    service_manual_LblQRTitle->fn->setSize(service_manual_LblQRTitle, 222, 25);
    service_manual_LblQRTitle->fn->setScheme(service_manual_LblQRTitle, &Label_FontWhite);
    service_manual_LblQRTitle->fn->setBackgroundType(service_manual_LblQRTitle, LE_WIDGET_BACKGROUND_NONE);
    service_manual_LblQRTitle->fn->setHAlignment(service_manual_LblQRTitle, LE_HALIGN_CENTER);
    service_manual_LblQRTitle->fn->setString(service_manual_LblQRTitle, (leString*)&string_SERVICE6_ManualQRCode);
    root1->fn->addChild(root1, (leWidget*)service_manual_LblQRTitle);

    service_manual_BtnQRMaintenance = leButtonWidget_New();
    service_manual_BtnQRMaintenance->fn->setPosition(service_manual_BtnQRMaintenance, 0, 0);
    service_manual_BtnQRMaintenance->fn->setSize(service_manual_BtnQRMaintenance, 200, 55);
    service_manual_BtnQRMaintenance->fn->setScheme(service_manual_BtnQRMaintenance, &menu_btn2);
    service_manual_BtnQRMaintenance->fn->setHAlignment(service_manual_BtnQRMaintenance, LE_HALIGN_LEFT);
    service_manual_BtnQRMaintenance->fn->setString(service_manual_BtnQRMaintenance, (leString*)&string_MENU_Maintenance);
    service_manual_BtnQRMaintenance->fn->setPressedImage(service_manual_BtnQRMaintenance, (leImage*)&Menu_bar);
    service_manual_BtnQRMaintenance->fn->setReleasedImage(service_manual_BtnQRMaintenance, (leImage*)&Menu_bar_clear);
    service_manual_BtnQRMaintenance->fn->setImageMargin(service_manual_BtnQRMaintenance, 5);
    service_manual_BtnQRMaintenance->fn->setReleasedEventCallback(service_manual_BtnQRMaintenance, event_service_manual_BtnQRMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_manual_BtnQRMaintenance);

    service_manual_BtnQROperationSettings = leButtonWidget_New();
    service_manual_BtnQROperationSettings->fn->setPosition(service_manual_BtnQROperationSettings, 0, 55);
    service_manual_BtnQROperationSettings->fn->setSize(service_manual_BtnQROperationSettings, 200, 54);
    service_manual_BtnQROperationSettings->fn->setScheme(service_manual_BtnQROperationSettings, &menu_btn2);
    service_manual_BtnQROperationSettings->fn->setHAlignment(service_manual_BtnQROperationSettings, LE_HALIGN_LEFT);
    service_manual_BtnQROperationSettings->fn->setString(service_manual_BtnQROperationSettings, (leString*)&string_MENU_OperationSettings);
    service_manual_BtnQROperationSettings->fn->setPressedImage(service_manual_BtnQROperationSettings, (leImage*)&Menu_bar);
    service_manual_BtnQROperationSettings->fn->setReleasedImage(service_manual_BtnQROperationSettings, (leImage*)&Menu_bar_clear);
    service_manual_BtnQROperationSettings->fn->setImageMargin(service_manual_BtnQROperationSettings, 5);
    service_manual_BtnQROperationSettings->fn->setReleasedEventCallback(service_manual_BtnQROperationSettings, event_service_manual_BtnQROperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_manual_BtnQROperationSettings);

    service_manual_BtnQRService = leButtonWidget_New();
    service_manual_BtnQRService->fn->setPosition(service_manual_BtnQRService, 0, 109);
    service_manual_BtnQRService->fn->setSize(service_manual_BtnQRService, 200, 54);
    service_manual_BtnQRService->fn->setScheme(service_manual_BtnQRService, &menu_btn2);
    service_manual_BtnQRService->fn->setHAlignment(service_manual_BtnQRService, LE_HALIGN_LEFT);
    service_manual_BtnQRService->fn->setString(service_manual_BtnQRService, (leString*)&string_MENU_Service);
    service_manual_BtnQRService->fn->setPressedImage(service_manual_BtnQRService, (leImage*)&Menu_bar);
    service_manual_BtnQRService->fn->setReleasedImage(service_manual_BtnQRService, (leImage*)&Menu_bar_clear);
    service_manual_BtnQRService->fn->setImageMargin(service_manual_BtnQRService, 5);
    service_manual_BtnQRService->fn->setReleasedEventCallback(service_manual_BtnQRService, event_service_manual_BtnQRService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_manual_BtnQRService);

    service_manual_BtnQRSystemInformation = leButtonWidget_New();
    service_manual_BtnQRSystemInformation->fn->setPosition(service_manual_BtnQRSystemInformation, 0, 163);
    service_manual_BtnQRSystemInformation->fn->setSize(service_manual_BtnQRSystemInformation, 200, 54);
    service_manual_BtnQRSystemInformation->fn->setScheme(service_manual_BtnQRSystemInformation, &menu_btn2);
    service_manual_BtnQRSystemInformation->fn->setHAlignment(service_manual_BtnQRSystemInformation, LE_HALIGN_LEFT);
    service_manual_BtnQRSystemInformation->fn->setString(service_manual_BtnQRSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_manual_BtnQRSystemInformation->fn->setPressedImage(service_manual_BtnQRSystemInformation, (leImage*)&Menu_bar);
    service_manual_BtnQRSystemInformation->fn->setReleasedImage(service_manual_BtnQRSystemInformation, (leImage*)&Menu_bar_clear);
    service_manual_BtnQRSystemInformation->fn->setImageMargin(service_manual_BtnQRSystemInformation, 5);
    service_manual_BtnQRSystemInformation->fn->setReleasedEventCallback(service_manual_BtnQRSystemInformation, event_service_manual_BtnQRSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_manual_BtnQRSystemInformation);

    service_manual_BtnQRTroubleshoot = leButtonWidget_New();
    service_manual_BtnQRTroubleshoot->fn->setPosition(service_manual_BtnQRTroubleshoot, 0, 217);
    service_manual_BtnQRTroubleshoot->fn->setSize(service_manual_BtnQRTroubleshoot, 200, 55);
    service_manual_BtnQRTroubleshoot->fn->setScheme(service_manual_BtnQRTroubleshoot, &Button_Gray2);
    service_manual_BtnQRTroubleshoot->fn->setHAlignment(service_manual_BtnQRTroubleshoot, LE_HALIGN_LEFT);
    service_manual_BtnQRTroubleshoot->fn->setString(service_manual_BtnQRTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_manual_BtnQRTroubleshoot->fn->setPressedImage(service_manual_BtnQRTroubleshoot, (leImage*)&Menu_bar);
    service_manual_BtnQRTroubleshoot->fn->setReleasedImage(service_manual_BtnQRTroubleshoot, (leImage*)&Menu_bar);
    service_manual_BtnQRTroubleshoot->fn->setImageMargin(service_manual_BtnQRTroubleshoot, 5);
    service_manual_BtnQRTroubleshoot->fn->setReleasedEventCallback(service_manual_BtnQRTroubleshoot, event_service_manual_BtnQRTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_manual_BtnQRTroubleshoot);

    service_manual_BtnQRHome = leButtonWidget_New();
    service_manual_BtnQRHome->fn->setPosition(service_manual_BtnQRHome, 435, 225);
    service_manual_BtnQRHome->fn->setSize(service_manual_BtnQRHome, 40, 40);
    service_manual_BtnQRHome->fn->setScheme(service_manual_BtnQRHome, &BlackBack);
    service_manual_BtnQRHome->fn->setBackgroundType(service_manual_BtnQRHome, LE_WIDGET_BACKGROUND_NONE);
    service_manual_BtnQRHome->fn->setBorderType(service_manual_BtnQRHome, LE_WIDGET_BORDER_NONE);
    service_manual_BtnQRHome->fn->setPressedImage(service_manual_BtnQRHome, (leImage*)&Menu_home);
    service_manual_BtnQRHome->fn->setReleasedImage(service_manual_BtnQRHome, (leImage*)&Menu_home);
    service_manual_BtnQRHome->fn->setReleasedEventCallback(service_manual_BtnQRHome, event_service_manual_BtnQRHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_manual_BtnQRHome);

    service_manual_BtnQRExit = leButtonWidget_New();
    service_manual_BtnQRExit->fn->setPosition(service_manual_BtnQRExit, 415, 2);
    service_manual_BtnQRExit->fn->setSize(service_manual_BtnQRExit, 60, 60);
    service_manual_BtnQRExit->fn->setScheme(service_manual_BtnQRExit, &BlackBack);
    service_manual_BtnQRExit->fn->setBackgroundType(service_manual_BtnQRExit, LE_WIDGET_BACKGROUND_NONE);
    service_manual_BtnQRExit->fn->setBorderType(service_manual_BtnQRExit, LE_WIDGET_BORDER_NONE);
    service_manual_BtnQRExit->fn->setHAlignment(service_manual_BtnQRExit, LE_HALIGN_RIGHT);
    service_manual_BtnQRExit->fn->setVAlignment(service_manual_BtnQRExit, LE_VALIGN_TOP);
    service_manual_BtnQRExit->fn->setMargins(service_manual_BtnQRExit, 4, 10, 10, 4);
    service_manual_BtnQRExit->fn->setPressedImage(service_manual_BtnQRExit, (leImage*)&Menu_exit_white);
    service_manual_BtnQRExit->fn->setReleasedImage(service_manual_BtnQRExit, (leImage*)&Menu_exit_white);
    service_manual_BtnQRExit->fn->setReleasedEventCallback(service_manual_BtnQRExit, event_service_manual_BtnQRExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_manual_BtnQRExit);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_manual_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_manual(void)
{
}

void screenHide_service_manual(void)
{
    service_manual_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_manual_Layer_0_FillPanel = NULL;
    service_manual_ImgQRCode = NULL;
    service_manual_ImgQRLine = NULL;
    service_manual_LblQRTitle = NULL;
    service_manual_BtnQRMaintenance = NULL;
    service_manual_BtnQROperationSettings = NULL;
    service_manual_BtnQRService = NULL;
    service_manual_BtnQRSystemInformation = NULL;
    service_manual_BtnQRTroubleshoot = NULL;
    service_manual_BtnQRHome = NULL;
    service_manual_BtnQRExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_manual(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_manual(uint32_t lyrIdx)
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

