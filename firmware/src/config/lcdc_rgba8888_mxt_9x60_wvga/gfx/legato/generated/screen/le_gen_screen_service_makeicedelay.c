#include "gfx/legato/generated/screen/le_gen_screen_service_makeicedelay.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_makeicedelay_Layer_0_FillPanel;
leLabelWidget* service_makeicedelay_LblTitle;
leImageWidget* service_makeicedelay_ImgLine;
leLabelWidget* service_makeicedelay_LblSubTitle;
leLabelWidget* service_makeicedelay_LblMakeIceDelayValue;
leLabelWidget* service_makeicedelay_LblSeconds;
leButtonWidget* service_makeicedelay_BtnExit;
leButtonWidget* service_makeicedelay_BtnRight;
leButtonWidget* service_makeicedelay_BtnHome;
leButtonWidget* service_makeicedelay_BtnTroubleshoot;
leButtonWidget* service_makeicedelay_BtnSystemInformation;
leButtonWidget* service_makeicedelay_BtnService;
leButtonWidget* service_makeicedelay_BtnOperationSettings;
leButtonWidget* service_makeicedelay_BtnMaintenance;
leButtonWidget* service_makeicedelay_BtnLeft;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_makeicedelay(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_makeicedelay(void)
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

    service_makeicedelay_Layer_0_FillPanel = leWidget_New();
    service_makeicedelay_Layer_0_FillPanel->fn->setPosition(service_makeicedelay_Layer_0_FillPanel, 0, 0);
    service_makeicedelay_Layer_0_FillPanel->fn->setSize(service_makeicedelay_Layer_0_FillPanel, 480, 272);
    service_makeicedelay_Layer_0_FillPanel->fn->setScheme(service_makeicedelay_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_makeicedelay_Layer_0_FillPanel);

    service_makeicedelay_LblTitle = leLabelWidget_New();
    service_makeicedelay_LblTitle->fn->setPosition(service_makeicedelay_LblTitle, 228, 29);
    service_makeicedelay_LblTitle->fn->setSize(service_makeicedelay_LblTitle, 222, 25);
    service_makeicedelay_LblTitle->fn->setScheme(service_makeicedelay_LblTitle, &Label_FontWhite);
    service_makeicedelay_LblTitle->fn->setBackgroundType(service_makeicedelay_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_LblTitle->fn->setHAlignment(service_makeicedelay_LblTitle, LE_HALIGN_CENTER);
    service_makeicedelay_LblTitle->fn->setString(service_makeicedelay_LblTitle, (leString*)&string_SERVICE11_MakeIceDelay);
    root0->fn->addChild(root0, (leWidget*)service_makeicedelay_LblTitle);

    service_makeicedelay_ImgLine = leImageWidget_New();
    service_makeicedelay_ImgLine->fn->setPosition(service_makeicedelay_ImgLine, 218, 62);
    service_makeicedelay_ImgLine->fn->setSize(service_makeicedelay_ImgLine, 240, 5);
    service_makeicedelay_ImgLine->fn->setScheme(service_makeicedelay_ImgLine, &BlackBack);
    service_makeicedelay_ImgLine->fn->setBackgroundType(service_makeicedelay_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_ImgLine->fn->setBorderType(service_makeicedelay_ImgLine, LE_WIDGET_BORDER_NONE);
    service_makeicedelay_ImgLine->fn->setImage(service_makeicedelay_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_makeicedelay_ImgLine);

    service_makeicedelay_LblSubTitle = leLabelWidget_New();
    service_makeicedelay_LblSubTitle->fn->setPosition(service_makeicedelay_LblSubTitle, 220, 80);
    service_makeicedelay_LblSubTitle->fn->setSize(service_makeicedelay_LblSubTitle, 237, 30);
    service_makeicedelay_LblSubTitle->fn->setScheme(service_makeicedelay_LblSubTitle, &Label_FontWhite);
    service_makeicedelay_LblSubTitle->fn->setBackgroundType(service_makeicedelay_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_LblSubTitle->fn->setHAlignment(service_makeicedelay_LblSubTitle, LE_HALIGN_CENTER);
    service_makeicedelay_LblSubTitle->fn->setString(service_makeicedelay_LblSubTitle, (leString*)&string_SERVICE11_AdjustInterval);
    root0->fn->addChild(root0, (leWidget*)service_makeicedelay_LblSubTitle);

    service_makeicedelay_LblMakeIceDelayValue = leLabelWidget_New();
    service_makeicedelay_LblMakeIceDelayValue->fn->setPosition(service_makeicedelay_LblMakeIceDelayValue, 278, 136);
    service_makeicedelay_LblMakeIceDelayValue->fn->setSize(service_makeicedelay_LblMakeIceDelayValue, 112, 55);
    service_makeicedelay_LblMakeIceDelayValue->fn->setScheme(service_makeicedelay_LblMakeIceDelayValue, &Label_FontWhite);
    service_makeicedelay_LblMakeIceDelayValue->fn->setBackgroundType(service_makeicedelay_LblMakeIceDelayValue, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_LblMakeIceDelayValue->fn->setHAlignment(service_makeicedelay_LblMakeIceDelayValue, LE_HALIGN_CENTER);
    service_makeicedelay_LblMakeIceDelayValue->fn->setString(service_makeicedelay_LblMakeIceDelayValue, (leString*)&string_SERVICE11_MakeIceDelayValue);
    root0->fn->addChild(root0, (leWidget*)service_makeicedelay_LblMakeIceDelayValue);

    service_makeicedelay_LblSeconds = leLabelWidget_New();
    service_makeicedelay_LblSeconds->fn->setPosition(service_makeicedelay_LblSeconds, 220, 192);
    service_makeicedelay_LblSeconds->fn->setSize(service_makeicedelay_LblSeconds, 237, 24);
    service_makeicedelay_LblSeconds->fn->setScheme(service_makeicedelay_LblSeconds, &Label_FontWhite);
    service_makeicedelay_LblSeconds->fn->setBackgroundType(service_makeicedelay_LblSeconds, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_LblSeconds->fn->setHAlignment(service_makeicedelay_LblSeconds, LE_HALIGN_CENTER);
    service_makeicedelay_LblSeconds->fn->setString(service_makeicedelay_LblSeconds, (leString*)&string_SERVICE11_Seconds);
    root0->fn->addChild(root0, (leWidget*)service_makeicedelay_LblSeconds);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_makeicedelay_BtnExit = leButtonWidget_New();
    service_makeicedelay_BtnExit->fn->setPosition(service_makeicedelay_BtnExit, 415, 2);
    service_makeicedelay_BtnExit->fn->setSize(service_makeicedelay_BtnExit, 60, 60);
    service_makeicedelay_BtnExit->fn->setScheme(service_makeicedelay_BtnExit, &BlackBack);
    service_makeicedelay_BtnExit->fn->setBackgroundType(service_makeicedelay_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_BtnExit->fn->setBorderType(service_makeicedelay_BtnExit, LE_WIDGET_BORDER_NONE);
    service_makeicedelay_BtnExit->fn->setHAlignment(service_makeicedelay_BtnExit, LE_HALIGN_RIGHT);
    service_makeicedelay_BtnExit->fn->setVAlignment(service_makeicedelay_BtnExit, LE_VALIGN_TOP);
    service_makeicedelay_BtnExit->fn->setMargins(service_makeicedelay_BtnExit, 4, 10, 10, 4);
    service_makeicedelay_BtnExit->fn->setPressedImage(service_makeicedelay_BtnExit, (leImage*)&Menu_exit_white);
    service_makeicedelay_BtnExit->fn->setReleasedImage(service_makeicedelay_BtnExit, (leImage*)&Menu_exit_white);
    service_makeicedelay_BtnExit->fn->setReleasedEventCallback(service_makeicedelay_BtnExit, event_service_makeicedelay_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnExit);

    service_makeicedelay_BtnRight = leButtonWidget_New();
    service_makeicedelay_BtnRight->fn->setPosition(service_makeicedelay_BtnRight, 388, 142);
    service_makeicedelay_BtnRight->fn->setSize(service_makeicedelay_BtnRight, 40, 45);
    service_makeicedelay_BtnRight->fn->setScheme(service_makeicedelay_BtnRight, &BlackBack);
    service_makeicedelay_BtnRight->fn->setBackgroundType(service_makeicedelay_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_BtnRight->fn->setBorderType(service_makeicedelay_BtnRight, LE_WIDGET_BORDER_NONE);
    service_makeicedelay_BtnRight->fn->setPressedImage(service_makeicedelay_BtnRight, (leImage*)&Menu_chevron_right);
    service_makeicedelay_BtnRight->fn->setReleasedImage(service_makeicedelay_BtnRight, (leImage*)&Menu_chevron_right);
    service_makeicedelay_BtnRight->fn->setReleasedEventCallback(service_makeicedelay_BtnRight, event_service_makeicedelay_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnRight);

    service_makeicedelay_BtnHome = leButtonWidget_New();
    service_makeicedelay_BtnHome->fn->setPosition(service_makeicedelay_BtnHome, 435, 225);
    service_makeicedelay_BtnHome->fn->setSize(service_makeicedelay_BtnHome, 40, 40);
    service_makeicedelay_BtnHome->fn->setScheme(service_makeicedelay_BtnHome, &BlackBack);
    service_makeicedelay_BtnHome->fn->setBackgroundType(service_makeicedelay_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_BtnHome->fn->setBorderType(service_makeicedelay_BtnHome, LE_WIDGET_BORDER_NONE);
    service_makeicedelay_BtnHome->fn->setPressedImage(service_makeicedelay_BtnHome, (leImage*)&Menu_home);
    service_makeicedelay_BtnHome->fn->setReleasedImage(service_makeicedelay_BtnHome, (leImage*)&Menu_home);
    service_makeicedelay_BtnHome->fn->setReleasedEventCallback(service_makeicedelay_BtnHome, event_service_makeicedelay_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnHome);

    service_makeicedelay_BtnTroubleshoot = leButtonWidget_New();
    service_makeicedelay_BtnTroubleshoot->fn->setPosition(service_makeicedelay_BtnTroubleshoot, 0, 217);
    service_makeicedelay_BtnTroubleshoot->fn->setSize(service_makeicedelay_BtnTroubleshoot, 200, 55);
    service_makeicedelay_BtnTroubleshoot->fn->setScheme(service_makeicedelay_BtnTroubleshoot, &menu_btn2);
    service_makeicedelay_BtnTroubleshoot->fn->setHAlignment(service_makeicedelay_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_makeicedelay_BtnTroubleshoot->fn->setString(service_makeicedelay_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_makeicedelay_BtnTroubleshoot->fn->setPressedImage(service_makeicedelay_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_makeicedelay_BtnTroubleshoot->fn->setReleasedImage(service_makeicedelay_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_makeicedelay_BtnTroubleshoot->fn->setImageMargin(service_makeicedelay_BtnTroubleshoot, 5);
    service_makeicedelay_BtnTroubleshoot->fn->setReleasedEventCallback(service_makeicedelay_BtnTroubleshoot, event_service_makeicedelay_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnTroubleshoot);

    service_makeicedelay_BtnSystemInformation = leButtonWidget_New();
    service_makeicedelay_BtnSystemInformation->fn->setPosition(service_makeicedelay_BtnSystemInformation, 0, 163);
    service_makeicedelay_BtnSystemInformation->fn->setSize(service_makeicedelay_BtnSystemInformation, 200, 54);
    service_makeicedelay_BtnSystemInformation->fn->setScheme(service_makeicedelay_BtnSystemInformation, &menu_btn2);
    service_makeicedelay_BtnSystemInformation->fn->setHAlignment(service_makeicedelay_BtnSystemInformation, LE_HALIGN_LEFT);
    service_makeicedelay_BtnSystemInformation->fn->setString(service_makeicedelay_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_makeicedelay_BtnSystemInformation->fn->setPressedImage(service_makeicedelay_BtnSystemInformation, (leImage*)&Menu_bar);
    service_makeicedelay_BtnSystemInformation->fn->setReleasedImage(service_makeicedelay_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_makeicedelay_BtnSystemInformation->fn->setImageMargin(service_makeicedelay_BtnSystemInformation, 5);
    service_makeicedelay_BtnSystemInformation->fn->setReleasedEventCallback(service_makeicedelay_BtnSystemInformation, event_service_makeicedelay_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnSystemInformation);

    service_makeicedelay_BtnService = leButtonWidget_New();
    service_makeicedelay_BtnService->fn->setPosition(service_makeicedelay_BtnService, 0, 109);
    service_makeicedelay_BtnService->fn->setSize(service_makeicedelay_BtnService, 200, 54);
    service_makeicedelay_BtnService->fn->setScheme(service_makeicedelay_BtnService, &Button_Gray2);
    service_makeicedelay_BtnService->fn->setHAlignment(service_makeicedelay_BtnService, LE_HALIGN_LEFT);
    service_makeicedelay_BtnService->fn->setString(service_makeicedelay_BtnService, (leString*)&string_MENU_Service);
    service_makeicedelay_BtnService->fn->setPressedImage(service_makeicedelay_BtnService, (leImage*)&Menu_bar);
    service_makeicedelay_BtnService->fn->setReleasedImage(service_makeicedelay_BtnService, (leImage*)&Menu_bar);
    service_makeicedelay_BtnService->fn->setImageMargin(service_makeicedelay_BtnService, 5);
    service_makeicedelay_BtnService->fn->setReleasedEventCallback(service_makeicedelay_BtnService, event_service_makeicedelay_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnService);

    service_makeicedelay_BtnOperationSettings = leButtonWidget_New();
    service_makeicedelay_BtnOperationSettings->fn->setPosition(service_makeicedelay_BtnOperationSettings, 0, 55);
    service_makeicedelay_BtnOperationSettings->fn->setSize(service_makeicedelay_BtnOperationSettings, 200, 54);
    service_makeicedelay_BtnOperationSettings->fn->setScheme(service_makeicedelay_BtnOperationSettings, &menu_btn2);
    service_makeicedelay_BtnOperationSettings->fn->setHAlignment(service_makeicedelay_BtnOperationSettings, LE_HALIGN_LEFT);
    service_makeicedelay_BtnOperationSettings->fn->setString(service_makeicedelay_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_makeicedelay_BtnOperationSettings->fn->setPressedImage(service_makeicedelay_BtnOperationSettings, (leImage*)&Menu_bar);
    service_makeicedelay_BtnOperationSettings->fn->setReleasedImage(service_makeicedelay_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_makeicedelay_BtnOperationSettings->fn->setImageMargin(service_makeicedelay_BtnOperationSettings, 5);
    service_makeicedelay_BtnOperationSettings->fn->setReleasedEventCallback(service_makeicedelay_BtnOperationSettings, event_service_makeicedelay_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnOperationSettings);

    service_makeicedelay_BtnMaintenance = leButtonWidget_New();
    service_makeicedelay_BtnMaintenance->fn->setPosition(service_makeicedelay_BtnMaintenance, 0, 0);
    service_makeicedelay_BtnMaintenance->fn->setSize(service_makeicedelay_BtnMaintenance, 200, 55);
    service_makeicedelay_BtnMaintenance->fn->setScheme(service_makeicedelay_BtnMaintenance, &menu_btn2);
    service_makeicedelay_BtnMaintenance->fn->setHAlignment(service_makeicedelay_BtnMaintenance, LE_HALIGN_LEFT);
    service_makeicedelay_BtnMaintenance->fn->setString(service_makeicedelay_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_makeicedelay_BtnMaintenance->fn->setPressedImage(service_makeicedelay_BtnMaintenance, (leImage*)&Menu_bar);
    service_makeicedelay_BtnMaintenance->fn->setReleasedImage(service_makeicedelay_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_makeicedelay_BtnMaintenance->fn->setImageMargin(service_makeicedelay_BtnMaintenance, 5);
    service_makeicedelay_BtnMaintenance->fn->setReleasedEventCallback(service_makeicedelay_BtnMaintenance, event_service_makeicedelay_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnMaintenance);

    service_makeicedelay_BtnLeft = leButtonWidget_New();
    service_makeicedelay_BtnLeft->fn->setPosition(service_makeicedelay_BtnLeft, 241, 142);
    service_makeicedelay_BtnLeft->fn->setSize(service_makeicedelay_BtnLeft, 40, 45);
    service_makeicedelay_BtnLeft->fn->setScheme(service_makeicedelay_BtnLeft, &BlackBack);
    service_makeicedelay_BtnLeft->fn->setBackgroundType(service_makeicedelay_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_makeicedelay_BtnLeft->fn->setBorderType(service_makeicedelay_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_makeicedelay_BtnLeft->fn->setPressedImage(service_makeicedelay_BtnLeft, (leImage*)&Menu_chevron_left);
    service_makeicedelay_BtnLeft->fn->setReleasedImage(service_makeicedelay_BtnLeft, (leImage*)&Menu_chevron_left);
    service_makeicedelay_BtnLeft->fn->setReleasedEventCallback(service_makeicedelay_BtnLeft, event_service_makeicedelay_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_makeicedelay_BtnLeft);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_makeicedelay_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_makeicedelay(void)
{
}

void screenHide_service_makeicedelay(void)
{
    service_makeicedelay_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_makeicedelay_Layer_0_FillPanel = NULL;
    service_makeicedelay_LblTitle = NULL;
    service_makeicedelay_ImgLine = NULL;
    service_makeicedelay_LblSubTitle = NULL;
    service_makeicedelay_LblMakeIceDelayValue = NULL;
    service_makeicedelay_LblSeconds = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_makeicedelay_BtnExit = NULL;
    service_makeicedelay_BtnRight = NULL;
    service_makeicedelay_BtnHome = NULL;
    service_makeicedelay_BtnTroubleshoot = NULL;
    service_makeicedelay_BtnSystemInformation = NULL;
    service_makeicedelay_BtnService = NULL;
    service_makeicedelay_BtnOperationSettings = NULL;
    service_makeicedelay_BtnMaintenance = NULL;
    service_makeicedelay_BtnLeft = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_makeicedelay(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_makeicedelay(uint32_t lyrIdx)
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

