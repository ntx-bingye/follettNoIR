#include "gfx/legato/generated/screen/le_gen_screen_splash.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* splash_Pnlayer1;
leWidget* splash_PnlHotwater;
leWidget* splash_PnlWater;
leWidget* splash_PnlIce;
leImageSequenceWidget* splash_ImgSqnIR;
leWidget* splash_panelDue;
leButtonWidget* splash_BtnLogo;
leButtonWidget* splash_BtnHelp;
leImageWidget* splash_ImgHotWater;
leButtonWidget* splash_BtnHotWater;
leImageSequenceWidget* splash_ImgSqnWater;
leButtonWidget* splash_BtnWater;
leImageSequenceWidget* splash_ImgSqnIce;
leButtonWidget* splash_BtnIce;
leLabelWidget* splash_LblDueAlert;
leImageWidget* splash_ImgAlert;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_splash(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_splash(void)
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

    splash_Pnlayer1 = leWidget_New();
    splash_Pnlayer1->fn->setPosition(splash_Pnlayer1, 0, 0);
    splash_Pnlayer1->fn->setSize(splash_Pnlayer1, 480, 272);
    splash_Pnlayer1->fn->setScheme(splash_Pnlayer1, &BlackBack);
    root1->fn->addChild(root1, (leWidget*)splash_Pnlayer1);

    splash_PnlHotwater = leWidget_New();
    splash_PnlHotwater->fn->setPosition(splash_PnlHotwater, 170, 1);
    splash_PnlHotwater->fn->setSize(splash_PnlHotwater, 156, 220);
    splash_PnlHotwater->fn->setScheme(splash_PnlHotwater, &BlackBack);
    splash_PnlHotwater->fn->setBackgroundType(splash_PnlHotwater, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)splash_PnlHotwater);

    splash_ImgHotWater = leImageWidget_New();
    splash_ImgHotWater->fn->setPosition(splash_ImgHotWater, 0, 0);
    splash_ImgHotWater->fn->setSize(splash_ImgHotWater, 145, 219);
    splash_ImgHotWater->fn->setScheme(splash_ImgHotWater, &BlackBack);
    splash_ImgHotWater->fn->setBorderType(splash_ImgHotWater, LE_WIDGET_BORDER_NONE);
    splash_ImgHotWater->fn->setImage(splash_ImgHotWater, (leImage*)&Splash_hotwater_static);
    splash_PnlHotwater->fn->addChild(splash_PnlHotwater, (leWidget*)splash_ImgHotWater);

    splash_BtnHotWater = leButtonWidget_New();
    splash_BtnHotWater->fn->setPosition(splash_BtnHotWater, 2, 86);
    splash_BtnHotWater->fn->setSize(splash_BtnHotWater, 118, 99);
    splash_BtnHotWater->fn->setScheme(splash_BtnHotWater, &Lable_Gray2_FontWhite);
    splash_BtnHotWater->fn->setBackgroundType(splash_BtnHotWater, LE_WIDGET_BACKGROUND_NONE);
    splash_BtnHotWater->fn->setBorderType(splash_BtnHotWater, LE_WIDGET_BORDER_NONE);
    splash_BtnHotWater->fn->setString(splash_BtnHotWater, (leString*)&string_SPLASH_RingHotWater);
    splash_BtnHotWater->fn->setImagePosition(splash_BtnHotWater, LE_RELATIVE_POSITION_BEHIND);
    splash_BtnHotWater->fn->setImageMargin(splash_BtnHotWater, 0);
    splash_BtnHotWater->fn->setPressedEventCallback(splash_BtnHotWater, event_splash_BtnHotWater_OnPressed);
    splash_BtnHotWater->fn->setReleasedEventCallback(splash_BtnHotWater, event_splash_BtnHotWater_OnReleased);
    splash_PnlHotwater->fn->addChild(splash_PnlHotwater, (leWidget*)splash_BtnHotWater);

    splash_PnlWater = leWidget_New();
    splash_PnlWater->fn->setPosition(splash_PnlWater, 355, 0);
    splash_PnlWater->fn->setSize(splash_PnlWater, 115, 220);
    splash_PnlWater->fn->setScheme(splash_PnlWater, &BlackBack);
    root1->fn->addChild(root1, (leWidget*)splash_PnlWater);

    splash_ImgSqnWater = leImageSequenceWidget_New();
    splash_ImgSqnWater->fn->setPosition(splash_ImgSqnWater, 0, 0);
    splash_ImgSqnWater->fn->setSize(splash_ImgSqnWater, 110, 217);
    splash_ImgSqnWater->fn->setScheme(splash_ImgSqnWater, &BlackBack);
    splash_ImgSqnWater->fn->play(splash_ImgSqnWater);
    splash_ImgSqnWater->fn->setRepeat(splash_ImgSqnWater, LE_TRUE);
    splash_ImgSqnWater->fn->setImageCount(splash_ImgSqnWater, 9);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 0, &Splash_water_anim1);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 0, 1000);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 1, &Splash_water_anim2);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 1, 1000);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 2, &Splash_water_anim1);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 2, 1000);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 3, &Splash_water_anim4);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 3, 1000);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 4, &Splash_water_anim1);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 4, 1000);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 5, &Splash_water_anim6);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 5, 1000);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 6, &Splash_water_anim1);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 6, 1000);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 7, &Splash_water_anim8);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 7, 1000);
    splash_ImgSqnWater->fn->setImage(splash_ImgSqnWater, 8, &Splash_water_anim9);
    splash_ImgSqnWater->fn->setImageDelay(splash_ImgSqnWater, 8, 1000);
    splash_PnlWater->fn->addChild(splash_PnlWater, (leWidget*)splash_ImgSqnWater);

    splash_BtnWater = leButtonWidget_New();
    splash_BtnWater->fn->setPosition(splash_BtnWater, 2, 89);
    splash_BtnWater->fn->setSize(splash_BtnWater, 100, 94);
    splash_BtnWater->fn->setScheme(splash_BtnWater, &Lable_Gray2_FontWhite);
    splash_BtnWater->fn->setBackgroundType(splash_BtnWater, LE_WIDGET_BACKGROUND_NONE);
    splash_BtnWater->fn->setBorderType(splash_BtnWater, LE_WIDGET_BORDER_NONE);
    splash_BtnWater->fn->setString(splash_BtnWater, (leString*)&string_SPLASH_RingWater);
    splash_BtnWater->fn->setPressedEventCallback(splash_BtnWater, event_splash_BtnWater_OnPressed);
    splash_BtnWater->fn->setReleasedEventCallback(splash_BtnWater, event_splash_BtnWater_OnReleased);
    splash_PnlWater->fn->addChild(splash_PnlWater, (leWidget*)splash_BtnWater);

    splash_PnlIce = leWidget_New();
    splash_PnlIce->fn->setPosition(splash_PnlIce, 25, 0);
    splash_PnlIce->fn->setSize(splash_PnlIce, 115, 220);
    splash_PnlIce->fn->setScheme(splash_PnlIce, &BlackBack);
    root1->fn->addChild(root1, (leWidget*)splash_PnlIce);

    splash_ImgSqnIce = leImageSequenceWidget_New();
    splash_ImgSqnIce->fn->setPosition(splash_ImgSqnIce, 0, 0);
    splash_ImgSqnIce->fn->setSize(splash_ImgSqnIce, 110, 217);
    splash_ImgSqnIce->fn->setScheme(splash_ImgSqnIce, &BlackBack);
    splash_ImgSqnIce->fn->play(splash_ImgSqnIce);
    splash_ImgSqnIce->fn->setRepeat(splash_ImgSqnIce, LE_TRUE);
    splash_ImgSqnIce->fn->setImageCount(splash_ImgSqnIce, 9);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 0, &Splash_ice_anim1);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 0, 1000);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 1, &Splash_ice_anim2);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 1, 1000);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 2, &Splash_ice_anim3);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 2, 1000);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 3, &Splash_ice_anim4);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 3, 1000);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 4, &Splash_ice_anim5);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 4, 1000);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 5, &Splash_ice_anim6);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 5, 1000);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 6, &Splash_ice_anim7);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 6, 1000);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 7, &Splash_ice_anim8);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 7, 1000);
    splash_ImgSqnIce->fn->setImage(splash_ImgSqnIce, 8, &Splash_ice_anim9);
    splash_ImgSqnIce->fn->setImageDelay(splash_ImgSqnIce, 8, 1000);
    splash_PnlIce->fn->addChild(splash_PnlIce, (leWidget*)splash_ImgSqnIce);

    splash_BtnIce = leButtonWidget_New();
    splash_BtnIce->fn->setPosition(splash_BtnIce, 0, 84);
    splash_BtnIce->fn->setSize(splash_BtnIce, 100, 102);
    splash_BtnIce->fn->setScheme(splash_BtnIce, &Lable_Gray2_FontWhite);
    splash_BtnIce->fn->setBackgroundType(splash_BtnIce, LE_WIDGET_BACKGROUND_NONE);
    splash_BtnIce->fn->setBorderType(splash_BtnIce, LE_WIDGET_BORDER_NONE);
    splash_BtnIce->fn->setString(splash_BtnIce, (leString*)&string_SPLASH_RingIce);
    splash_BtnIce->fn->setPressedEventCallback(splash_BtnIce, event_splash_BtnIce_OnPressed);
    splash_BtnIce->fn->setReleasedEventCallback(splash_BtnIce, event_splash_BtnIce_OnReleased);
    splash_PnlIce->fn->addChild(splash_PnlIce, (leWidget*)splash_BtnIce);

    splash_ImgSqnIR = leImageSequenceWidget_New();
    splash_ImgSqnIR->fn->setPosition(splash_ImgSqnIR, 33, 218);
    splash_ImgSqnIR->fn->setSize(splash_ImgSqnIR, 409, 53);
    splash_ImgSqnIR->fn->setVisible(splash_ImgSqnIR, LE_FALSE);
    splash_ImgSqnIR->fn->setScheme(splash_ImgSqnIR, &BlackBack);
    splash_ImgSqnIR->fn->setBackgroundType(splash_ImgSqnIR, LE_WIDGET_BACKGROUND_NONE);
    splash_ImgSqnIR->fn->play(splash_ImgSqnIR);
    splash_ImgSqnIR->fn->setRepeat(splash_ImgSqnIR, LE_TRUE);
    splash_ImgSqnIR->fn->setImageCount(splash_ImgSqnIR, 9);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 0, &D1_anim1);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 0, 1000);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 1, &D1_anim2);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 1, 1000);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 2, &D1_anim3);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 2, 1000);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 3, &D2_anim1);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 3, 1000);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 4, &D2_anim2);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 4, 1000);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 5, &D2_anim3);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 5, 1000);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 6, &D3_Anim1);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 6, 1000);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 7, &D3_Anim2);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 7, 1000);
    splash_ImgSqnIR->fn->setImage(splash_ImgSqnIR, 8, &D3_anim3);
    splash_ImgSqnIR->fn->setImageDelay(splash_ImgSqnIR, 8, 1000);
    root1->fn->addChild(root1, (leWidget*)splash_ImgSqnIR);

    splash_panelDue = leWidget_New();
    splash_panelDue->fn->setPosition(splash_panelDue, 0, 0);
    splash_panelDue->fn->setSize(splash_panelDue, 480, 30);
    splash_panelDue->fn->setVisible(splash_panelDue, LE_FALSE);
    splash_panelDue->fn->setScheme(splash_panelDue, &BlackBack);
    splash_panelDue->fn->setBackgroundType(splash_panelDue, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)splash_panelDue);

    splash_LblDueAlert = leLabelWidget_New();
    splash_LblDueAlert->fn->setPosition(splash_LblDueAlert, 30, 0);
    splash_LblDueAlert->fn->setSize(splash_LblDueAlert, 450, 30);
    splash_LblDueAlert->fn->setScheme(splash_LblDueAlert, &dueAlertSch);
    splash_LblDueAlert->fn->setString(splash_LblDueAlert, (leString*)&string_ALERT_FilterReplacementRequired);
    splash_panelDue->fn->addChild(splash_panelDue, (leWidget*)splash_LblDueAlert);

    splash_ImgAlert = leImageWidget_New();
    splash_ImgAlert->fn->setPosition(splash_ImgAlert, 0, 0);
    splash_ImgAlert->fn->setSize(splash_ImgAlert, 30, 30);
    splash_ImgAlert->fn->setScheme(splash_ImgAlert, &BlackBack);
    splash_ImgAlert->fn->setBackgroundType(splash_ImgAlert, LE_WIDGET_BACKGROUND_NONE);
    splash_ImgAlert->fn->setBorderType(splash_ImgAlert, LE_WIDGET_BORDER_NONE);
    splash_ImgAlert->fn->setImage(splash_ImgAlert, (leImage*)&Alerts_alert1);
    splash_panelDue->fn->addChild(splash_panelDue, (leWidget*)splash_ImgAlert);

    splash_BtnLogo = leButtonWidget_New();
    splash_BtnLogo->fn->setPosition(splash_BtnLogo, 158, 229);
    splash_BtnLogo->fn->setSize(splash_BtnLogo, 164, 35);
    splash_BtnLogo->fn->setScheme(splash_BtnLogo, &BlackBack);
    splash_BtnLogo->fn->setBackgroundType(splash_BtnLogo, LE_WIDGET_BACKGROUND_NONE);
    splash_BtnLogo->fn->setBorderType(splash_BtnLogo, LE_WIDGET_BORDER_NONE);
    splash_BtnLogo->fn->setPressedImage(splash_BtnLogo, (leImage*)&Splash_logo);
    splash_BtnLogo->fn->setReleasedImage(splash_BtnLogo, (leImage*)&Splash_logo);
    splash_BtnLogo->fn->setReleasedEventCallback(splash_BtnLogo, event_splash_BtnLogo_OnReleased);
    root1->fn->addChild(root1, (leWidget*)splash_BtnLogo);

    splash_BtnHelp = leButtonWidget_New();
    splash_BtnHelp->fn->setPosition(splash_BtnHelp, 440, 232);
    splash_BtnHelp->fn->setSize(splash_BtnHelp, 40, 40);
    splash_BtnHelp->fn->setScheme(splash_BtnHelp, &BlackBack);
    splash_BtnHelp->fn->setBackgroundType(splash_BtnHelp, LE_WIDGET_BACKGROUND_NONE);
    splash_BtnHelp->fn->setBorderType(splash_BtnHelp, LE_WIDGET_BORDER_NONE);
    splash_BtnHelp->fn->setPressedImage(splash_BtnHelp, (leImage*)&Splash_help);
    splash_BtnHelp->fn->setReleasedImage(splash_BtnHelp, (leImage*)&Splash_help);
    splash_BtnHelp->fn->setReleasedEventCallback(splash_BtnHelp, event_splash_BtnHelp_OnReleased);
    root1->fn->addChild(root1, (leWidget*)splash_BtnHelp);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    splash_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_splash(void)
{
}

void screenHide_splash(void)
{
    splash_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    splash_Pnlayer1 = NULL;
    splash_PnlHotwater = NULL;
    splash_PnlWater = NULL;
    splash_PnlIce = NULL;
    splash_ImgSqnIR = NULL;
    splash_panelDue = NULL;
    splash_BtnLogo = NULL;
    splash_BtnHelp = NULL;
    splash_ImgHotWater = NULL;
    splash_BtnHotWater = NULL;
    splash_ImgSqnWater = NULL;
    splash_BtnWater = NULL;
    splash_ImgSqnIce = NULL;
    splash_BtnIce = NULL;
    splash_LblDueAlert = NULL;
    splash_ImgAlert = NULL;


    showing = LE_FALSE;
}

void screenDestroy_splash(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_splash(uint32_t lyrIdx)
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

