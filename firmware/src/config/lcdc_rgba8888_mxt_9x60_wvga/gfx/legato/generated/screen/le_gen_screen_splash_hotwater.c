#include "gfx/legato/generated/screen/le_gen_screen_splash_hotwater.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* splash_hotwater_Pnl_layer2;
leImageWidget* splash_hotwater_ImgCaution;
leLabelWidget* splash_hotwater_LblMsgCaution;
leLabelWidget* splash_hotwater_LblMsgHotWater;
leImageWidget* splash_hotwater_ImgLogo;
leImageSequenceWidget* splash_hotwater_ImgHotWaterSqn;
leImageSequenceWidget* splash_hotwater_ImgTouchlessSqn;
leLabelWidget* splash_hotwater_LblHotWater;
leLabelWidget* splash_hotwater_LblMsgOn;
leButtonWidget* splash_hotwater_BtnHotWater;
leLabelWidget* splash_hotwater_LblStatus;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_splash_hotwater(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_splash_hotwater(void)
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

    splash_hotwater_Pnl_layer2 = leWidget_New();
    splash_hotwater_Pnl_layer2->fn->setPosition(splash_hotwater_Pnl_layer2, 0, 0);
    splash_hotwater_Pnl_layer2->fn->setSize(splash_hotwater_Pnl_layer2, 480, 272);
    splash_hotwater_Pnl_layer2->fn->setScheme(splash_hotwater_Pnl_layer2, &BlackBack);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_Pnl_layer2);

    splash_hotwater_ImgCaution = leImageWidget_New();
    splash_hotwater_ImgCaution->fn->setPosition(splash_hotwater_ImgCaution, 50, 15);
    splash_hotwater_ImgCaution->fn->setSize(splash_hotwater_ImgCaution, 50, 45);
    splash_hotwater_ImgCaution->fn->setScheme(splash_hotwater_ImgCaution, &BlackBack);
    splash_hotwater_ImgCaution->fn->setBackgroundType(splash_hotwater_ImgCaution, LE_WIDGET_BACKGROUND_NONE);
    splash_hotwater_ImgCaution->fn->setBorderType(splash_hotwater_ImgCaution, LE_WIDGET_BORDER_NONE);
    splash_hotwater_ImgCaution->fn->setImage(splash_hotwater_ImgCaution, (leImage*)&Splash_hotwater_caution);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_ImgCaution);

    splash_hotwater_LblMsgCaution = leLabelWidget_New();
    splash_hotwater_LblMsgCaution->fn->setPosition(splash_hotwater_LblMsgCaution, 20, 3);
    splash_hotwater_LblMsgCaution->fn->setSize(splash_hotwater_LblMsgCaution, 110, 20);
    splash_hotwater_LblMsgCaution->fn->setScheme(splash_hotwater_LblMsgCaution, &Label_FontWhite);
    splash_hotwater_LblMsgCaution->fn->setBackgroundType(splash_hotwater_LblMsgCaution, LE_WIDGET_BACKGROUND_NONE);
    splash_hotwater_LblMsgCaution->fn->setHAlignment(splash_hotwater_LblMsgCaution, LE_HALIGN_CENTER);
    splash_hotwater_LblMsgCaution->fn->setString(splash_hotwater_LblMsgCaution, (leString*)&string_SPLASH_MsgCaution);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_LblMsgCaution);

    splash_hotwater_LblMsgHotWater = leLabelWidget_New();
    splash_hotwater_LblMsgHotWater->fn->setPosition(splash_hotwater_LblMsgHotWater, 20, 47);
    splash_hotwater_LblMsgHotWater->fn->setSize(splash_hotwater_LblMsgHotWater, 110, 20);
    splash_hotwater_LblMsgHotWater->fn->setScheme(splash_hotwater_LblMsgHotWater, &Label_FontWhite);
    splash_hotwater_LblMsgHotWater->fn->setBackgroundType(splash_hotwater_LblMsgHotWater, LE_WIDGET_BACKGROUND_NONE);
    splash_hotwater_LblMsgHotWater->fn->setHAlignment(splash_hotwater_LblMsgHotWater, LE_HALIGN_CENTER);
    splash_hotwater_LblMsgHotWater->fn->setString(splash_hotwater_LblMsgHotWater, (leString*)&string_SPLASH_MsgHotWater);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_LblMsgHotWater);

    splash_hotwater_ImgLogo = leImageWidget_New();
    splash_hotwater_ImgLogo->fn->setPosition(splash_hotwater_ImgLogo, 133, 222);
    splash_hotwater_ImgLogo->fn->setSize(splash_hotwater_ImgLogo, 200, 42);
    splash_hotwater_ImgLogo->fn->setScheme(splash_hotwater_ImgLogo, &BlackBack);
    splash_hotwater_ImgLogo->fn->setBorderType(splash_hotwater_ImgLogo, LE_WIDGET_BORDER_NONE);
    splash_hotwater_ImgLogo->fn->setImage(splash_hotwater_ImgLogo, (leImage*)&Splash_logo);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_ImgLogo);

    splash_hotwater_ImgHotWaterSqn = leImageSequenceWidget_New();
    splash_hotwater_ImgHotWaterSqn->fn->setPosition(splash_hotwater_ImgHotWaterSqn, 0, 69);
    splash_hotwater_ImgHotWaterSqn->fn->setSize(splash_hotwater_ImgHotWaterSqn, 148, 148);
    splash_hotwater_ImgHotWaterSqn->fn->setScheme(splash_hotwater_ImgHotWaterSqn, &BlackBack);
    splash_hotwater_ImgHotWaterSqn->fn->setMargins(splash_hotwater_ImgHotWaterSqn, 0, 0, 0, 0);
    splash_hotwater_ImgHotWaterSqn->fn->play(splash_hotwater_ImgHotWaterSqn);
    splash_hotwater_ImgHotWaterSqn->fn->setRepeat(splash_hotwater_ImgHotWaterSqn, LE_TRUE);
    splash_hotwater_ImgHotWaterSqn->fn->setImageCount(splash_hotwater_ImgHotWaterSqn, 5);
    splash_hotwater_ImgHotWaterSqn->fn->setImage(splash_hotwater_ImgHotWaterSqn, 0, &HotWaterRedFull_1);
    splash_hotwater_ImgHotWaterSqn->fn->setImageDelay(splash_hotwater_ImgHotWaterSqn, 0, 1000);
    splash_hotwater_ImgHotWaterSqn->fn->setImage(splash_hotwater_ImgHotWaterSqn, 1, &HotWaterRedFull_3);
    splash_hotwater_ImgHotWaterSqn->fn->setImageDelay(splash_hotwater_ImgHotWaterSqn, 1, 1000);
    splash_hotwater_ImgHotWaterSqn->fn->setImage(splash_hotwater_ImgHotWaterSqn, 2, &HotWaterRedFull_5);
    splash_hotwater_ImgHotWaterSqn->fn->setImageDelay(splash_hotwater_ImgHotWaterSqn, 2, 1000);
    splash_hotwater_ImgHotWaterSqn->fn->setImage(splash_hotwater_ImgHotWaterSqn, 3, &HotWaterRedFull_3);
    splash_hotwater_ImgHotWaterSqn->fn->setImageDelay(splash_hotwater_ImgHotWaterSqn, 3, 1000);
    splash_hotwater_ImgHotWaterSqn->fn->setImage(splash_hotwater_ImgHotWaterSqn, 4, &HotWaterRedFull_1);
    splash_hotwater_ImgHotWaterSqn->fn->setImageDelay(splash_hotwater_ImgHotWaterSqn, 4, 1000);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_ImgHotWaterSqn);

    splash_hotwater_ImgTouchlessSqn = leImageSequenceWidget_New();
    splash_hotwater_ImgTouchlessSqn->fn->setPosition(splash_hotwater_ImgTouchlessSqn, 37, 210);
    splash_hotwater_ImgTouchlessSqn->fn->setSize(splash_hotwater_ImgTouchlessSqn, 406, 50);
    splash_hotwater_ImgTouchlessSqn->fn->setEnabled(splash_hotwater_ImgTouchlessSqn, LE_FALSE);
    splash_hotwater_ImgTouchlessSqn->fn->setVisible(splash_hotwater_ImgTouchlessSqn, LE_FALSE);
    splash_hotwater_ImgTouchlessSqn->fn->setScheme(splash_hotwater_ImgTouchlessSqn, &BlackBack);
    splash_hotwater_ImgTouchlessSqn->fn->setHAlignment(splash_hotwater_ImgTouchlessSqn, LE_HALIGN_RIGHT);
    splash_hotwater_ImgTouchlessSqn->fn->setVAlignment(splash_hotwater_ImgTouchlessSqn, LE_VALIGN_BOTTOM);
    splash_hotwater_ImgTouchlessSqn->fn->play(splash_hotwater_ImgTouchlessSqn);
    splash_hotwater_ImgTouchlessSqn->fn->setRepeat(splash_hotwater_ImgTouchlessSqn, LE_TRUE);
    splash_hotwater_ImgTouchlessSqn->fn->setImageCount(splash_hotwater_ImgTouchlessSqn, 3);
    splash_hotwater_ImgTouchlessSqn->fn->setImage(splash_hotwater_ImgTouchlessSqn, 0, &Hot_touchless_1);
    splash_hotwater_ImgTouchlessSqn->fn->setImageDelay(splash_hotwater_ImgTouchlessSqn, 0, 1000);
    splash_hotwater_ImgTouchlessSqn->fn->setImage(splash_hotwater_ImgTouchlessSqn, 1, &Hot_touchless_2);
    splash_hotwater_ImgTouchlessSqn->fn->setImageDelay(splash_hotwater_ImgTouchlessSqn, 1, 1000);
    splash_hotwater_ImgTouchlessSqn->fn->setImage(splash_hotwater_ImgTouchlessSqn, 2, &Hot_touchless_3);
    splash_hotwater_ImgTouchlessSqn->fn->setImageDelay(splash_hotwater_ImgTouchlessSqn, 2, 1000);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_ImgTouchlessSqn);

    splash_hotwater_LblHotWater = leLabelWidget_New();
    splash_hotwater_LblHotWater->fn->setPosition(splash_hotwater_LblHotWater, 17, 137);
    splash_hotwater_LblHotWater->fn->setSize(splash_hotwater_LblHotWater, 118, 30);
    splash_hotwater_LblHotWater->fn->setEnabled(splash_hotwater_LblHotWater, LE_FALSE);
    splash_hotwater_LblHotWater->fn->setScheme(splash_hotwater_LblHotWater, &Hot_Text);
    splash_hotwater_LblHotWater->fn->setBackgroundType(splash_hotwater_LblHotWater, LE_WIDGET_BACKGROUND_NONE);
    splash_hotwater_LblHotWater->fn->setHAlignment(splash_hotwater_LblHotWater, LE_HALIGN_CENTER);
    splash_hotwater_LblHotWater->fn->setString(splash_hotwater_LblHotWater, (leString*)&string_SPLASH_HotWater);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_LblHotWater);

    splash_hotwater_LblMsgOn = leLabelWidget_New();
    splash_hotwater_LblMsgOn->fn->setPosition(splash_hotwater_LblMsgOn, 17, 117);
    splash_hotwater_LblMsgOn->fn->setSize(splash_hotwater_LblMsgOn, 118, 30);
    splash_hotwater_LblMsgOn->fn->setEnabled(splash_hotwater_LblMsgOn, LE_FALSE);
    splash_hotwater_LblMsgOn->fn->setScheme(splash_hotwater_LblMsgOn, &Label_FontWhite);
    splash_hotwater_LblMsgOn->fn->setBackgroundType(splash_hotwater_LblMsgOn, LE_WIDGET_BACKGROUND_NONE);
    splash_hotwater_LblMsgOn->fn->setHAlignment(splash_hotwater_LblMsgOn, LE_HALIGN_CENTER);
    splash_hotwater_LblMsgOn->fn->setString(splash_hotwater_LblMsgOn, (leString*)&string_SPLASH_MsgOn);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_LblMsgOn);

    splash_hotwater_BtnHotWater = leButtonWidget_New();
    splash_hotwater_BtnHotWater->fn->setPosition(splash_hotwater_BtnHotWater, 0, 68);
    splash_hotwater_BtnHotWater->fn->setSize(splash_hotwater_BtnHotWater, 153, 148);
    splash_hotwater_BtnHotWater->fn->setScheme(splash_hotwater_BtnHotWater, &BlackBack);
    splash_hotwater_BtnHotWater->fn->setBackgroundType(splash_hotwater_BtnHotWater, LE_WIDGET_BACKGROUND_NONE);
    splash_hotwater_BtnHotWater->fn->setBorderType(splash_hotwater_BtnHotWater, LE_WIDGET_BORDER_NONE);
    splash_hotwater_BtnHotWater->fn->setImagePosition(splash_hotwater_BtnHotWater, LE_RELATIVE_POSITION_BEHIND);
    splash_hotwater_BtnHotWater->fn->setImageMargin(splash_hotwater_BtnHotWater, 0);
    splash_hotwater_BtnHotWater->fn->setPressedOffset(splash_hotwater_BtnHotWater, 0);
    splash_hotwater_BtnHotWater->fn->setPressedEventCallback(splash_hotwater_BtnHotWater, event_splash_hotwater_BtnHotWater_OnPressed);
    splash_hotwater_BtnHotWater->fn->setReleasedEventCallback(splash_hotwater_BtnHotWater, event_splash_hotwater_BtnHotWater_OnReleased);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_BtnHotWater);

    splash_hotwater_LblStatus = leLabelWidget_New();
    splash_hotwater_LblStatus->fn->setPosition(splash_hotwater_LblStatus, 182, 112);
    splash_hotwater_LblStatus->fn->setSize(splash_hotwater_LblStatus, 207, 55);
    splash_hotwater_LblStatus->fn->setScheme(splash_hotwater_LblStatus, &whiteground);
    splash_hotwater_LblStatus->fn->setBackgroundType(splash_hotwater_LblStatus, LE_WIDGET_BACKGROUND_NONE);
    splash_hotwater_LblStatus->fn->setString(splash_hotwater_LblStatus, (leString*)&string_Heat);
    root1->fn->addChild(root1, (leWidget*)splash_hotwater_LblStatus);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    splash_hotwater_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_splash_hotwater(void)
{
}

void screenHide_splash_hotwater(void)
{
    splash_hotwater_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    splash_hotwater_Pnl_layer2 = NULL;
    splash_hotwater_ImgCaution = NULL;
    splash_hotwater_LblMsgCaution = NULL;
    splash_hotwater_LblMsgHotWater = NULL;
    splash_hotwater_ImgLogo = NULL;
    splash_hotwater_ImgHotWaterSqn = NULL;
    splash_hotwater_ImgTouchlessSqn = NULL;
    splash_hotwater_LblHotWater = NULL;
    splash_hotwater_LblMsgOn = NULL;
    splash_hotwater_BtnHotWater = NULL;
    splash_hotwater_LblStatus = NULL;


    showing = LE_FALSE;
}

void screenDestroy_splash_hotwater(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_splash_hotwater(uint32_t lyrIdx)
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

