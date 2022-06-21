#include "gfx/legato/generated/screen/le_gen_screen_maintenance_cleanscreen.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* maintenance_cleanscreen_Layer_0_FillPanel;
leLabelWidget* maintenance_cleanscreen_LblTitle;
leImageWidget* maintenance_cleanscreen_ImgLine;
leLineWidget* maintenance_cleanscreen_LineUnlock;
leLabelWidget* maintenance_cleanscreen_LblInstructions;
leButtonWidget* maintenance_cleanscreen_BtnMaintenance;
leButtonWidget* maintenance_cleanscreen_BtnExit;
leButtonWidget* maintenance_cleanscreen_BtnLock;
leButtonWidget* maintenance_cleanscreen_BtnUnlock;
leButtonWidget* maintenance_cleanscreen_BtnHome;
leButtonWidget* maintenance_cleanscreen_BtnTroubleshoot;
leButtonWidget* maintenance_cleanscreen_BtnSystemInformation;
leButtonWidget* maintenance_cleanscreen_BtnService;
leButtonWidget* maintenance_cleanscreen_BtnOperationSettings;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_maintenance_cleanscreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_maintenance_cleanscreen(void)
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

    maintenance_cleanscreen_Layer_0_FillPanel = leWidget_New();
    maintenance_cleanscreen_Layer_0_FillPanel->fn->setPosition(maintenance_cleanscreen_Layer_0_FillPanel, 0, 0);
    maintenance_cleanscreen_Layer_0_FillPanel->fn->setSize(maintenance_cleanscreen_Layer_0_FillPanel, 480, 272);
    maintenance_cleanscreen_Layer_0_FillPanel->fn->setScheme(maintenance_cleanscreen_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)maintenance_cleanscreen_Layer_0_FillPanel);

    maintenance_cleanscreen_LblTitle = leLabelWidget_New();
    maintenance_cleanscreen_LblTitle->fn->setPosition(maintenance_cleanscreen_LblTitle, 228, 29);
    maintenance_cleanscreen_LblTitle->fn->setSize(maintenance_cleanscreen_LblTitle, 222, 25);
    maintenance_cleanscreen_LblTitle->fn->setScheme(maintenance_cleanscreen_LblTitle, &Label_FontWhite);
    maintenance_cleanscreen_LblTitle->fn->setBackgroundType(maintenance_cleanscreen_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    maintenance_cleanscreen_LblTitle->fn->setHAlignment(maintenance_cleanscreen_LblTitle, LE_HALIGN_CENTER);
    maintenance_cleanscreen_LblTitle->fn->setString(maintenance_cleanscreen_LblTitle, (leString*)&string_MAINTENANCE_CLEANSCREEN_CleanScreen);
    root0->fn->addChild(root0, (leWidget*)maintenance_cleanscreen_LblTitle);

    maintenance_cleanscreen_ImgLine = leImageWidget_New();
    maintenance_cleanscreen_ImgLine->fn->setPosition(maintenance_cleanscreen_ImgLine, 218, 62);
    maintenance_cleanscreen_ImgLine->fn->setSize(maintenance_cleanscreen_ImgLine, 240, 5);
    maintenance_cleanscreen_ImgLine->fn->setScheme(maintenance_cleanscreen_ImgLine, &BlackBack);
    maintenance_cleanscreen_ImgLine->fn->setBackgroundType(maintenance_cleanscreen_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    maintenance_cleanscreen_ImgLine->fn->setBorderType(maintenance_cleanscreen_ImgLine, LE_WIDGET_BORDER_NONE);
    maintenance_cleanscreen_ImgLine->fn->setImage(maintenance_cleanscreen_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)maintenance_cleanscreen_ImgLine);

    maintenance_cleanscreen_LineUnlock = leLineWidget_New();
    maintenance_cleanscreen_LineUnlock->fn->setPosition(maintenance_cleanscreen_LineUnlock, 318, 215);
    maintenance_cleanscreen_LineUnlock->fn->setSize(maintenance_cleanscreen_LineUnlock, 28, 10);
    maintenance_cleanscreen_LineUnlock->fn->setScheme(maintenance_cleanscreen_LineUnlock, &Line_White);
    maintenance_cleanscreen_LineUnlock->fn->setBackgroundType(maintenance_cleanscreen_LineUnlock, LE_WIDGET_BACKGROUND_NONE);
    maintenance_cleanscreen_LineUnlock->fn->setHAlignment(maintenance_cleanscreen_LineUnlock, LE_HALIGN_RIGHT);
    maintenance_cleanscreen_LineUnlock->fn->setVAlignment(maintenance_cleanscreen_LineUnlock, LE_VALIGN_BOTTOM);
    maintenance_cleanscreen_LineUnlock->fn->setEndPoint(maintenance_cleanscreen_LineUnlock, 20, 0);
    root0->fn->addChild(root0, (leWidget*)maintenance_cleanscreen_LineUnlock);

    maintenance_cleanscreen_LblInstructions = leLabelWidget_New();
    maintenance_cleanscreen_LblInstructions->fn->setPosition(maintenance_cleanscreen_LblInstructions, 342, 189);
    maintenance_cleanscreen_LblInstructions->fn->setSize(maintenance_cleanscreen_LblInstructions, 83, 50);
    maintenance_cleanscreen_LblInstructions->fn->setScheme(maintenance_cleanscreen_LblInstructions, &Label_FontWhite);
    maintenance_cleanscreen_LblInstructions->fn->setBackgroundType(maintenance_cleanscreen_LblInstructions, LE_WIDGET_BACKGROUND_NONE);
    root0->fn->addChild(root0, (leWidget*)maintenance_cleanscreen_LblInstructions);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    maintenance_cleanscreen_BtnMaintenance = leButtonWidget_New();
    maintenance_cleanscreen_BtnMaintenance->fn->setPosition(maintenance_cleanscreen_BtnMaintenance, 0, 0);
    maintenance_cleanscreen_BtnMaintenance->fn->setSize(maintenance_cleanscreen_BtnMaintenance, 200, 55);
    maintenance_cleanscreen_BtnMaintenance->fn->setScheme(maintenance_cleanscreen_BtnMaintenance, &Button_Gray2);
    maintenance_cleanscreen_BtnMaintenance->fn->setHAlignment(maintenance_cleanscreen_BtnMaintenance, LE_HALIGN_LEFT);
    maintenance_cleanscreen_BtnMaintenance->fn->setString(maintenance_cleanscreen_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    maintenance_cleanscreen_BtnMaintenance->fn->setPressedImage(maintenance_cleanscreen_BtnMaintenance, (leImage*)&Menu_bar);
    maintenance_cleanscreen_BtnMaintenance->fn->setReleasedImage(maintenance_cleanscreen_BtnMaintenance, (leImage*)&Menu_bar);
    maintenance_cleanscreen_BtnMaintenance->fn->setImageMargin(maintenance_cleanscreen_BtnMaintenance, 5);
    maintenance_cleanscreen_BtnMaintenance->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnMaintenance, event_maintenance_cleanscreen_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnMaintenance);

    maintenance_cleanscreen_BtnExit = leButtonWidget_New();
    maintenance_cleanscreen_BtnExit->fn->setPosition(maintenance_cleanscreen_BtnExit, 415, 2);
    maintenance_cleanscreen_BtnExit->fn->setSize(maintenance_cleanscreen_BtnExit, 60, 60);
    maintenance_cleanscreen_BtnExit->fn->setScheme(maintenance_cleanscreen_BtnExit, &BlackBack);
    maintenance_cleanscreen_BtnExit->fn->setBackgroundType(maintenance_cleanscreen_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    maintenance_cleanscreen_BtnExit->fn->setBorderType(maintenance_cleanscreen_BtnExit, LE_WIDGET_BORDER_NONE);
    maintenance_cleanscreen_BtnExit->fn->setHAlignment(maintenance_cleanscreen_BtnExit, LE_HALIGN_RIGHT);
    maintenance_cleanscreen_BtnExit->fn->setVAlignment(maintenance_cleanscreen_BtnExit, LE_VALIGN_TOP);
    maintenance_cleanscreen_BtnExit->fn->setMargins(maintenance_cleanscreen_BtnExit, 4, 10, 10, 4);
    maintenance_cleanscreen_BtnExit->fn->setPressedImage(maintenance_cleanscreen_BtnExit, (leImage*)&Menu_exit_white);
    maintenance_cleanscreen_BtnExit->fn->setReleasedImage(maintenance_cleanscreen_BtnExit, (leImage*)&Menu_exit_white);
    maintenance_cleanscreen_BtnExit->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnExit, event_maintenance_cleanscreen_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnExit);

    maintenance_cleanscreen_BtnLock = leButtonWidget_New();
    maintenance_cleanscreen_BtnLock->fn->setPosition(maintenance_cleanscreen_BtnLock, 225, 88);
    maintenance_cleanscreen_BtnLock->fn->setSize(maintenance_cleanscreen_BtnLock, 88, 72);
    maintenance_cleanscreen_BtnLock->fn->setScheme(maintenance_cleanscreen_BtnLock, &Button_Gray2);
    maintenance_cleanscreen_BtnLock->fn->setBorderType(maintenance_cleanscreen_BtnLock, LE_WIDGET_BORDER_LINE);
    maintenance_cleanscreen_BtnLock->fn->setString(maintenance_cleanscreen_BtnLock, (leString*)&string_MAINTENANCE_CLEANSCREEN_Lock);
    maintenance_cleanscreen_BtnLock->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnLock, event_maintenance_cleanscreen_BtnLock_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnLock);

    maintenance_cleanscreen_BtnUnlock = leButtonWidget_New();
    maintenance_cleanscreen_BtnUnlock->fn->setPosition(maintenance_cleanscreen_BtnUnlock, 225, 180);
    maintenance_cleanscreen_BtnUnlock->fn->setSize(maintenance_cleanscreen_BtnUnlock, 88, 72);
    maintenance_cleanscreen_BtnUnlock->fn->setScheme(maintenance_cleanscreen_BtnUnlock, &Button_Gray2);
    maintenance_cleanscreen_BtnUnlock->fn->setBorderType(maintenance_cleanscreen_BtnUnlock, LE_WIDGET_BORDER_LINE);
    maintenance_cleanscreen_BtnUnlock->fn->setString(maintenance_cleanscreen_BtnUnlock, (leString*)&string_MAINTENANCE_CLEANSCREEN_Unlock);
    maintenance_cleanscreen_BtnUnlock->fn->setPressedEventCallback(maintenance_cleanscreen_BtnUnlock, event_maintenance_cleanscreen_BtnUnlock_OnPressed);
    maintenance_cleanscreen_BtnUnlock->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnUnlock, event_maintenance_cleanscreen_BtnUnlock_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnUnlock);

    maintenance_cleanscreen_BtnHome = leButtonWidget_New();
    maintenance_cleanscreen_BtnHome->fn->setPosition(maintenance_cleanscreen_BtnHome, 435, 225);
    maintenance_cleanscreen_BtnHome->fn->setSize(maintenance_cleanscreen_BtnHome, 40, 40);
    maintenance_cleanscreen_BtnHome->fn->setScheme(maintenance_cleanscreen_BtnHome, &BlackBack);
    maintenance_cleanscreen_BtnHome->fn->setBackgroundType(maintenance_cleanscreen_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    maintenance_cleanscreen_BtnHome->fn->setBorderType(maintenance_cleanscreen_BtnHome, LE_WIDGET_BORDER_NONE);
    maintenance_cleanscreen_BtnHome->fn->setPressedImage(maintenance_cleanscreen_BtnHome, (leImage*)&Menu_home);
    maintenance_cleanscreen_BtnHome->fn->setReleasedImage(maintenance_cleanscreen_BtnHome, (leImage*)&Menu_home);
    maintenance_cleanscreen_BtnHome->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnHome, event_maintenance_cleanscreen_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnHome);

    maintenance_cleanscreen_BtnTroubleshoot = leButtonWidget_New();
    maintenance_cleanscreen_BtnTroubleshoot->fn->setPosition(maintenance_cleanscreen_BtnTroubleshoot, 0, 217);
    maintenance_cleanscreen_BtnTroubleshoot->fn->setSize(maintenance_cleanscreen_BtnTroubleshoot, 200, 55);
    maintenance_cleanscreen_BtnTroubleshoot->fn->setScheme(maintenance_cleanscreen_BtnTroubleshoot, &menu_btn2);
    maintenance_cleanscreen_BtnTroubleshoot->fn->setHAlignment(maintenance_cleanscreen_BtnTroubleshoot, LE_HALIGN_LEFT);
    maintenance_cleanscreen_BtnTroubleshoot->fn->setString(maintenance_cleanscreen_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    maintenance_cleanscreen_BtnTroubleshoot->fn->setPressedImage(maintenance_cleanscreen_BtnTroubleshoot, (leImage*)&Menu_bar);
    maintenance_cleanscreen_BtnTroubleshoot->fn->setReleasedImage(maintenance_cleanscreen_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    maintenance_cleanscreen_BtnTroubleshoot->fn->setImageMargin(maintenance_cleanscreen_BtnTroubleshoot, 5);
    maintenance_cleanscreen_BtnTroubleshoot->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnTroubleshoot, event_maintenance_cleanscreen_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnTroubleshoot);

    maintenance_cleanscreen_BtnSystemInformation = leButtonWidget_New();
    maintenance_cleanscreen_BtnSystemInformation->fn->setPosition(maintenance_cleanscreen_BtnSystemInformation, 0, 163);
    maintenance_cleanscreen_BtnSystemInformation->fn->setSize(maintenance_cleanscreen_BtnSystemInformation, 200, 54);
    maintenance_cleanscreen_BtnSystemInformation->fn->setScheme(maintenance_cleanscreen_BtnSystemInformation, &menu_btn2);
    maintenance_cleanscreen_BtnSystemInformation->fn->setHAlignment(maintenance_cleanscreen_BtnSystemInformation, LE_HALIGN_LEFT);
    maintenance_cleanscreen_BtnSystemInformation->fn->setString(maintenance_cleanscreen_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    maintenance_cleanscreen_BtnSystemInformation->fn->setPressedImage(maintenance_cleanscreen_BtnSystemInformation, (leImage*)&Menu_bar);
    maintenance_cleanscreen_BtnSystemInformation->fn->setReleasedImage(maintenance_cleanscreen_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    maintenance_cleanscreen_BtnSystemInformation->fn->setImageMargin(maintenance_cleanscreen_BtnSystemInformation, 5);
    maintenance_cleanscreen_BtnSystemInformation->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnSystemInformation, event_maintenance_cleanscreen_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnSystemInformation);

    maintenance_cleanscreen_BtnService = leButtonWidget_New();
    maintenance_cleanscreen_BtnService->fn->setPosition(maintenance_cleanscreen_BtnService, 0, 109);
    maintenance_cleanscreen_BtnService->fn->setSize(maintenance_cleanscreen_BtnService, 200, 54);
    maintenance_cleanscreen_BtnService->fn->setScheme(maintenance_cleanscreen_BtnService, &menu_btn2);
    maintenance_cleanscreen_BtnService->fn->setHAlignment(maintenance_cleanscreen_BtnService, LE_HALIGN_LEFT);
    maintenance_cleanscreen_BtnService->fn->setString(maintenance_cleanscreen_BtnService, (leString*)&string_MENU_Service);
    maintenance_cleanscreen_BtnService->fn->setPressedImage(maintenance_cleanscreen_BtnService, (leImage*)&Menu_bar);
    maintenance_cleanscreen_BtnService->fn->setReleasedImage(maintenance_cleanscreen_BtnService, (leImage*)&Menu_bar_clear);
    maintenance_cleanscreen_BtnService->fn->setImageMargin(maintenance_cleanscreen_BtnService, 5);
    maintenance_cleanscreen_BtnService->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnService, event_maintenance_cleanscreen_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnService);

    maintenance_cleanscreen_BtnOperationSettings = leButtonWidget_New();
    maintenance_cleanscreen_BtnOperationSettings->fn->setPosition(maintenance_cleanscreen_BtnOperationSettings, 0, 55);
    maintenance_cleanscreen_BtnOperationSettings->fn->setSize(maintenance_cleanscreen_BtnOperationSettings, 200, 54);
    maintenance_cleanscreen_BtnOperationSettings->fn->setScheme(maintenance_cleanscreen_BtnOperationSettings, &menu_btn2);
    maintenance_cleanscreen_BtnOperationSettings->fn->setHAlignment(maintenance_cleanscreen_BtnOperationSettings, LE_HALIGN_LEFT);
    maintenance_cleanscreen_BtnOperationSettings->fn->setString(maintenance_cleanscreen_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    maintenance_cleanscreen_BtnOperationSettings->fn->setPressedImage(maintenance_cleanscreen_BtnOperationSettings, (leImage*)&Menu_bar);
    maintenance_cleanscreen_BtnOperationSettings->fn->setReleasedImage(maintenance_cleanscreen_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    maintenance_cleanscreen_BtnOperationSettings->fn->setImageMargin(maintenance_cleanscreen_BtnOperationSettings, 5);
    maintenance_cleanscreen_BtnOperationSettings->fn->setReleasedEventCallback(maintenance_cleanscreen_BtnOperationSettings, event_maintenance_cleanscreen_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_cleanscreen_BtnOperationSettings);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    maintenance_cleanscreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_maintenance_cleanscreen(void)
{
}

void screenHide_maintenance_cleanscreen(void)
{
    maintenance_cleanscreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    maintenance_cleanscreen_Layer_0_FillPanel = NULL;
    maintenance_cleanscreen_LblTitle = NULL;
    maintenance_cleanscreen_ImgLine = NULL;
    maintenance_cleanscreen_LineUnlock = NULL;
    maintenance_cleanscreen_LblInstructions = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    maintenance_cleanscreen_BtnMaintenance = NULL;
    maintenance_cleanscreen_BtnExit = NULL;
    maintenance_cleanscreen_BtnLock = NULL;
    maintenance_cleanscreen_BtnUnlock = NULL;
    maintenance_cleanscreen_BtnHome = NULL;
    maintenance_cleanscreen_BtnTroubleshoot = NULL;
    maintenance_cleanscreen_BtnSystemInformation = NULL;
    maintenance_cleanscreen_BtnService = NULL;
    maintenance_cleanscreen_BtnOperationSettings = NULL;


    showing = LE_FALSE;
}

void screenDestroy_maintenance_cleanscreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_maintenance_cleanscreen(uint32_t lyrIdx)
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

