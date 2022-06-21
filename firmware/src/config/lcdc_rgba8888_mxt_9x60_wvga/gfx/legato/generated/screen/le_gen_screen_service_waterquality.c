#include "gfx/legato/generated/screen/le_gen_screen_service_waterquality.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_waterquality_Layer_0_FillPanel;
leLabelWidget* service_waterquality_LblTitle;
leImageWidget* service_waterquality_ImgLine;
leLabelWidget* service_waterquality_LblSubTitle;
leButtonWidget* service_waterquality_BtnExit;
leButtonWidget* service_waterquality_BtnLow;
leButtonWidget* service_waterquality_BtnHigh;
leButtonWidget* service_waterquality_BtnHome;
leButtonWidget* service_waterquality_BtnTroubleshoot;
leButtonWidget* service_waterquality_BtnSystemInformation;
leButtonWidget* service_waterquality_BtnService;
leButtonWidget* service_waterquality_BtnOperationSettings;
leButtonWidget* service_waterquality_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_waterquality(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_waterquality(void)
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

    service_waterquality_Layer_0_FillPanel = leWidget_New();
    service_waterquality_Layer_0_FillPanel->fn->setPosition(service_waterquality_Layer_0_FillPanel, 0, 0);
    service_waterquality_Layer_0_FillPanel->fn->setSize(service_waterquality_Layer_0_FillPanel, 480, 272);
    service_waterquality_Layer_0_FillPanel->fn->setScheme(service_waterquality_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_waterquality_Layer_0_FillPanel);

    service_waterquality_LblTitle = leLabelWidget_New();
    service_waterquality_LblTitle->fn->setPosition(service_waterquality_LblTitle, 228, 26);
    service_waterquality_LblTitle->fn->setSize(service_waterquality_LblTitle, 222, 29);
    service_waterquality_LblTitle->fn->setScheme(service_waterquality_LblTitle, &Label_FontWhite);
    service_waterquality_LblTitle->fn->setBackgroundType(service_waterquality_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_waterquality_LblTitle->fn->setHAlignment(service_waterquality_LblTitle, LE_HALIGN_CENTER);
    service_waterquality_LblTitle->fn->setString(service_waterquality_LblTitle, (leString*)&string_SERVICE3_WaterQuality);
    root0->fn->addChild(root0, (leWidget*)service_waterquality_LblTitle);

    service_waterquality_ImgLine = leImageWidget_New();
    service_waterquality_ImgLine->fn->setPosition(service_waterquality_ImgLine, 218, 62);
    service_waterquality_ImgLine->fn->setSize(service_waterquality_ImgLine, 240, 5);
    service_waterquality_ImgLine->fn->setScheme(service_waterquality_ImgLine, &BlackBack);
    service_waterquality_ImgLine->fn->setBackgroundType(service_waterquality_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_waterquality_ImgLine->fn->setBorderType(service_waterquality_ImgLine, LE_WIDGET_BORDER_NONE);
    service_waterquality_ImgLine->fn->setImage(service_waterquality_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_waterquality_ImgLine);

    service_waterquality_LblSubTitle = leLabelWidget_New();
    service_waterquality_LblSubTitle->fn->setPosition(service_waterquality_LblSubTitle, 220, 80);
    service_waterquality_LblSubTitle->fn->setSize(service_waterquality_LblSubTitle, 237, 30);
    service_waterquality_LblSubTitle->fn->setScheme(service_waterquality_LblSubTitle, &Label_FontWhite);
    service_waterquality_LblSubTitle->fn->setBackgroundType(service_waterquality_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_waterquality_LblSubTitle->fn->setHAlignment(service_waterquality_LblSubTitle, LE_HALIGN_CENTER);
    service_waterquality_LblSubTitle->fn->setString(service_waterquality_LblSubTitle, (leString*)&string_SERVICE3_SelectOne);
    root0->fn->addChild(root0, (leWidget*)service_waterquality_LblSubTitle);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_waterquality_BtnExit = leButtonWidget_New();
    service_waterquality_BtnExit->fn->setPosition(service_waterquality_BtnExit, 415, 2);
    service_waterquality_BtnExit->fn->setSize(service_waterquality_BtnExit, 60, 60);
    service_waterquality_BtnExit->fn->setScheme(service_waterquality_BtnExit, &BlackBack);
    service_waterquality_BtnExit->fn->setBackgroundType(service_waterquality_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_waterquality_BtnExit->fn->setBorderType(service_waterquality_BtnExit, LE_WIDGET_BORDER_NONE);
    service_waterquality_BtnExit->fn->setHAlignment(service_waterquality_BtnExit, LE_HALIGN_RIGHT);
    service_waterquality_BtnExit->fn->setVAlignment(service_waterquality_BtnExit, LE_VALIGN_TOP);
    service_waterquality_BtnExit->fn->setMargins(service_waterquality_BtnExit, 4, 10, 10, 4);
    service_waterquality_BtnExit->fn->setPressedImage(service_waterquality_BtnExit, (leImage*)&Menu_exit_white);
    service_waterquality_BtnExit->fn->setReleasedImage(service_waterquality_BtnExit, (leImage*)&Menu_exit_white);
    service_waterquality_BtnExit->fn->setReleasedEventCallback(service_waterquality_BtnExit, event_service_waterquality_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnExit);

    service_waterquality_BtnLow = leButtonWidget_New();
    service_waterquality_BtnLow->fn->setPosition(service_waterquality_BtnLow, 240, 160);
    service_waterquality_BtnLow->fn->setSize(service_waterquality_BtnLow, 180, 35);
    service_waterquality_BtnLow->fn->setScheme(service_waterquality_BtnLow, &Button_Gray2A);
    service_waterquality_BtnLow->fn->setHAlignment(service_waterquality_BtnLow, LE_HALIGN_LEFT);
    service_waterquality_BtnLow->fn->setMargins(service_waterquality_BtnLow, 0, 0, 0, 0);
    service_waterquality_BtnLow->fn->setString(service_waterquality_BtnLow, (leString*)&string_SERVICE3_Low);
    service_waterquality_BtnLow->fn->setPressedImage(service_waterquality_BtnLow, (leImage*)&Menu_bar_clear);
    service_waterquality_BtnLow->fn->setReleasedImage(service_waterquality_BtnLow, (leImage*)&Menu_bar_clear);
    service_waterquality_BtnLow->fn->setReleasedEventCallback(service_waterquality_BtnLow, event_service_waterquality_BtnLow_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnLow);

    service_waterquality_BtnHigh = leButtonWidget_New();
    service_waterquality_BtnHigh->fn->setPosition(service_waterquality_BtnHigh, 240, 125);
    service_waterquality_BtnHigh->fn->setSize(service_waterquality_BtnHigh, 180, 35);
    service_waterquality_BtnHigh->fn->setScheme(service_waterquality_BtnHigh, &Button_LightBlue);
    service_waterquality_BtnHigh->fn->setHAlignment(service_waterquality_BtnHigh, LE_HALIGN_LEFT);
    service_waterquality_BtnHigh->fn->setMargins(service_waterquality_BtnHigh, 0, 0, 0, 0);
    service_waterquality_BtnHigh->fn->setString(service_waterquality_BtnHigh, (leString*)&string_SERVICE3_High);
    service_waterquality_BtnHigh->fn->setPressedImage(service_waterquality_BtnHigh, (leImage*)&Menu_bar_clear);
    service_waterquality_BtnHigh->fn->setReleasedImage(service_waterquality_BtnHigh, (leImage*)&Menu_bar_clear);
    service_waterquality_BtnHigh->fn->setReleasedEventCallback(service_waterquality_BtnHigh, event_service_waterquality_BtnHigh_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnHigh);

    service_waterquality_BtnHome = leButtonWidget_New();
    service_waterquality_BtnHome->fn->setPosition(service_waterquality_BtnHome, 435, 225);
    service_waterquality_BtnHome->fn->setSize(service_waterquality_BtnHome, 40, 40);
    service_waterquality_BtnHome->fn->setScheme(service_waterquality_BtnHome, &BlackBack);
    service_waterquality_BtnHome->fn->setBackgroundType(service_waterquality_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_waterquality_BtnHome->fn->setBorderType(service_waterquality_BtnHome, LE_WIDGET_BORDER_NONE);
    service_waterquality_BtnHome->fn->setPressedImage(service_waterquality_BtnHome, (leImage*)&Menu_home);
    service_waterquality_BtnHome->fn->setReleasedImage(service_waterquality_BtnHome, (leImage*)&Menu_home);
    service_waterquality_BtnHome->fn->setReleasedEventCallback(service_waterquality_BtnHome, event_service_waterquality_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnHome);

    service_waterquality_BtnTroubleshoot = leButtonWidget_New();
    service_waterquality_BtnTroubleshoot->fn->setPosition(service_waterquality_BtnTroubleshoot, 0, 217);
    service_waterquality_BtnTroubleshoot->fn->setSize(service_waterquality_BtnTroubleshoot, 200, 55);
    service_waterquality_BtnTroubleshoot->fn->setScheme(service_waterquality_BtnTroubleshoot, &menu_btn2);
    service_waterquality_BtnTroubleshoot->fn->setHAlignment(service_waterquality_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_waterquality_BtnTroubleshoot->fn->setString(service_waterquality_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_waterquality_BtnTroubleshoot->fn->setPressedImage(service_waterquality_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_waterquality_BtnTroubleshoot->fn->setReleasedImage(service_waterquality_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_waterquality_BtnTroubleshoot->fn->setImageMargin(service_waterquality_BtnTroubleshoot, 5);
    service_waterquality_BtnTroubleshoot->fn->setReleasedEventCallback(service_waterquality_BtnTroubleshoot, event_service_waterquality_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnTroubleshoot);

    service_waterquality_BtnSystemInformation = leButtonWidget_New();
    service_waterquality_BtnSystemInformation->fn->setPosition(service_waterquality_BtnSystemInformation, 0, 163);
    service_waterquality_BtnSystemInformation->fn->setSize(service_waterquality_BtnSystemInformation, 200, 54);
    service_waterquality_BtnSystemInformation->fn->setScheme(service_waterquality_BtnSystemInformation, &menu_btn2);
    service_waterquality_BtnSystemInformation->fn->setHAlignment(service_waterquality_BtnSystemInformation, LE_HALIGN_LEFT);
    service_waterquality_BtnSystemInformation->fn->setString(service_waterquality_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_waterquality_BtnSystemInformation->fn->setPressedImage(service_waterquality_BtnSystemInformation, (leImage*)&Menu_bar);
    service_waterquality_BtnSystemInformation->fn->setReleasedImage(service_waterquality_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_waterquality_BtnSystemInformation->fn->setImageMargin(service_waterquality_BtnSystemInformation, 5);
    service_waterquality_BtnSystemInformation->fn->setReleasedEventCallback(service_waterquality_BtnSystemInformation, event_service_waterquality_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnSystemInformation);

    service_waterquality_BtnService = leButtonWidget_New();
    service_waterquality_BtnService->fn->setPosition(service_waterquality_BtnService, 0, 109);
    service_waterquality_BtnService->fn->setSize(service_waterquality_BtnService, 200, 54);
    service_waterquality_BtnService->fn->setScheme(service_waterquality_BtnService, &Button_Gray2);
    service_waterquality_BtnService->fn->setHAlignment(service_waterquality_BtnService, LE_HALIGN_LEFT);
    service_waterquality_BtnService->fn->setString(service_waterquality_BtnService, (leString*)&string_MENU_Service);
    service_waterquality_BtnService->fn->setPressedImage(service_waterquality_BtnService, (leImage*)&Menu_bar);
    service_waterquality_BtnService->fn->setReleasedImage(service_waterquality_BtnService, (leImage*)&Menu_bar);
    service_waterquality_BtnService->fn->setImageMargin(service_waterquality_BtnService, 5);
    service_waterquality_BtnService->fn->setReleasedEventCallback(service_waterquality_BtnService, event_service_waterquality_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnService);

    service_waterquality_BtnOperationSettings = leButtonWidget_New();
    service_waterquality_BtnOperationSettings->fn->setPosition(service_waterquality_BtnOperationSettings, 0, 55);
    service_waterquality_BtnOperationSettings->fn->setSize(service_waterquality_BtnOperationSettings, 200, 54);
    service_waterquality_BtnOperationSettings->fn->setScheme(service_waterquality_BtnOperationSettings, &menu_btn2);
    service_waterquality_BtnOperationSettings->fn->setHAlignment(service_waterquality_BtnOperationSettings, LE_HALIGN_LEFT);
    service_waterquality_BtnOperationSettings->fn->setString(service_waterquality_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_waterquality_BtnOperationSettings->fn->setPressedImage(service_waterquality_BtnOperationSettings, (leImage*)&Menu_bar);
    service_waterquality_BtnOperationSettings->fn->setReleasedImage(service_waterquality_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_waterquality_BtnOperationSettings->fn->setImageMargin(service_waterquality_BtnOperationSettings, 5);
    service_waterquality_BtnOperationSettings->fn->setReleasedEventCallback(service_waterquality_BtnOperationSettings, event_service_waterquality_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnOperationSettings);

    service_waterquality_BtnMaintenance = leButtonWidget_New();
    service_waterquality_BtnMaintenance->fn->setPosition(service_waterquality_BtnMaintenance, 0, 0);
    service_waterquality_BtnMaintenance->fn->setSize(service_waterquality_BtnMaintenance, 200, 55);
    service_waterquality_BtnMaintenance->fn->setScheme(service_waterquality_BtnMaintenance, &menu_btn2);
    service_waterquality_BtnMaintenance->fn->setHAlignment(service_waterquality_BtnMaintenance, LE_HALIGN_LEFT);
    service_waterquality_BtnMaintenance->fn->setString(service_waterquality_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_waterquality_BtnMaintenance->fn->setPressedImage(service_waterquality_BtnMaintenance, (leImage*)&Menu_bar);
    service_waterquality_BtnMaintenance->fn->setReleasedImage(service_waterquality_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_waterquality_BtnMaintenance->fn->setImageMargin(service_waterquality_BtnMaintenance, 5);
    service_waterquality_BtnMaintenance->fn->setReleasedEventCallback(service_waterquality_BtnMaintenance, event_service_waterquality_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_waterquality_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_waterquality_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_waterquality(void)
{
}

void screenHide_service_waterquality(void)
{
    service_waterquality_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_waterquality_Layer_0_FillPanel = NULL;
    service_waterquality_LblTitle = NULL;
    service_waterquality_ImgLine = NULL;
    service_waterquality_LblSubTitle = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_waterquality_BtnExit = NULL;
    service_waterquality_BtnLow = NULL;
    service_waterquality_BtnHigh = NULL;
    service_waterquality_BtnHome = NULL;
    service_waterquality_BtnTroubleshoot = NULL;
    service_waterquality_BtnSystemInformation = NULL;
    service_waterquality_BtnService = NULL;
    service_waterquality_BtnOperationSettings = NULL;
    service_waterquality_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_waterquality(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_waterquality(uint32_t lyrIdx)
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

