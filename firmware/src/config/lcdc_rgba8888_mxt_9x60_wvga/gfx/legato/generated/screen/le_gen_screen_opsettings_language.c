#include "gfx/legato/generated/screen/le_gen_screen_opsettings_language.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* opsettings_language_Layer_0_FillPanel;
leLabelWidget* opsettings_language_LblTitle;
leImageWidget* opsettings_language_ImgLine;
leLabelWidget* opsettings_language_LblSubTitle;
leButtonWidget* opsettings_language_BtnMaintenance;
leButtonWidget* opsettings_language_BtnOperationSettings;
leButtonWidget* opsettings_language_BtnExit;
leButtonWidget* opsettings_language_BtnFrench;
leButtonWidget* opsettings_language_BtnSpanish;
leButtonWidget* opsettings_language_BtnEnglish;
leButtonWidget* opsettings_language_BtnCurrent;
leButtonWidget* opsettings_language_BtnHome;
leButtonWidget* opsettings_language_BtnTroubleshoot;
leButtonWidget* opsettings_language_BtnSystemInformation;
leButtonWidget* opsettings_language_BtnService;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_opsettings_language(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_opsettings_language(void)
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

    opsettings_language_Layer_0_FillPanel = leWidget_New();
    opsettings_language_Layer_0_FillPanel->fn->setPosition(opsettings_language_Layer_0_FillPanel, 0, 0);
    opsettings_language_Layer_0_FillPanel->fn->setSize(opsettings_language_Layer_0_FillPanel, 480, 272);
    opsettings_language_Layer_0_FillPanel->fn->setScheme(opsettings_language_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)opsettings_language_Layer_0_FillPanel);

    opsettings_language_LblTitle = leLabelWidget_New();
    opsettings_language_LblTitle->fn->setPosition(opsettings_language_LblTitle, 228, 26);
    opsettings_language_LblTitle->fn->setSize(opsettings_language_LblTitle, 222, 29);
    opsettings_language_LblTitle->fn->setScheme(opsettings_language_LblTitle, &Label_FontWhite);
    opsettings_language_LblTitle->fn->setBackgroundType(opsettings_language_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    opsettings_language_LblTitle->fn->setHAlignment(opsettings_language_LblTitle, LE_HALIGN_CENTER);
    opsettings_language_LblTitle->fn->setString(opsettings_language_LblTitle, (leString*)&string_OPSETTING_LANGUAGE_Language);
    root0->fn->addChild(root0, (leWidget*)opsettings_language_LblTitle);

    opsettings_language_ImgLine = leImageWidget_New();
    opsettings_language_ImgLine->fn->setPosition(opsettings_language_ImgLine, 218, 62);
    opsettings_language_ImgLine->fn->setSize(opsettings_language_ImgLine, 240, 5);
    opsettings_language_ImgLine->fn->setScheme(opsettings_language_ImgLine, &BlackBack);
    opsettings_language_ImgLine->fn->setBackgroundType(opsettings_language_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    opsettings_language_ImgLine->fn->setBorderType(opsettings_language_ImgLine, LE_WIDGET_BORDER_NONE);
    opsettings_language_ImgLine->fn->setImage(opsettings_language_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)opsettings_language_ImgLine);

    opsettings_language_LblSubTitle = leLabelWidget_New();
    opsettings_language_LblSubTitle->fn->setPosition(opsettings_language_LblSubTitle, 220, 80);
    opsettings_language_LblSubTitle->fn->setSize(opsettings_language_LblSubTitle, 237, 30);
    opsettings_language_LblSubTitle->fn->setScheme(opsettings_language_LblSubTitle, &Label_FontWhite);
    opsettings_language_LblSubTitle->fn->setBackgroundType(opsettings_language_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    opsettings_language_LblSubTitle->fn->setHAlignment(opsettings_language_LblSubTitle, LE_HALIGN_CENTER);
    opsettings_language_LblSubTitle->fn->setString(opsettings_language_LblSubTitle, (leString*)&string_OPSETTING_LANGUAGE_SelectLanguage);
    root0->fn->addChild(root0, (leWidget*)opsettings_language_LblSubTitle);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    opsettings_language_BtnMaintenance = leButtonWidget_New();
    opsettings_language_BtnMaintenance->fn->setPosition(opsettings_language_BtnMaintenance, 0, 0);
    opsettings_language_BtnMaintenance->fn->setSize(opsettings_language_BtnMaintenance, 200, 55);
    opsettings_language_BtnMaintenance->fn->setScheme(opsettings_language_BtnMaintenance, &menu_btn2);
    opsettings_language_BtnMaintenance->fn->setHAlignment(opsettings_language_BtnMaintenance, LE_HALIGN_LEFT);
    opsettings_language_BtnMaintenance->fn->setString(opsettings_language_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    opsettings_language_BtnMaintenance->fn->setPressedImage(opsettings_language_BtnMaintenance, (leImage*)&Menu_bar);
    opsettings_language_BtnMaintenance->fn->setReleasedImage(opsettings_language_BtnMaintenance, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnMaintenance->fn->setImageMargin(opsettings_language_BtnMaintenance, 5);
    opsettings_language_BtnMaintenance->fn->setReleasedEventCallback(opsettings_language_BtnMaintenance, event_opsettings_language_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnMaintenance);

    opsettings_language_BtnOperationSettings = leButtonWidget_New();
    opsettings_language_BtnOperationSettings->fn->setPosition(opsettings_language_BtnOperationSettings, 0, 55);
    opsettings_language_BtnOperationSettings->fn->setSize(opsettings_language_BtnOperationSettings, 200, 54);
    opsettings_language_BtnOperationSettings->fn->setScheme(opsettings_language_BtnOperationSettings, &Button_Gray2);
    opsettings_language_BtnOperationSettings->fn->setHAlignment(opsettings_language_BtnOperationSettings, LE_HALIGN_LEFT);
    opsettings_language_BtnOperationSettings->fn->setString(opsettings_language_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    opsettings_language_BtnOperationSettings->fn->setPressedImage(opsettings_language_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_language_BtnOperationSettings->fn->setReleasedImage(opsettings_language_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_language_BtnOperationSettings->fn->setImageMargin(opsettings_language_BtnOperationSettings, 5);
    opsettings_language_BtnOperationSettings->fn->setReleasedEventCallback(opsettings_language_BtnOperationSettings, event_opsettings_language_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnOperationSettings);

    opsettings_language_BtnExit = leButtonWidget_New();
    opsettings_language_BtnExit->fn->setPosition(opsettings_language_BtnExit, 415, 2);
    opsettings_language_BtnExit->fn->setSize(opsettings_language_BtnExit, 60, 60);
    opsettings_language_BtnExit->fn->setScheme(opsettings_language_BtnExit, &BlackBack);
    opsettings_language_BtnExit->fn->setBackgroundType(opsettings_language_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    opsettings_language_BtnExit->fn->setBorderType(opsettings_language_BtnExit, LE_WIDGET_BORDER_NONE);
    opsettings_language_BtnExit->fn->setHAlignment(opsettings_language_BtnExit, LE_HALIGN_RIGHT);
    opsettings_language_BtnExit->fn->setVAlignment(opsettings_language_BtnExit, LE_VALIGN_TOP);
    opsettings_language_BtnExit->fn->setMargins(opsettings_language_BtnExit, 4, 10, 10, 4);
    opsettings_language_BtnExit->fn->setPressedImage(opsettings_language_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_language_BtnExit->fn->setReleasedImage(opsettings_language_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_language_BtnExit->fn->setReleasedEventCallback(opsettings_language_BtnExit, event_opsettings_language_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnExit);

    opsettings_language_BtnFrench = leButtonWidget_New();
    opsettings_language_BtnFrench->fn->setPosition(opsettings_language_BtnFrench, 240, 195);
    opsettings_language_BtnFrench->fn->setSize(opsettings_language_BtnFrench, 180, 35);
    opsettings_language_BtnFrench->fn->setVisible(opsettings_language_BtnFrench, LE_FALSE);
    opsettings_language_BtnFrench->fn->setScheme(opsettings_language_BtnFrench, &Button_Gray2A);
    opsettings_language_BtnFrench->fn->setHAlignment(opsettings_language_BtnFrench, LE_HALIGN_LEFT);
    opsettings_language_BtnFrench->fn->setMargins(opsettings_language_BtnFrench, 0, 0, 0, 0);
    opsettings_language_BtnFrench->fn->setString(opsettings_language_BtnFrench, (leString*)&string_OPSETTING_LANGUAGE_French);
    opsettings_language_BtnFrench->fn->setPressedImage(opsettings_language_BtnFrench, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnFrench->fn->setReleasedImage(opsettings_language_BtnFrench, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnFrench->fn->setReleasedEventCallback(opsettings_language_BtnFrench, event_opsettings_language_BtnFrench_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnFrench);

    opsettings_language_BtnSpanish = leButtonWidget_New();
    opsettings_language_BtnSpanish->fn->setPosition(opsettings_language_BtnSpanish, 240, 160);
    opsettings_language_BtnSpanish->fn->setSize(opsettings_language_BtnSpanish, 180, 35);
    opsettings_language_BtnSpanish->fn->setVisible(opsettings_language_BtnSpanish, LE_FALSE);
    opsettings_language_BtnSpanish->fn->setScheme(opsettings_language_BtnSpanish, &Button_Gray2A);
    opsettings_language_BtnSpanish->fn->setHAlignment(opsettings_language_BtnSpanish, LE_HALIGN_LEFT);
    opsettings_language_BtnSpanish->fn->setMargins(opsettings_language_BtnSpanish, 0, 0, 0, 0);
    opsettings_language_BtnSpanish->fn->setString(opsettings_language_BtnSpanish, (leString*)&string_OPSETTING_LANGUAGE_Spanish);
    opsettings_language_BtnSpanish->fn->setPressedImage(opsettings_language_BtnSpanish, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnSpanish->fn->setReleasedImage(opsettings_language_BtnSpanish, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnSpanish->fn->setReleasedEventCallback(opsettings_language_BtnSpanish, event_opsettings_language_BtnSpanish_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnSpanish);

    opsettings_language_BtnEnglish = leButtonWidget_New();
    opsettings_language_BtnEnglish->fn->setPosition(opsettings_language_BtnEnglish, 240, 125);
    opsettings_language_BtnEnglish->fn->setSize(opsettings_language_BtnEnglish, 180, 35);
    opsettings_language_BtnEnglish->fn->setEnabled(opsettings_language_BtnEnglish, LE_FALSE);
    opsettings_language_BtnEnglish->fn->setVisible(opsettings_language_BtnEnglish, LE_FALSE);
    opsettings_language_BtnEnglish->fn->setScheme(opsettings_language_BtnEnglish, &Button_Gray2A);
    opsettings_language_BtnEnglish->fn->setHAlignment(opsettings_language_BtnEnglish, LE_HALIGN_LEFT);
    opsettings_language_BtnEnglish->fn->setMargins(opsettings_language_BtnEnglish, 0, 0, 0, 0);
    opsettings_language_BtnEnglish->fn->setString(opsettings_language_BtnEnglish, (leString*)&string_OPSETTING_LANGUAGE_English);
    opsettings_language_BtnEnglish->fn->setPressedImage(opsettings_language_BtnEnglish, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnEnglish->fn->setReleasedImage(opsettings_language_BtnEnglish, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnEnglish->fn->setReleasedEventCallback(opsettings_language_BtnEnglish, event_opsettings_language_BtnEnglish_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnEnglish);

    opsettings_language_BtnCurrent = leButtonWidget_New();
    opsettings_language_BtnCurrent->fn->setPosition(opsettings_language_BtnCurrent, 240, 125);
    opsettings_language_BtnCurrent->fn->setSize(opsettings_language_BtnCurrent, 180, 35);
    opsettings_language_BtnCurrent->fn->setScheme(opsettings_language_BtnCurrent, &Button_Gray2A);
    opsettings_language_BtnCurrent->fn->setMargins(opsettings_language_BtnCurrent, 0, 0, 0, 0);
    opsettings_language_BtnCurrent->fn->setString(opsettings_language_BtnCurrent, (leString*)&string_OPSETTING_LANGUAGE_English);
    opsettings_language_BtnCurrent->fn->setPressedImage(opsettings_language_BtnCurrent, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnCurrent->fn->setReleasedImage(opsettings_language_BtnCurrent, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnCurrent->fn->setImagePosition(opsettings_language_BtnCurrent, LE_RELATIVE_POSITION_BEHIND);
    opsettings_language_BtnCurrent->fn->setReleasedEventCallback(opsettings_language_BtnCurrent, event_opsettings_language_BtnCurrent_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnCurrent);

    opsettings_language_BtnHome = leButtonWidget_New();
    opsettings_language_BtnHome->fn->setPosition(opsettings_language_BtnHome, 435, 225);
    opsettings_language_BtnHome->fn->setSize(opsettings_language_BtnHome, 40, 40);
    opsettings_language_BtnHome->fn->setScheme(opsettings_language_BtnHome, &BlackBack);
    opsettings_language_BtnHome->fn->setBackgroundType(opsettings_language_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    opsettings_language_BtnHome->fn->setBorderType(opsettings_language_BtnHome, LE_WIDGET_BORDER_NONE);
    opsettings_language_BtnHome->fn->setPressedImage(opsettings_language_BtnHome, (leImage*)&Menu_home);
    opsettings_language_BtnHome->fn->setReleasedImage(opsettings_language_BtnHome, (leImage*)&Menu_home);
    opsettings_language_BtnHome->fn->setReleasedEventCallback(opsettings_language_BtnHome, event_opsettings_language_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnHome);

    opsettings_language_BtnTroubleshoot = leButtonWidget_New();
    opsettings_language_BtnTroubleshoot->fn->setPosition(opsettings_language_BtnTroubleshoot, 0, 217);
    opsettings_language_BtnTroubleshoot->fn->setSize(opsettings_language_BtnTroubleshoot, 200, 55);
    opsettings_language_BtnTroubleshoot->fn->setScheme(opsettings_language_BtnTroubleshoot, &menu_btn2);
    opsettings_language_BtnTroubleshoot->fn->setHAlignment(opsettings_language_BtnTroubleshoot, LE_HALIGN_LEFT);
    opsettings_language_BtnTroubleshoot->fn->setString(opsettings_language_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    opsettings_language_BtnTroubleshoot->fn->setPressedImage(opsettings_language_BtnTroubleshoot, (leImage*)&Menu_bar);
    opsettings_language_BtnTroubleshoot->fn->setReleasedImage(opsettings_language_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnTroubleshoot->fn->setImageMargin(opsettings_language_BtnTroubleshoot, 5);
    opsettings_language_BtnTroubleshoot->fn->setReleasedEventCallback(opsettings_language_BtnTroubleshoot, event_opsettings_language_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnTroubleshoot);

    opsettings_language_BtnSystemInformation = leButtonWidget_New();
    opsettings_language_BtnSystemInformation->fn->setPosition(opsettings_language_BtnSystemInformation, 0, 163);
    opsettings_language_BtnSystemInformation->fn->setSize(opsettings_language_BtnSystemInformation, 200, 54);
    opsettings_language_BtnSystemInformation->fn->setScheme(opsettings_language_BtnSystemInformation, &menu_btn2);
    opsettings_language_BtnSystemInformation->fn->setHAlignment(opsettings_language_BtnSystemInformation, LE_HALIGN_LEFT);
    opsettings_language_BtnSystemInformation->fn->setString(opsettings_language_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    opsettings_language_BtnSystemInformation->fn->setPressedImage(opsettings_language_BtnSystemInformation, (leImage*)&Menu_bar);
    opsettings_language_BtnSystemInformation->fn->setReleasedImage(opsettings_language_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnSystemInformation->fn->setImageMargin(opsettings_language_BtnSystemInformation, 5);
    opsettings_language_BtnSystemInformation->fn->setReleasedEventCallback(opsettings_language_BtnSystemInformation, event_opsettings_language_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnSystemInformation);

    opsettings_language_BtnService = leButtonWidget_New();
    opsettings_language_BtnService->fn->setPosition(opsettings_language_BtnService, 0, 109);
    opsettings_language_BtnService->fn->setSize(opsettings_language_BtnService, 200, 54);
    opsettings_language_BtnService->fn->setScheme(opsettings_language_BtnService, &menu_btn2);
    opsettings_language_BtnService->fn->setHAlignment(opsettings_language_BtnService, LE_HALIGN_LEFT);
    opsettings_language_BtnService->fn->setString(opsettings_language_BtnService, (leString*)&string_MENU_Service);
    opsettings_language_BtnService->fn->setPressedImage(opsettings_language_BtnService, (leImage*)&Menu_bar);
    opsettings_language_BtnService->fn->setReleasedImage(opsettings_language_BtnService, (leImage*)&Menu_bar_clear);
    opsettings_language_BtnService->fn->setImageMargin(opsettings_language_BtnService, 5);
    opsettings_language_BtnService->fn->setReleasedEventCallback(opsettings_language_BtnService, event_opsettings_language_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_language_BtnService);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    opsettings_language_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_opsettings_language(void)
{
}

void screenHide_opsettings_language(void)
{
    opsettings_language_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    opsettings_language_Layer_0_FillPanel = NULL;
    opsettings_language_LblTitle = NULL;
    opsettings_language_ImgLine = NULL;
    opsettings_language_LblSubTitle = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    opsettings_language_BtnMaintenance = NULL;
    opsettings_language_BtnOperationSettings = NULL;
    opsettings_language_BtnExit = NULL;
    opsettings_language_BtnFrench = NULL;
    opsettings_language_BtnSpanish = NULL;
    opsettings_language_BtnEnglish = NULL;
    opsettings_language_BtnCurrent = NULL;
    opsettings_language_BtnHome = NULL;
    opsettings_language_BtnTroubleshoot = NULL;
    opsettings_language_BtnSystemInformation = NULL;
    opsettings_language_BtnService = NULL;


    showing = LE_FALSE;
}

void screenDestroy_opsettings_language(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_opsettings_language(uint32_t lyrIdx)
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

