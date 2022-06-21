#include "gfx/legato/generated/screen/le_gen_screen_troubleshoot_display.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* troubleshoot_display_Layer_0_FillPanel;
leLabelWidget* troubleshoot_display_LblTitle;
leWidget* troubleshoot_display_PanelTroubleshootDisplay;
leButtonWidget* troubleshoot_display_BtnExit;
leButtonWidget* troubleshoot_display_BtnHome;
leLabelWidget* troubleshoot_display_LblLine0;
leLabelWidget* troubleshoot_display_LblLine1;
leLabelWidget* troubleshoot_display_LblLine2;
leLabelWidget* troubleshoot_display_LblLine3;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_troubleshoot_display(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_troubleshoot_display(void)
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

    troubleshoot_display_Layer_0_FillPanel = leWidget_New();
    troubleshoot_display_Layer_0_FillPanel->fn->setPosition(troubleshoot_display_Layer_0_FillPanel, 0, 0);
    troubleshoot_display_Layer_0_FillPanel->fn->setSize(troubleshoot_display_Layer_0_FillPanel, 480, 272);
    troubleshoot_display_Layer_0_FillPanel->fn->setScheme(troubleshoot_display_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_display_Layer_0_FillPanel);

    troubleshoot_display_LblTitle = leLabelWidget_New();
    troubleshoot_display_LblTitle->fn->setPosition(troubleshoot_display_LblTitle, 10, 5);
    troubleshoot_display_LblTitle->fn->setSize(troubleshoot_display_LblTitle, 380, 30);
    troubleshoot_display_LblTitle->fn->setScheme(troubleshoot_display_LblTitle, &Label_FontBlack);
    troubleshoot_display_LblTitle->fn->setBackgroundType(troubleshoot_display_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_display_LblTitle->fn->setString(troubleshoot_display_LblTitle, (leString*)&string_TROUBLESHOOT_DISP_Title);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_display_LblTitle);

    troubleshoot_display_PanelTroubleshootDisplay = leWidget_New();
    troubleshoot_display_PanelTroubleshootDisplay->fn->setPosition(troubleshoot_display_PanelTroubleshootDisplay, 10, 45);
    troubleshoot_display_PanelTroubleshootDisplay->fn->setSize(troubleshoot_display_PanelTroubleshootDisplay, 425, 184);
    troubleshoot_display_PanelTroubleshootDisplay->fn->setScheme(troubleshoot_display_PanelTroubleshootDisplay, &Panel_Gray4);
    troubleshoot_display_PanelTroubleshootDisplay->fn->setHAlignment(troubleshoot_display_PanelTroubleshootDisplay, LE_HALIGN_RIGHT);
    troubleshoot_display_PanelTroubleshootDisplay->fn->setVAlignment(troubleshoot_display_PanelTroubleshootDisplay, LE_VALIGN_BOTTOM);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_display_PanelTroubleshootDisplay);

    troubleshoot_display_LblLine0 = leLabelWidget_New();
    troubleshoot_display_LblLine0->fn->setPosition(troubleshoot_display_LblLine0, 0, 0);
    troubleshoot_display_LblLine0->fn->setSize(troubleshoot_display_LblLine0, 424, 30);
    troubleshoot_display_LblLine0->fn->setScheme(troubleshoot_display_LblLine0, &Label_FontBlack);
    troubleshoot_display_LblLine0->fn->setBackgroundType(troubleshoot_display_LblLine0, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_display_LblLine0->fn->setString(troubleshoot_display_LblLine0, (leString*)&string_TROUBLESHOOT_DISP_Line1);
    troubleshoot_display_PanelTroubleshootDisplay->fn->addChild(troubleshoot_display_PanelTroubleshootDisplay, (leWidget*)troubleshoot_display_LblLine0);

    troubleshoot_display_LblLine1 = leLabelWidget_New();
    troubleshoot_display_LblLine1->fn->setPosition(troubleshoot_display_LblLine1, 0, 30);
    troubleshoot_display_LblLine1->fn->setSize(troubleshoot_display_LblLine1, 425, 30);
    troubleshoot_display_LblLine1->fn->setScheme(troubleshoot_display_LblLine1, &Label_FontBlack);
    troubleshoot_display_LblLine1->fn->setBackgroundType(troubleshoot_display_LblLine1, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_display_LblLine1->fn->setString(troubleshoot_display_LblLine1, (leString*)&string_TROUBLESHOOT_DISP_Line2);
    troubleshoot_display_PanelTroubleshootDisplay->fn->addChild(troubleshoot_display_PanelTroubleshootDisplay, (leWidget*)troubleshoot_display_LblLine1);

    troubleshoot_display_LblLine2 = leLabelWidget_New();
    troubleshoot_display_LblLine2->fn->setPosition(troubleshoot_display_LblLine2, 0, 60);
    troubleshoot_display_LblLine2->fn->setSize(troubleshoot_display_LblLine2, 425, 30);
    troubleshoot_display_LblLine2->fn->setScheme(troubleshoot_display_LblLine2, &Label_FontBlack);
    troubleshoot_display_LblLine2->fn->setBackgroundType(troubleshoot_display_LblLine2, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_display_LblLine2->fn->setString(troubleshoot_display_LblLine2, (leString*)&string_TROUBLESHOOT_DISP_Line3);
    troubleshoot_display_PanelTroubleshootDisplay->fn->addChild(troubleshoot_display_PanelTroubleshootDisplay, (leWidget*)troubleshoot_display_LblLine2);

    troubleshoot_display_LblLine3 = leLabelWidget_New();
    troubleshoot_display_LblLine3->fn->setPosition(troubleshoot_display_LblLine3, 0, 90);
    troubleshoot_display_LblLine3->fn->setSize(troubleshoot_display_LblLine3, 425, 30);
    troubleshoot_display_LblLine3->fn->setScheme(troubleshoot_display_LblLine3, &Label_FontBlack);
    troubleshoot_display_LblLine3->fn->setBackgroundType(troubleshoot_display_LblLine3, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_display_LblLine3->fn->setString(troubleshoot_display_LblLine3, (leString*)&string_TROUBLESHOOT_DISP_Line4);
    troubleshoot_display_PanelTroubleshootDisplay->fn->addChild(troubleshoot_display_PanelTroubleshootDisplay, (leWidget*)troubleshoot_display_LblLine3);

    troubleshoot_display_BtnExit = leButtonWidget_New();
    troubleshoot_display_BtnExit->fn->setPosition(troubleshoot_display_BtnExit, 415, 2);
    troubleshoot_display_BtnExit->fn->setSize(troubleshoot_display_BtnExit, 60, 60);
    troubleshoot_display_BtnExit->fn->setScheme(troubleshoot_display_BtnExit, &BlackBack);
    troubleshoot_display_BtnExit->fn->setBackgroundType(troubleshoot_display_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_display_BtnExit->fn->setBorderType(troubleshoot_display_BtnExit, LE_WIDGET_BORDER_NONE);
    troubleshoot_display_BtnExit->fn->setHAlignment(troubleshoot_display_BtnExit, LE_HALIGN_RIGHT);
    troubleshoot_display_BtnExit->fn->setVAlignment(troubleshoot_display_BtnExit, LE_VALIGN_TOP);
    troubleshoot_display_BtnExit->fn->setMargins(troubleshoot_display_BtnExit, 4, 10, 10, 4);
    troubleshoot_display_BtnExit->fn->setPressedImage(troubleshoot_display_BtnExit, (leImage*)&Menu_exit_black);
    troubleshoot_display_BtnExit->fn->setReleasedImage(troubleshoot_display_BtnExit, (leImage*)&Menu_exit_black);
    troubleshoot_display_BtnExit->fn->setReleasedEventCallback(troubleshoot_display_BtnExit, event_troubleshoot_display_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_display_BtnExit);

    troubleshoot_display_BtnHome = leButtonWidget_New();
    troubleshoot_display_BtnHome->fn->setPosition(troubleshoot_display_BtnHome, 435, 225);
    troubleshoot_display_BtnHome->fn->setSize(troubleshoot_display_BtnHome, 40, 40);
    troubleshoot_display_BtnHome->fn->setScheme(troubleshoot_display_BtnHome, &BlackBack);
    troubleshoot_display_BtnHome->fn->setBackgroundType(troubleshoot_display_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    troubleshoot_display_BtnHome->fn->setBorderType(troubleshoot_display_BtnHome, LE_WIDGET_BORDER_NONE);
    troubleshoot_display_BtnHome->fn->setPressedImage(troubleshoot_display_BtnHome, (leImage*)&Menu_home);
    troubleshoot_display_BtnHome->fn->setReleasedImage(troubleshoot_display_BtnHome, (leImage*)&Menu_home);
    troubleshoot_display_BtnHome->fn->setReleasedEventCallback(troubleshoot_display_BtnHome, event_troubleshoot_display_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)troubleshoot_display_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    troubleshoot_display_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_troubleshoot_display(void)
{
}

void screenHide_troubleshoot_display(void)
{
    troubleshoot_display_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    troubleshoot_display_Layer_0_FillPanel = NULL;
    troubleshoot_display_LblTitle = NULL;
    troubleshoot_display_PanelTroubleshootDisplay = NULL;
    troubleshoot_display_BtnExit = NULL;
    troubleshoot_display_BtnHome = NULL;
    troubleshoot_display_LblLine0 = NULL;
    troubleshoot_display_LblLine1 = NULL;
    troubleshoot_display_LblLine2 = NULL;
    troubleshoot_display_LblLine3 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_troubleshoot_display(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_troubleshoot_display(uint32_t lyrIdx)
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

