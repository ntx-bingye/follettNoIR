#include "gfx/legato/generated/screen/le_gen_screen_service_timedelay.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_timedelay_Layer_0_FillPanel;
leLabelWidget* service_timedelay_LblTitle;
leImageWidget* service_timedelay_ImgLine;
leLabelWidget* service_timedelay_LblSubTitle;
leButtonWidget* service_timedelay_BtnExit;
leButtonWidget* service_timedelay_BtnLong;
leButtonWidget* service_timedelay_BtnShort;
leButtonWidget* service_timedelay_BtnHome;
leButtonWidget* service_timedelay_BtnTroubleShoot;
leButtonWidget* service_timedelay_BtnSystemInformation;
leButtonWidget* service_timedelay_BtnService;
leButtonWidget* service_timedelay_BtnOperationSetings;
leButtonWidget* service_timedelay_BtnMaintenance;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_timedelay(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_timedelay(void)
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

    service_timedelay_Layer_0_FillPanel = leWidget_New();
    service_timedelay_Layer_0_FillPanel->fn->setPosition(service_timedelay_Layer_0_FillPanel, 0, 0);
    service_timedelay_Layer_0_FillPanel->fn->setSize(service_timedelay_Layer_0_FillPanel, 480, 272);
    service_timedelay_Layer_0_FillPanel->fn->setScheme(service_timedelay_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_timedelay_Layer_0_FillPanel);

    service_timedelay_LblTitle = leLabelWidget_New();
    service_timedelay_LblTitle->fn->setPosition(service_timedelay_LblTitle, 228, 29);
    service_timedelay_LblTitle->fn->setSize(service_timedelay_LblTitle, 222, 25);
    service_timedelay_LblTitle->fn->setScheme(service_timedelay_LblTitle, &Label_FontWhite);
    service_timedelay_LblTitle->fn->setBackgroundType(service_timedelay_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_timedelay_LblTitle->fn->setHAlignment(service_timedelay_LblTitle, LE_HALIGN_CENTER);
    service_timedelay_LblTitle->fn->setString(service_timedelay_LblTitle, (leString*)&string_SERVICE8_TimeDelay);
    root0->fn->addChild(root0, (leWidget*)service_timedelay_LblTitle);

    service_timedelay_ImgLine = leImageWidget_New();
    service_timedelay_ImgLine->fn->setPosition(service_timedelay_ImgLine, 218, 62);
    service_timedelay_ImgLine->fn->setSize(service_timedelay_ImgLine, 240, 5);
    service_timedelay_ImgLine->fn->setScheme(service_timedelay_ImgLine, &BlackBack);
    service_timedelay_ImgLine->fn->setBackgroundType(service_timedelay_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_timedelay_ImgLine->fn->setBorderType(service_timedelay_ImgLine, LE_WIDGET_BORDER_NONE);
    service_timedelay_ImgLine->fn->setImage(service_timedelay_ImgLine, (leImage*)&Menu_line);
    root0->fn->addChild(root0, (leWidget*)service_timedelay_ImgLine);

    service_timedelay_LblSubTitle = leLabelWidget_New();
    service_timedelay_LblSubTitle->fn->setPosition(service_timedelay_LblSubTitle, 220, 80);
    service_timedelay_LblSubTitle->fn->setSize(service_timedelay_LblSubTitle, 237, 30);
    service_timedelay_LblSubTitle->fn->setScheme(service_timedelay_LblSubTitle, &Label_FontWhite);
    service_timedelay_LblSubTitle->fn->setBackgroundType(service_timedelay_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_timedelay_LblSubTitle->fn->setHAlignment(service_timedelay_LblSubTitle, LE_HALIGN_CENTER);
    service_timedelay_LblSubTitle->fn->setString(service_timedelay_LblSubTitle, (leString*)&string_SERVICE3_SelectOne);
    root0->fn->addChild(root0, (leWidget*)service_timedelay_LblSubTitle);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_timedelay_BtnExit = leButtonWidget_New();
    service_timedelay_BtnExit->fn->setPosition(service_timedelay_BtnExit, 415, 2);
    service_timedelay_BtnExit->fn->setSize(service_timedelay_BtnExit, 60, 60);
    service_timedelay_BtnExit->fn->setScheme(service_timedelay_BtnExit, &BlackBack);
    service_timedelay_BtnExit->fn->setBackgroundType(service_timedelay_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_timedelay_BtnExit->fn->setBorderType(service_timedelay_BtnExit, LE_WIDGET_BORDER_NONE);
    service_timedelay_BtnExit->fn->setHAlignment(service_timedelay_BtnExit, LE_HALIGN_RIGHT);
    service_timedelay_BtnExit->fn->setVAlignment(service_timedelay_BtnExit, LE_VALIGN_TOP);
    service_timedelay_BtnExit->fn->setMargins(service_timedelay_BtnExit, 4, 10, 10, 4);
    service_timedelay_BtnExit->fn->setPressedImage(service_timedelay_BtnExit, (leImage*)&Menu_exit_white);
    service_timedelay_BtnExit->fn->setReleasedImage(service_timedelay_BtnExit, (leImage*)&Menu_exit_white);
    service_timedelay_BtnExit->fn->setReleasedEventCallback(service_timedelay_BtnExit, event_service_timedelay_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnExit);

    service_timedelay_BtnLong = leButtonWidget_New();
    service_timedelay_BtnLong->fn->setPosition(service_timedelay_BtnLong, 240, 160);
    service_timedelay_BtnLong->fn->setSize(service_timedelay_BtnLong, 180, 35);
    service_timedelay_BtnLong->fn->setScheme(service_timedelay_BtnLong, &Button_Gray2A);
    service_timedelay_BtnLong->fn->setHAlignment(service_timedelay_BtnLong, LE_HALIGN_LEFT);
    service_timedelay_BtnLong->fn->setMargins(service_timedelay_BtnLong, 0, 0, 0, 0);
    service_timedelay_BtnLong->fn->setString(service_timedelay_BtnLong, (leString*)&string_SERVICE8_Long);
    service_timedelay_BtnLong->fn->setPressedImage(service_timedelay_BtnLong, (leImage*)&Menu_bar_clear);
    service_timedelay_BtnLong->fn->setReleasedImage(service_timedelay_BtnLong, (leImage*)&Menu_bar_clear);
    service_timedelay_BtnLong->fn->setReleasedEventCallback(service_timedelay_BtnLong, event_service_timedelay_BtnLong_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnLong);

    service_timedelay_BtnShort = leButtonWidget_New();
    service_timedelay_BtnShort->fn->setPosition(service_timedelay_BtnShort, 240, 125);
    service_timedelay_BtnShort->fn->setSize(service_timedelay_BtnShort, 180, 35);
    service_timedelay_BtnShort->fn->setScheme(service_timedelay_BtnShort, &Button_LightBlue);
    service_timedelay_BtnShort->fn->setHAlignment(service_timedelay_BtnShort, LE_HALIGN_LEFT);
    service_timedelay_BtnShort->fn->setMargins(service_timedelay_BtnShort, 0, 0, 0, 0);
    service_timedelay_BtnShort->fn->setString(service_timedelay_BtnShort, (leString*)&string_SERVICE8_Short);
    service_timedelay_BtnShort->fn->setPressedImage(service_timedelay_BtnShort, (leImage*)&Menu_bar_clear);
    service_timedelay_BtnShort->fn->setReleasedImage(service_timedelay_BtnShort, (leImage*)&Menu_bar_clear);
    service_timedelay_BtnShort->fn->setReleasedEventCallback(service_timedelay_BtnShort, event_service_timedelay_BtnShort_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnShort);

    service_timedelay_BtnHome = leButtonWidget_New();
    service_timedelay_BtnHome->fn->setPosition(service_timedelay_BtnHome, 435, 225);
    service_timedelay_BtnHome->fn->setSize(service_timedelay_BtnHome, 40, 40);
    service_timedelay_BtnHome->fn->setScheme(service_timedelay_BtnHome, &BlackBack);
    service_timedelay_BtnHome->fn->setBackgroundType(service_timedelay_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_timedelay_BtnHome->fn->setBorderType(service_timedelay_BtnHome, LE_WIDGET_BORDER_NONE);
    service_timedelay_BtnHome->fn->setPressedImage(service_timedelay_BtnHome, (leImage*)&Menu_home);
    service_timedelay_BtnHome->fn->setReleasedImage(service_timedelay_BtnHome, (leImage*)&Menu_home);
    service_timedelay_BtnHome->fn->setReleasedEventCallback(service_timedelay_BtnHome, event_service_timedelay_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnHome);

    service_timedelay_BtnTroubleShoot = leButtonWidget_New();
    service_timedelay_BtnTroubleShoot->fn->setPosition(service_timedelay_BtnTroubleShoot, 0, 217);
    service_timedelay_BtnTroubleShoot->fn->setSize(service_timedelay_BtnTroubleShoot, 200, 55);
    service_timedelay_BtnTroubleShoot->fn->setScheme(service_timedelay_BtnTroubleShoot, &menu_btn2);
    service_timedelay_BtnTroubleShoot->fn->setHAlignment(service_timedelay_BtnTroubleShoot, LE_HALIGN_LEFT);
    service_timedelay_BtnTroubleShoot->fn->setString(service_timedelay_BtnTroubleShoot, (leString*)&string_MENU_Troubleshoot);
    service_timedelay_BtnTroubleShoot->fn->setPressedImage(service_timedelay_BtnTroubleShoot, (leImage*)&Menu_bar);
    service_timedelay_BtnTroubleShoot->fn->setReleasedImage(service_timedelay_BtnTroubleShoot, (leImage*)&Menu_bar_clear);
    service_timedelay_BtnTroubleShoot->fn->setImageMargin(service_timedelay_BtnTroubleShoot, 5);
    service_timedelay_BtnTroubleShoot->fn->setReleasedEventCallback(service_timedelay_BtnTroubleShoot, event_service_timedelay_BtnTroubleShoot_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnTroubleShoot);

    service_timedelay_BtnSystemInformation = leButtonWidget_New();
    service_timedelay_BtnSystemInformation->fn->setPosition(service_timedelay_BtnSystemInformation, 0, 163);
    service_timedelay_BtnSystemInformation->fn->setSize(service_timedelay_BtnSystemInformation, 200, 54);
    service_timedelay_BtnSystemInformation->fn->setScheme(service_timedelay_BtnSystemInformation, &menu_btn2);
    service_timedelay_BtnSystemInformation->fn->setHAlignment(service_timedelay_BtnSystemInformation, LE_HALIGN_LEFT);
    service_timedelay_BtnSystemInformation->fn->setString(service_timedelay_BtnSystemInformation, (leString*)&string_MENU_SystemInformation);
    service_timedelay_BtnSystemInformation->fn->setPressedImage(service_timedelay_BtnSystemInformation, (leImage*)&Menu_bar);
    service_timedelay_BtnSystemInformation->fn->setReleasedImage(service_timedelay_BtnSystemInformation, (leImage*)&Menu_bar_clear);
    service_timedelay_BtnSystemInformation->fn->setImageMargin(service_timedelay_BtnSystemInformation, 5);
    service_timedelay_BtnSystemInformation->fn->setReleasedEventCallback(service_timedelay_BtnSystemInformation, event_service_timedelay_BtnSystemInformation_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnSystemInformation);

    service_timedelay_BtnService = leButtonWidget_New();
    service_timedelay_BtnService->fn->setPosition(service_timedelay_BtnService, 0, 109);
    service_timedelay_BtnService->fn->setSize(service_timedelay_BtnService, 200, 54);
    service_timedelay_BtnService->fn->setScheme(service_timedelay_BtnService, &Button_Gray2);
    service_timedelay_BtnService->fn->setHAlignment(service_timedelay_BtnService, LE_HALIGN_LEFT);
    service_timedelay_BtnService->fn->setString(service_timedelay_BtnService, (leString*)&string_MENU_Service);
    service_timedelay_BtnService->fn->setPressedImage(service_timedelay_BtnService, (leImage*)&Menu_bar);
    service_timedelay_BtnService->fn->setReleasedImage(service_timedelay_BtnService, (leImage*)&Menu_bar);
    service_timedelay_BtnService->fn->setImageMargin(service_timedelay_BtnService, 5);
    service_timedelay_BtnService->fn->setReleasedEventCallback(service_timedelay_BtnService, event_service_timedelay_BtnService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnService);

    service_timedelay_BtnOperationSetings = leButtonWidget_New();
    service_timedelay_BtnOperationSetings->fn->setPosition(service_timedelay_BtnOperationSetings, 0, 55);
    service_timedelay_BtnOperationSetings->fn->setSize(service_timedelay_BtnOperationSetings, 200, 54);
    service_timedelay_BtnOperationSetings->fn->setScheme(service_timedelay_BtnOperationSetings, &menu_btn2);
    service_timedelay_BtnOperationSetings->fn->setHAlignment(service_timedelay_BtnOperationSetings, LE_HALIGN_LEFT);
    service_timedelay_BtnOperationSetings->fn->setString(service_timedelay_BtnOperationSetings, (leString*)&string_MENU_OperationSettings);
    service_timedelay_BtnOperationSetings->fn->setPressedImage(service_timedelay_BtnOperationSetings, (leImage*)&Menu_bar);
    service_timedelay_BtnOperationSetings->fn->setReleasedImage(service_timedelay_BtnOperationSetings, (leImage*)&Menu_bar_clear);
    service_timedelay_BtnOperationSetings->fn->setImageMargin(service_timedelay_BtnOperationSetings, 5);
    service_timedelay_BtnOperationSetings->fn->setReleasedEventCallback(service_timedelay_BtnOperationSetings, event_service_timedelay_BtnOperationSetings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnOperationSetings);

    service_timedelay_BtnMaintenance = leButtonWidget_New();
    service_timedelay_BtnMaintenance->fn->setPosition(service_timedelay_BtnMaintenance, 0, 0);
    service_timedelay_BtnMaintenance->fn->setSize(service_timedelay_BtnMaintenance, 200, 55);
    service_timedelay_BtnMaintenance->fn->setScheme(service_timedelay_BtnMaintenance, &menu_btn2);
    service_timedelay_BtnMaintenance->fn->setHAlignment(service_timedelay_BtnMaintenance, LE_HALIGN_LEFT);
    service_timedelay_BtnMaintenance->fn->setString(service_timedelay_BtnMaintenance, (leString*)&string_MENU_Maintenance);
    service_timedelay_BtnMaintenance->fn->setPressedImage(service_timedelay_BtnMaintenance, (leImage*)&Menu_bar);
    service_timedelay_BtnMaintenance->fn->setReleasedImage(service_timedelay_BtnMaintenance, (leImage*)&Menu_bar_clear);
    service_timedelay_BtnMaintenance->fn->setImageMargin(service_timedelay_BtnMaintenance, 5);
    service_timedelay_BtnMaintenance->fn->setReleasedEventCallback(service_timedelay_BtnMaintenance, event_service_timedelay_BtnMaintenance_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_timedelay_BtnMaintenance);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_timedelay_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_timedelay(void)
{
}

void screenHide_service_timedelay(void)
{
    service_timedelay_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_timedelay_Layer_0_FillPanel = NULL;
    service_timedelay_LblTitle = NULL;
    service_timedelay_ImgLine = NULL;
    service_timedelay_LblSubTitle = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_timedelay_BtnExit = NULL;
    service_timedelay_BtnLong = NULL;
    service_timedelay_BtnShort = NULL;
    service_timedelay_BtnHome = NULL;
    service_timedelay_BtnTroubleShoot = NULL;
    service_timedelay_BtnSystemInformation = NULL;
    service_timedelay_BtnService = NULL;
    service_timedelay_BtnOperationSetings = NULL;
    service_timedelay_BtnMaintenance = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_timedelay(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_timedelay(uint32_t lyrIdx)
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

