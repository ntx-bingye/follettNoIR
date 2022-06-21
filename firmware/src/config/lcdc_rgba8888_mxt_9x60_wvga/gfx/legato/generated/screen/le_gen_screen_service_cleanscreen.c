#include "gfx/legato/generated/screen/le_gen_screen_service_cleanscreen.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_cleanscreen_Layer_0_FillPanel;
leLabelWidget* service_cleanscreen_LblTitle;
leImageWidget* service_cleanscreen_ImgLine;
leLineWidget* service_cleanscreen_LineUnlock;
leLabelWidget* service_cleanscreen_LblInstructions;
leButtonWidget* service_cleanscreen_BtnExit;
leButtonWidget* service_cleanscreen_BtnUnlock;
leButtonWidget* service_cleanscreen_BtnLock;
leButtonWidget* service_cleanscreen_BtnHome;
leButtonWidget* service_cleanscreen_BtnTroubleshoot;
leButtonWidget* service_cleanscreen_BtnSystemInformation;
leButtonWidget* service_cleanscreen_BtnService;
leButtonWidget* service_cleanscreen_BtnOperationSettings;
leButtonWidget* service_cleanscreen_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_cleanscreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_cleanscreen(void)
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

    service_cleanscreen_Layer_0_FillPanel = leWidget_New();
    service_cleanscreen_Layer_0_FillPanel->fn->setPosition(service_cleanscreen_Layer_0_FillPanel, 0, 0);
    service_cleanscreen_Layer_0_FillPanel->fn->setSize(service_cleanscreen_Layer_0_FillPanel, 480, 272);
    service_cleanscreen_Layer_0_FillPanel->fn->setScheme(service_cleanscreen_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_cleanscreen_Layer_0_FillPanel);

    service_cleanscreen_LblTitle = leLabelWidget_New();
    service_cleanscreen_LblTitle->fn->setPosition(service_cleanscreen_LblTitle, 228, 29);
    service_cleanscreen_LblTitle->fn->setSize(service_cleanscreen_LblTitle, 222, 25);
    service_cleanscreen_LblTitle->fn->setScheme(service_cleanscreen_LblTitle, &Label_FontWhite);
    service_cleanscreen_LblTitle->fn->setBackgroundType(service_cleanscreen_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_cleanscreen_LblTitle->fn->setHAlignment(service_cleanscreen_LblTitle, LE_HALIGN_CENTER);
    service_cleanscreen_LblTitle->fn->setString(service_cleanscreen_LblTitle, (leString*)&string_MAINTENANCE_CLEANSCREEN_CleanScreen);
    root0->fn->addChild(root0, (leWidget*)service_cleanscreen_LblTitle);

    service_cleanscreen_ImgLine = leImageWidget_New();
    service_cleanscreen_ImgLine->fn->setPosition(service_cleanscreen_ImgLine, 218, 62);
    service_cleanscreen_ImgLine->fn->setSize(service_cleanscreen_ImgLine, 240, 5);
    service_cleanscreen_ImgLine->fn->setScheme(service_cleanscreen_ImgLine, &BlackBack);
    service_cleanscreen_ImgLine->fn->setBackgroundType(service_cleanscreen_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_cleanscreen_ImgLine->fn->setBorderType(service_cleanscreen_ImgLine, LE_WIDGET_BORDER_NONE);
    service_cleanscreen_ImgLine->fn->setImage(service_cleanscreen_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_cleanscreen_ImgLine);

    service_cleanscreen_LineUnlock = leLineWidget_New();
    service_cleanscreen_LineUnlock->fn->setPosition(service_cleanscreen_LineUnlock, 318, 215);
    service_cleanscreen_LineUnlock->fn->setSize(service_cleanscreen_LineUnlock, 28, 10);
    service_cleanscreen_LineUnlock->fn->setScheme(service_cleanscreen_LineUnlock, &Line_White);
    service_cleanscreen_LineUnlock->fn->setBackgroundType(service_cleanscreen_LineUnlock, LE_WIDGET_BACKGROUND_NONE);
    service_cleanscreen_LineUnlock->fn->setHAlignment(service_cleanscreen_LineUnlock, LE_HALIGN_RIGHT);
    service_cleanscreen_LineUnlock->fn->setVAlignment(service_cleanscreen_LineUnlock, LE_VALIGN_BOTTOM);
    service_cleanscreen_LineUnlock->fn->setEndPoint(service_cleanscreen_LineUnlock, 20, 0);
    root0->fn->addChild(root0, (leWidget*)service_cleanscreen_LineUnlock);

    service_cleanscreen_LblInstructions = leLabelWidget_New();
    service_cleanscreen_LblInstructions->fn->setPosition(service_cleanscreen_LblInstructions, 342, 189);
    service_cleanscreen_LblInstructions->fn->setSize(service_cleanscreen_LblInstructions, 83, 50);
    service_cleanscreen_LblInstructions->fn->setScheme(service_cleanscreen_LblInstructions, &Label_FontWhite);
    service_cleanscreen_LblInstructions->fn->setBackgroundType(service_cleanscreen_LblInstructions, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)service_cleanscreen_LblInstructions);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_cleanscreen_BtnExit = leButtonWidget_New();
    service_cleanscreen_BtnExit->fn->setPosition(service_cleanscreen_BtnExit, 415, 2);
    service_cleanscreen_BtnExit->fn->setSize(service_cleanscreen_BtnExit, 60, 60);
    service_cleanscreen_BtnExit->fn->setScheme(service_cleanscreen_BtnExit, &BlackBack);
    service_cleanscreen_BtnExit->fn->setBackgroundType(service_cleanscreen_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_cleanscreen_BtnExit->fn->setBorderType(service_cleanscreen_BtnExit, LE_WIDGET_BORDER_NONE);
    service_cleanscreen_BtnExit->fn->setHAlignment(service_cleanscreen_BtnExit, LE_HALIGN_RIGHT);
    service_cleanscreen_BtnExit->fn->setVAlignment(service_cleanscreen_BtnExit, LE_VALIGN_TOP);
    service_cleanscreen_BtnExit->fn->setMargins(service_cleanscreen_BtnExit, 4, 10, 10, 4);
    service_cleanscreen_BtnExit->fn->setPressedImage(service_cleanscreen_BtnExit, (leImage*)&Menu_exit_white);
    service_cleanscreen_BtnExit->fn->setReleasedImage(service_cleanscreen_BtnExit, (leImage*)&Menu_exit_white);
    service_cleanscreen_BtnExit->fn->setReleasedEventCallback(service_cleanscreen_BtnExit, event_service_cleanscreen_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnExit);

    service_cleanscreen_BtnUnlock = leButtonWidget_New();
    service_cleanscreen_BtnUnlock->fn->setPosition(service_cleanscreen_BtnUnlock, 225, 180);
    service_cleanscreen_BtnUnlock->fn->setSize(service_cleanscreen_BtnUnlock, 88, 72);
    service_cleanscreen_BtnUnlock->fn->setScheme(service_cleanscreen_BtnUnlock, &Button_Gray2);
    service_cleanscreen_BtnUnlock->fn->setBorderType(service_cleanscreen_BtnUnlock, LE_WIDGET_BORDER_LINE);
    service_cleanscreen_BtnUnlock->fn->setString(service_cleanscreen_BtnUnlock, (leString*)&string_MAINTENANCE_CLEANSCREEN_Unlock);
    service_cleanscreen_BtnUnlock->fn->setPressedEventCallback(service_cleanscreen_BtnUnlock, event_service_cleanscreen_BtnUnlock_OnPressed);
    service_cleanscreen_BtnUnlock->fn->setReleasedEventCallback(service_cleanscreen_BtnUnlock, event_service_cleanscreen_BtnUnlock_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnUnlock);

    service_cleanscreen_BtnLock = leButtonWidget_New();
    service_cleanscreen_BtnLock->fn->setPosition(service_cleanscreen_BtnLock, 225, 88);
    service_cleanscreen_BtnLock->fn->setSize(service_cleanscreen_BtnLock, 88, 72);
    service_cleanscreen_BtnLock->fn->setScheme(service_cleanscreen_BtnLock, &Button_Gray2);
    service_cleanscreen_BtnLock->fn->setBorderType(service_cleanscreen_BtnLock, LE_WIDGET_BORDER_LINE);
    service_cleanscreen_BtnLock->fn->setString(service_cleanscreen_BtnLock, (leString*)&string_MAINTENANCE_CLEANSCREEN_Lock);
    service_cleanscreen_BtnLock->fn->setReleasedEventCallback(service_cleanscreen_BtnLock, event_service_cleanscreen_BtnLock_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnLock);

    service_cleanscreen_BtnHome = leButtonWidget_New();
    service_cleanscreen_BtnHome->fn->setPosition(service_cleanscreen_BtnHome, 435, 225);
    service_cleanscreen_BtnHome->fn->setSize(service_cleanscreen_BtnHome, 40, 40);
    service_cleanscreen_BtnHome->fn->setScheme(service_cleanscreen_BtnHome, &BlackBack);
    service_cleanscreen_BtnHome->fn->setBackgroundType(service_cleanscreen_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_cleanscreen_BtnHome->fn->setBorderType(service_cleanscreen_BtnHome, LE_WIDGET_BORDER_NONE);
    service_cleanscreen_BtnHome->fn->setPressedImage(service_cleanscreen_BtnHome, (leImage*)&Menu_home);
    service_cleanscreen_BtnHome->fn->setReleasedImage(service_cleanscreen_BtnHome, (leImage*)&Menu_home);
    service_cleanscreen_BtnHome->fn->setReleasedEventCallback(service_cleanscreen_BtnHome, event_service_cleanscreen_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnHome);

    service_cleanscreen_BtnTroubleshoot = leButtonWidget_New();
    service_cleanscreen_BtnTroubleshoot->fn->setPosition(service_cleanscreen_BtnTroubleshoot, 0, 217);
    service_cleanscreen_BtnTroubleshoot->fn->setSize(service_cleanscreen_BtnTroubleshoot, 200, 55);
    service_cleanscreen_BtnTroubleshoot->fn->setScheme(service_cleanscreen_BtnTroubleshoot, &menu_btn2);
    service_cleanscreen_BtnTroubleshoot->fn->setHAlignment(service_cleanscreen_BtnTroubleshoot, LE_HALIGN_LEFT);
    service_cleanscreen_BtnTroubleshoot->fn->setString(service_cleanscreen_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    service_cleanscreen_BtnTroubleshoot->fn->setPressedImage(service_cleanscreen_BtnTroubleshoot, (leImage*)&Menu_bar);
    service_cleanscreen_BtnTroubleshoot->fn->setReleasedImage(service_cleanscreen_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    service_cleanscreen_BtnTroubleshoot->fn->setImageMargin(service_cleanscreen_BtnTroubleshoot, 5);
    service_cleanscreen_BtnTroubleshoot->fn->setReleasedEventCallback(service_cleanscreen_BtnTroubleshoot, event_service_cleanscreen_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnTroubleshoot);

    service_cleanscreen_BtnSystemInformation = leButtonWidget_New();
    service_cleanscreen_BtnSystemInformation->fn->setPosition(service_cleanscreen_BtnSystemInformation, 0, 163);
    service_cleanscreen_BtnSystemInformation->fn->setSize(service_cleanscreen_BtnSystemInformation, 200, 54);
    service_cleanscreen_BtnSystemInformation->fn->setScheme(service_cleanscreen_BtnSystemInformation, &menu_btn2);
    service_cleanscreen_BtnSystemInformation->fn->setHAlignment(service_cleanscreen_BtnSystemInformation, LE_HALIGN_LEFT);
    service_cleanscreen_BtnSystemInformation->fn->setString(service_cleanscreen_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_cleanscreen_BtnSystemInformation->fn->setPressedImage(service_cleanscreen_BtnSystemInformation, (leImage*)&Menu_bar);
    service_cleanscreen_BtnSystemInformation->fn->setReleasedImage(service_cleanscreen_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_cleanscreen_BtnSystemInformation->fn->setImageMargin(service_cleanscreen_BtnSystemInformation, 5);
    service_cleanscreen_BtnSystemInformation->fn->setReleasedEventCallback(service_cleanscreen_BtnSystemInformation, event_service_cleanscreen_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnSystemInformation);

    service_cleanscreen_BtnService = leButtonWidget_New();
    service_cleanscreen_BtnService->fn->setPosition(service_cleanscreen_BtnService, 0, 109);
    service_cleanscreen_BtnService->fn->setSize(service_cleanscreen_BtnService, 200, 54);
    service_cleanscreen_BtnService->fn->setScheme(service_cleanscreen_BtnService, &Button_Gray2);
    service_cleanscreen_BtnService->fn->setHAlignment(service_cleanscreen_BtnService, LE_HALIGN_LEFT);
    service_cleanscreen_BtnService->fn->setString(service_cleanscreen_BtnService, (leString*)&string_MENU_Service);
    service_cleanscreen_BtnService->fn->setPressedImage(service_cleanscreen_BtnService, (leImage*)&Menu_bar);
    service_cleanscreen_BtnService->fn->setReleasedImage(service_cleanscreen_BtnService, (leImage*)&Menu_bar);
    service_cleanscreen_BtnService->fn->setImageMargin(service_cleanscreen_BtnService, 5);
    service_cleanscreen_BtnService->fn->setReleasedEventCallback(service_cleanscreen_BtnService, event_service_cleanscreen_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnService);

    service_cleanscreen_BtnOperationSettings = leButtonWidget_New();
    service_cleanscreen_BtnOperationSettings->fn->setPosition(service_cleanscreen_BtnOperationSettings, 0, 55);
    service_cleanscreen_BtnOperationSettings->fn->setSize(service_cleanscreen_BtnOperationSettings, 200, 54);
    service_cleanscreen_BtnOperationSettings->fn->setScheme(service_cleanscreen_BtnOperationSettings, &menu_btn2);
    service_cleanscreen_BtnOperationSettings->fn->setHAlignment(service_cleanscreen_BtnOperationSettings, LE_HALIGN_LEFT);
    service_cleanscreen_BtnOperationSettings->fn->setString(service_cleanscreen_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    service_cleanscreen_BtnOperationSettings->fn->setPressedImage(service_cleanscreen_BtnOperationSettings, (leImage*)&Menu_bar);
    service_cleanscreen_BtnOperationSettings->fn->setReleasedImage(service_cleanscreen_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    service_cleanscreen_BtnOperationSettings->fn->setImageMargin(service_cleanscreen_BtnOperationSettings, 5);
    service_cleanscreen_BtnOperationSettings->fn->setReleasedEventCallback(service_cleanscreen_BtnOperationSettings, event_service_cleanscreen_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnOperationSettings);

    service_cleanscreen_BtnMaintenance = leButtonWidget_New();
    service_cleanscreen_BtnMaintenance->fn->setPosition(service_cleanscreen_BtnMaintenance, 0, 0);
    service_cleanscreen_BtnMaintenance->fn->setSize(service_cleanscreen_BtnMaintenance, 200, 55);
    service_cleanscreen_BtnMaintenance->fn->setScheme(service_cleanscreen_BtnMaintenance, &menu_btn2);
    service_cleanscreen_BtnMaintenance->fn->setHAlignment(service_cleanscreen_BtnMaintenance, LE_HALIGN_LEFT);
    service_cleanscreen_BtnMaintenance->fn->setString(service_cleanscreen_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_cleanscreen_BtnMaintenance->fn->setPressedImage(service_cleanscreen_BtnMaintenance, (leImage*)&Menu_bar);
    service_cleanscreen_BtnMaintenance->fn->setReleasedImage(service_cleanscreen_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_cleanscreen_BtnMaintenance->fn->setImageMargin(service_cleanscreen_BtnMaintenance, 5);
    service_cleanscreen_BtnMaintenance->fn->setReleasedEventCallback(service_cleanscreen_BtnMaintenance, event_service_cleanscreen_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_cleanscreen_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_cleanscreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_cleanscreen(void)
{
}

void screenHide_service_cleanscreen(void)
{
    service_cleanscreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_cleanscreen_Layer_0_FillPanel = NULL;
    service_cleanscreen_LblTitle = NULL;
    service_cleanscreen_ImgLine = NULL;
    service_cleanscreen_LineUnlock = NULL;
    service_cleanscreen_LblInstructions = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_cleanscreen_BtnExit = NULL;
    service_cleanscreen_BtnUnlock = NULL;
    service_cleanscreen_BtnLock = NULL;
    service_cleanscreen_BtnHome = NULL;
    service_cleanscreen_BtnTroubleshoot = NULL;
    service_cleanscreen_BtnSystemInformation = NULL;
    service_cleanscreen_BtnService = NULL;
    service_cleanscreen_BtnOperationSettings = NULL;
    service_cleanscreen_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_cleanscreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_cleanscreen(uint32_t lyrIdx)
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

