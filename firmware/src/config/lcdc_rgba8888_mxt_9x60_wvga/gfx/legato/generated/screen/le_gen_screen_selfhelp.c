#include "gfx/legato/generated/screen/le_gen_screen_selfhelp.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_Layer_0_FillPanel;
leLabelWidget* selfhelp_LblLowWater;
leLabelWidget* selfhelp_LblLowBin;
leLabelWidget* selfhelp_LblActiveMode;
leLabelWidget* selfhelp_LblTitle;
leButtonWidget* selfhelp_Btn0;
leButtonWidget* selfhelp_Btn1;
leButtonWidget* selfhelp_Btn2;
leButtonWidget* selfhelp_Btn3;
leButtonWidget* selfhelp_BtnHome;
leButtonWidget* selfhelp_BtnExit;
leButtonWidget* selfhelp_BtnPre;
leButtonWidget* selfhelp_BtnNext;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp(void)
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

    selfhelp_Layer_0_FillPanel = leWidget_New();
    selfhelp_Layer_0_FillPanel->fn->setPosition(selfhelp_Layer_0_FillPanel, 0, 0);
    selfhelp_Layer_0_FillPanel->fn->setSize(selfhelp_Layer_0_FillPanel, 480, 272);
    selfhelp_Layer_0_FillPanel->fn->setScheme(selfhelp_Layer_0_FillPanel, &whiteground);
    root1->fn->addChild(root1, (leWidget*)selfhelp_Layer_0_FillPanel);

    selfhelp_LblLowWater = leLabelWidget_New();
    selfhelp_LblLowWater->fn->setPosition(selfhelp_LblLowWater, 424, 164);
    selfhelp_LblLowWater->fn->setSize(selfhelp_LblLowWater, 56, 42);
    selfhelp_LblLowWater->fn->setScheme(selfhelp_LblLowWater, &Label_FontLightBlue);
    selfhelp_LblLowWater->fn->setBackgroundType(selfhelp_LblLowWater, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_LblLowWater->fn->setHAlignment(selfhelp_LblLowWater, LE_HALIGN_CENTER);
    selfhelp_LblLowWater->fn->setString(selfhelp_LblLowWater, (leString*)&string_STATUS_LowWater);
    root1->fn->addChild(root1, (leWidget*)selfhelp_LblLowWater);

    selfhelp_LblLowBin = leLabelWidget_New();
    selfhelp_LblLowBin->fn->setPosition(selfhelp_LblLowBin, 427, 110);
    selfhelp_LblLowBin->fn->setSize(selfhelp_LblLowBin, 49, 42);
    selfhelp_LblLowBin->fn->setScheme(selfhelp_LblLowBin, &Label_FontLightBlue);
    selfhelp_LblLowBin->fn->setBackgroundType(selfhelp_LblLowBin, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_LblLowBin->fn->setHAlignment(selfhelp_LblLowBin, LE_HALIGN_CENTER);
    selfhelp_LblLowBin->fn->setString(selfhelp_LblLowBin, (leString*)&string_STATUS_LowBin);
    root1->fn->addChild(root1, (leWidget*)selfhelp_LblLowBin);

    selfhelp_LblActiveMode = leLabelWidget_New();
    selfhelp_LblActiveMode->fn->setPosition(selfhelp_LblActiveMode, 424, 59);
    selfhelp_LblActiveMode->fn->setSize(selfhelp_LblActiveMode, 56, 42);
    selfhelp_LblActiveMode->fn->setScheme(selfhelp_LblActiveMode, &Label_FontLightBlue);
    selfhelp_LblActiveMode->fn->setBackgroundType(selfhelp_LblActiveMode, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_LblActiveMode->fn->setHAlignment(selfhelp_LblActiveMode, LE_HALIGN_CENTER);
    selfhelp_LblActiveMode->fn->setString(selfhelp_LblActiveMode, (leString*)&string_STATUS_TimeDelay);
    root1->fn->addChild(root1, (leWidget*)selfhelp_LblActiveMode);

    selfhelp_LblTitle = leLabelWidget_New();
    selfhelp_LblTitle->fn->setPosition(selfhelp_LblTitle, 10, 5);
    selfhelp_LblTitle->fn->setSize(selfhelp_LblTitle, 380, 30);
    selfhelp_LblTitle->fn->setScheme(selfhelp_LblTitle, &Label_FontBlack);
    selfhelp_LblTitle->fn->setBackgroundType(selfhelp_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_LblTitle->fn->setString(selfhelp_LblTitle, (leString*)&string_SELFHELP_HowCanWeHelp);
    root1->fn->addChild(root1, (leWidget*)selfhelp_LblTitle);

    selfhelp_Btn0 = leButtonWidget_New();
    selfhelp_Btn0->fn->setPosition(selfhelp_Btn0, 15, 45);
    selfhelp_Btn0->fn->setSize(selfhelp_Btn0, 361, 50);
    selfhelp_Btn0->fn->setScheme(selfhelp_Btn0, &Button_Gray2);
    selfhelp_Btn0->fn->setBorderType(selfhelp_Btn0, LE_WIDGET_BORDER_NONE);
    selfhelp_Btn0->fn->setHAlignment(selfhelp_Btn0, LE_HALIGN_LEFT);
    selfhelp_Btn0->fn->setVAlignment(selfhelp_Btn0, LE_VALIGN_TOP);
    selfhelp_Btn0->fn->setMargins(selfhelp_Btn0, 0, 0, 0, 0);
    selfhelp_Btn0->fn->setString(selfhelp_Btn0, (leString*)&string_SELFHELP_Ice);
    selfhelp_Btn0->fn->setPressedImage(selfhelp_Btn0, (leImage*)&HelpRecPressed);
    selfhelp_Btn0->fn->setReleasedImage(selfhelp_Btn0, (leImage*)&HelpRec);
    selfhelp_Btn0->fn->setImagePosition(selfhelp_Btn0, LE_RELATIVE_POSITION_BEHIND);
    selfhelp_Btn0->fn->setImageMargin(selfhelp_Btn0, 0);
    selfhelp_Btn0->fn->setPressedOffset(selfhelp_Btn0, 0);
    selfhelp_Btn0->fn->setReleasedEventCallback(selfhelp_Btn0, event_selfhelp_Btn0_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_Btn0);

    selfhelp_Btn1 = leButtonWidget_New();
    selfhelp_Btn1->fn->setPosition(selfhelp_Btn1, 15, 99);
    selfhelp_Btn1->fn->setSize(selfhelp_Btn1, 360, 50);
    selfhelp_Btn1->fn->setScheme(selfhelp_Btn1, &Button_Gray2);
    selfhelp_Btn1->fn->setBorderType(selfhelp_Btn1, LE_WIDGET_BORDER_NONE);
    selfhelp_Btn1->fn->setHAlignment(selfhelp_Btn1, LE_HALIGN_LEFT);
    selfhelp_Btn1->fn->setMargins(selfhelp_Btn1, 0, 0, 0, 0);
    selfhelp_Btn1->fn->setString(selfhelp_Btn1, (leString*)&string_SELFHELP_Water);
    selfhelp_Btn1->fn->setPressedImage(selfhelp_Btn1, (leImage*)&HelpRecPressed);
    selfhelp_Btn1->fn->setReleasedImage(selfhelp_Btn1, (leImage*)&HelpRec);
    selfhelp_Btn1->fn->setImagePosition(selfhelp_Btn1, LE_RELATIVE_POSITION_BEHIND);
    selfhelp_Btn1->fn->setImageMargin(selfhelp_Btn1, 0);
    selfhelp_Btn1->fn->setPressedOffset(selfhelp_Btn1, 0);
    selfhelp_Btn1->fn->setReleasedEventCallback(selfhelp_Btn1, event_selfhelp_Btn1_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_Btn1);

    selfhelp_Btn2 = leButtonWidget_New();
    selfhelp_Btn2->fn->setPosition(selfhelp_Btn2, 15, 153);
    selfhelp_Btn2->fn->setSize(selfhelp_Btn2, 360, 50);
    selfhelp_Btn2->fn->setScheme(selfhelp_Btn2, &Button_Gray2);
    selfhelp_Btn2->fn->setBorderType(selfhelp_Btn2, LE_WIDGET_BORDER_NONE);
    selfhelp_Btn2->fn->setHAlignment(selfhelp_Btn2, LE_HALIGN_LEFT);
    selfhelp_Btn2->fn->setMargins(selfhelp_Btn2, 0, 0, 0, 0);
    selfhelp_Btn2->fn->setString(selfhelp_Btn2, (leString*)&string_SELFHELP_SparklingWater);
    selfhelp_Btn2->fn->setPressedImage(selfhelp_Btn2, (leImage*)&HelpRecPressed);
    selfhelp_Btn2->fn->setReleasedImage(selfhelp_Btn2, (leImage*)&HelpRec);
    selfhelp_Btn2->fn->setImagePosition(selfhelp_Btn2, LE_RELATIVE_POSITION_BEHIND);
    selfhelp_Btn2->fn->setImageMargin(selfhelp_Btn2, 0);
    selfhelp_Btn2->fn->setPressedOffset(selfhelp_Btn2, 0);
    selfhelp_Btn2->fn->setReleasedEventCallback(selfhelp_Btn2, event_selfhelp_Btn2_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_Btn2);

    selfhelp_Btn3 = leButtonWidget_New();
    selfhelp_Btn3->fn->setPosition(selfhelp_Btn3, 15, 207);
    selfhelp_Btn3->fn->setSize(selfhelp_Btn3, 360, 50);
    selfhelp_Btn3->fn->setScheme(selfhelp_Btn3, &Button_Gray2);
    selfhelp_Btn3->fn->setBorderType(selfhelp_Btn3, LE_WIDGET_BORDER_NONE);
    selfhelp_Btn3->fn->setHAlignment(selfhelp_Btn3, LE_HALIGN_LEFT);
    selfhelp_Btn3->fn->setMargins(selfhelp_Btn3, 0, 0, 0, 0);
    selfhelp_Btn3->fn->setString(selfhelp_Btn3, (leString*)&string_SELFHELP_HotWater);
    selfhelp_Btn3->fn->setPressedImage(selfhelp_Btn3, (leImage*)&HelpRecPressed);
    selfhelp_Btn3->fn->setReleasedImage(selfhelp_Btn3, (leImage*)&HelpRec);
    selfhelp_Btn3->fn->setImagePosition(selfhelp_Btn3, LE_RELATIVE_POSITION_BEHIND);
    selfhelp_Btn3->fn->setImageMargin(selfhelp_Btn3, 0);
    selfhelp_Btn3->fn->setPressedOffset(selfhelp_Btn3, 0);
    selfhelp_Btn3->fn->setReleasedEventCallback(selfhelp_Btn3, event_selfhelp_Btn3_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_Btn3);

    selfhelp_BtnHome = leButtonWidget_New();
    selfhelp_BtnHome->fn->setPosition(selfhelp_BtnHome, 415, 232);
    selfhelp_BtnHome->fn->setSize(selfhelp_BtnHome, 65, 40);
    selfhelp_BtnHome->fn->setScheme(selfhelp_BtnHome, &BlackBack);
    selfhelp_BtnHome->fn->setBackgroundType(selfhelp_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_BtnHome->fn->setBorderType(selfhelp_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_BtnHome->fn->setPressedImage(selfhelp_BtnHome, (leImage*)&Menu_home);
    selfhelp_BtnHome->fn->setReleasedImage(selfhelp_BtnHome, (leImage*)&Menu_home);
    selfhelp_BtnHome->fn->setReleasedEventCallback(selfhelp_BtnHome, event_selfhelp_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_BtnHome);

    selfhelp_BtnExit = leButtonWidget_New();
    selfhelp_BtnExit->fn->setPosition(selfhelp_BtnExit, 420, 0);
    selfhelp_BtnExit->fn->setSize(selfhelp_BtnExit, 60, 45);
    selfhelp_BtnExit->fn->setScheme(selfhelp_BtnExit, &BlackBack);
    selfhelp_BtnExit->fn->setBackgroundType(selfhelp_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_BtnExit->fn->setBorderType(selfhelp_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_BtnExit->fn->setHAlignment(selfhelp_BtnExit, LE_HALIGN_RIGHT);
    selfhelp_BtnExit->fn->setVAlignment(selfhelp_BtnExit, LE_VALIGN_TOP);
    selfhelp_BtnExit->fn->setMargins(selfhelp_BtnExit, 4, 10, 10, 4);
    selfhelp_BtnExit->fn->setPressedImage(selfhelp_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_BtnExit->fn->setReleasedImage(selfhelp_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_BtnExit->fn->setImagePosition(selfhelp_BtnExit, LE_RELATIVE_POSITION_BEHIND);
    selfhelp_BtnExit->fn->setReleasedEventCallback(selfhelp_BtnExit, event_selfhelp_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_BtnExit);

    selfhelp_BtnPre = leButtonWidget_New();
    selfhelp_BtnPre->fn->setPosition(selfhelp_BtnPre, 377, 88);
    selfhelp_BtnPre->fn->setSize(selfhelp_BtnPre, 50, 50);
    selfhelp_BtnPre->fn->setScheme(selfhelp_BtnPre, &Button_Gray2_down);
    selfhelp_BtnPre->fn->setBackgroundType(selfhelp_BtnPre, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_BtnPre->fn->setBorderType(selfhelp_BtnPre, LE_WIDGET_BORDER_NONE);
    selfhelp_BtnPre->fn->setPressedImage(selfhelp_BtnPre, (leImage*)&Menu_up);
    selfhelp_BtnPre->fn->setReleasedImage(selfhelp_BtnPre, (leImage*)&menu_wup1);
    selfhelp_BtnPre->fn->setImagePosition(selfhelp_BtnPre, LE_RELATIVE_POSITION_BELOW);
    selfhelp_BtnPre->fn->setReleasedEventCallback(selfhelp_BtnPre, event_selfhelp_BtnPre_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_BtnPre);

    selfhelp_BtnNext = leButtonWidget_New();
    selfhelp_BtnNext->fn->setPosition(selfhelp_BtnNext, 377, 158);
    selfhelp_BtnNext->fn->setSize(selfhelp_BtnNext, 50, 50);
    selfhelp_BtnNext->fn->setBackgroundType(selfhelp_BtnNext, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_BtnNext->fn->setBorderType(selfhelp_BtnNext, LE_WIDGET_BORDER_NONE);
    selfhelp_BtnNext->fn->setMargins(selfhelp_BtnNext, 0, 0, 0, 0);
    selfhelp_BtnNext->fn->setPressedImage(selfhelp_BtnNext, (leImage*)&Menu_down);
    selfhelp_BtnNext->fn->setReleasedImage(selfhelp_BtnNext, (leImage*)&menu_wdown1);
    selfhelp_BtnNext->fn->setImagePosition(selfhelp_BtnNext, LE_RELATIVE_POSITION_BELOW);
    selfhelp_BtnNext->fn->setImageMargin(selfhelp_BtnNext, 0);
    selfhelp_BtnNext->fn->setPressedOffset(selfhelp_BtnNext, 0);
    selfhelp_BtnNext->fn->setReleasedEventCallback(selfhelp_BtnNext, event_selfhelp_BtnNext_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_BtnNext);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp(void)
{
}

void screenHide_selfhelp(void)
{
    selfhelp_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_Layer_0_FillPanel = NULL;
    selfhelp_LblLowWater = NULL;
    selfhelp_LblLowBin = NULL;
    selfhelp_LblActiveMode = NULL;
    selfhelp_LblTitle = NULL;
    selfhelp_Btn0 = NULL;
    selfhelp_Btn1 = NULL;
    selfhelp_Btn2 = NULL;
    selfhelp_Btn3 = NULL;
    selfhelp_BtnHome = NULL;
    selfhelp_BtnExit = NULL;
    selfhelp_BtnPre = NULL;
    selfhelp_BtnNext = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp(uint32_t lyrIdx)
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

