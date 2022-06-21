#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_water.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_water_Layer_0_FillPanel;
leLabelWidget* selfhelp_water_LblTitle;
leButtonWidget* selfhelp_water_BtnHome;
leButtonWidget* selfhelp_water_BtnNoWater;
leButtonWidget* selfhelp_water_BtnLowWaterFlow;
leButtonWidget* selfhelp_water_BtnWarmWater;
leButtonWidget* selfhelp_water_BtnOffLooking;
leButtonWidget* selfhelp_water_BtnExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_water(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_water(void)
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

    selfhelp_water_Layer_0_FillPanel = leWidget_New();
    selfhelp_water_Layer_0_FillPanel->fn->setPosition(selfhelp_water_Layer_0_FillPanel, 0, 0);
    selfhelp_water_Layer_0_FillPanel->fn->setSize(selfhelp_water_Layer_0_FillPanel, 480, 272);
    selfhelp_water_Layer_0_FillPanel->fn->setScheme(selfhelp_water_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)selfhelp_water_Layer_0_FillPanel);

    selfhelp_water_LblTitle = leLabelWidget_New();
    selfhelp_water_LblTitle->fn->setPosition(selfhelp_water_LblTitle, 10, 5);
    selfhelp_water_LblTitle->fn->setSize(selfhelp_water_LblTitle, 380, 30);
    selfhelp_water_LblTitle->fn->setScheme(selfhelp_water_LblTitle, &Label_FontBlack);
    selfhelp_water_LblTitle->fn->setBackgroundType(selfhelp_water_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_water_LblTitle->fn->setString(selfhelp_water_LblTitle, (leString*)&string_SELFHELP1_WaterTroubleshooting);
    root1->fn->addChild(root1, (leWidget*)selfhelp_water_LblTitle);

    selfhelp_water_BtnHome = leButtonWidget_New();
    selfhelp_water_BtnHome->fn->setPosition(selfhelp_water_BtnHome, 435, 225);
    selfhelp_water_BtnHome->fn->setSize(selfhelp_water_BtnHome, 40, 40);
    selfhelp_water_BtnHome->fn->setScheme(selfhelp_water_BtnHome, &BlackBack);
    selfhelp_water_BtnHome->fn->setBackgroundType(selfhelp_water_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_water_BtnHome->fn->setBorderType(selfhelp_water_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_water_BtnHome->fn->setPressedImage(selfhelp_water_BtnHome, (leImage*)&Menu_home);
    selfhelp_water_BtnHome->fn->setReleasedImage(selfhelp_water_BtnHome, (leImage*)&Menu_home);
    selfhelp_water_BtnHome->fn->setReleasedEventCallback(selfhelp_water_BtnHome, event_selfhelp_water_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_water_BtnHome);

    selfhelp_water_BtnNoWater = leButtonWidget_New();
    selfhelp_water_BtnNoWater->fn->setPosition(selfhelp_water_BtnNoWater, 15, 45);
    selfhelp_water_BtnNoWater->fn->setSize(selfhelp_water_BtnNoWater, 360, 50);
    selfhelp_water_BtnNoWater->fn->setScheme(selfhelp_water_BtnNoWater, &Button_Gray2);
    selfhelp_water_BtnNoWater->fn->setBorderType(selfhelp_water_BtnNoWater, LE_WIDGET_BORDER_NONE);
    selfhelp_water_BtnNoWater->fn->setHAlignment(selfhelp_water_BtnNoWater, LE_HALIGN_LEFT);
    selfhelp_water_BtnNoWater->fn->setString(selfhelp_water_BtnNoWater, (leString*)&string_SELFHELP1_NoWater);
    selfhelp_water_BtnNoWater->fn->setPressedImage(selfhelp_water_BtnNoWater, (leImage*)&Menu_bar_clear);
    selfhelp_water_BtnNoWater->fn->setReleasedImage(selfhelp_water_BtnNoWater, (leImage*)&Menu_bar_clear);
    selfhelp_water_BtnNoWater->fn->setImageMargin(selfhelp_water_BtnNoWater, 5);
    selfhelp_water_BtnNoWater->fn->setReleasedEventCallback(selfhelp_water_BtnNoWater, event_selfhelp_water_BtnNoWater_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_water_BtnNoWater);

    selfhelp_water_BtnLowWaterFlow = leButtonWidget_New();
    selfhelp_water_BtnLowWaterFlow->fn->setPosition(selfhelp_water_BtnLowWaterFlow, 15, 99);
    selfhelp_water_BtnLowWaterFlow->fn->setSize(selfhelp_water_BtnLowWaterFlow, 360, 50);
    selfhelp_water_BtnLowWaterFlow->fn->setScheme(selfhelp_water_BtnLowWaterFlow, &Button_Gray2);
    selfhelp_water_BtnLowWaterFlow->fn->setBorderType(selfhelp_water_BtnLowWaterFlow, LE_WIDGET_BORDER_NONE);
    selfhelp_water_BtnLowWaterFlow->fn->setHAlignment(selfhelp_water_BtnLowWaterFlow, LE_HALIGN_LEFT);
    selfhelp_water_BtnLowWaterFlow->fn->setString(selfhelp_water_BtnLowWaterFlow, (leString*)&string_SELFHELP1_LowWaterFlow);
    selfhelp_water_BtnLowWaterFlow->fn->setPressedImage(selfhelp_water_BtnLowWaterFlow, (leImage*)&Menu_bar_clear);
    selfhelp_water_BtnLowWaterFlow->fn->setReleasedImage(selfhelp_water_BtnLowWaterFlow, (leImage*)&Menu_bar_clear);
    selfhelp_water_BtnLowWaterFlow->fn->setImageMargin(selfhelp_water_BtnLowWaterFlow, 5);
    selfhelp_water_BtnLowWaterFlow->fn->setReleasedEventCallback(selfhelp_water_BtnLowWaterFlow, event_selfhelp_water_BtnLowWaterFlow_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_water_BtnLowWaterFlow);

    selfhelp_water_BtnWarmWater = leButtonWidget_New();
    selfhelp_water_BtnWarmWater->fn->setPosition(selfhelp_water_BtnWarmWater, 15, 153);
    selfhelp_water_BtnWarmWater->fn->setSize(selfhelp_water_BtnWarmWater, 360, 50);
    selfhelp_water_BtnWarmWater->fn->setScheme(selfhelp_water_BtnWarmWater, &Button_Gray2);
    selfhelp_water_BtnWarmWater->fn->setBorderType(selfhelp_water_BtnWarmWater, LE_WIDGET_BORDER_NONE);
    selfhelp_water_BtnWarmWater->fn->setHAlignment(selfhelp_water_BtnWarmWater, LE_HALIGN_LEFT);
    selfhelp_water_BtnWarmWater->fn->setString(selfhelp_water_BtnWarmWater, (leString*)&string_SELFHELP1_WarmWater);
    selfhelp_water_BtnWarmWater->fn->setPressedImage(selfhelp_water_BtnWarmWater, (leImage*)&Menu_bar_clear);
    selfhelp_water_BtnWarmWater->fn->setReleasedImage(selfhelp_water_BtnWarmWater, (leImage*)&Menu_bar_clear);
    selfhelp_water_BtnWarmWater->fn->setImageMargin(selfhelp_water_BtnWarmWater, 5);
    selfhelp_water_BtnWarmWater->fn->setReleasedEventCallback(selfhelp_water_BtnWarmWater, event_selfhelp_water_BtnWarmWater_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_water_BtnWarmWater);

    selfhelp_water_BtnOffLooking = leButtonWidget_New();
    selfhelp_water_BtnOffLooking->fn->setPosition(selfhelp_water_BtnOffLooking, 15, 207);
    selfhelp_water_BtnOffLooking->fn->setSize(selfhelp_water_BtnOffLooking, 360, 50);
    selfhelp_water_BtnOffLooking->fn->setScheme(selfhelp_water_BtnOffLooking, &Button_Gray2);
    selfhelp_water_BtnOffLooking->fn->setBorderType(selfhelp_water_BtnOffLooking, LE_WIDGET_BORDER_NONE);
    selfhelp_water_BtnOffLooking->fn->setHAlignment(selfhelp_water_BtnOffLooking, LE_HALIGN_LEFT);
    selfhelp_water_BtnOffLooking->fn->setString(selfhelp_water_BtnOffLooking, (leString*)&string_SELFHELP1_OffLooking);
    selfhelp_water_BtnOffLooking->fn->setPressedImage(selfhelp_water_BtnOffLooking, (leImage*)&Menu_bar_clear);
    selfhelp_water_BtnOffLooking->fn->setReleasedImage(selfhelp_water_BtnOffLooking, (leImage*)&Menu_bar_clear);
    selfhelp_water_BtnOffLooking->fn->setImageMargin(selfhelp_water_BtnOffLooking, 5);
    selfhelp_water_BtnOffLooking->fn->setReleasedEventCallback(selfhelp_water_BtnOffLooking, event_selfhelp_water_BtnOffLooking_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_water_BtnOffLooking);

    selfhelp_water_BtnExit = leButtonWidget_New();
    selfhelp_water_BtnExit->fn->setPosition(selfhelp_water_BtnExit, 415, 2);
    selfhelp_water_BtnExit->fn->setSize(selfhelp_water_BtnExit, 60, 90);
    selfhelp_water_BtnExit->fn->setScheme(selfhelp_water_BtnExit, &BlackBack);
    selfhelp_water_BtnExit->fn->setBackgroundType(selfhelp_water_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_water_BtnExit->fn->setBorderType(selfhelp_water_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_water_BtnExit->fn->setHAlignment(selfhelp_water_BtnExit, LE_HALIGN_RIGHT);
    selfhelp_water_BtnExit->fn->setVAlignment(selfhelp_water_BtnExit, LE_VALIGN_TOP);
    selfhelp_water_BtnExit->fn->setMargins(selfhelp_water_BtnExit, 4, 10, 10, 4);
    selfhelp_water_BtnExit->fn->setPressedImage(selfhelp_water_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_water_BtnExit->fn->setReleasedImage(selfhelp_water_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_water_BtnExit->fn->setReleasedEventCallback(selfhelp_water_BtnExit, event_selfhelp_water_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_water_BtnExit);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_water_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_water(void)
{
}

void screenHide_selfhelp_water(void)
{
    selfhelp_water_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_water_Layer_0_FillPanel = NULL;
    selfhelp_water_LblTitle = NULL;
    selfhelp_water_BtnHome = NULL;
    selfhelp_water_BtnNoWater = NULL;
    selfhelp_water_BtnLowWaterFlow = NULL;
    selfhelp_water_BtnWarmWater = NULL;
    selfhelp_water_BtnOffLooking = NULL;
    selfhelp_water_BtnExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_water(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_water(uint32_t lyrIdx)
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

