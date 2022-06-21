#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_sparkling.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_sparkling_Layer_0_FillPanel;
leLabelWidget* selfhelp_sparkling_LblTitle;
leButtonWidget* selfhelp_sparkling_BtnHome;
leButtonWidget* selfhelp_sparkling_BtnNoSparklingWater;
leButtonWidget* selfhelp_sparkling_BtnWaterNotChilled;
leButtonWidget* selfhelp_sparkling_BtnWaterNotCarbonated;
leButtonWidget* selfhelp_sparkling_BntExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_sparkling(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_sparkling(void)
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

    selfhelp_sparkling_Layer_0_FillPanel = leWidget_New();
    selfhelp_sparkling_Layer_0_FillPanel->fn->setPosition(selfhelp_sparkling_Layer_0_FillPanel, 0, 0);
    selfhelp_sparkling_Layer_0_FillPanel->fn->setSize(selfhelp_sparkling_Layer_0_FillPanel, 480, 272);
    selfhelp_sparkling_Layer_0_FillPanel->fn->setScheme(selfhelp_sparkling_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)selfhelp_sparkling_Layer_0_FillPanel);

    selfhelp_sparkling_LblTitle = leLabelWidget_New();
    selfhelp_sparkling_LblTitle->fn->setPosition(selfhelp_sparkling_LblTitle, 10, 5);
    selfhelp_sparkling_LblTitle->fn->setSize(selfhelp_sparkling_LblTitle, 380, 30);
    selfhelp_sparkling_LblTitle->fn->setScheme(selfhelp_sparkling_LblTitle, &Label_FontBlack);
    selfhelp_sparkling_LblTitle->fn->setBackgroundType(selfhelp_sparkling_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_sparkling_LblTitle->fn->setString(selfhelp_sparkling_LblTitle, (leString*)&string_SELFHELP3_SparklingTroubleshooting);
    root1->fn->addChild(root1, (leWidget*)selfhelp_sparkling_LblTitle);

    selfhelp_sparkling_BtnHome = leButtonWidget_New();
    selfhelp_sparkling_BtnHome->fn->setPosition(selfhelp_sparkling_BtnHome, 435, 225);
    selfhelp_sparkling_BtnHome->fn->setSize(selfhelp_sparkling_BtnHome, 40, 40);
    selfhelp_sparkling_BtnHome->fn->setScheme(selfhelp_sparkling_BtnHome, &BlackBack);
    selfhelp_sparkling_BtnHome->fn->setBackgroundType(selfhelp_sparkling_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_sparkling_BtnHome->fn->setBorderType(selfhelp_sparkling_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_sparkling_BtnHome->fn->setPressedImage(selfhelp_sparkling_BtnHome, (leImage*)&Menu_home);
    selfhelp_sparkling_BtnHome->fn->setReleasedImage(selfhelp_sparkling_BtnHome, (leImage*)&Menu_home);
    selfhelp_sparkling_BtnHome->fn->setReleasedEventCallback(selfhelp_sparkling_BtnHome, event_selfhelp_sparkling_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_sparkling_BtnHome);

    selfhelp_sparkling_BtnNoSparklingWater = leButtonWidget_New();
    selfhelp_sparkling_BtnNoSparklingWater->fn->setPosition(selfhelp_sparkling_BtnNoSparklingWater, 30, 45);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setSize(selfhelp_sparkling_BtnNoSparklingWater, 360, 50);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setScheme(selfhelp_sparkling_BtnNoSparklingWater, &Button_Gray2);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setBorderType(selfhelp_sparkling_BtnNoSparklingWater, LE_WIDGET_BORDER_LINE);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setHAlignment(selfhelp_sparkling_BtnNoSparklingWater, LE_HALIGN_LEFT);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setString(selfhelp_sparkling_BtnNoSparklingWater, (leString*)&string_SELFHELP3_NoSparklingWater);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setPressedImage(selfhelp_sparkling_BtnNoSparklingWater, (leImage*)&Menu_bar_clear);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setReleasedImage(selfhelp_sparkling_BtnNoSparklingWater, (leImage*)&Menu_bar_clear);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setImageMargin(selfhelp_sparkling_BtnNoSparklingWater, 5);
    selfhelp_sparkling_BtnNoSparklingWater->fn->setReleasedEventCallback(selfhelp_sparkling_BtnNoSparklingWater, event_selfhelp_sparkling_BtnNoSparklingWater_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_sparkling_BtnNoSparklingWater);

    selfhelp_sparkling_BtnWaterNotChilled = leButtonWidget_New();
    selfhelp_sparkling_BtnWaterNotChilled->fn->setPosition(selfhelp_sparkling_BtnWaterNotChilled, 30, 99);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setSize(selfhelp_sparkling_BtnWaterNotChilled, 360, 50);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setScheme(selfhelp_sparkling_BtnWaterNotChilled, &Button_Gray2);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setBorderType(selfhelp_sparkling_BtnWaterNotChilled, LE_WIDGET_BORDER_LINE);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setHAlignment(selfhelp_sparkling_BtnWaterNotChilled, LE_HALIGN_LEFT);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setString(selfhelp_sparkling_BtnWaterNotChilled, (leString*)&string_SELFHELP3_WaterNotChilled);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setPressedImage(selfhelp_sparkling_BtnWaterNotChilled, (leImage*)&Menu_bar_clear);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setReleasedImage(selfhelp_sparkling_BtnWaterNotChilled, (leImage*)&Menu_bar_clear);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setImageMargin(selfhelp_sparkling_BtnWaterNotChilled, 5);
    selfhelp_sparkling_BtnWaterNotChilled->fn->setReleasedEventCallback(selfhelp_sparkling_BtnWaterNotChilled, event_selfhelp_sparkling_BtnWaterNotChilled_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_sparkling_BtnWaterNotChilled);

    selfhelp_sparkling_BtnWaterNotCarbonated = leButtonWidget_New();
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setPosition(selfhelp_sparkling_BtnWaterNotCarbonated, 30, 153);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setSize(selfhelp_sparkling_BtnWaterNotCarbonated, 360, 50);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setScheme(selfhelp_sparkling_BtnWaterNotCarbonated, &Button_Gray2);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setBorderType(selfhelp_sparkling_BtnWaterNotCarbonated, LE_WIDGET_BORDER_LINE);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setHAlignment(selfhelp_sparkling_BtnWaterNotCarbonated, LE_HALIGN_LEFT);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setString(selfhelp_sparkling_BtnWaterNotCarbonated, (leString*)&string_SELFHELP3_WaterNotCarbonated);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setPressedImage(selfhelp_sparkling_BtnWaterNotCarbonated, (leImage*)&Menu_bar_clear);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setReleasedImage(selfhelp_sparkling_BtnWaterNotCarbonated, (leImage*)&Menu_bar_clear);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setImageMargin(selfhelp_sparkling_BtnWaterNotCarbonated, 5);
    selfhelp_sparkling_BtnWaterNotCarbonated->fn->setReleasedEventCallback(selfhelp_sparkling_BtnWaterNotCarbonated, event_selfhelp_sparkling_BtnWaterNotCarbonated_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_sparkling_BtnWaterNotCarbonated);

    selfhelp_sparkling_BntExit = leButtonWidget_New();
    selfhelp_sparkling_BntExit->fn->setPosition(selfhelp_sparkling_BntExit, 415, 2);
    selfhelp_sparkling_BntExit->fn->setSize(selfhelp_sparkling_BntExit, 60, 90);
    selfhelp_sparkling_BntExit->fn->setScheme(selfhelp_sparkling_BntExit, &BlackBack);
    selfhelp_sparkling_BntExit->fn->setBackgroundType(selfhelp_sparkling_BntExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_sparkling_BntExit->fn->setBorderType(selfhelp_sparkling_BntExit, LE_WIDGET_BORDER_NONE);
    selfhelp_sparkling_BntExit->fn->setHAlignment(selfhelp_sparkling_BntExit, LE_HALIGN_RIGHT);
    selfhelp_sparkling_BntExit->fn->setVAlignment(selfhelp_sparkling_BntExit, LE_VALIGN_TOP);
    selfhelp_sparkling_BntExit->fn->setMargins(selfhelp_sparkling_BntExit, 4, 10, 10, 4);
    selfhelp_sparkling_BntExit->fn->setPressedImage(selfhelp_sparkling_BntExit, (leImage*)&Menu_exit_black);
    selfhelp_sparkling_BntExit->fn->setReleasedImage(selfhelp_sparkling_BntExit, (leImage*)&Menu_exit_black);
    selfhelp_sparkling_BntExit->fn->setReleasedEventCallback(selfhelp_sparkling_BntExit, event_selfhelp_sparkling_BntExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_sparkling_BntExit);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_sparkling_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_sparkling(void)
{
}

void screenHide_selfhelp_sparkling(void)
{
    selfhelp_sparkling_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_sparkling_Layer_0_FillPanel = NULL;
    selfhelp_sparkling_LblTitle = NULL;
    selfhelp_sparkling_BtnHome = NULL;
    selfhelp_sparkling_BtnNoSparklingWater = NULL;
    selfhelp_sparkling_BtnWaterNotChilled = NULL;
    selfhelp_sparkling_BtnWaterNotCarbonated = NULL;
    selfhelp_sparkling_BntExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_sparkling(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_sparkling(uint32_t lyrIdx)
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

