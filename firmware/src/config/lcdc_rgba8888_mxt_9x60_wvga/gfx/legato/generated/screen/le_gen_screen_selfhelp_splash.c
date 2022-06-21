#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_splash.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_splash_Layer_0_FillPanel;
leLabelWidget* selfhelp_splash_LblTitle;
leButtonWidget* selfhelp_splash_BtnHome;
leButtonWidget* selfhelp_splash_Btn0;
leButtonWidget* selfhelp_splash_Btn1;
leButtonWidget* selfhelp_splash_Btn2;
leButtonWidget* selfhelp_splash_Btn3;
leButtonWidget* selfhelp_splash_BtnExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_splash(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_splash(void)
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

    selfhelp_splash_Layer_0_FillPanel = leWidget_New();
    selfhelp_splash_Layer_0_FillPanel->fn->setPosition(selfhelp_splash_Layer_0_FillPanel, 0, 0);
    selfhelp_splash_Layer_0_FillPanel->fn->setSize(selfhelp_splash_Layer_0_FillPanel, 480, 272);
    selfhelp_splash_Layer_0_FillPanel->fn->setScheme(selfhelp_splash_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)selfhelp_splash_Layer_0_FillPanel);

    selfhelp_splash_LblTitle = leLabelWidget_New();
    selfhelp_splash_LblTitle->fn->setPosition(selfhelp_splash_LblTitle, 10, 5);
    selfhelp_splash_LblTitle->fn->setSize(selfhelp_splash_LblTitle, 380, 30);
    selfhelp_splash_LblTitle->fn->setScheme(selfhelp_splash_LblTitle, &Label_FontBlack);
    selfhelp_splash_LblTitle->fn->setBackgroundType(selfhelp_splash_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_splash_LblTitle->fn->setString(selfhelp_splash_LblTitle, (leString*)&string_SELFHELP1_WaterTroubleshooting);
    root1->fn->addChild(root1, (leWidget*)selfhelp_splash_LblTitle);

    selfhelp_splash_BtnHome = leButtonWidget_New();
    selfhelp_splash_BtnHome->fn->setPosition(selfhelp_splash_BtnHome, 435, 225);
    selfhelp_splash_BtnHome->fn->setSize(selfhelp_splash_BtnHome, 40, 40);
    selfhelp_splash_BtnHome->fn->setScheme(selfhelp_splash_BtnHome, &BlackBack);
    selfhelp_splash_BtnHome->fn->setBackgroundType(selfhelp_splash_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_splash_BtnHome->fn->setBorderType(selfhelp_splash_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_splash_BtnHome->fn->setPressedImage(selfhelp_splash_BtnHome, (leImage*)&Menu_home);
    selfhelp_splash_BtnHome->fn->setReleasedImage(selfhelp_splash_BtnHome, (leImage*)&Menu_home);
    selfhelp_splash_BtnHome->fn->setReleasedEventCallback(selfhelp_splash_BtnHome, event_selfhelp_splash_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_splash_BtnHome);

    selfhelp_splash_Btn0 = leButtonWidget_New();
    selfhelp_splash_Btn0->fn->setPosition(selfhelp_splash_Btn0, 15, 45);
    selfhelp_splash_Btn0->fn->setSize(selfhelp_splash_Btn0, 360, 50);
    selfhelp_splash_Btn0->fn->setScheme(selfhelp_splash_Btn0, &Button_Gray2);
    selfhelp_splash_Btn0->fn->setBorderType(selfhelp_splash_Btn0, LE_WIDGET_BORDER_NONE);
    selfhelp_splash_Btn0->fn->setHAlignment(selfhelp_splash_Btn0, LE_HALIGN_LEFT);
    selfhelp_splash_Btn0->fn->setString(selfhelp_splash_Btn0, (leString*)&string_SELFHELP1_NoWater);
    selfhelp_splash_Btn0->fn->setPressedImage(selfhelp_splash_Btn0, (leImage*)&Menu_bar_clear);
    selfhelp_splash_Btn0->fn->setReleasedImage(selfhelp_splash_Btn0, (leImage*)&Menu_bar_clear);
    selfhelp_splash_Btn0->fn->setImageMargin(selfhelp_splash_Btn0, 5);
    selfhelp_splash_Btn0->fn->setReleasedEventCallback(selfhelp_splash_Btn0, event_selfhelp_splash_Btn0_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_splash_Btn0);

    selfhelp_splash_Btn1 = leButtonWidget_New();
    selfhelp_splash_Btn1->fn->setPosition(selfhelp_splash_Btn1, 15, 99);
    selfhelp_splash_Btn1->fn->setSize(selfhelp_splash_Btn1, 360, 50);
    selfhelp_splash_Btn1->fn->setScheme(selfhelp_splash_Btn1, &Button_Gray2);
    selfhelp_splash_Btn1->fn->setBorderType(selfhelp_splash_Btn1, LE_WIDGET_BORDER_NONE);
    selfhelp_splash_Btn1->fn->setHAlignment(selfhelp_splash_Btn1, LE_HALIGN_LEFT);
    selfhelp_splash_Btn1->fn->setString(selfhelp_splash_Btn1, (leString*)&string_SELFHELP1_LowWaterFlow);
    selfhelp_splash_Btn1->fn->setPressedImage(selfhelp_splash_Btn1, (leImage*)&Menu_bar_clear);
    selfhelp_splash_Btn1->fn->setReleasedImage(selfhelp_splash_Btn1, (leImage*)&Menu_bar_clear);
    selfhelp_splash_Btn1->fn->setImageMargin(selfhelp_splash_Btn1, 5);
    selfhelp_splash_Btn1->fn->setReleasedEventCallback(selfhelp_splash_Btn1, event_selfhelp_splash_Btn1_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_splash_Btn1);

    selfhelp_splash_Btn2 = leButtonWidget_New();
    selfhelp_splash_Btn2->fn->setPosition(selfhelp_splash_Btn2, 15, 153);
    selfhelp_splash_Btn2->fn->setSize(selfhelp_splash_Btn2, 360, 50);
    selfhelp_splash_Btn2->fn->setScheme(selfhelp_splash_Btn2, &Button_Gray2);
    selfhelp_splash_Btn2->fn->setBorderType(selfhelp_splash_Btn2, LE_WIDGET_BORDER_NONE);
    selfhelp_splash_Btn2->fn->setHAlignment(selfhelp_splash_Btn2, LE_HALIGN_LEFT);
    selfhelp_splash_Btn2->fn->setString(selfhelp_splash_Btn2, (leString*)&string_SELFHELP1_WarmWater);
    selfhelp_splash_Btn2->fn->setPressedImage(selfhelp_splash_Btn2, (leImage*)&Menu_bar_clear);
    selfhelp_splash_Btn2->fn->setReleasedImage(selfhelp_splash_Btn2, (leImage*)&Menu_bar_clear);
    selfhelp_splash_Btn2->fn->setImageMargin(selfhelp_splash_Btn2, 5);
    selfhelp_splash_Btn2->fn->setReleasedEventCallback(selfhelp_splash_Btn2, event_selfhelp_splash_Btn2_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_splash_Btn2);

    selfhelp_splash_Btn3 = leButtonWidget_New();
    selfhelp_splash_Btn3->fn->setPosition(selfhelp_splash_Btn3, 15, 207);
    selfhelp_splash_Btn3->fn->setSize(selfhelp_splash_Btn3, 360, 50);
    selfhelp_splash_Btn3->fn->setScheme(selfhelp_splash_Btn3, &Button_Gray2);
    selfhelp_splash_Btn3->fn->setBorderType(selfhelp_splash_Btn3, LE_WIDGET_BORDER_NONE);
    selfhelp_splash_Btn3->fn->setHAlignment(selfhelp_splash_Btn3, LE_HALIGN_LEFT);
    selfhelp_splash_Btn3->fn->setString(selfhelp_splash_Btn3, (leString*)&string_SELFHELP1_OffLooking);
    selfhelp_splash_Btn3->fn->setPressedImage(selfhelp_splash_Btn3, (leImage*)&Menu_bar_clear);
    selfhelp_splash_Btn3->fn->setReleasedImage(selfhelp_splash_Btn3, (leImage*)&Menu_bar_clear);
    selfhelp_splash_Btn3->fn->setImageMargin(selfhelp_splash_Btn3, 5);
    selfhelp_splash_Btn3->fn->setReleasedEventCallback(selfhelp_splash_Btn3, event_selfhelp_splash_Btn3_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_splash_Btn3);

    selfhelp_splash_BtnExit = leButtonWidget_New();
    selfhelp_splash_BtnExit->fn->setPosition(selfhelp_splash_BtnExit, 415, 2);
    selfhelp_splash_BtnExit->fn->setSize(selfhelp_splash_BtnExit, 60, 90);
    selfhelp_splash_BtnExit->fn->setScheme(selfhelp_splash_BtnExit, &BlackBack);
    selfhelp_splash_BtnExit->fn->setBackgroundType(selfhelp_splash_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_splash_BtnExit->fn->setBorderType(selfhelp_splash_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_splash_BtnExit->fn->setHAlignment(selfhelp_splash_BtnExit, LE_HALIGN_RIGHT);
    selfhelp_splash_BtnExit->fn->setVAlignment(selfhelp_splash_BtnExit, LE_VALIGN_TOP);
    selfhelp_splash_BtnExit->fn->setMargins(selfhelp_splash_BtnExit, 4, 10, 10, 4);
    selfhelp_splash_BtnExit->fn->setPressedImage(selfhelp_splash_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_splash_BtnExit->fn->setReleasedImage(selfhelp_splash_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_splash_BtnExit->fn->setReleasedEventCallback(selfhelp_splash_BtnExit, event_selfhelp_splash_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_splash_BtnExit);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_splash_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_splash(void)
{
}

void screenHide_selfhelp_splash(void)
{
    selfhelp_splash_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_splash_Layer_0_FillPanel = NULL;
    selfhelp_splash_LblTitle = NULL;
    selfhelp_splash_BtnHome = NULL;
    selfhelp_splash_Btn0 = NULL;
    selfhelp_splash_Btn1 = NULL;
    selfhelp_splash_Btn2 = NULL;
    selfhelp_splash_Btn3 = NULL;
    selfhelp_splash_BtnExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_splash(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_splash(uint32_t lyrIdx)
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

