#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_ice.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_ice_Layer_0_FillPanel;
leLabelWidget* selfhelp_ice_LblTitle;
leButtonWidget* selfhelp_ice_BtnHome;
leButtonWidget* selfhelp_ice_BtnNoIce;
leButtonWidget* selfhelp_ice_BtnExit;
leButtonWidget* selfhelp_ice_BtnSoftIce;
leButtonWidget* selfhelp_ice_BtnOffLooking;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_ice(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_ice(void)
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

    selfhelp_ice_Layer_0_FillPanel = leWidget_New();
    selfhelp_ice_Layer_0_FillPanel->fn->setPosition(selfhelp_ice_Layer_0_FillPanel, 0, 0);
    selfhelp_ice_Layer_0_FillPanel->fn->setSize(selfhelp_ice_Layer_0_FillPanel, 480, 272);
    selfhelp_ice_Layer_0_FillPanel->fn->setScheme(selfhelp_ice_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)selfhelp_ice_Layer_0_FillPanel);

    selfhelp_ice_LblTitle = leLabelWidget_New();
    selfhelp_ice_LblTitle->fn->setPosition(selfhelp_ice_LblTitle, 10, 5);
    selfhelp_ice_LblTitle->fn->setSize(selfhelp_ice_LblTitle, 380, 30);
    selfhelp_ice_LblTitle->fn->setScheme(selfhelp_ice_LblTitle, &Label_FontBlack);
    selfhelp_ice_LblTitle->fn->setBackgroundType(selfhelp_ice_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_ice_LblTitle->fn->setString(selfhelp_ice_LblTitle, (leString*)&string_SELFHELP2_IceTroubleshooting);
    root1->fn->addChild(root1, (leWidget*)selfhelp_ice_LblTitle);

    selfhelp_ice_BtnHome = leButtonWidget_New();
    selfhelp_ice_BtnHome->fn->setPosition(selfhelp_ice_BtnHome, 435, 225);
    selfhelp_ice_BtnHome->fn->setSize(selfhelp_ice_BtnHome, 40, 40);
    selfhelp_ice_BtnHome->fn->setScheme(selfhelp_ice_BtnHome, &BlackBack);
    selfhelp_ice_BtnHome->fn->setBackgroundType(selfhelp_ice_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_ice_BtnHome->fn->setBorderType(selfhelp_ice_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_ice_BtnHome->fn->setPressedImage(selfhelp_ice_BtnHome, (leImage*)&Menu_home);
    selfhelp_ice_BtnHome->fn->setReleasedImage(selfhelp_ice_BtnHome, (leImage*)&Menu_home);
    selfhelp_ice_BtnHome->fn->setReleasedEventCallback(selfhelp_ice_BtnHome, event_selfhelp_ice_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_ice_BtnHome);

    selfhelp_ice_BtnNoIce = leButtonWidget_New();
    selfhelp_ice_BtnNoIce->fn->setPosition(selfhelp_ice_BtnNoIce, 15, 45);
    selfhelp_ice_BtnNoIce->fn->setSize(selfhelp_ice_BtnNoIce, 360, 50);
    selfhelp_ice_BtnNoIce->fn->setScheme(selfhelp_ice_BtnNoIce, &Button_Gray2);
    selfhelp_ice_BtnNoIce->fn->setBorderType(selfhelp_ice_BtnNoIce, LE_WIDGET_BORDER_NONE);
    selfhelp_ice_BtnNoIce->fn->setHAlignment(selfhelp_ice_BtnNoIce, LE_HALIGN_LEFT);
    selfhelp_ice_BtnNoIce->fn->setString(selfhelp_ice_BtnNoIce, (leString*)&string_SELFHELP2_NoIce);
    selfhelp_ice_BtnNoIce->fn->setPressedImage(selfhelp_ice_BtnNoIce, (leImage*)&Menu_bar_clear);
    selfhelp_ice_BtnNoIce->fn->setReleasedImage(selfhelp_ice_BtnNoIce, (leImage*)&Menu_bar_clear);
    selfhelp_ice_BtnNoIce->fn->setImageMargin(selfhelp_ice_BtnNoIce, 5);
    selfhelp_ice_BtnNoIce->fn->setPressedEventCallback(selfhelp_ice_BtnNoIce, event_selfhelp_ice_BtnNoIce_OnPressed);
    selfhelp_ice_BtnNoIce->fn->setReleasedEventCallback(selfhelp_ice_BtnNoIce, event_selfhelp_ice_BtnNoIce_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_ice_BtnNoIce);

    selfhelp_ice_BtnExit = leButtonWidget_New();
    selfhelp_ice_BtnExit->fn->setPosition(selfhelp_ice_BtnExit, 415, 2);
    selfhelp_ice_BtnExit->fn->setSize(selfhelp_ice_BtnExit, 60, 90);
    selfhelp_ice_BtnExit->fn->setScheme(selfhelp_ice_BtnExit, &BlackBack);
    selfhelp_ice_BtnExit->fn->setBackgroundType(selfhelp_ice_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_ice_BtnExit->fn->setBorderType(selfhelp_ice_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_ice_BtnExit->fn->setHAlignment(selfhelp_ice_BtnExit, LE_HALIGN_RIGHT);
    selfhelp_ice_BtnExit->fn->setVAlignment(selfhelp_ice_BtnExit, LE_VALIGN_TOP);
    selfhelp_ice_BtnExit->fn->setMargins(selfhelp_ice_BtnExit, 4, 10, 10, 4);
    selfhelp_ice_BtnExit->fn->setPressedImage(selfhelp_ice_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_ice_BtnExit->fn->setReleasedImage(selfhelp_ice_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_ice_BtnExit->fn->setReleasedEventCallback(selfhelp_ice_BtnExit, event_selfhelp_ice_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_ice_BtnExit);

    selfhelp_ice_BtnSoftIce = leButtonWidget_New();
    selfhelp_ice_BtnSoftIce->fn->setPosition(selfhelp_ice_BtnSoftIce, 15, 153);
    selfhelp_ice_BtnSoftIce->fn->setSize(selfhelp_ice_BtnSoftIce, 360, 50);
    selfhelp_ice_BtnSoftIce->fn->setScheme(selfhelp_ice_BtnSoftIce, &Button_Gray2);
    selfhelp_ice_BtnSoftIce->fn->setBorderType(selfhelp_ice_BtnSoftIce, LE_WIDGET_BORDER_NONE);
    selfhelp_ice_BtnSoftIce->fn->setHAlignment(selfhelp_ice_BtnSoftIce, LE_HALIGN_LEFT);
    selfhelp_ice_BtnSoftIce->fn->setString(selfhelp_ice_BtnSoftIce, (leString*)&string_SELFHELP2_SoftIce);
    selfhelp_ice_BtnSoftIce->fn->setPressedImage(selfhelp_ice_BtnSoftIce, (leImage*)&Menu_bar_clear);
    selfhelp_ice_BtnSoftIce->fn->setReleasedImage(selfhelp_ice_BtnSoftIce, (leImage*)&Menu_bar_clear);
    selfhelp_ice_BtnSoftIce->fn->setImageMargin(selfhelp_ice_BtnSoftIce, 5);
    selfhelp_ice_BtnSoftIce->fn->setPressedEventCallback(selfhelp_ice_BtnSoftIce, event_selfhelp_ice_BtnSoftIce_OnPressed);
    selfhelp_ice_BtnSoftIce->fn->setReleasedEventCallback(selfhelp_ice_BtnSoftIce, event_selfhelp_ice_BtnSoftIce_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_ice_BtnSoftIce);

    selfhelp_ice_BtnOffLooking = leButtonWidget_New();
    selfhelp_ice_BtnOffLooking->fn->setPosition(selfhelp_ice_BtnOffLooking, 15, 99);
    selfhelp_ice_BtnOffLooking->fn->setSize(selfhelp_ice_BtnOffLooking, 360, 50);
    selfhelp_ice_BtnOffLooking->fn->setScheme(selfhelp_ice_BtnOffLooking, &Button_Gray2);
    selfhelp_ice_BtnOffLooking->fn->setBorderType(selfhelp_ice_BtnOffLooking, LE_WIDGET_BORDER_NONE);
    selfhelp_ice_BtnOffLooking->fn->setHAlignment(selfhelp_ice_BtnOffLooking, LE_HALIGN_LEFT);
    selfhelp_ice_BtnOffLooking->fn->setString(selfhelp_ice_BtnOffLooking, (leString*)&string_SELFHELP2_OffLooking);
    selfhelp_ice_BtnOffLooking->fn->setPressedImage(selfhelp_ice_BtnOffLooking, (leImage*)&Menu_bar_clear);
    selfhelp_ice_BtnOffLooking->fn->setReleasedImage(selfhelp_ice_BtnOffLooking, (leImage*)&Menu_bar_clear);
    selfhelp_ice_BtnOffLooking->fn->setImageMargin(selfhelp_ice_BtnOffLooking, 5);
    selfhelp_ice_BtnOffLooking->fn->setPressedEventCallback(selfhelp_ice_BtnOffLooking, event_selfhelp_ice_BtnOffLooking_OnPressed);
    selfhelp_ice_BtnOffLooking->fn->setReleasedEventCallback(selfhelp_ice_BtnOffLooking, event_selfhelp_ice_BtnOffLooking_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_ice_BtnOffLooking);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_ice_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_ice(void)
{
}

void screenHide_selfhelp_ice(void)
{
    selfhelp_ice_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_ice_Layer_0_FillPanel = NULL;
    selfhelp_ice_LblTitle = NULL;
    selfhelp_ice_BtnHome = NULL;
    selfhelp_ice_BtnNoIce = NULL;
    selfhelp_ice_BtnExit = NULL;
    selfhelp_ice_BtnSoftIce = NULL;
    selfhelp_ice_BtnOffLooking = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_ice(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_ice(uint32_t lyrIdx)
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

