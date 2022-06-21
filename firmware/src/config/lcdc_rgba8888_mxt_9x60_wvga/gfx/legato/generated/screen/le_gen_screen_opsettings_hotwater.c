#include "gfx/legato/generated/screen/le_gen_screen_opsettings_hotwater.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* opsettings_hotwater_Layer_0_FillPanel;
leLabelWidget* opsettings_hotwater_LblTitle;
leImageWidget* opsettings_hotwater_ImgLine;
leLabelWidget* opsettings_hotwater_LblSubTitle;
leLabelWidget* opsettings_hotwater_LblRange;
leLabelWidget* opsettings_hotwater_LblHotWaterValue;
leButtonWidget* opsettings_hotwater_BtnExit;
leButtonWidget* opsettings_hotwater_BtnUnits;
leButtonWidget* opsettings_hotwater_BtnLeft;
leButtonWidget* opsettings_hotwater_BtnRight;
leButtonWidget* opsettings_hotwater_BtnHome;
leButtonWidget* opsettings_hotwater_BtnTroubleshoot;
leButtonWidget* opsettings_hotwater_BtnSystemInformation;
leButtonWidget* opsettings_hotwater_BtnService;
leButtonWidget* opsettings_hotwater_BtnOperationSettings;
leButtonWidget* opsettings_hotwater_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_opsettings_hotwater(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_opsettings_hotwater(void)
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

    opsettings_hotwater_Layer_0_FillPanel = leWidget_New();
    opsettings_hotwater_Layer_0_FillPanel->fn->setPosition(opsettings_hotwater_Layer_0_FillPanel, 0, 0);
    opsettings_hotwater_Layer_0_FillPanel->fn->setSize(opsettings_hotwater_Layer_0_FillPanel, 480, 272);
    opsettings_hotwater_Layer_0_FillPanel->fn->setScheme(opsettings_hotwater_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)opsettings_hotwater_Layer_0_FillPanel);

    opsettings_hotwater_LblTitle = leLabelWidget_New();
    opsettings_hotwater_LblTitle->fn->setPosition(opsettings_hotwater_LblTitle, 228, 26);
    opsettings_hotwater_LblTitle->fn->setSize(opsettings_hotwater_LblTitle, 222, 29);
    opsettings_hotwater_LblTitle->fn->setScheme(opsettings_hotwater_LblTitle, &Label_FontWhite);
    opsettings_hotwater_LblTitle->fn->setBackgroundType(opsettings_hotwater_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_LblTitle->fn->setHAlignment(opsettings_hotwater_LblTitle, LE_HALIGN_CENTER);
    opsettings_hotwater_LblTitle->fn->setString(opsettings_hotwater_LblTitle, (leString*)&string_OPSETTING_HOTWATER_HotWater);
    root0->fn->addChild(root0, (leWidget*)opsettings_hotwater_LblTitle);

    opsettings_hotwater_ImgLine = leImageWidget_New();
    opsettings_hotwater_ImgLine->fn->setPosition(opsettings_hotwater_ImgLine, 218, 62);
    opsettings_hotwater_ImgLine->fn->setSize(opsettings_hotwater_ImgLine, 240, 5);
    opsettings_hotwater_ImgLine->fn->setScheme(opsettings_hotwater_ImgLine, &BlackBack);
    opsettings_hotwater_ImgLine->fn->setBackgroundType(opsettings_hotwater_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_ImgLine->fn->setBorderType(opsettings_hotwater_ImgLine, LE_WIDGET_BORDER_NONE);
    opsettings_hotwater_ImgLine->fn->setImage(opsettings_hotwater_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)opsettings_hotwater_ImgLine);

    opsettings_hotwater_LblSubTitle = leLabelWidget_New();
    opsettings_hotwater_LblSubTitle->fn->setPosition(opsettings_hotwater_LblSubTitle, 220, 70);
    opsettings_hotwater_LblSubTitle->fn->setSize(opsettings_hotwater_LblSubTitle, 237, 30);
    opsettings_hotwater_LblSubTitle->fn->setScheme(opsettings_hotwater_LblSubTitle, &Label_FontWhite);
    opsettings_hotwater_LblSubTitle->fn->setBackgroundType(opsettings_hotwater_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_LblSubTitle->fn->setHAlignment(opsettings_hotwater_LblSubTitle, LE_HALIGN_CENTER);
    opsettings_hotwater_LblSubTitle->fn->setString(opsettings_hotwater_LblSubTitle, (leString*)&string_OPSETTING_HOTWATER_SelectTemp);
    root0->fn->addChild(root0, (leWidget*)opsettings_hotwater_LblSubTitle);

    opsettings_hotwater_LblRange = leLabelWidget_New();
    opsettings_hotwater_LblRange->fn->setPosition(opsettings_hotwater_LblRange, 220, 101);
    opsettings_hotwater_LblRange->fn->setSize(opsettings_hotwater_LblRange, 237, 30);
    opsettings_hotwater_LblRange->fn->setScheme(opsettings_hotwater_LblRange, &Label_FontWhite);
    opsettings_hotwater_LblRange->fn->setBackgroundType(opsettings_hotwater_LblRange, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_LblRange->fn->setHAlignment(opsettings_hotwater_LblRange, LE_HALIGN_CENTER);
    opsettings_hotwater_LblRange->fn->setString(opsettings_hotwater_LblRange, (leString*)&string_OPSETTING_HOTWATER_HotWaterRange);
    root0->fn->addChild(root0, (leWidget*)opsettings_hotwater_LblRange);

    opsettings_hotwater_LblHotWaterValue = leLabelWidget_New();
    opsettings_hotwater_LblHotWaterValue->fn->setPosition(opsettings_hotwater_LblHotWaterValue, 278, 136);
    opsettings_hotwater_LblHotWaterValue->fn->setSize(opsettings_hotwater_LblHotWaterValue, 112, 55);
    opsettings_hotwater_LblHotWaterValue->fn->setScheme(opsettings_hotwater_LblHotWaterValue, &Label_FontWhite);
    opsettings_hotwater_LblHotWaterValue->fn->setBackgroundType(opsettings_hotwater_LblHotWaterValue, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_LblHotWaterValue->fn->setHAlignment(opsettings_hotwater_LblHotWaterValue, LE_HALIGN_CENTER);
    opsettings_hotwater_LblHotWaterValue->fn->setString(opsettings_hotwater_LblHotWaterValue, (leString*)&string_OPSETTING_HOTWATER_HotWaterValue);
    root0->fn->addChild(root0, (leWidget*)opsettings_hotwater_LblHotWaterValue);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    opsettings_hotwater_BtnExit = leButtonWidget_New();
    opsettings_hotwater_BtnExit->fn->setPosition(opsettings_hotwater_BtnExit, 415, 2);
    opsettings_hotwater_BtnExit->fn->setSize(opsettings_hotwater_BtnExit, 60, 60);
    opsettings_hotwater_BtnExit->fn->setScheme(opsettings_hotwater_BtnExit, &BlackBack);
    opsettings_hotwater_BtnExit->fn->setBackgroundType(opsettings_hotwater_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_BtnExit->fn->setBorderType(opsettings_hotwater_BtnExit, LE_WIDGET_BORDER_NONE);
    opsettings_hotwater_BtnExit->fn->setHAlignment(opsettings_hotwater_BtnExit, LE_HALIGN_RIGHT);
    opsettings_hotwater_BtnExit->fn->setVAlignment(opsettings_hotwater_BtnExit, LE_VALIGN_TOP);
    opsettings_hotwater_BtnExit->fn->setMargins(opsettings_hotwater_BtnExit, 4, 10, 10, 4);
    opsettings_hotwater_BtnExit->fn->setPressedImage(opsettings_hotwater_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_hotwater_BtnExit->fn->setReleasedImage(opsettings_hotwater_BtnExit, (leImage*)&Menu_exit_white);
    opsettings_hotwater_BtnExit->fn->setReleasedEventCallback(opsettings_hotwater_BtnExit, event_opsettings_hotwater_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnExit);

    opsettings_hotwater_BtnUnits = leButtonWidget_New();
    opsettings_hotwater_BtnUnits->fn->setPosition(opsettings_hotwater_BtnUnits, 309, 208);
    opsettings_hotwater_BtnUnits->fn->setSize(opsettings_hotwater_BtnUnits, 50, 40);
    opsettings_hotwater_BtnUnits->fn->setScheme(opsettings_hotwater_BtnUnits, &Button_Gray2A);
    opsettings_hotwater_BtnUnits->fn->setString(opsettings_hotwater_BtnUnits, (leString*)&string_OPSETTING_HOTWATER_DegC);
    opsettings_hotwater_BtnUnits->fn->setPressedImage(opsettings_hotwater_BtnUnits, (leImage*)&Menu_bar_clear);
    opsettings_hotwater_BtnUnits->fn->setReleasedImage(opsettings_hotwater_BtnUnits, (leImage*)&Menu_bar_clear);
    opsettings_hotwater_BtnUnits->fn->setImagePosition(opsettings_hotwater_BtnUnits, LE_RELATIVE_POSITION_BEHIND);
    opsettings_hotwater_BtnUnits->fn->setImageMargin(opsettings_hotwater_BtnUnits, 5);
    opsettings_hotwater_BtnUnits->fn->setReleasedEventCallback(opsettings_hotwater_BtnUnits, event_opsettings_hotwater_BtnUnits_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnUnits);

    opsettings_hotwater_BtnLeft = leButtonWidget_New();
    opsettings_hotwater_BtnLeft->fn->setPosition(opsettings_hotwater_BtnLeft, 241, 142);
    opsettings_hotwater_BtnLeft->fn->setSize(opsettings_hotwater_BtnLeft, 40, 45);
    opsettings_hotwater_BtnLeft->fn->setScheme(opsettings_hotwater_BtnLeft, &BlackBack);
    opsettings_hotwater_BtnLeft->fn->setBackgroundType(opsettings_hotwater_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_BtnLeft->fn->setBorderType(opsettings_hotwater_BtnLeft, LE_WIDGET_BORDER_NONE);
    opsettings_hotwater_BtnLeft->fn->setPressedImage(opsettings_hotwater_BtnLeft, (leImage*)&Menu_chevron_left);
    opsettings_hotwater_BtnLeft->fn->setReleasedImage(opsettings_hotwater_BtnLeft, (leImage*)&Menu_chevron_left);
    opsettings_hotwater_BtnLeft->fn->setReleasedEventCallback(opsettings_hotwater_BtnLeft, event_opsettings_hotwater_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnLeft);

    opsettings_hotwater_BtnRight = leButtonWidget_New();
    opsettings_hotwater_BtnRight->fn->setPosition(opsettings_hotwater_BtnRight, 388, 142);
    opsettings_hotwater_BtnRight->fn->setSize(opsettings_hotwater_BtnRight, 40, 45);
    opsettings_hotwater_BtnRight->fn->setScheme(opsettings_hotwater_BtnRight, &BlackBack);
    opsettings_hotwater_BtnRight->fn->setBackgroundType(opsettings_hotwater_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_BtnRight->fn->setBorderType(opsettings_hotwater_BtnRight, LE_WIDGET_BORDER_NONE);
    opsettings_hotwater_BtnRight->fn->setPressedImage(opsettings_hotwater_BtnRight, (leImage*)&Menu_chevron_right);
    opsettings_hotwater_BtnRight->fn->setReleasedImage(opsettings_hotwater_BtnRight, (leImage*)&Menu_chevron_right);
    opsettings_hotwater_BtnRight->fn->setReleasedEventCallback(opsettings_hotwater_BtnRight, event_opsettings_hotwater_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnRight);

    opsettings_hotwater_BtnHome = leButtonWidget_New();
    opsettings_hotwater_BtnHome->fn->setPosition(opsettings_hotwater_BtnHome, 435, 225);
    opsettings_hotwater_BtnHome->fn->setSize(opsettings_hotwater_BtnHome, 40, 40);
    opsettings_hotwater_BtnHome->fn->setScheme(opsettings_hotwater_BtnHome, &BlackBack);
    opsettings_hotwater_BtnHome->fn->setBackgroundType(opsettings_hotwater_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    opsettings_hotwater_BtnHome->fn->setBorderType(opsettings_hotwater_BtnHome, LE_WIDGET_BORDER_NONE);
    opsettings_hotwater_BtnHome->fn->setPressedImage(opsettings_hotwater_BtnHome, (leImage*)&Menu_home);
    opsettings_hotwater_BtnHome->fn->setReleasedImage(opsettings_hotwater_BtnHome, (leImage*)&Menu_home);
    opsettings_hotwater_BtnHome->fn->setReleasedEventCallback(opsettings_hotwater_BtnHome, event_opsettings_hotwater_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnHome);

    opsettings_hotwater_BtnTroubleshoot = leButtonWidget_New();
    opsettings_hotwater_BtnTroubleshoot->fn->setPosition(opsettings_hotwater_BtnTroubleshoot, 0, 217);
    opsettings_hotwater_BtnTroubleshoot->fn->setSize(opsettings_hotwater_BtnTroubleshoot, 200, 55);
    opsettings_hotwater_BtnTroubleshoot->fn->setScheme(opsettings_hotwater_BtnTroubleshoot, &menu_btn2);
    opsettings_hotwater_BtnTroubleshoot->fn->setHAlignment(opsettings_hotwater_BtnTroubleshoot, LE_HALIGN_LEFT);
    opsettings_hotwater_BtnTroubleshoot->fn->setString(opsettings_hotwater_BtnTroubleshoot, (leString*)&string_MENU_Troubleshoot);
    opsettings_hotwater_BtnTroubleshoot->fn->setPressedImage(opsettings_hotwater_BtnTroubleshoot, (leImage*)&Menu_bar);
    opsettings_hotwater_BtnTroubleshoot->fn->setReleasedImage(opsettings_hotwater_BtnTroubleshoot, (leImage*)&Menu_bar_clear);
    opsettings_hotwater_BtnTroubleshoot->fn->setImageMargin(opsettings_hotwater_BtnTroubleshoot, 5);
    opsettings_hotwater_BtnTroubleshoot->fn->setReleasedEventCallback(opsettings_hotwater_BtnTroubleshoot, event_opsettings_hotwater_BtnTroubleshoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnTroubleshoot);

    opsettings_hotwater_BtnSystemInformation = leButtonWidget_New();
    opsettings_hotwater_BtnSystemInformation->fn->setPosition(opsettings_hotwater_BtnSystemInformation, 0, 163);
    opsettings_hotwater_BtnSystemInformation->fn->setSize(opsettings_hotwater_BtnSystemInformation, 200, 54);
    opsettings_hotwater_BtnSystemInformation->fn->setScheme(opsettings_hotwater_BtnSystemInformation, &menu_btn2);
    opsettings_hotwater_BtnSystemInformation->fn->setHAlignment(opsettings_hotwater_BtnSystemInformation, LE_HALIGN_LEFT);
    opsettings_hotwater_BtnSystemInformation->fn->setString(opsettings_hotwater_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    opsettings_hotwater_BtnSystemInformation->fn->setPressedImage(opsettings_hotwater_BtnSystemInformation, (leImage*)&Menu_bar);
    opsettings_hotwater_BtnSystemInformation->fn->setReleasedImage(opsettings_hotwater_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    opsettings_hotwater_BtnSystemInformation->fn->setImageMargin(opsettings_hotwater_BtnSystemInformation, 5);
    opsettings_hotwater_BtnSystemInformation->fn->setReleasedEventCallback(opsettings_hotwater_BtnSystemInformation, event_opsettings_hotwater_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnSystemInformation);

    opsettings_hotwater_BtnService = leButtonWidget_New();
    opsettings_hotwater_BtnService->fn->setPosition(opsettings_hotwater_BtnService, 0, 109);
    opsettings_hotwater_BtnService->fn->setSize(opsettings_hotwater_BtnService, 200, 54);
    opsettings_hotwater_BtnService->fn->setScheme(opsettings_hotwater_BtnService, &menu_btn2);
    opsettings_hotwater_BtnService->fn->setHAlignment(opsettings_hotwater_BtnService, LE_HALIGN_LEFT);
    opsettings_hotwater_BtnService->fn->setString(opsettings_hotwater_BtnService, (leString*)&string_MENU_Service);
    opsettings_hotwater_BtnService->fn->setPressedImage(opsettings_hotwater_BtnService, (leImage*)&Menu_bar);
    opsettings_hotwater_BtnService->fn->setReleasedImage(opsettings_hotwater_BtnService, (leImage*)&Menu_bar_clear);
    opsettings_hotwater_BtnService->fn->setImageMargin(opsettings_hotwater_BtnService, 5);
    opsettings_hotwater_BtnService->fn->setReleasedEventCallback(opsettings_hotwater_BtnService, event_opsettings_hotwater_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnService);

    opsettings_hotwater_BtnOperationSettings = leButtonWidget_New();
    opsettings_hotwater_BtnOperationSettings->fn->setPosition(opsettings_hotwater_BtnOperationSettings, 0, 55);
    opsettings_hotwater_BtnOperationSettings->fn->setSize(opsettings_hotwater_BtnOperationSettings, 200, 54);
    opsettings_hotwater_BtnOperationSettings->fn->setScheme(opsettings_hotwater_BtnOperationSettings, &Button_Gray2);
    opsettings_hotwater_BtnOperationSettings->fn->setHAlignment(opsettings_hotwater_BtnOperationSettings, LE_HALIGN_LEFT);
    opsettings_hotwater_BtnOperationSettings->fn->setString(opsettings_hotwater_BtnOperationSettings, (leString*)&string_MENU_OperationSettings);
    opsettings_hotwater_BtnOperationSettings->fn->setPressedImage(opsettings_hotwater_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_hotwater_BtnOperationSettings->fn->setReleasedImage(opsettings_hotwater_BtnOperationSettings, (leImage*)&Menu_bar);
    opsettings_hotwater_BtnOperationSettings->fn->setImageMargin(opsettings_hotwater_BtnOperationSettings, 5);
    opsettings_hotwater_BtnOperationSettings->fn->setReleasedEventCallback(opsettings_hotwater_BtnOperationSettings, event_opsettings_hotwater_BtnOperationSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnOperationSettings);

    opsettings_hotwater_BtnMaintenance = leButtonWidget_New();
    opsettings_hotwater_BtnMaintenance->fn->setPosition(opsettings_hotwater_BtnMaintenance, 0, 0);
    opsettings_hotwater_BtnMaintenance->fn->setSize(opsettings_hotwater_BtnMaintenance, 200, 55);
    opsettings_hotwater_BtnMaintenance->fn->setScheme(opsettings_hotwater_BtnMaintenance, &menu_btn2);
    opsettings_hotwater_BtnMaintenance->fn->setHAlignment(opsettings_hotwater_BtnMaintenance, LE_HALIGN_LEFT);
    opsettings_hotwater_BtnMaintenance->fn->setString(opsettings_hotwater_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    opsettings_hotwater_BtnMaintenance->fn->setPressedImage(opsettings_hotwater_BtnMaintenance, (leImage*)&Menu_bar);
    opsettings_hotwater_BtnMaintenance->fn->setReleasedImage(opsettings_hotwater_BtnMaintenance, (leImage*)&Menu_bar_clear);
    opsettings_hotwater_BtnMaintenance->fn->setImageMargin(opsettings_hotwater_BtnMaintenance, 5);
    opsettings_hotwater_BtnMaintenance->fn->setReleasedEventCallback(opsettings_hotwater_BtnMaintenance, event_opsettings_hotwater_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)opsettings_hotwater_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    opsettings_hotwater_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_opsettings_hotwater(void)
{
}

void screenHide_opsettings_hotwater(void)
{
    opsettings_hotwater_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    opsettings_hotwater_Layer_0_FillPanel = NULL;
    opsettings_hotwater_LblTitle = NULL;
    opsettings_hotwater_ImgLine = NULL;
    opsettings_hotwater_LblSubTitle = NULL;
    opsettings_hotwater_LblRange = NULL;
    opsettings_hotwater_LblHotWaterValue = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    opsettings_hotwater_BtnExit = NULL;
    opsettings_hotwater_BtnUnits = NULL;
    opsettings_hotwater_BtnLeft = NULL;
    opsettings_hotwater_BtnRight = NULL;
    opsettings_hotwater_BtnHome = NULL;
    opsettings_hotwater_BtnTroubleshoot = NULL;
    opsettings_hotwater_BtnSystemInformation = NULL;
    opsettings_hotwater_BtnService = NULL;
    opsettings_hotwater_BtnOperationSettings = NULL;
    opsettings_hotwater_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_opsettings_hotwater(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_opsettings_hotwater(uint32_t lyrIdx)
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

