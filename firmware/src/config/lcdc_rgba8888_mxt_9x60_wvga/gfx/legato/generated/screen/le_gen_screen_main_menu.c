#include "gfx/legato/generated/screen/le_gen_screen_main_menu.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* main_menu_Layer_0_FillPanel;
leWidget* main_menu_PanelAlert;
leImageWidget* main_menu_ImgManualQR;
leWidget* main_menu_PanelSubtitle;
leWidget* main_menu_PanelBtn0_5;
leWidget* main_menu_PanelCleanScreen;
leButtonWidget* main_menu_BtnMaintenance;
leButtonWidget* main_menu_BtnOperationSettings;
leButtonWidget* main_menu_BtnExit;
leButtonWidget* main_menu_BtnHome;
leButtonWidget* main_menu_BtnTroubleshoot;
leButtonWidget* main_menu_BtnSystemInformation;
leButtonWidget* main_menu_BtnService;
leWidget* main_menu_PanelInterval;
leButtonWidget* main_menu_BtnUnits;
leLabelWidget* main_menu_LblSensor;
leLabelWidget* main_menu_LblLowWater;
leLabelWidget* main_menu_LblLowBIn;
leLabelWidget* main_menu_LblActiveMod;
leImageWidget* main_menu_ImgLine;
leLabelWidget* main_menu_LblSubmenu;
leButtonWidget* main_menu_Btn0;
leButtonWidget* main_menu_Btn1;
leButtonWidget* main_menu_Btn2;
leButtonWidget* main_menu_Btn3;
leButtonWidget* main_menu_Btn4;
leButtonWidget* main_menu_Btn5;
leButtonWidget* main_menu_BtnCleanLock;
leButtonWidget* main_menu_BtnCleanUnlock;
leWidget* main_menu_PanelHold5SLine;
leLineWidget* main_menu_LineClrUnlock;
leLabelWidget* main_menu_LblClearInstructions;
leLabelWidget* main_menu_LblMonth;
leLabelWidget* main_menu_LblFilterInterval;
leButtonWidget* main_menu_BtnRight;
leImageWidget* main_menu_ImgCancel;
leButtonWidget* main_menu_BtnLeft;
leLabelWidget* main_menu_LblSubtitle;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_main_menu(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_main_menu(void)
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

    main_menu_Layer_0_FillPanel = leWidget_New();
    main_menu_Layer_0_FillPanel->fn->setPosition(main_menu_Layer_0_FillPanel, 0, -1);
    main_menu_Layer_0_FillPanel->fn->setSize(main_menu_Layer_0_FillPanel, 480, 272);
    main_menu_Layer_0_FillPanel->fn->setScheme(main_menu_Layer_0_FillPanel, &whiteground);
    root1->fn->addChild(root1, (leWidget*)main_menu_Layer_0_FillPanel);

    main_menu_PanelAlert = leWidget_New();
    main_menu_PanelAlert->fn->setPosition(main_menu_PanelAlert, 424, 55);
    main_menu_PanelAlert->fn->setSize(main_menu_PanelAlert, 55, 159);
    main_menu_PanelAlert->fn->setBackgroundType(main_menu_PanelAlert, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)main_menu_PanelAlert);

    main_menu_LblLowWater = leLabelWidget_New();
    main_menu_LblLowWater->fn->setPosition(main_menu_LblLowWater, -1, 110);
    main_menu_LblLowWater->fn->setSize(main_menu_LblLowWater, 39, 43);
    main_menu_LblLowWater->fn->setScheme(main_menu_LblLowWater, &Label_FontLightBlue);
    main_menu_LblLowWater->fn->setBackgroundType(main_menu_LblLowWater, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblLowWater->fn->setString(main_menu_LblLowWater, (leString*)&string_STATUS_LowWater);
    main_menu_PanelAlert->fn->addChild(main_menu_PanelAlert, (leWidget*)main_menu_LblLowWater);

    main_menu_LblLowBIn = leLabelWidget_New();
    main_menu_LblLowBIn->fn->setPosition(main_menu_LblLowBIn, -1, 51);
    main_menu_LblLowBIn->fn->setSize(main_menu_LblLowBIn, 37, 40);
    main_menu_LblLowBIn->fn->setScheme(main_menu_LblLowBIn, &Label_FontLightBlue);
    main_menu_LblLowBIn->fn->setBackgroundType(main_menu_LblLowBIn, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblLowBIn->fn->setString(main_menu_LblLowBIn, (leString*)&string_STATUS_LowBin);
    main_menu_PanelAlert->fn->addChild(main_menu_PanelAlert, (leWidget*)main_menu_LblLowBIn);

    main_menu_LblActiveMod = leLabelWidget_New();
    main_menu_LblActiveMod->fn->setPosition(main_menu_LblActiveMod, -1, -5);
    main_menu_LblActiveMod->fn->setSize(main_menu_LblActiveMod, 56, 38);
    main_menu_LblActiveMod->fn->setScheme(main_menu_LblActiveMod, &Label_FontLightBlue);
    main_menu_LblActiveMod->fn->setBackgroundType(main_menu_LblActiveMod, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblActiveMod->fn->setString(main_menu_LblActiveMod, (leString*)&string_STATUS_Standby);
    main_menu_PanelAlert->fn->addChild(main_menu_PanelAlert, (leWidget*)main_menu_LblActiveMod);

    main_menu_ImgManualQR = leImageWidget_New();
    main_menu_ImgManualQR->fn->setPosition(main_menu_ImgManualQR, 259, 81);
    main_menu_ImgManualQR->fn->setSize(main_menu_ImgManualQR, 145, 129);
    main_menu_ImgManualQR->fn->setVisible(main_menu_ImgManualQR, LE_FALSE);
    main_menu_ImgManualQR->fn->setBackgroundType(main_menu_ImgManualQR, LE_WIDGET_BACKGROUND_NONE);
    main_menu_ImgManualQR->fn->setBorderType(main_menu_ImgManualQR, LE_WIDGET_BORDER_NONE);
    main_menu_ImgManualQR->fn->setImage(main_menu_ImgManualQR, (leImage*)&QRCode_manual);
    root1->fn->addChild(root1, (leWidget*)main_menu_ImgManualQR);

    main_menu_PanelSubtitle = leWidget_New();
    main_menu_PanelSubtitle->fn->setPosition(main_menu_PanelSubtitle, 201, 2);
    main_menu_PanelSubtitle->fn->setSize(main_menu_PanelSubtitle, 225, 49);
    main_menu_PanelSubtitle->fn->setEnabled(main_menu_PanelSubtitle, LE_FALSE);
    main_menu_PanelSubtitle->fn->setVisible(main_menu_PanelSubtitle, LE_FALSE);
    main_menu_PanelSubtitle->fn->setBackgroundType(main_menu_PanelSubtitle, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)main_menu_PanelSubtitle);

    main_menu_ImgLine = leImageWidget_New();
    main_menu_ImgLine->fn->setPosition(main_menu_ImgLine, 4, 35);
    main_menu_ImgLine->fn->setSize(main_menu_ImgLine, 218, 3);
    main_menu_ImgLine->fn->setScheme(main_menu_ImgLine, &Line_White);
    main_menu_ImgLine->fn->setBorderType(main_menu_ImgLine, LE_WIDGET_BORDER_LINE);
    main_menu_ImgLine->fn->setImage(main_menu_ImgLine, (leImage*)&Menu_line);
    main_menu_PanelSubtitle->fn->addChild(main_menu_PanelSubtitle, (leWidget*)main_menu_ImgLine);

    main_menu_LblSubmenu = leLabelWidget_New();
    main_menu_LblSubmenu->fn->setPosition(main_menu_LblSubmenu, 14, 4);
    main_menu_LblSubmenu->fn->setSize(main_menu_LblSubmenu, 217, 36);
    main_menu_LblSubmenu->fn->setScheme(main_menu_LblSubmenu, &Panel_Gray3);
    main_menu_LblSubmenu->fn->setBackgroundType(main_menu_LblSubmenu, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblSubmenu->fn->setHAlignment(main_menu_LblSubmenu, LE_HALIGN_CENTER);
    main_menu_LblSubmenu->fn->setString(main_menu_LblSubmenu, (leString*)&string_MAINTENANCE_CLEANSCREEN_CleanScreen);
    main_menu_PanelSubtitle->fn->addChild(main_menu_PanelSubtitle, (leWidget*)main_menu_LblSubmenu);

    main_menu_PanelBtn0_5 = leWidget_New();
    main_menu_PanelBtn0_5->fn->setPosition(main_menu_PanelBtn0_5, 195, 0);
    main_menu_PanelBtn0_5->fn->setSize(main_menu_PanelBtn0_5, 235, 272);
    main_menu_PanelBtn0_5->fn->setEnabled(main_menu_PanelBtn0_5, LE_FALSE);
    main_menu_PanelBtn0_5->fn->setVisible(main_menu_PanelBtn0_5, LE_FALSE);
    main_menu_PanelBtn0_5->fn->setBackgroundType(main_menu_PanelBtn0_5, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)main_menu_PanelBtn0_5);

    main_menu_Btn0 = leButtonWidget_New();
    main_menu_Btn0->fn->setPosition(main_menu_Btn0, 10, 3);
    main_menu_Btn0->fn->setSize(main_menu_Btn0, 220, 40);
    main_menu_Btn0->fn->setScheme(main_menu_Btn0, &Button_Transparent);
    main_menu_Btn0->fn->setBackgroundType(main_menu_Btn0, LE_WIDGET_BACKGROUND_NONE);
    main_menu_Btn0->fn->setBorderType(main_menu_Btn0, LE_WIDGET_BORDER_NONE);
    main_menu_Btn0->fn->setString(main_menu_Btn0, (leString*)&string_MAINTENANCE_CLEANSCREEN_CleanScreen);
    main_menu_Btn0->fn->setPressedImage(main_menu_Btn0, (leImage*)&OpSetting_button_on);
    main_menu_Btn0->fn->setReleasedImage(main_menu_Btn0, (leImage*)&OpSetting_button_off);
    main_menu_Btn0->fn->setImagePosition(main_menu_Btn0, LE_RELATIVE_POSITION_BEHIND);
    main_menu_Btn0->fn->setReleasedEventCallback(main_menu_Btn0, event_main_menu_Btn0_OnReleased);
    main_menu_PanelBtn0_5->fn->addChild(main_menu_PanelBtn0_5, (leWidget*)main_menu_Btn0);

    main_menu_Btn1 = leButtonWidget_New();
    main_menu_Btn1->fn->setPosition(main_menu_Btn1, 10, 48);
    main_menu_Btn1->fn->setSize(main_menu_Btn1, 220, 40);
    main_menu_Btn1->fn->setScheme(main_menu_Btn1, &Button_Transparent);
    main_menu_Btn1->fn->setBackgroundType(main_menu_Btn1, LE_WIDGET_BACKGROUND_NONE);
    main_menu_Btn1->fn->setBorderType(main_menu_Btn1, LE_WIDGET_BORDER_NONE);
    main_menu_Btn1->fn->setString(main_menu_Btn1, (leString*)&string_MAINTENANCE_SANITIZE_CleanAndSanitize);
    main_menu_Btn1->fn->setPressedImage(main_menu_Btn1, (leImage*)&OpSetting_button_on);
    main_menu_Btn1->fn->setReleasedImage(main_menu_Btn1, (leImage*)&OpSetting_button_off);
    main_menu_Btn1->fn->setImagePosition(main_menu_Btn1, LE_RELATIVE_POSITION_BEHIND);
    main_menu_Btn1->fn->setReleasedEventCallback(main_menu_Btn1, event_main_menu_Btn1_OnReleased);
    main_menu_PanelBtn0_5->fn->addChild(main_menu_PanelBtn0_5, (leWidget*)main_menu_Btn1);

    main_menu_Btn2 = leButtonWidget_New();
    main_menu_Btn2->fn->setPosition(main_menu_Btn2, 10, 93);
    main_menu_Btn2->fn->setSize(main_menu_Btn2, 220, 40);
    main_menu_Btn2->fn->setEnabled(main_menu_Btn2, LE_FALSE);
    main_menu_Btn2->fn->setScheme(main_menu_Btn2, &Button_Transparent);
    main_menu_Btn2->fn->setBackgroundType(main_menu_Btn2, LE_WIDGET_BACKGROUND_NONE);
    main_menu_Btn2->fn->setBorderType(main_menu_Btn2, LE_WIDGET_BORDER_NONE);
    main_menu_Btn2->fn->setString(main_menu_Btn2, (leString*)&string_MAINTENANCE_FILTER_ReplaceFilter);
    main_menu_Btn2->fn->setPressedImage(main_menu_Btn2, (leImage*)&OpSetting_button_on);
    main_menu_Btn2->fn->setReleasedImage(main_menu_Btn2, (leImage*)&OpSetting_button_off);
    main_menu_Btn2->fn->setImagePosition(main_menu_Btn2, LE_RELATIVE_POSITION_BEHIND);
    main_menu_Btn2->fn->setReleasedEventCallback(main_menu_Btn2, event_main_menu_Btn2_OnReleased);
    main_menu_PanelBtn0_5->fn->addChild(main_menu_PanelBtn0_5, (leWidget*)main_menu_Btn2);

    main_menu_Btn3 = leButtonWidget_New();
    main_menu_Btn3->fn->setPosition(main_menu_Btn3, 10, 138);
    main_menu_Btn3->fn->setSize(main_menu_Btn3, 220, 40);
    main_menu_Btn3->fn->setEnabled(main_menu_Btn3, LE_FALSE);
    main_menu_Btn3->fn->setScheme(main_menu_Btn3, &Button_Transparent);
    main_menu_Btn3->fn->setBackgroundType(main_menu_Btn3, LE_WIDGET_BACKGROUND_NONE);
    main_menu_Btn3->fn->setBorderType(main_menu_Btn3, LE_WIDGET_BORDER_NONE);
    main_menu_Btn3->fn->setString(main_menu_Btn3, (leString*)&string_SERVICE4_PMInterval);
    main_menu_Btn3->fn->setPressedImage(main_menu_Btn3, (leImage*)&OpSetting_button_on);
    main_menu_Btn3->fn->setReleasedImage(main_menu_Btn3, (leImage*)&OpSetting_button_off);
    main_menu_Btn3->fn->setImagePosition(main_menu_Btn3, LE_RELATIVE_POSITION_BEHIND);
    main_menu_Btn3->fn->setReleasedEventCallback(main_menu_Btn3, event_main_menu_Btn3_OnReleased);
    main_menu_PanelBtn0_5->fn->addChild(main_menu_PanelBtn0_5, (leWidget*)main_menu_Btn3);

    main_menu_Btn4 = leButtonWidget_New();
    main_menu_Btn4->fn->setPosition(main_menu_Btn4, 10, 183);
    main_menu_Btn4->fn->setSize(main_menu_Btn4, 220, 40);
    main_menu_Btn4->fn->setEnabled(main_menu_Btn4, LE_FALSE);
    main_menu_Btn4->fn->setScheme(main_menu_Btn4, &Button_Transparent);
    main_menu_Btn4->fn->setBackgroundType(main_menu_Btn4, LE_WIDGET_BACKGROUND_NONE);
    main_menu_Btn4->fn->setBorderType(main_menu_Btn4, LE_WIDGET_BORDER_NONE);
    main_menu_Btn4->fn->setString(main_menu_Btn4, (leString*)&string_SERVICE5_FilterInterval);
    main_menu_Btn4->fn->setPressedImage(main_menu_Btn4, (leImage*)&OpSetting_button_on);
    main_menu_Btn4->fn->setReleasedImage(main_menu_Btn4, (leImage*)&OpSetting_button_off);
    main_menu_Btn4->fn->setImagePosition(main_menu_Btn4, LE_RELATIVE_POSITION_BEHIND);
    main_menu_Btn4->fn->setReleasedEventCallback(main_menu_Btn4, event_main_menu_Btn4_OnReleased);
    main_menu_PanelBtn0_5->fn->addChild(main_menu_PanelBtn0_5, (leWidget*)main_menu_Btn4);

    main_menu_Btn5 = leButtonWidget_New();
    main_menu_Btn5->fn->setPosition(main_menu_Btn5, 10, 228);
    main_menu_Btn5->fn->setSize(main_menu_Btn5, 220, 40);
    main_menu_Btn5->fn->setEnabled(main_menu_Btn5, LE_FALSE);
    main_menu_Btn5->fn->setScheme(main_menu_Btn5, &Button_Transparent);
    main_menu_Btn5->fn->setBackgroundType(main_menu_Btn5, LE_WIDGET_BACKGROUND_NONE);
    main_menu_Btn5->fn->setBorderType(main_menu_Btn5, LE_WIDGET_BORDER_NONE);
    main_menu_Btn5->fn->setString(main_menu_Btn5, (leString*)&string_SERVICE5_FilterInterval);
    main_menu_Btn5->fn->setPressedImage(main_menu_Btn5, (leImage*)&OpSetting_button_on);
    main_menu_Btn5->fn->setReleasedImage(main_menu_Btn5, (leImage*)&OpSetting_button_off);
    main_menu_Btn5->fn->setImagePosition(main_menu_Btn5, LE_RELATIVE_POSITION_BEHIND);
    main_menu_Btn5->fn->setReleasedEventCallback(main_menu_Btn5, event_main_menu_Btn5_OnReleased);
    main_menu_PanelBtn0_5->fn->addChild(main_menu_PanelBtn0_5, (leWidget*)main_menu_Btn5);

    main_menu_PanelCleanScreen = leWidget_New();
    main_menu_PanelCleanScreen->fn->setPosition(main_menu_PanelCleanScreen, 225, 59);
    main_menu_PanelCleanScreen->fn->setSize(main_menu_PanelCleanScreen, 222, 165);
    main_menu_PanelCleanScreen->fn->setEnabled(main_menu_PanelCleanScreen, LE_FALSE);
    main_menu_PanelCleanScreen->fn->setBackgroundType(main_menu_PanelCleanScreen, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)main_menu_PanelCleanScreen);

    main_menu_BtnCleanLock = leButtonWidget_New();
    main_menu_BtnCleanLock->fn->setPosition(main_menu_BtnCleanLock, 21, 9);
    main_menu_BtnCleanLock->fn->setSize(main_menu_BtnCleanLock, 88, 72);
    main_menu_BtnCleanLock->fn->setScheme(main_menu_BtnCleanLock, &Button_Gray2A);
    main_menu_BtnCleanLock->fn->setBorderType(main_menu_BtnCleanLock, LE_WIDGET_BORDER_NONE);
    main_menu_BtnCleanLock->fn->setString(main_menu_BtnCleanLock, (leString*)&string_MAINTENANCE_CLEANSCREEN_Lock);
    main_menu_BtnCleanLock->fn->setReleasedEventCallback(main_menu_BtnCleanLock, event_main_menu_BtnCleanLock_OnReleased);
    main_menu_PanelCleanScreen->fn->addChild(main_menu_PanelCleanScreen, (leWidget*)main_menu_BtnCleanLock);

    main_menu_BtnCleanUnlock = leButtonWidget_New();
    main_menu_BtnCleanUnlock->fn->setPosition(main_menu_BtnCleanUnlock, 21, 90);
    main_menu_BtnCleanUnlock->fn->setSize(main_menu_BtnCleanUnlock, 88, 72);
    main_menu_BtnCleanUnlock->fn->setScheme(main_menu_BtnCleanUnlock, &Button_Gray2A);
    main_menu_BtnCleanUnlock->fn->setString(main_menu_BtnCleanUnlock, (leString*)&string_MAINTENANCE_CLEANSCREEN_Unlock);
    main_menu_BtnCleanUnlock->fn->setPressedEventCallback(main_menu_BtnCleanUnlock, event_main_menu_BtnCleanUnlock_OnPressed);
    main_menu_BtnCleanUnlock->fn->setReleasedEventCallback(main_menu_BtnCleanUnlock, event_main_menu_BtnCleanUnlock_OnReleased);
    main_menu_PanelCleanScreen->fn->addChild(main_menu_PanelCleanScreen, (leWidget*)main_menu_BtnCleanUnlock);

    main_menu_PanelHold5SLine = leWidget_New();
    main_menu_PanelHold5SLine->fn->setPosition(main_menu_PanelHold5SLine, 111, 97);
    main_menu_PanelHold5SLine->fn->setSize(main_menu_PanelHold5SLine, 115, 56);
    main_menu_PanelHold5SLine->fn->setVisible(main_menu_PanelHold5SLine, LE_FALSE);
    main_menu_PanelHold5SLine->fn->setScheme(main_menu_PanelHold5SLine, &whiteground);
    main_menu_PanelHold5SLine->fn->setBorderType(main_menu_PanelHold5SLine, LE_WIDGET_BORDER_LINE);
    main_menu_PanelCleanScreen->fn->addChild(main_menu_PanelCleanScreen, (leWidget*)main_menu_PanelHold5SLine);

    main_menu_LineClrUnlock = leLineWidget_New();
    main_menu_LineClrUnlock->fn->setPosition(main_menu_LineClrUnlock, 3, 28);
    main_menu_LineClrUnlock->fn->setSize(main_menu_LineClrUnlock, 28, 10);
    main_menu_LineClrUnlock->fn->setScheme(main_menu_LineClrUnlock, &Line_Black);
    main_menu_LineClrUnlock->fn->setBackgroundType(main_menu_LineClrUnlock, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LineClrUnlock->fn->setEndPoint(main_menu_LineClrUnlock, 20, 0);
    main_menu_PanelHold5SLine->fn->addChild(main_menu_PanelHold5SLine, (leWidget*)main_menu_LineClrUnlock);

    main_menu_LblClearInstructions = leLabelWidget_New();
    main_menu_LblClearInstructions->fn->setPosition(main_menu_LblClearInstructions, 27, 2);
    main_menu_LblClearInstructions->fn->setSize(main_menu_LblClearInstructions, 83, 50);
    main_menu_LblClearInstructions->fn->setScheme(main_menu_LblClearInstructions, &Label_FontBlack);
    main_menu_LblClearInstructions->fn->setBackgroundType(main_menu_LblClearInstructions, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblClearInstructions->fn->setString(main_menu_LblClearInstructions, (leString*)&string_Hold_5_seconds);
    main_menu_PanelHold5SLine->fn->addChild(main_menu_PanelHold5SLine, (leWidget*)main_menu_LblClearInstructions);

    main_menu_BtnMaintenance = leButtonWidget_New();
    main_menu_BtnMaintenance->fn->setPosition(main_menu_BtnMaintenance, 0, 0);
    main_menu_BtnMaintenance->fn->setSize(main_menu_BtnMaintenance, 200, 55);
    main_menu_BtnMaintenance->fn->setScheme(main_menu_BtnMaintenance, &menu_btn2);
    main_menu_BtnMaintenance->fn->setHAlignment(main_menu_BtnMaintenance, LE_HALIGN_LEFT);
    main_menu_BtnMaintenance->fn->setString(main_menu_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    main_menu_BtnMaintenance->fn->setPressedImage(main_menu_BtnMaintenance, (leImage*)&Menu_bar);
    main_menu_BtnMaintenance->fn->setReleasedImage(main_menu_BtnMaintenance, (leImage*)&Menu_bar_clear);
    main_menu_BtnMaintenance->fn->setImageMargin(main_menu_BtnMaintenance, 5);
    main_menu_BtnMaintenance->fn->setReleasedEventCallback(main_menu_BtnMaintenance, event_main_menu_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menu_BtnMaintenance);

    main_menu_BtnOperationSettings = leButtonWidget_New();
    main_menu_BtnOperationSettings->fn->setPosition(main_menu_BtnOperationSettings, 0, 55);
    main_menu_BtnOperationSettings->fn->setSize(main_menu_BtnOperationSettings, 200, 54);
    main_menu_BtnOperationSettings->fn->setScheme(main_menu_BtnOperationSettings, &menu_btn2);
    main_menu_BtnOperationSettings->fn->setHAlignment(main_menu_BtnOperationSettings, LE_HALIGN_LEFT);
    main_menu_BtnOperationSettings->fn->setString(main_menu_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    main_menu_BtnOperationSettings->fn->setPressedImage(main_menu_BtnOperationSettings, (leImage*)&Menu_bar);
    main_menu_BtnOperationSettings->fn->setReleasedImage(main_menu_BtnOperationSettings, (leImage*)&Menu_bar_clear);
    main_menu_BtnOperationSettings->fn->setImageMargin(main_menu_BtnOperationSettings, 5);
    main_menu_BtnOperationSettings->fn->setReleasedEventCallback(main_menu_BtnOperationSettings, event_main_menu_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menu_BtnOperationSettings);

    main_menu_BtnExit = leButtonWidget_New();
    main_menu_BtnExit->fn->setPosition(main_menu_BtnExit, 435, 2);
    main_menu_BtnExit->fn->setSize(main_menu_BtnExit, 45, 47);
    main_menu_BtnExit->fn->setScheme(main_menu_BtnExit, &BlackBack);
    main_menu_BtnExit->fn->setBackgroundType(main_menu_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    main_menu_BtnExit->fn->setBorderType(main_menu_BtnExit, LE_WIDGET_BORDER_NONE);
    main_menu_BtnExit->fn->setHAlignment(main_menu_BtnExit, LE_HALIGN_RIGHT);
    main_menu_BtnExit->fn->setVAlignment(main_menu_BtnExit, LE_VALIGN_TOP);
    main_menu_BtnExit->fn->setMargins(main_menu_BtnExit, 4, 10, 10, 4);
    main_menu_BtnExit->fn->setPressedImage(main_menu_BtnExit, (leImage*)&Menu_exit_white);
    main_menu_BtnExit->fn->setReleasedImage(main_menu_BtnExit, (leImage*)&Menu_exit_black);
    main_menu_BtnExit->fn->setReleasedEventCallback(main_menu_BtnExit, event_main_menu_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menu_BtnExit);

    main_menu_BtnHome = leButtonWidget_New();
    main_menu_BtnHome->fn->setPosition(main_menu_BtnHome, 435, 225);
    main_menu_BtnHome->fn->setSize(main_menu_BtnHome, 40, 40);
    main_menu_BtnHome->fn->setScheme(main_menu_BtnHome, &BlackBack);
    main_menu_BtnHome->fn->setBackgroundType(main_menu_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    main_menu_BtnHome->fn->setBorderType(main_menu_BtnHome, LE_WIDGET_BORDER_NONE);
    main_menu_BtnHome->fn->setPressedImage(main_menu_BtnHome, (leImage*)&Menu_home);
    main_menu_BtnHome->fn->setReleasedImage(main_menu_BtnHome, (leImage*)&Menu_home);
    main_menu_BtnHome->fn->setReleasedEventCallback(main_menu_BtnHome, event_main_menu_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menu_BtnHome);

    main_menu_BtnTroubleshoot = leButtonWidget_New();
    main_menu_BtnTroubleshoot->fn->setPosition(main_menu_BtnTroubleshoot, 0, 217);
    main_menu_BtnTroubleshoot->fn->setSize(main_menu_BtnTroubleshoot, 200, 55);
    main_menu_BtnTroubleshoot->fn->setScheme(main_menu_BtnTroubleshoot, &menu_btn2);
    main_menu_BtnTroubleshoot->fn->setHAlignment(main_menu_BtnTroubleshoot, LE_HALIGN_LEFT);
    main_menu_BtnTroubleshoot->fn->setString(main_menu_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    main_menu_BtnTroubleshoot->fn->setPressedImage(main_menu_BtnTroubleshoot, (leImage*)&Menu_bar);
    main_menu_BtnTroubleshoot->fn->setReleasedImage(main_menu_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    main_menu_BtnTroubleshoot->fn->setImageMargin(main_menu_BtnTroubleshoot, 5);
    main_menu_BtnTroubleshoot->fn->setReleasedEventCallback(main_menu_BtnTroubleshoot, event_main_menu_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menu_BtnTroubleshoot);

    main_menu_BtnSystemInformation = leButtonWidget_New();
    main_menu_BtnSystemInformation->fn->setPosition(main_menu_BtnSystemInformation, 0, 163);
    main_menu_BtnSystemInformation->fn->setSize(main_menu_BtnSystemInformation, 200, 54);
    main_menu_BtnSystemInformation->fn->setScheme(main_menu_BtnSystemInformation, &menu_btn2);
    main_menu_BtnSystemInformation->fn->setHAlignment(main_menu_BtnSystemInformation, LE_HALIGN_LEFT);
    main_menu_BtnSystemInformation->fn->setString(main_menu_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    main_menu_BtnSystemInformation->fn->setPressedImage(main_menu_BtnSystemInformation, (leImage*)&Menu_bar);
    main_menu_BtnSystemInformation->fn->setReleasedImage(main_menu_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    main_menu_BtnSystemInformation->fn->setImageMargin(main_menu_BtnSystemInformation, 5);
    main_menu_BtnSystemInformation->fn->setReleasedEventCallback(main_menu_BtnSystemInformation, event_main_menu_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menu_BtnSystemInformation);

    main_menu_BtnService = leButtonWidget_New();
    main_menu_BtnService->fn->setPosition(main_menu_BtnService, 0, 109);
    main_menu_BtnService->fn->setSize(main_menu_BtnService, 200, 54);
    main_menu_BtnService->fn->setScheme(main_menu_BtnService, &menu_btn2);
    main_menu_BtnService->fn->setHAlignment(main_menu_BtnService, LE_HALIGN_LEFT);
    main_menu_BtnService->fn->setString(main_menu_BtnService, (leString*)&string_MENU_Service);
    main_menu_BtnService->fn->setPressedImage(main_menu_BtnService, (leImage*)&Menu_bar);
    main_menu_BtnService->fn->setReleasedImage(main_menu_BtnService, (leImage*)&Menu_bar_clear);
    main_menu_BtnService->fn->setImageMargin(main_menu_BtnService, 5);
    main_menu_BtnService->fn->setReleasedEventCallback(main_menu_BtnService, event_main_menu_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menu_BtnService);

    main_menu_PanelInterval = leWidget_New();
    main_menu_PanelInterval->fn->setPosition(main_menu_PanelInterval, 233, 55);
    main_menu_PanelInterval->fn->setSize(main_menu_PanelInterval, 202, 170);
    main_menu_PanelInterval->fn->setEnabled(main_menu_PanelInterval, LE_FALSE);
    main_menu_PanelInterval->fn->setVisible(main_menu_PanelInterval, LE_FALSE);
    main_menu_PanelInterval->fn->setBackgroundType(main_menu_PanelInterval, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)main_menu_PanelInterval);

    main_menu_LblMonth = leLabelWidget_New();
    main_menu_LblMonth->fn->setPosition(main_menu_LblMonth, 7, 153);
    main_menu_LblMonth->fn->setSize(main_menu_LblMonth, 187, 24);
    main_menu_LblMonth->fn->setVisible(main_menu_LblMonth, LE_FALSE);
    main_menu_LblMonth->fn->setScheme(main_menu_LblMonth, &Label_FontBlack);
    main_menu_LblMonth->fn->setBackgroundType(main_menu_LblMonth, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblMonth->fn->setHAlignment(main_menu_LblMonth, LE_HALIGN_CENTER);
    main_menu_LblMonth->fn->setMargins(main_menu_LblMonth, 4, 0, 4, 0);
    main_menu_LblMonth->fn->setString(main_menu_LblMonth, (leString*)&string_SERVICE4_Months);
    main_menu_PanelInterval->fn->addChild(main_menu_PanelInterval, (leWidget*)main_menu_LblMonth);

    main_menu_LblFilterInterval = leLabelWidget_New();
    main_menu_LblFilterInterval->fn->setPosition(main_menu_LblFilterInterval, 38, 91);
    main_menu_LblFilterInterval->fn->setSize(main_menu_LblFilterInterval, 112, 55);
    main_menu_LblFilterInterval->fn->setScheme(main_menu_LblFilterInterval, &Label_FontBlack);
    main_menu_LblFilterInterval->fn->setBackgroundType(main_menu_LblFilterInterval, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblFilterInterval->fn->setHAlignment(main_menu_LblFilterInterval, LE_HALIGN_CENTER);
    main_menu_LblFilterInterval->fn->setString(main_menu_LblFilterInterval, (leString*)&string_SERVICE5_FilterIntervalValue);
    main_menu_PanelInterval->fn->addChild(main_menu_PanelInterval, (leWidget*)main_menu_LblFilterInterval);

    main_menu_BtnRight = leButtonWidget_New();
    main_menu_BtnRight->fn->setPosition(main_menu_BtnRight, 135, 83);
    main_menu_BtnRight->fn->setSize(main_menu_BtnRight, 60, 60);
    main_menu_BtnRight->fn->setScheme(main_menu_BtnRight, &Button_Gray1);
    main_menu_BtnRight->fn->setBackgroundType(main_menu_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    main_menu_BtnRight->fn->setBorderType(main_menu_BtnRight, LE_WIDGET_BORDER_NONE);
    main_menu_BtnRight->fn->setPressedImage(main_menu_BtnRight, (leImage*)&Menu_next);
    main_menu_BtnRight->fn->setReleasedImage(main_menu_BtnRight, (leImage*)&Menu_next);
    main_menu_BtnRight->fn->setReleasedEventCallback(main_menu_BtnRight, event_main_menu_BtnRight_OnReleased);
    main_menu_PanelInterval->fn->addChild(main_menu_PanelInterval, (leWidget*)main_menu_BtnRight);

    main_menu_ImgCancel = leImageWidget_New();
    main_menu_ImgCancel->fn->setPosition(main_menu_ImgCancel, 65, 81);
    main_menu_ImgCancel->fn->setSize(main_menu_ImgCancel, 64, 64);
    main_menu_ImgCancel->fn->setVisible(main_menu_ImgCancel, LE_FALSE);
    main_menu_ImgCancel->fn->setScheme(main_menu_ImgCancel, &whiteground);
    main_menu_ImgCancel->fn->setBackgroundType(main_menu_ImgCancel, LE_WIDGET_BACKGROUND_NONE);
    main_menu_ImgCancel->fn->setBorderType(main_menu_ImgCancel, LE_WIDGET_BORDER_NONE);
    main_menu_ImgCancel->fn->setImage(main_menu_ImgCancel, (leImage*)&Menu_cancel);
    main_menu_PanelInterval->fn->addChild(main_menu_PanelInterval, (leWidget*)main_menu_ImgCancel);

    main_menu_BtnLeft = leButtonWidget_New();
    main_menu_BtnLeft->fn->setPosition(main_menu_BtnLeft, 0, 83);
    main_menu_BtnLeft->fn->setSize(main_menu_BtnLeft, 60, 60);
    main_menu_BtnLeft->fn->setScheme(main_menu_BtnLeft, &Button_Gray3);
    main_menu_BtnLeft->fn->setBackgroundType(main_menu_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    main_menu_BtnLeft->fn->setBorderType(main_menu_BtnLeft, LE_WIDGET_BORDER_NONE);
    main_menu_BtnLeft->fn->setPressedImage(main_menu_BtnLeft, (leImage*)&Menu_prev);
    main_menu_BtnLeft->fn->setReleasedImage(main_menu_BtnLeft, (leImage*)&Menu_prev);
    main_menu_BtnLeft->fn->setReleasedEventCallback(main_menu_BtnLeft, event_main_menu_BtnLeft_OnReleased);
    main_menu_PanelInterval->fn->addChild(main_menu_PanelInterval, (leWidget*)main_menu_BtnLeft);

    main_menu_LblSubtitle = leLabelWidget_New();
    main_menu_LblSubtitle->fn->setPosition(main_menu_LblSubtitle, -6, 9);
    main_menu_LblSubtitle->fn->setSize(main_menu_LblSubtitle, 212, 43);
    main_menu_LblSubtitle->fn->setScheme(main_menu_LblSubtitle, &Label_FontBlack);
    main_menu_LblSubtitle->fn->setBackgroundType(main_menu_LblSubtitle, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblSubtitle->fn->setHAlignment(main_menu_LblSubtitle, LE_HALIGN_CENTER);
    main_menu_LblSubtitle->fn->setString(main_menu_LblSubtitle, (leString*)&string_SERVICE4_AdjustInterval);
    main_menu_PanelInterval->fn->addChild(main_menu_PanelInterval, (leWidget*)main_menu_LblSubtitle);

    main_menu_BtnUnits = leButtonWidget_New();
    main_menu_BtnUnits->fn->setPosition(main_menu_BtnUnits, 309, 208);
    main_menu_BtnUnits->fn->setSize(main_menu_BtnUnits, 50, 40);
    main_menu_BtnUnits->fn->setEnabled(main_menu_BtnUnits, LE_FALSE);
    main_menu_BtnUnits->fn->setVisible(main_menu_BtnUnits, LE_FALSE);
    main_menu_BtnUnits->fn->setScheme(main_menu_BtnUnits, &Button_Gray2A);
    main_menu_BtnUnits->fn->setString(main_menu_BtnUnits, (leString*)&string_OPSETTING_HOTWATER_DegF);
    main_menu_BtnUnits->fn->setPressedImage(main_menu_BtnUnits, (leImage*)&Menu_bar_clear);
    main_menu_BtnUnits->fn->setReleasedImage(main_menu_BtnUnits, (leImage*)&Menu_bar_clear);
    main_menu_BtnUnits->fn->setImagePosition(main_menu_BtnUnits, LE_RELATIVE_POSITION_BEHIND);
    main_menu_BtnUnits->fn->setReleasedEventCallback(main_menu_BtnUnits, event_main_menu_BtnUnits_OnReleased);
    root1->fn->addChild(root1, (leWidget*)main_menu_BtnUnits);

    main_menu_LblSensor = leLabelWidget_New();
    main_menu_LblSensor->fn->setPosition(main_menu_LblSensor, 281, 212);
    main_menu_LblSensor->fn->setSize(main_menu_LblSensor, 100, 36);
    main_menu_LblSensor->fn->setVisible(main_menu_LblSensor, LE_FALSE);
    main_menu_LblSensor->fn->setScheme(main_menu_LblSensor, &Label_Gray4_FontBlack);
    main_menu_LblSensor->fn->setBackgroundType(main_menu_LblSensor, LE_WIDGET_BACKGROUND_NONE);
    main_menu_LblSensor->fn->setHAlignment(main_menu_LblSensor, LE_HALIGN_CENTER);
    main_menu_LblSensor->fn->setString(main_menu_LblSensor, (leString*)&string_cupSensorVal);
    root1->fn->addChild(root1, (leWidget*)main_menu_LblSensor);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    main_menu_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_main_menu(void)
{
    main_menu_OnUpdate(); // raise event
}

void screenHide_main_menu(void)
{
    main_menu_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    main_menu_Layer_0_FillPanel = NULL;
    main_menu_PanelAlert = NULL;
    main_menu_ImgManualQR = NULL;
    main_menu_PanelSubtitle = NULL;
    main_menu_PanelBtn0_5 = NULL;
    main_menu_PanelCleanScreen = NULL;
    main_menu_BtnMaintenance = NULL;
    main_menu_BtnOperationSettings = NULL;
    main_menu_BtnExit = NULL;
    main_menu_BtnHome = NULL;
    main_menu_BtnTroubleshoot = NULL;
    main_menu_BtnSystemInformation = NULL;
    main_menu_BtnService = NULL;
    main_menu_PanelInterval = NULL;
    main_menu_BtnUnits = NULL;
    main_menu_LblSensor = NULL;
    main_menu_LblLowWater = NULL;
    main_menu_LblLowBIn = NULL;
    main_menu_LblActiveMod = NULL;
    main_menu_ImgLine = NULL;
    main_menu_LblSubmenu = NULL;
    main_menu_Btn0 = NULL;
    main_menu_Btn1 = NULL;
    main_menu_Btn2 = NULL;
    main_menu_Btn3 = NULL;
    main_menu_Btn4 = NULL;
    main_menu_Btn5 = NULL;
    main_menu_BtnCleanLock = NULL;
    main_menu_BtnCleanUnlock = NULL;
    main_menu_PanelHold5SLine = NULL;
    main_menu_LineClrUnlock = NULL;
    main_menu_LblClearInstructions = NULL;
    main_menu_LblMonth = NULL;
    main_menu_LblFilterInterval = NULL;
    main_menu_BtnRight = NULL;
    main_menu_ImgCancel = NULL;
    main_menu_BtnLeft = NULL;
    main_menu_LblSubtitle = NULL;


    showing = LE_FALSE;
}

void screenDestroy_main_menu(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_main_menu(uint32_t lyrIdx)
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

