#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_hotwater.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_hotwater_Layer_0_FillPanel;
leLabelWidget* selfhelp_hotwater_LblTitle;
leButtonWidget* selfhelp_hotwater_BtnHome;
leButtonWidget* selfhelp_hotwater_BtnNoWater;
leButtonWidget* selfhelp_hotwater_BtnNoHotWater;
leButtonWidget* selfhelp_hotwater_BtnExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_hotwater(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_hotwater(void)
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

    selfhelp_hotwater_Layer_0_FillPanel = leWidget_New();
    selfhelp_hotwater_Layer_0_FillPanel->fn->setPosition(selfhelp_hotwater_Layer_0_FillPanel, 0, 0);
    selfhelp_hotwater_Layer_0_FillPanel->fn->setSize(selfhelp_hotwater_Layer_0_FillPanel, 480, 272);
    selfhelp_hotwater_Layer_0_FillPanel->fn->setScheme(selfhelp_hotwater_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)selfhelp_hotwater_Layer_0_FillPanel);

    selfhelp_hotwater_LblTitle = leLabelWidget_New();
    selfhelp_hotwater_LblTitle->fn->setPosition(selfhelp_hotwater_LblTitle, 10, 5);
    selfhelp_hotwater_LblTitle->fn->setSize(selfhelp_hotwater_LblTitle, 380, 30);
    selfhelp_hotwater_LblTitle->fn->setScheme(selfhelp_hotwater_LblTitle, &Label_FontBlack);
    selfhelp_hotwater_LblTitle->fn->setBackgroundType(selfhelp_hotwater_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_hotwater_LblTitle->fn->setString(selfhelp_hotwater_LblTitle, (leString*)&string_SELFHELP4_HotWaterTroubleshooting);
    root1->fn->addChild(root1, (leWidget*)selfhelp_hotwater_LblTitle);

    selfhelp_hotwater_BtnHome = leButtonWidget_New();
    selfhelp_hotwater_BtnHome->fn->setPosition(selfhelp_hotwater_BtnHome, 435, 225);
    selfhelp_hotwater_BtnHome->fn->setSize(selfhelp_hotwater_BtnHome, 40, 40);
    selfhelp_hotwater_BtnHome->fn->setScheme(selfhelp_hotwater_BtnHome, &BlackBack);
    selfhelp_hotwater_BtnHome->fn->setBackgroundType(selfhelp_hotwater_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_hotwater_BtnHome->fn->setBorderType(selfhelp_hotwater_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_hotwater_BtnHome->fn->setPressedImage(selfhelp_hotwater_BtnHome, (leImage*)&Menu_home);
    selfhelp_hotwater_BtnHome->fn->setReleasedImage(selfhelp_hotwater_BtnHome, (leImage*)&Menu_home);
    selfhelp_hotwater_BtnHome->fn->setReleasedEventCallback(selfhelp_hotwater_BtnHome, event_selfhelp_hotwater_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_hotwater_BtnHome);

    selfhelp_hotwater_BtnNoWater = leButtonWidget_New();
    selfhelp_hotwater_BtnNoWater->fn->setPosition(selfhelp_hotwater_BtnNoWater, 15, 45);
    selfhelp_hotwater_BtnNoWater->fn->setSize(selfhelp_hotwater_BtnNoWater, 360, 50);
    selfhelp_hotwater_BtnNoWater->fn->setScheme(selfhelp_hotwater_BtnNoWater, &Button_Gray2);
    selfhelp_hotwater_BtnNoWater->fn->setBorderType(selfhelp_hotwater_BtnNoWater, LE_WIDGET_BORDER_NONE);
    selfhelp_hotwater_BtnNoWater->fn->setHAlignment(selfhelp_hotwater_BtnNoWater, LE_HALIGN_LEFT);
    selfhelp_hotwater_BtnNoWater->fn->setString(selfhelp_hotwater_BtnNoWater, (leString*)&string_SELFHELP4_NoWater);
    selfhelp_hotwater_BtnNoWater->fn->setPressedImage(selfhelp_hotwater_BtnNoWater, (leImage*)&Menu_bar_clear);
    selfhelp_hotwater_BtnNoWater->fn->setReleasedImage(selfhelp_hotwater_BtnNoWater, (leImage*)&Menu_bar_clear);
    selfhelp_hotwater_BtnNoWater->fn->setImageMargin(selfhelp_hotwater_BtnNoWater, 5);
    selfhelp_hotwater_BtnNoWater->fn->setPressedEventCallback(selfhelp_hotwater_BtnNoWater, event_selfhelp_hotwater_BtnNoWater_OnPressed);
    selfhelp_hotwater_BtnNoWater->fn->setReleasedEventCallback(selfhelp_hotwater_BtnNoWater, event_selfhelp_hotwater_BtnNoWater_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_hotwater_BtnNoWater);

    selfhelp_hotwater_BtnNoHotWater = leButtonWidget_New();
    selfhelp_hotwater_BtnNoHotWater->fn->setPosition(selfhelp_hotwater_BtnNoHotWater, 15, 99);
    selfhelp_hotwater_BtnNoHotWater->fn->setSize(selfhelp_hotwater_BtnNoHotWater, 360, 50);
    selfhelp_hotwater_BtnNoHotWater->fn->setScheme(selfhelp_hotwater_BtnNoHotWater, &Button_Gray2);
    selfhelp_hotwater_BtnNoHotWater->fn->setBorderType(selfhelp_hotwater_BtnNoHotWater, LE_WIDGET_BORDER_NONE);
    selfhelp_hotwater_BtnNoHotWater->fn->setHAlignment(selfhelp_hotwater_BtnNoHotWater, LE_HALIGN_LEFT);
    selfhelp_hotwater_BtnNoHotWater->fn->setString(selfhelp_hotwater_BtnNoHotWater, (leString*)&string_SELFHELP4_NoHotWater);
    selfhelp_hotwater_BtnNoHotWater->fn->setPressedImage(selfhelp_hotwater_BtnNoHotWater, (leImage*)&Menu_bar_clear);
    selfhelp_hotwater_BtnNoHotWater->fn->setReleasedImage(selfhelp_hotwater_BtnNoHotWater, (leImage*)&Menu_bar_clear);
    selfhelp_hotwater_BtnNoHotWater->fn->setImageMargin(selfhelp_hotwater_BtnNoHotWater, 5);
    selfhelp_hotwater_BtnNoHotWater->fn->setPressedEventCallback(selfhelp_hotwater_BtnNoHotWater, event_selfhelp_hotwater_BtnNoHotWater_OnPressed);
    selfhelp_hotwater_BtnNoHotWater->fn->setReleasedEventCallback(selfhelp_hotwater_BtnNoHotWater, event_selfhelp_hotwater_BtnNoHotWater_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_hotwater_BtnNoHotWater);

    selfhelp_hotwater_BtnExit = leButtonWidget_New();
    selfhelp_hotwater_BtnExit->fn->setPosition(selfhelp_hotwater_BtnExit, 415, 2);
    selfhelp_hotwater_BtnExit->fn->setSize(selfhelp_hotwater_BtnExit, 60, 90);
    selfhelp_hotwater_BtnExit->fn->setScheme(selfhelp_hotwater_BtnExit, &BlackBack);
    selfhelp_hotwater_BtnExit->fn->setBackgroundType(selfhelp_hotwater_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_hotwater_BtnExit->fn->setBorderType(selfhelp_hotwater_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_hotwater_BtnExit->fn->setHAlignment(selfhelp_hotwater_BtnExit, LE_HALIGN_RIGHT);
    selfhelp_hotwater_BtnExit->fn->setVAlignment(selfhelp_hotwater_BtnExit, LE_VALIGN_TOP);
    selfhelp_hotwater_BtnExit->fn->setMargins(selfhelp_hotwater_BtnExit, 4, 10, 10, 4);
    selfhelp_hotwater_BtnExit->fn->setPressedImage(selfhelp_hotwater_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_hotwater_BtnExit->fn->setReleasedImage(selfhelp_hotwater_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_hotwater_BtnExit->fn->setReleasedEventCallback(selfhelp_hotwater_BtnExit, event_selfhelp_hotwater_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_hotwater_BtnExit);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_hotwater_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_hotwater(void)
{
}

void screenHide_selfhelp_hotwater(void)
{
    selfhelp_hotwater_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_hotwater_Layer_0_FillPanel = NULL;
    selfhelp_hotwater_LblTitle = NULL;
    selfhelp_hotwater_BtnHome = NULL;
    selfhelp_hotwater_BtnNoWater = NULL;
    selfhelp_hotwater_BtnNoHotWater = NULL;
    selfhelp_hotwater_BtnExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_hotwater(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_hotwater(uint32_t lyrIdx)
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

