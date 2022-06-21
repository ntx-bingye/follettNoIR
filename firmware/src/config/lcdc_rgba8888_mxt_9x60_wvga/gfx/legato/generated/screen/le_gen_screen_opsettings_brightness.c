#include "gfx/legato/generated/screen/le_gen_screen_opsettings_brightness.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* opsettings_brightness_Layer_0_FillPanel;
leLabelWidget* opsettings_brightness_LblTitle;
leImageWidget* opsettings_brightness_ImgLine;
leLabelWidget* opsettings_brightness_LblSubTitle;
leLabelWidget* opsettings_brightness_LblBrightnessValue;
leButtonWidget* opsettings_brightness_BtnMaintenance;
leButtonWidget* opsettings_brightness_BtnExit;
leButtonWidget* opsettings_brightness_BtnLeft;
leButtonWidget* opsettings_brightness_BtnRight;
leButtonWidget* opsettings_brightness_BtnHome;
leButtonWidget* opsettings_brightness_BtnTroubleshoot;
leButtonWidget* opsettings_brightness_BtnSystemInformation;
leButtonWidget* opsettings_brightness_BtnService;
leButtonWidget* opsettings_brightness_BtnOperationSettings;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_opsettings_brightness(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_opsettings_brightness(void)
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

    opsettings_brightness_Layer_0_FillPanel = leWidget_New();
    opsettings_brightness_Layer_0_FillPanel->fn->setPosition(opsettings_brightness_Layer_0_FillPanel, 0, 0);
    opsettings_brightness_Layer_0_FillPanel->fn->setSize(opsettings_brightness_Layer_0_FillPanel, 480, 272);
    opsettings_brightness_Layer_0_FillPanel->fn->setScheme(opsettings_brightness_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)opsettings_brightness_Layer_0_FillPanel);

    opsettings_brightness_LblTitle = leLabelWidget_New();
    opsettings_brightness_LblTitle->fn->setPosition(opsettings_brightness_LblTitle, 228, 26);
    opsettings_brightness_LblTitle->fn->setSize(opsettings_brightness_LblTitle, 222, 29);
    opsettings_brightness_LblTitle->fn->setScheme(opsettings_brightness_LblTitle, &Label_FontWhite);
    opsettings_brightness_LblTitle->fn->setBackgroundType(opsettings_brightness_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    opsettings_brightness_LblTitle->fn->setHAlignment(opsettings_brightness_LblTitle, LE_HALIGN_CENTER);
    opsettings_brightness_LblTitle->fn->setString(opsettings_brightness_LblTitle, (leString*)&string_OPSETTING_BRIGHTNESS_Brightness);
    root0->fn->addChild(root0, (leWidget*)opsettings_brightness_LblTitle);

    opsettings_brightness_ImgLine = leImageWidget_New();
    opsettings_brightness_ImgLine->fn->setPosition(opsettings_brightness_ImgLine, 218, 62);
    opsettings_brightness_ImgLine->fn->setSize(opsettings_brightness_ImgLine, 240, 5);
    opsettings_brightness_ImgLine->fn->setScheme(opsettings_brightness_ImgLine, &BlackBack);
    opsettings_brightness_ImgLine->fn->setBackgroundType(opsettings_brightness_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    opsettings_brightness_ImgLine->fn->setBorderType(opsettings_brightness_ImgLine, LE_WIDGET_BORDER_NONE);
    opsettings_brightness_ImgLine->fn->setImage(opsettings_brightness_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)opsettings_brightness_ImgLine);

    opsettings_brightness_LblSubTitle = leLabelWidget_New();
    opsettings_brightness_LblSubTitle->fn->setPosition(opsettings_brightness_LblSubTitle, 220, 80);
    opsettings_brightness_LblSubTitle->fn->setSize(opsettings_brightness_LblSubTitle, 237, 30);
    opsettings_brightness_LblSubTitle->fn->setScheme(opsettings_brightness_LblSubTitle, &Label_FontWhite);
    opsettings_brightness_LblSubTitle->fn->setBackgroundType(opsettings_brightness_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    opsettings_brightness_LblSubTitle->fn->setHAlignment(opsettings_brightness_LblSubTitle, LE_HALIGN_CENTER);
    opsettings_brightness_LblSubTitle->fn->setString(opsettings_brightness_LblSubTitle, (leString*)&string_OPSETTING_BRIGHTNESS_SelectBrightness);
    root0->fn->addChild(root0, (leWidget*)opsettings_brightness_LblSubTitle);

    opsettings_brightness_LblBrightnessValue = leLabelWidget_New();
    opsettings_brightness_LblBrightnessValue->fn->setPosition(opsettings_brightness_LblBrightnessValue, 278, 136);
    opsettings_brightness_LblBrightnessValue->fn->setSize(opsettings_brightness_LblBrightnessValue, 112, 55);
    opsettings_brightness_LblBrightnessValue->fn->setScheme(opsettings_brightness_LblBrightnessValue, &Label_FontWhite);
    opsettings_brightness_LblBrightnessValue->fn->setBackgroundType(opsettings_brightness_LblBrightnessValue, LE_WIDGET_BACKGROUND_NONE);
    opsettings_brightness_LblBrightnessValue->fn->setHAlignment(opsettings_brightness_LblBrightnessValue, LE_HALIGN_CENTER);
    opsettings_brightness_LblBrightnessValue->fn->setString(opsettings_brightness_LblBrightnessValue, (leString*)&string_OPSETTING_BRIGHTNESS_BrightnessValue);
    root0->fn->addChild(root0, (leWidget*)opsettings_brightness_LblBrightnessValue);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    opsettings_brightness_BtnMaintenance = leButtonWidget_New();
    opsettings_brightness_BtnMaintenance->fn->setPosition(opsettings_brightness_BtnMaintenance, 0, 0);
    opsettings_brightness_BtnMaintenance->fn->setSize(opsettings_brightness_BtnMaintenance, 200, 55);
    opsettings_brightness_BtnMaintenance->fn->setScheme(opsettings_brightness_BtnMaintenance, &menu_btn2);
    opsettings_brightness_BtnMaintenance->fn->setHAlignment(opsettings_brightness_BtnMaintenance, LE_HALIGN_LEFT);
    opsettings_brightness_BtnMaintenance->fn->setString(opsettings_brightness_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    opsettings_brightness_BtnMaintenance->fn->setPressedImage(opsettings_brightness_BtnMaintenance, (leImage*)&Menu_bar);
    opsettings_brightness_BtnMaintenance->fn->setReleasedImage(opsettings_brightness_BtnMaintenance, (leImage*)&Menu_bar_clear);
    opsettings_brightness_BtnMaintenance->fn->setImageMargin(opsettings_brightness_BtnMaintenance, 5);
    opsettings_brightness_BtnMaintenance->fn->setReleasedEventCallback(opsettings_brightness_BtnMaintenance, event_opsettings_brightness_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnMaintenance);

    opsettings_brightness_BtnExit = leButtonWidget_New();
    opsettings_brightness_BtnExit->fn->setPosition(opsettings_brightness_BtnExit, 415, 2);
    opsettings_brightness_BtnExit->fn->setSize(opsettings_brightness_BtnExit, 60, 60);
    opsettings_brightness_BtnExit->fn->setScheme(opsettings_brightness_BtnExit, &BlackBack);
    opsettings_brightness_BtnExit->fn->setBackgroundType(opsettings_brightness_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    opsettings_brightness_BtnExit->fn->setBorderType(opsettings_brightness_BtnExit, LE_WIDGET_BORDER_NONE);
    opsettings_brightness_BtnExit->fn->setHAlignment(opsettings_brightness_BtnExit, LE_HALIGN_RIGHT);
    opsettings_brightness_BtnExit->fn->setVAlignment(opsettings_brightness_BtnExit, LE_VALIGN_TOP);
    opsettings_brightness_BtnExit->fn->setMargins(opsettings_brightness_BtnExit, 4, 10, 4, 4);
    opsettings_brightness_BtnExit->fn->setPressedImage(opsettings_brightness_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_brightness_BtnExit->fn->setReleasedImage(opsettings_brightness_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_brightness_BtnExit->fn->setReleasedEventCallback(opsettings_brightness_BtnExit, event_opsettings_brightness_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnExit);

    opsettings_brightness_BtnLeft = leButtonWidget_New();
    opsettings_brightness_BtnLeft->fn->setPosition(opsettings_brightness_BtnLeft, 241, 142);
    opsettings_brightness_BtnLeft->fn->setSize(opsettings_brightness_BtnLeft, 40, 45);
    opsettings_brightness_BtnLeft->fn->setScheme(opsettings_brightness_BtnLeft, &BlackBack);
    opsettings_brightness_BtnLeft->fn->setBackgroundType(opsettings_brightness_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    opsettings_brightness_BtnLeft->fn->setBorderType(opsettings_brightness_BtnLeft, LE_WIDGET_BORDER_NONE);
    opsettings_brightness_BtnLeft->fn->setPressedImage(opsettings_brightness_BtnLeft, (leImage*)&Menu_chevron_left);
    opsettings_brightness_BtnLeft->fn->setReleasedImage(opsettings_brightness_BtnLeft, (leImage*)&Menu_chevron_left);
    opsettings_brightness_BtnLeft->fn->setPressedEventCallback(opsettings_brightness_BtnLeft, event_opsettings_brightness_BtnLeft_OnPressed);
    opsettings_brightness_BtnLeft->fn->setReleasedEventCallback(opsettings_brightness_BtnLeft, event_opsettings_brightness_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnLeft);

    opsettings_brightness_BtnRight = leButtonWidget_New();
    opsettings_brightness_BtnRight->fn->setPosition(opsettings_brightness_BtnRight, 388, 142);
    opsettings_brightness_BtnRight->fn->setSize(opsettings_brightness_BtnRight, 40, 45);
    opsettings_brightness_BtnRight->fn->setScheme(opsettings_brightness_BtnRight, &BlackBack);
    opsettings_brightness_BtnRight->fn->setBackgroundType(opsettings_brightness_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    opsettings_brightness_BtnRight->fn->setBorderType(opsettings_brightness_BtnRight, LE_WIDGET_BORDER_NONE);
    opsettings_brightness_BtnRight->fn->setPressedImage(opsettings_brightness_BtnRight, (leImage*)&Menu_chevron_right);
    opsettings_brightness_BtnRight->fn->setReleasedImage(opsettings_brightness_BtnRight, (leImage*)&Menu_chevron_right);
    opsettings_brightness_BtnRight->fn->setPressedEventCallback(opsettings_brightness_BtnRight, event_opsettings_brightness_BtnRight_OnPressed);
    opsettings_brightness_BtnRight->fn->setReleasedEventCallback(opsettings_brightness_BtnRight, event_opsettings_brightness_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnRight);

    opsettings_brightness_BtnHome = leButtonWidget_New();
    opsettings_brightness_BtnHome->fn->setPosition(opsettings_brightness_BtnHome, 435, 225);
    opsettings_brightness_BtnHome->fn->setSize(opsettings_brightness_BtnHome, 40, 40);
    opsettings_brightness_BtnHome->fn->setScheme(opsettings_brightness_BtnHome, &BlackBack);
    opsettings_brightness_BtnHome->fn->setBackgroundType(opsettings_brightness_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    opsettings_brightness_BtnHome->fn->setBorderType(opsettings_brightness_BtnHome, LE_WIDGET_BORDER_NONE);
    opsettings_brightness_BtnHome->fn->setPressedImage(opsettings_brightness_BtnHome, (leImage*)&Menu_home);
    opsettings_brightness_BtnHome->fn->setReleasedImage(opsettings_brightness_BtnHome, (leImage*)&Menu_home);
    opsettings_brightness_BtnHome->fn->setReleasedEventCallback(opsettings_brightness_BtnHome, event_opsettings_brightness_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnHome);

    opsettings_brightness_BtnTroubleshoot = leButtonWidget_New();
    opsettings_brightness_BtnTroubleshoot->fn->setPosition(opsettings_brightness_BtnTroubleshoot, 0, 217);
    opsettings_brightness_BtnTroubleshoot->fn->setSize(opsettings_brightness_BtnTroubleshoot, 200, 55);
    opsettings_brightness_BtnTroubleshoot->fn->setScheme(opsettings_brightness_BtnTroubleshoot, &menu_btn2);
    opsettings_brightness_BtnTroubleshoot->fn->setHAlignment(opsettings_brightness_BtnTroubleshoot, LE_HALIGN_LEFT);
    opsettings_brightness_BtnTroubleshoot->fn->setString(opsettings_brightness_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    opsettings_brightness_BtnTroubleshoot->fn->setPressedImage(opsettings_brightness_BtnTroubleshoot, (leImage*)&Menu_bar);
    opsettings_brightness_BtnTroubleshoot->fn->setReleasedImage(opsettings_brightness_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    opsettings_brightness_BtnTroubleshoot->fn->setImageMargin(opsettings_brightness_BtnTroubleshoot, 5);
    opsettings_brightness_BtnTroubleshoot->fn->setReleasedEventCallback(opsettings_brightness_BtnTroubleshoot, event_opsettings_brightness_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnTroubleshoot);

    opsettings_brightness_BtnSystemInformation = leButtonWidget_New();
    opsettings_brightness_BtnSystemInformation->fn->setPosition(opsettings_brightness_BtnSystemInformation, 0, 163);
    opsettings_brightness_BtnSystemInformation->fn->setSize(opsettings_brightness_BtnSystemInformation, 200, 54);
    opsettings_brightness_BtnSystemInformation->fn->setScheme(opsettings_brightness_BtnSystemInformation, &menu_btn2);
    opsettings_brightness_BtnSystemInformation->fn->setHAlignment(opsettings_brightness_BtnSystemInformation, LE_HALIGN_LEFT);
    opsettings_brightness_BtnSystemInformation->fn->setString(opsettings_brightness_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    opsettings_brightness_BtnSystemInformation->fn->setPressedImage(opsettings_brightness_BtnSystemInformation, (leImage*)&Menu_bar);
    opsettings_brightness_BtnSystemInformation->fn->setReleasedImage(opsettings_brightness_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    opsettings_brightness_BtnSystemInformation->fn->setImageMargin(opsettings_brightness_BtnSystemInformation, 5);
    opsettings_brightness_BtnSystemInformation->fn->setReleasedEventCallback(opsettings_brightness_BtnSystemInformation, event_opsettings_brightness_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnSystemInformation);

    opsettings_brightness_BtnService = leButtonWidget_New();
    opsettings_brightness_BtnService->fn->setPosition(opsettings_brightness_BtnService, 0, 109);
    opsettings_brightness_BtnService->fn->setSize(opsettings_brightness_BtnService, 200, 54);
    opsettings_brightness_BtnService->fn->setScheme(opsettings_brightness_BtnService, &menu_btn2);
    opsettings_brightness_BtnService->fn->setHAlignment(opsettings_brightness_BtnService, LE_HALIGN_LEFT);
    opsettings_brightness_BtnService->fn->setString(opsettings_brightness_BtnService, (leString*)&string_MENU_Service);
    opsettings_brightness_BtnService->fn->setPressedImage(opsettings_brightness_BtnService, (leImage*)&Menu_bar);
    opsettings_brightness_BtnService->fn->setReleasedImage(opsettings_brightness_BtnService, (leImage*)&Menu_bar_clear);
    opsettings_brightness_BtnService->fn->setImageMargin(opsettings_brightness_BtnService, 5);
    opsettings_brightness_BtnService->fn->setReleasedEventCallback(opsettings_brightness_BtnService, event_opsettings_brightness_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnService);

    opsettings_brightness_BtnOperationSettings = leButtonWidget_New();
    opsettings_brightness_BtnOperationSettings->fn->setPosition(opsettings_brightness_BtnOperationSettings, 0, 55);
    opsettings_brightness_BtnOperationSettings->fn->setSize(opsettings_brightness_BtnOperationSettings, 200, 54);
    opsettings_brightness_BtnOperationSettings->fn->setScheme(opsettings_brightness_BtnOperationSettings, &Button_Gray2);
    opsettings_brightness_BtnOperationSettings->fn->setHAlignment(opsettings_brightness_BtnOperationSettings, LE_HALIGN_LEFT);
    opsettings_brightness_BtnOperationSettings->fn->setString(opsettings_brightness_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    opsettings_brightness_BtnOperationSettings->fn->setPressedImage(opsettings_brightness_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_brightness_BtnOperationSettings->fn->setReleasedImage(opsettings_brightness_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_brightness_BtnOperationSettings->fn->setImageMargin(opsettings_brightness_BtnOperationSettings, 5);
    opsettings_brightness_BtnOperationSettings->fn->setReleasedEventCallback(opsettings_brightness_BtnOperationSettings, event_opsettings_brightness_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_brightness_BtnOperationSettings);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    opsettings_brightness_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_opsettings_brightness(void)
{
}

void screenHide_opsettings_brightness(void)
{
    opsettings_brightness_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    opsettings_brightness_Layer_0_FillPanel = NULL;
    opsettings_brightness_LblTitle = NULL;
    opsettings_brightness_ImgLine = NULL;
    opsettings_brightness_LblSubTitle = NULL;
    opsettings_brightness_LblBrightnessValue = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    opsettings_brightness_BtnMaintenance = NULL;
    opsettings_brightness_BtnExit = NULL;
    opsettings_brightness_BtnLeft = NULL;
    opsettings_brightness_BtnRight = NULL;
    opsettings_brightness_BtnHome = NULL;
    opsettings_brightness_BtnTroubleshoot = NULL;
    opsettings_brightness_BtnSystemInformation = NULL;
    opsettings_brightness_BtnService = NULL;
    opsettings_brightness_BtnOperationSettings = NULL;


    showing = LE_FALSE;
}

void screenDestroy_opsettings_brightness(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_opsettings_brightness(uint32_t lyrIdx)
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

