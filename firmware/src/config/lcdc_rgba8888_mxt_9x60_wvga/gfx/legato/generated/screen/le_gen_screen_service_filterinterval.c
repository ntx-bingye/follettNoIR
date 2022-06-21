#include "gfx/legato/generated/screen/le_gen_screen_service_filterinterval.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_filterinterval_Layer_0_FillPanel;
leLabelWidget* service_filterinterval_LblTitle;
leImageWidget* service_filterinterval_ImgLine;
leLabelWidget* service_filterinterval_LblSubTitle;
leLabelWidget* service_filterinterval_LblFilterIntervalValue;
leLabelWidget* service_filterinterval_LblMonths;
leImageWidget* service_filterinterval_ImgCancel;
leButtonWidget* service_filterinterval_BtnExit;
leButtonWidget* service_filterinterval_BtnRight;
leButtonWidget* service_filterinterval_BtnLeft;
leButtonWidget* service_filterinterval_BtnHome;
leButtonWidget* service_filterinterval_BtnTroubleshoot;
leButtonWidget* service_filterinterval_BtnSystemInformation;
leButtonWidget* service_filterinterval_BtnService;
leButtonWidget* service_filterinterval_BtnOperationSettings;
leButtonWidget* service_filterinterval_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_filterinterval(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_filterinterval(void)
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

    service_filterinterval_Layer_0_FillPanel = leWidget_New();
    service_filterinterval_Layer_0_FillPanel->fn->setPosition(service_filterinterval_Layer_0_FillPanel, 0, 0);
    service_filterinterval_Layer_0_FillPanel->fn->setSize(service_filterinterval_Layer_0_FillPanel, 480, 272);
    service_filterinterval_Layer_0_FillPanel->fn->setScheme(service_filterinterval_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_filterinterval_Layer_0_FillPanel);

    service_filterinterval_LblTitle = leLabelWidget_New();
    service_filterinterval_LblTitle->fn->setPosition(service_filterinterval_LblTitle, 228, 29);
    service_filterinterval_LblTitle->fn->setSize(service_filterinterval_LblTitle, 222, 25);
    service_filterinterval_LblTitle->fn->setScheme(service_filterinterval_LblTitle, &Label_FontWhite);
    service_filterinterval_LblTitle->fn->setBackgroundType(service_filterinterval_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_LblTitle->fn->setHAlignment(service_filterinterval_LblTitle, LE_HALIGN_CENTER);
    service_filterinterval_LblTitle->fn->setString(service_filterinterval_LblTitle, (leString*)&string_SERVICE5_FilterInterval);
    root0->fn->addChild(root0, (leWidget*)service_filterinterval_LblTitle);

    service_filterinterval_ImgLine = leImageWidget_New();
    service_filterinterval_ImgLine->fn->setPosition(service_filterinterval_ImgLine, 218, 62);
    service_filterinterval_ImgLine->fn->setSize(service_filterinterval_ImgLine, 240, 5);
    service_filterinterval_ImgLine->fn->setScheme(service_filterinterval_ImgLine, &BlackBack);
    service_filterinterval_ImgLine->fn->setBackgroundType(service_filterinterval_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_ImgLine->fn->setBorderType(service_filterinterval_ImgLine, LE_WIDGET_BORDER_NONE);
    service_filterinterval_ImgLine->fn->setImage(service_filterinterval_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_filterinterval_ImgLine);

    service_filterinterval_LblSubTitle = leLabelWidget_New();
    service_filterinterval_LblSubTitle->fn->setPosition(service_filterinterval_LblSubTitle, 220, 80);
    service_filterinterval_LblSubTitle->fn->setSize(service_filterinterval_LblSubTitle, 237, 30);
    service_filterinterval_LblSubTitle->fn->setScheme(service_filterinterval_LblSubTitle, &Label_FontWhite);
    service_filterinterval_LblSubTitle->fn->setBackgroundType(service_filterinterval_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_LblSubTitle->fn->setHAlignment(service_filterinterval_LblSubTitle, LE_HALIGN_CENTER);
    service_filterinterval_LblSubTitle->fn->setString(service_filterinterval_LblSubTitle, (leString*)&string_SERVICE4_AdjustInterval);
    root0->fn->addChild(root0, (leWidget*)service_filterinterval_LblSubTitle);

    service_filterinterval_LblFilterIntervalValue = leLabelWidget_New();
    service_filterinterval_LblFilterIntervalValue->fn->setPosition(service_filterinterval_LblFilterIntervalValue, 278, 136);
    service_filterinterval_LblFilterIntervalValue->fn->setSize(service_filterinterval_LblFilterIntervalValue, 112, 55);
    service_filterinterval_LblFilterIntervalValue->fn->setScheme(service_filterinterval_LblFilterIntervalValue, &Label_FontWhite);
    service_filterinterval_LblFilterIntervalValue->fn->setBackgroundType(service_filterinterval_LblFilterIntervalValue, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_LblFilterIntervalValue->fn->setHAlignment(service_filterinterval_LblFilterIntervalValue, LE_HALIGN_CENTER);
    service_filterinterval_LblFilterIntervalValue->fn->setString(service_filterinterval_LblFilterIntervalValue, (leString*)&string_SERVICE5_FilterIntervalValue);
    root0->fn->addChild(root0, (leWidget*)service_filterinterval_LblFilterIntervalValue);

    service_filterinterval_LblMonths = leLabelWidget_New();
    service_filterinterval_LblMonths->fn->setPosition(service_filterinterval_LblMonths, 220, 192);
    service_filterinterval_LblMonths->fn->setSize(service_filterinterval_LblMonths, 237, 24);
    service_filterinterval_LblMonths->fn->setScheme(service_filterinterval_LblMonths, &Label_FontWhite);
    service_filterinterval_LblMonths->fn->setBackgroundType(service_filterinterval_LblMonths, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_LblMonths->fn->setHAlignment(service_filterinterval_LblMonths, LE_HALIGN_CENTER);
    service_filterinterval_LblMonths->fn->setString(service_filterinterval_LblMonths, (leString*)&string_SERVICE4_Months);
    root0->fn->addChild(root0, (leWidget*)service_filterinterval_LblMonths);

    service_filterinterval_ImgCancel = leImageWidget_New();
    service_filterinterval_ImgCancel->fn->setPosition(service_filterinterval_ImgCancel, 303, 132);
    service_filterinterval_ImgCancel->fn->setSize(service_filterinterval_ImgCancel, 64, 64);
    service_filterinterval_ImgCancel->fn->setScheme(service_filterinterval_ImgCancel, &BlackBack);
    service_filterinterval_ImgCancel->fn->setBackgroundType(service_filterinterval_ImgCancel, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_ImgCancel->fn->setBorderType(service_filterinterval_ImgCancel, LE_WIDGET_BORDER_NONE);
    service_filterinterval_ImgCancel->fn->setImage(service_filterinterval_ImgCancel, (leImage*)&Menu_cancel);
    root0->fn->addChild(root0, (leWidget*)service_filterinterval_ImgCancel);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_filterinterval_BtnExit = leButtonWidget_New();
    service_filterinterval_BtnExit->fn->setPosition(service_filterinterval_BtnExit, 415, 2);
    service_filterinterval_BtnExit->fn->setSize(service_filterinterval_BtnExit, 60, 60);
    service_filterinterval_BtnExit->fn->setScheme(service_filterinterval_BtnExit, &BlackBack);
    service_filterinterval_BtnExit->fn->setBackgroundType(service_filterinterval_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_BtnExit->fn->setBorderType(service_filterinterval_BtnExit, LE_WIDGET_BORDER_NONE);
    service_filterinterval_BtnExit->fn->setHAlignment(service_filterinterval_BtnExit, LE_HALIGN_RIGHT);
    service_filterinterval_BtnExit->fn->setVAlignment(service_filterinterval_BtnExit, LE_VALIGN_TOP);
    service_filterinterval_BtnExit->fn->setMargins(service_filterinterval_BtnExit, 4, 10, 10, 4);
    service_filterinterval_BtnExit->fn->setPressedImage(service_filterinterval_BtnExit, (leImage*)&Menu_exit_white);
    service_filterinterval_BtnExit->fn->setReleasedImage(service_filterinterval_BtnExit, (leImage*)&Menu_exit_white);
    service_filterinterval_BtnExit->fn->setReleasedEventCallback(service_filterinterval_BtnExit, event_service_filterinterval_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnExit);

    service_filterinterval_BtnRight = leButtonWidget_New();
    service_filterinterval_BtnRight->fn->setPosition(service_filterinterval_BtnRight, 388, 142);
    service_filterinterval_BtnRight->fn->setSize(service_filterinterval_BtnRight, 40, 45);
    service_filterinterval_BtnRight->fn->setScheme(service_filterinterval_BtnRight, &BlackBack);
    service_filterinterval_BtnRight->fn->setBackgroundType(service_filterinterval_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_BtnRight->fn->setBorderType(service_filterinterval_BtnRight, LE_WIDGET_BORDER_NONE);
    service_filterinterval_BtnRight->fn->setPressedImage(service_filterinterval_BtnRight, (leImage*)&Menu_chevron_right);
    service_filterinterval_BtnRight->fn->setReleasedImage(service_filterinterval_BtnRight, (leImage*)&Menu_chevron_right);
    service_filterinterval_BtnRight->fn->setReleasedEventCallback(service_filterinterval_BtnRight, event_service_filterinterval_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnRight);

    service_filterinterval_BtnLeft = leButtonWidget_New();
    service_filterinterval_BtnLeft->fn->setPosition(service_filterinterval_BtnLeft, 241, 142);
    service_filterinterval_BtnLeft->fn->setSize(service_filterinterval_BtnLeft, 40, 45);
    service_filterinterval_BtnLeft->fn->setScheme(service_filterinterval_BtnLeft, &BlackBack);
    service_filterinterval_BtnLeft->fn->setBackgroundType(service_filterinterval_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_BtnLeft->fn->setBorderType(service_filterinterval_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_filterinterval_BtnLeft->fn->setPressedImage(service_filterinterval_BtnLeft, (leImage*)&Menu_chevron_left);
    service_filterinterval_BtnLeft->fn->setReleasedImage(service_filterinterval_BtnLeft, (leImage*)&Menu_chevron_left);
    service_filterinterval_BtnLeft->fn->setReleasedEventCallback(service_filterinterval_BtnLeft, event_service_filterinterval_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnLeft);

    service_filterinterval_BtnHome = leButtonWidget_New();
    service_filterinterval_BtnHome->fn->setPosition(service_filterinterval_BtnHome, 435, 225);
    service_filterinterval_BtnHome->fn->setSize(service_filterinterval_BtnHome, 40, 40);
    service_filterinterval_BtnHome->fn->setScheme(service_filterinterval_BtnHome, &BlackBack);
    service_filterinterval_BtnHome->fn->setBackgroundType(service_filterinterval_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_filterinterval_BtnHome->fn->setBorderType(service_filterinterval_BtnHome, LE_WIDGET_BORDER_NONE);
    service_filterinterval_BtnHome->fn->setPressedImage(service_filterinterval_BtnHome, (leImage*)&Menu_home);
    service_filterinterval_BtnHome->fn->setReleasedImage(service_filterinterval_BtnHome, (leImage*)&Menu_home);
    service_filterinterval_BtnHome->fn->setReleasedEventCallback(service_filterinterval_BtnHome, event_service_filterinterval_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnHome);

    service_filterinterval_BtnTroubleshoot = leButtonWidget_New();
    service_filterinterval_BtnTroubleshoot->fn->setPosition(service_filterinterval_BtnTroubleshoot, 0, 217);
    service_filterinterval_BtnTroubleshoot->fn->setSize(service_filterinterval_BtnTroubleshoot, 200, 55);
    service_filterinterval_BtnTroubleshoot->fn->setScheme(service_filterinterval_BtnTroubleshoot, &menu_btn2);
    service_filterinterval_BtnTroubleshoot->fn->setHAlignment(service_filterinterval_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_filterinterval_BtnTroubleshoot->fn->setString(service_filterinterval_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_filterinterval_BtnTroubleshoot->fn->setPressedImage(service_filterinterval_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_filterinterval_BtnTroubleshoot->fn->setReleasedImage(service_filterinterval_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_filterinterval_BtnTroubleshoot->fn->setImageMargin(service_filterinterval_BtnTroubleshoot, 5);
    service_filterinterval_BtnTroubleshoot->fn->setReleasedEventCallback(service_filterinterval_BtnTroubleshoot, event_service_filterinterval_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnTroubleshoot);

    service_filterinterval_BtnSystemInformation = leButtonWidget_New();
    service_filterinterval_BtnSystemInformation->fn->setPosition(service_filterinterval_BtnSystemInformation, 0, 163);
    service_filterinterval_BtnSystemInformation->fn->setSize(service_filterinterval_BtnSystemInformation, 200, 54);
    service_filterinterval_BtnSystemInformation->fn->setScheme(service_filterinterval_BtnSystemInformation, &menu_btn2);
    service_filterinterval_BtnSystemInformation->fn->setHAlignment(service_filterinterval_BtnSystemInformation, LE_HALIGN_LEFT);
    service_filterinterval_BtnSystemInformation->fn->setString(service_filterinterval_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_filterinterval_BtnSystemInformation->fn->setPressedImage(service_filterinterval_BtnSystemInformation, (leImage*)&Menu_bar);
    service_filterinterval_BtnSystemInformation->fn->setReleasedImage(service_filterinterval_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_filterinterval_BtnSystemInformation->fn->setImageMargin(service_filterinterval_BtnSystemInformation, 5);
    service_filterinterval_BtnSystemInformation->fn->setReleasedEventCallback(service_filterinterval_BtnSystemInformation, event_service_filterinterval_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnSystemInformation);

    service_filterinterval_BtnService = leButtonWidget_New();
    service_filterinterval_BtnService->fn->setPosition(service_filterinterval_BtnService, 0, 109);
    service_filterinterval_BtnService->fn->setSize(service_filterinterval_BtnService, 200, 54);
    service_filterinterval_BtnService->fn->setScheme(service_filterinterval_BtnService, &menu_btn2);
    service_filterinterval_BtnService->fn->setHAlignment(service_filterinterval_BtnService, LE_HALIGN_LEFT);
    service_filterinterval_BtnService->fn->setString(service_filterinterval_BtnService, (leString*)&string_MENU_Service);
    service_filterinterval_BtnService->fn->setPressedImage(service_filterinterval_BtnService, (leImage*)&Menu_bar);
    service_filterinterval_BtnService->fn->setReleasedImage(service_filterinterval_BtnService, (leImage*)&Menu_bar_clear);
    service_filterinterval_BtnService->fn->setImageMargin(service_filterinterval_BtnService, 5);
    service_filterinterval_BtnService->fn->setReleasedEventCallback(service_filterinterval_BtnService, event_service_filterinterval_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnService);

    service_filterinterval_BtnOperationSettings = leButtonWidget_New();
    service_filterinterval_BtnOperationSettings->fn->setPosition(service_filterinterval_BtnOperationSettings, 0, 55);
    service_filterinterval_BtnOperationSettings->fn->setSize(service_filterinterval_BtnOperationSettings, 200, 54);
    service_filterinterval_BtnOperationSettings->fn->setScheme(service_filterinterval_BtnOperationSettings, &menu_btn2);
    service_filterinterval_BtnOperationSettings->fn->setHAlignment(service_filterinterval_BtnOperationSettings, LE_HALIGN_LEFT);
    service_filterinterval_BtnOperationSettings->fn->setString(service_filterinterval_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_filterinterval_BtnOperationSettings->fn->setPressedImage(service_filterinterval_BtnOperationSettings, (leImage*)&Menu_bar);
    service_filterinterval_BtnOperationSettings->fn->setReleasedImage(service_filterinterval_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_filterinterval_BtnOperationSettings->fn->setImageMargin(service_filterinterval_BtnOperationSettings, 5);
    service_filterinterval_BtnOperationSettings->fn->setReleasedEventCallback(service_filterinterval_BtnOperationSettings, event_service_filterinterval_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnOperationSettings);

    service_filterinterval_BtnMaintenance = leButtonWidget_New();
    service_filterinterval_BtnMaintenance->fn->setPosition(service_filterinterval_BtnMaintenance, 0, 0);
    service_filterinterval_BtnMaintenance->fn->setSize(service_filterinterval_BtnMaintenance, 200, 55);
    service_filterinterval_BtnMaintenance->fn->setScheme(service_filterinterval_BtnMaintenance, &Button_Gray2);
    service_filterinterval_BtnMaintenance->fn->setHAlignment(service_filterinterval_BtnMaintenance, LE_HALIGN_LEFT);
    service_filterinterval_BtnMaintenance->fn->setString(service_filterinterval_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_filterinterval_BtnMaintenance->fn->setPressedImage(service_filterinterval_BtnMaintenance, (leImage*)&Menu_bar);
    service_filterinterval_BtnMaintenance->fn->setReleasedImage(service_filterinterval_BtnMaintenance, (leImage*)&Menu_bar);
    service_filterinterval_BtnMaintenance->fn->setImageMargin(service_filterinterval_BtnMaintenance, 5);
    service_filterinterval_BtnMaintenance->fn->setReleasedEventCallback(service_filterinterval_BtnMaintenance, event_service_filterinterval_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_filterinterval_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_filterinterval_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_filterinterval(void)
{
}

void screenHide_service_filterinterval(void)
{
    service_filterinterval_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_filterinterval_Layer_0_FillPanel = NULL;
    service_filterinterval_LblTitle = NULL;
    service_filterinterval_ImgLine = NULL;
    service_filterinterval_LblSubTitle = NULL;
    service_filterinterval_LblFilterIntervalValue = NULL;
    service_filterinterval_LblMonths = NULL;
    service_filterinterval_ImgCancel = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_filterinterval_BtnExit = NULL;
    service_filterinterval_BtnRight = NULL;
    service_filterinterval_BtnLeft = NULL;
    service_filterinterval_BtnHome = NULL;
    service_filterinterval_BtnTroubleshoot = NULL;
    service_filterinterval_BtnSystemInformation = NULL;
    service_filterinterval_BtnService = NULL;
    service_filterinterval_BtnOperationSettings = NULL;
    service_filterinterval_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_filterinterval(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_filterinterval(uint32_t lyrIdx)
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

