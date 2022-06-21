#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_display.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_display_Layer_0_FillPanel;
leWidget* selfhelp_display_PanelSelfHelpDisplay;
leLabelWidget* selfhelp_display_LblTitle;
leButtonWidget* selfhelp_display_BtnExit;
leButtonWidget* selfhelp_display_BtnContactService;
leButtonWidget* selfhelp_display_BtnHome;
leLabelWidget* selfhelp_display_LblLine0;
leLabelWidget* selfhelp_display_LblLine1;
leLabelWidget* selfhelp_display_LblLine2;
leLabelWidget* selfhelp_display_LblLine3;
leLabelWidget* selfhelp_display_LblLine4;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_display(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_display(void)
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

    selfhelp_display_Layer_0_FillPanel = leWidget_New();
    selfhelp_display_Layer_0_FillPanel->fn->setPosition(selfhelp_display_Layer_0_FillPanel, 0, 0);
    selfhelp_display_Layer_0_FillPanel->fn->setSize(selfhelp_display_Layer_0_FillPanel, 480, 272);
    selfhelp_display_Layer_0_FillPanel->fn->setScheme(selfhelp_display_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)selfhelp_display_Layer_0_FillPanel);

    selfhelp_display_PanelSelfHelpDisplay = leWidget_New();
    selfhelp_display_PanelSelfHelpDisplay->fn->setPosition(selfhelp_display_PanelSelfHelpDisplay, 10, 45);
    selfhelp_display_PanelSelfHelpDisplay->fn->setSize(selfhelp_display_PanelSelfHelpDisplay, 415, 198);
    selfhelp_display_PanelSelfHelpDisplay->fn->setScheme(selfhelp_display_PanelSelfHelpDisplay, &Panel_Gray4);
    selfhelp_display_PanelSelfHelpDisplay->fn->setHAlignment(selfhelp_display_PanelSelfHelpDisplay, LE_HALIGN_RIGHT);
    selfhelp_display_PanelSelfHelpDisplay->fn->setVAlignment(selfhelp_display_PanelSelfHelpDisplay, LE_VALIGN_BOTTOM);
    root1->fn->addChild(root1, (leWidget*)selfhelp_display_PanelSelfHelpDisplay);

    selfhelp_display_LblLine0 = leLabelWidget_New();
    selfhelp_display_LblLine0->fn->setPosition(selfhelp_display_LblLine0, 0, 0);
    selfhelp_display_LblLine0->fn->setSize(selfhelp_display_LblLine0, 414, 30);
    selfhelp_display_LblLine0->fn->setScheme(selfhelp_display_LblLine0, &Label_FontBlack);
    selfhelp_display_LblLine0->fn->setBackgroundType(selfhelp_display_LblLine0, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_LblLine0->fn->setVAlignment(selfhelp_display_LblLine0, LE_VALIGN_TOP);
    selfhelp_display_LblLine0->fn->setMargins(selfhelp_display_LblLine0, 4, 0, 4, 4);
    selfhelp_display_LblLine0->fn->setString(selfhelp_display_LblLine0, (leString*)&string_SELFHELP_DISP_Line1);
    selfhelp_display_PanelSelfHelpDisplay->fn->addChild(selfhelp_display_PanelSelfHelpDisplay, (leWidget*)selfhelp_display_LblLine0);

    selfhelp_display_LblLine1 = leLabelWidget_New();
    selfhelp_display_LblLine1->fn->setPosition(selfhelp_display_LblLine1, 0, 30);
    selfhelp_display_LblLine1->fn->setSize(selfhelp_display_LblLine1, 414, 30);
    selfhelp_display_LblLine1->fn->setBackgroundType(selfhelp_display_LblLine1, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_LblLine1->fn->setMargins(selfhelp_display_LblLine1, 4, 0, 4, 4);
    selfhelp_display_LblLine1->fn->setString(selfhelp_display_LblLine1, (leString*)&string_SELFHELP_DISP_Line1);
    selfhelp_display_PanelSelfHelpDisplay->fn->addChild(selfhelp_display_PanelSelfHelpDisplay, (leWidget*)selfhelp_display_LblLine1);

    selfhelp_display_LblLine2 = leLabelWidget_New();
    selfhelp_display_LblLine2->fn->setPosition(selfhelp_display_LblLine2, 0, 60);
    selfhelp_display_LblLine2->fn->setSize(selfhelp_display_LblLine2, 414, 30);
    selfhelp_display_LblLine2->fn->setScheme(selfhelp_display_LblLine2, &BlackBack);
    selfhelp_display_LblLine2->fn->setBackgroundType(selfhelp_display_LblLine2, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_LblLine2->fn->setString(selfhelp_display_LblLine2, (leString*)&string_SELFHELP_DISP_Line1);
    selfhelp_display_PanelSelfHelpDisplay->fn->addChild(selfhelp_display_PanelSelfHelpDisplay, (leWidget*)selfhelp_display_LblLine2);

    selfhelp_display_LblLine3 = leLabelWidget_New();
    selfhelp_display_LblLine3->fn->setPosition(selfhelp_display_LblLine3, 0, 90);
    selfhelp_display_LblLine3->fn->setSize(selfhelp_display_LblLine3, 414, 30);
    selfhelp_display_LblLine3->fn->setScheme(selfhelp_display_LblLine3, &BlackBack);
    selfhelp_display_LblLine3->fn->setBackgroundType(selfhelp_display_LblLine3, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_LblLine3->fn->setString(selfhelp_display_LblLine3, (leString*)&string_SELFHELP_DISP_Line1);
    selfhelp_display_PanelSelfHelpDisplay->fn->addChild(selfhelp_display_PanelSelfHelpDisplay, (leWidget*)selfhelp_display_LblLine3);

    selfhelp_display_LblLine4 = leLabelWidget_New();
    selfhelp_display_LblLine4->fn->setPosition(selfhelp_display_LblLine4, 0, 120);
    selfhelp_display_LblLine4->fn->setSize(selfhelp_display_LblLine4, 414, 30);
    selfhelp_display_LblLine4->fn->setScheme(selfhelp_display_LblLine4, &BlackBack);
    selfhelp_display_LblLine4->fn->setBackgroundType(selfhelp_display_LblLine4, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_LblLine4->fn->setString(selfhelp_display_LblLine4, (leString*)&string_SELFHELP_DISP_Line1);
    selfhelp_display_PanelSelfHelpDisplay->fn->addChild(selfhelp_display_PanelSelfHelpDisplay, (leWidget*)selfhelp_display_LblLine4);

    selfhelp_display_LblTitle = leLabelWidget_New();
    selfhelp_display_LblTitle->fn->setPosition(selfhelp_display_LblTitle, 10, 5);
    selfhelp_display_LblTitle->fn->setSize(selfhelp_display_LblTitle, 380, 30);
    selfhelp_display_LblTitle->fn->setScheme(selfhelp_display_LblTitle, &Label_FontBlack);
    selfhelp_display_LblTitle->fn->setBackgroundType(selfhelp_display_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_LblTitle->fn->setString(selfhelp_display_LblTitle, (leString*)&string_SELFHELP_DISP_Title);
    root1->fn->addChild(root1, (leWidget*)selfhelp_display_LblTitle);

    selfhelp_display_BtnExit = leButtonWidget_New();
    selfhelp_display_BtnExit->fn->setPosition(selfhelp_display_BtnExit, 415, 2);
    selfhelp_display_BtnExit->fn->setSize(selfhelp_display_BtnExit, 60, 80);
    selfhelp_display_BtnExit->fn->setScheme(selfhelp_display_BtnExit, &BlackBack);
    selfhelp_display_BtnExit->fn->setBackgroundType(selfhelp_display_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_BtnExit->fn->setBorderType(selfhelp_display_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_display_BtnExit->fn->setHAlignment(selfhelp_display_BtnExit, LE_HALIGN_RIGHT);
    selfhelp_display_BtnExit->fn->setVAlignment(selfhelp_display_BtnExit, LE_VALIGN_TOP);
    selfhelp_display_BtnExit->fn->setMargins(selfhelp_display_BtnExit, 4, 10, 10, 4);
    selfhelp_display_BtnExit->fn->setPressedImage(selfhelp_display_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_display_BtnExit->fn->setReleasedImage(selfhelp_display_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_display_BtnExit->fn->setReleasedEventCallback(selfhelp_display_BtnExit, event_selfhelp_display_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_display_BtnExit);

    selfhelp_display_BtnContactService = leButtonWidget_New();
    selfhelp_display_BtnContactService->fn->setPosition(selfhelp_display_BtnContactService, 9, 200);
    selfhelp_display_BtnContactService->fn->setSize(selfhelp_display_BtnContactService, 140, 40);
    selfhelp_display_BtnContactService->fn->setScheme(selfhelp_display_BtnContactService, &Button_Gray2);
    selfhelp_display_BtnContactService->fn->setBackgroundType(selfhelp_display_BtnContactService, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_BtnContactService->fn->setBorderType(selfhelp_display_BtnContactService, LE_WIDGET_BORDER_NONE);
    selfhelp_display_BtnContactService->fn->setMargins(selfhelp_display_BtnContactService, 0, 0, 0, 0);
    selfhelp_display_BtnContactService->fn->setString(selfhelp_display_BtnContactService, (leString*)&string_CONTACT_ContactService);
    selfhelp_display_BtnContactService->fn->setPressedImage(selfhelp_display_BtnContactService, (leImage*)&Contact_service_gray2_border);
    selfhelp_display_BtnContactService->fn->setReleasedImage(selfhelp_display_BtnContactService, (leImage*)&Contact_service_gray2_border);
    selfhelp_display_BtnContactService->fn->setImagePosition(selfhelp_display_BtnContactService, LE_RELATIVE_POSITION_BEHIND);
    selfhelp_display_BtnContactService->fn->setImageMargin(selfhelp_display_BtnContactService, 0);
    selfhelp_display_BtnContactService->fn->setPressedOffset(selfhelp_display_BtnContactService, 0);
    selfhelp_display_BtnContactService->fn->setReleasedEventCallback(selfhelp_display_BtnContactService, event_selfhelp_display_BtnContactService_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_display_BtnContactService);

    selfhelp_display_BtnHome = leButtonWidget_New();
    selfhelp_display_BtnHome->fn->setPosition(selfhelp_display_BtnHome, 435, 225);
    selfhelp_display_BtnHome->fn->setSize(selfhelp_display_BtnHome, 40, 40);
    selfhelp_display_BtnHome->fn->setScheme(selfhelp_display_BtnHome, &BlackBack);
    selfhelp_display_BtnHome->fn->setBackgroundType(selfhelp_display_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_display_BtnHome->fn->setBorderType(selfhelp_display_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_display_BtnHome->fn->setPressedImage(selfhelp_display_BtnHome, (leImage*)&Menu_home);
    selfhelp_display_BtnHome->fn->setReleasedImage(selfhelp_display_BtnHome, (leImage*)&Menu_home);
    selfhelp_display_BtnHome->fn->setReleasedEventCallback(selfhelp_display_BtnHome, event_selfhelp_display_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_display_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_display_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_display(void)
{
}

void screenHide_selfhelp_display(void)
{
    selfhelp_display_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_display_Layer_0_FillPanel = NULL;
    selfhelp_display_PanelSelfHelpDisplay = NULL;
    selfhelp_display_LblTitle = NULL;
    selfhelp_display_BtnExit = NULL;
    selfhelp_display_BtnContactService = NULL;
    selfhelp_display_BtnHome = NULL;
    selfhelp_display_LblLine0 = NULL;
    selfhelp_display_LblLine1 = NULL;
    selfhelp_display_LblLine2 = NULL;
    selfhelp_display_LblLine3 = NULL;
    selfhelp_display_LblLine4 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_display(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_display(uint32_t lyrIdx)
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

