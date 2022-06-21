#include "gfx/legato/generated/screen/le_gen_screen_PowerModeSingle.h"
#include "app.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* PowerModeSingle_Layer0_FillPanel;
leImageWidget* PowerModeSingle_ImageRedCircle;
leLabelWidget* PowerModeSingle_LabelSetPoint;
leWidget* PowerModeSingle_PanelWidget0;
leLabelWidget* PowerModeSingle_LabelTimeRemaining;
leButtonWidget* PowerModeSingle_ButtonTimer;
leButtonWidget* PowerModeSingle_ButtonTimerRemaining;
leButtonWidget* PowerModeSingle_ButtonLockScreen;
leButtonWidget* PowerModeSingle_ButtonSettings;
leButtonWidget* PowerModeSingle_ButtonBack;
leCircularSliderWidget* PowerModeSingle_PowerSlider;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_PowerModeSingle(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_PowerModeSingle(void)
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

    PowerModeSingle_Layer0_FillPanel = leWidget_New();
    PowerModeSingle_Layer0_FillPanel->fn->setPosition(PowerModeSingle_Layer0_FillPanel, 0, 0);
    PowerModeSingle_Layer0_FillPanel->fn->setSize(PowerModeSingle_Layer0_FillPanel, 480, 272);
    PowerModeSingle_Layer0_FillPanel->fn->setScheme(PowerModeSingle_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)PowerModeSingle_Layer0_FillPanel);

    PowerModeSingle_ImageRedCircle = leImageWidget_New();
    PowerModeSingle_ImageRedCircle->fn->setPosition(PowerModeSingle_ImageRedCircle, 112, 5);
    PowerModeSingle_ImageRedCircle->fn->setSize(PowerModeSingle_ImageRedCircle, 254, 250);
    PowerModeSingle_ImageRedCircle->fn->setEnabled(PowerModeSingle_ImageRedCircle, LE_FALSE);
    PowerModeSingle_ImageRedCircle->fn->setScheme(PowerModeSingle_ImageRedCircle, &BackgroundScheme);
    PowerModeSingle_ImageRedCircle->fn->setBackgroundType(PowerModeSingle_ImageRedCircle, LE_WIDGET_BACKGROUND_NONE);
    PowerModeSingle_ImageRedCircle->fn->setBorderType(PowerModeSingle_ImageRedCircle, LE_WIDGET_BORDER_NONE);
    PowerModeSingle_ImageRedCircle->fn->setImage(PowerModeSingle_ImageRedCircle, (leImage*)&ICON_Red_Circle2);
    root0->fn->addChild(root0, (leWidget*)PowerModeSingle_ImageRedCircle);

    PowerModeSingle_LabelSetPoint = leLabelWidget_New();
    PowerModeSingle_LabelSetPoint->fn->setPosition(PowerModeSingle_LabelSetPoint, 161, 94);
    PowerModeSingle_LabelSetPoint->fn->setSize(PowerModeSingle_LabelSetPoint, 160, 62);
    PowerModeSingle_LabelSetPoint->fn->setScheme(PowerModeSingle_LabelSetPoint, &BackgroundScheme);
    PowerModeSingle_LabelSetPoint->fn->setHAlignment(PowerModeSingle_LabelSetPoint, LE_HALIGN_CENTER);
    PowerModeSingle_LabelSetPoint->fn->setMargins(PowerModeSingle_LabelSetPoint, 4, 4, 0, 4);
    PowerModeSingle_LabelSetPoint->fn->setString(PowerModeSingle_LabelSetPoint, (leString*)&string_PowerValue);
    root0->fn->addChild(root0, (leWidget*)PowerModeSingle_LabelSetPoint);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    PowerModeSingle_PanelWidget0 = leWidget_New();
    PowerModeSingle_PanelWidget0->fn->setPosition(PowerModeSingle_PanelWidget0, 114, 6);
    PowerModeSingle_PanelWidget0->fn->setSize(PowerModeSingle_PanelWidget0, 254, 250);
    PowerModeSingle_PanelWidget0->fn->setScheme(PowerModeSingle_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)PowerModeSingle_PanelWidget0);

    PowerModeSingle_PowerSlider = leCircularSliderWidget_New();
    PowerModeSingle_PowerSlider->fn->setPosition(PowerModeSingle_PowerSlider, 0, 0);
    PowerModeSingle_PowerSlider->fn->setSize(PowerModeSingle_PowerSlider, 254, 250);
    PowerModeSingle_PowerSlider->fn->setEnabled(PowerModeSingle_PowerSlider, LE_FALSE);
    PowerModeSingle_PowerSlider->fn->setScheme(PowerModeSingle_PowerSlider, &BlueScheme);
    PowerModeSingle_PowerSlider->fn->setRadius(PowerModeSingle_PowerSlider, 110);
    PowerModeSingle_PowerSlider->fn->setStartAngle(PowerModeSingle_PowerSlider, 90);
    PowerModeSingle_PowerSlider->fn->setSpanAngle(PowerModeSingle_PowerSlider, 360);
    PowerModeSingle_PowerSlider->fn->setValue(PowerModeSingle_PowerSlider, 100);
    PowerModeSingle_PowerSlider->fn->setArcVisible(PowerModeSingle_PowerSlider, OUTSIDE_CIRCLE_BORDER, LE_FALSE);
    PowerModeSingle_PowerSlider->fn->setArcVisible(PowerModeSingle_PowerSlider, INSIDE_CIRCLE_BORDER, LE_FALSE);
    PowerModeSingle_PowerSlider->fn->setArcThickness(PowerModeSingle_PowerSlider, ACTIVE_AREA, 50);
    PowerModeSingle_PowerSlider->fn->setArcVisible(PowerModeSingle_PowerSlider, ACTIVE_AREA, LE_FALSE);
    PowerModeSingle_PowerSlider->fn->setArcVisible(PowerModeSingle_PowerSlider, INACTIVE_AREA, LE_FALSE);
    PowerModeSingle_PowerSlider->fn->setArcThickness(PowerModeSingle_PowerSlider, CIRCLE_BUTTON, 5);
    PowerModeSingle_PowerSlider->fn->setArcRadius(PowerModeSingle_PowerSlider, CIRCLE_BUTTON, 10);
    PowerModeSingle_PowerSlider->fn->setTouchOnButtonOnly(PowerModeSingle_PowerSlider, LE_FALSE);
    PowerModeSingle_PowerSlider->fn->setArcScheme(PowerModeSingle_PowerSlider, CIRCLE_BUTTON, &WarningScheme);
    PowerModeSingle_PowerSlider->fn->setValueChangedEventCallback(PowerModeSingle_PowerSlider, event_PowerModeSingle_PowerSlider_OnValueChanged);
    PowerModeSingle_PanelWidget0->fn->addChild(PowerModeSingle_PanelWidget0, (leWidget*)PowerModeSingle_PowerSlider);

    PowerModeSingle_LabelTimeRemaining = leLabelWidget_New();
    PowerModeSingle_LabelTimeRemaining->fn->setPosition(PowerModeSingle_LabelTimeRemaining, 45, 15);
    PowerModeSingle_LabelTimeRemaining->fn->setSize(PowerModeSingle_LabelTimeRemaining, 60, 25);
    PowerModeSingle_LabelTimeRemaining->fn->setEnabled(PowerModeSingle_LabelTimeRemaining, LE_FALSE);
    PowerModeSingle_LabelTimeRemaining->fn->setVisible(PowerModeSingle_LabelTimeRemaining, LE_FALSE);
    PowerModeSingle_LabelTimeRemaining->fn->setScheme(PowerModeSingle_LabelTimeRemaining, &BackgroundScheme);
    PowerModeSingle_LabelTimeRemaining->fn->setString(PowerModeSingle_LabelTimeRemaining, (leString*)&string_TimerMinutesRemaining);
    root1->fn->addChild(root1, (leWidget*)PowerModeSingle_LabelTimeRemaining);

    PowerModeSingle_ButtonTimer = leButtonWidget_New();
    PowerModeSingle_ButtonTimer->fn->setPosition(PowerModeSingle_ButtonTimer, 4, 4);
    PowerModeSingle_ButtonTimer->fn->setSize(PowerModeSingle_ButtonTimer, 45, 45);
    PowerModeSingle_ButtonTimer->fn->setScheme(PowerModeSingle_ButtonTimer, &BackgroundScheme);
    PowerModeSingle_ButtonTimer->fn->setBorderType(PowerModeSingle_ButtonTimer, LE_WIDGET_BORDER_NONE);
    PowerModeSingle_ButtonTimer->fn->setPressedImage(PowerModeSingle_ButtonTimer, (leImage*)&ICON_timerActive);
    PowerModeSingle_ButtonTimer->fn->setReleasedImage(PowerModeSingle_ButtonTimer, (leImage*)&ICON_timerInActive);
    PowerModeSingle_ButtonTimer->fn->setPressedEventCallback(PowerModeSingle_ButtonTimer, event_PowerModeSingle_ButtonTimer_OnPressed);
    PowerModeSingle_ButtonTimer->fn->setReleasedEventCallback(PowerModeSingle_ButtonTimer, event_PowerModeSingle_ButtonTimer_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PowerModeSingle_ButtonTimer);

    PowerModeSingle_ButtonTimerRemaining = leButtonWidget_New();
    PowerModeSingle_ButtonTimerRemaining->fn->setPosition(PowerModeSingle_ButtonTimerRemaining, 45, 15);
    PowerModeSingle_ButtonTimerRemaining->fn->setSize(PowerModeSingle_ButtonTimerRemaining, 60, 25);
    PowerModeSingle_ButtonTimerRemaining->fn->setEnabled(PowerModeSingle_ButtonTimerRemaining, LE_FALSE);
    PowerModeSingle_ButtonTimerRemaining->fn->setVisible(PowerModeSingle_ButtonTimerRemaining, LE_FALSE);
    PowerModeSingle_ButtonTimerRemaining->fn->setScheme(PowerModeSingle_ButtonTimerRemaining, &ForegroundScheme);
    PowerModeSingle_ButtonTimerRemaining->fn->setBorderType(PowerModeSingle_ButtonTimerRemaining, LE_WIDGET_BORDER_NONE);
    PowerModeSingle_ButtonTimerRemaining->fn->setHAlignment(PowerModeSingle_ButtonTimerRemaining, LE_HALIGN_LEFT);
    PowerModeSingle_ButtonTimerRemaining->fn->setImagePosition(PowerModeSingle_ButtonTimerRemaining, LE_RELATIVE_POSITION_BEHIND);
    PowerModeSingle_ButtonTimerRemaining->fn->setReleasedEventCallback(PowerModeSingle_ButtonTimerRemaining, event_PowerModeSingle_ButtonTimerRemaining_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PowerModeSingle_ButtonTimerRemaining);

    PowerModeSingle_ButtonLockScreen = leButtonWidget_New();
    PowerModeSingle_ButtonLockScreen->fn->setPosition(PowerModeSingle_ButtonLockScreen, 431, 4);
    PowerModeSingle_ButtonLockScreen->fn->setSize(PowerModeSingle_ButtonLockScreen, 45, 45);
    PowerModeSingle_ButtonLockScreen->fn->setScheme(PowerModeSingle_ButtonLockScreen, &BackgroundScheme);
    PowerModeSingle_ButtonLockScreen->fn->setBorderType(PowerModeSingle_ButtonLockScreen, LE_WIDGET_BORDER_NONE);
    //PowerModeSingle_ButtonLockScreen->fn->setToggleable(PowerModeSingle_ButtonLockScreen, LE_TRUE);
#if(1)
    if(gCurVar0.powerLockFlag == true)
        PowerModeSingle_ButtonLockScreen->fn->setReleasedImage(PowerModeSingle_ButtonLockScreen, (leImage*)&ICON_lockClosed);
    else
        PowerModeSingle_ButtonLockScreen->fn->setReleasedImage(PowerModeSingle_ButtonLockScreen, (leImage*)&ICON_lockOpen);
#endif
    PowerModeSingle_ButtonLockScreen->fn->setPressedEventCallback(PowerModeSingle_ButtonLockScreen, event_PowerModeSingle_ButtonLockScreen_OnPressed);
    PowerModeSingle_ButtonLockScreen->fn->setReleasedEventCallback(PowerModeSingle_ButtonLockScreen, event_PowerModeSingle_ButtonLockScreen_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PowerModeSingle_ButtonLockScreen);

    PowerModeSingle_ButtonSettings = leButtonWidget_New();
    PowerModeSingle_ButtonSettings->fn->setPosition(PowerModeSingle_ButtonSettings, 431, 223);
    PowerModeSingle_ButtonSettings->fn->setSize(PowerModeSingle_ButtonSettings, 45, 45);
    PowerModeSingle_ButtonSettings->fn->setScheme(PowerModeSingle_ButtonSettings, &BackgroundScheme);
    PowerModeSingle_ButtonSettings->fn->setBorderType(PowerModeSingle_ButtonSettings, LE_WIDGET_BORDER_NONE);
    PowerModeSingle_ButtonSettings->fn->setPressedImage(PowerModeSingle_ButtonSettings, (leImage*)&ICON_cog_active);
    PowerModeSingle_ButtonSettings->fn->setReleasedImage(PowerModeSingle_ButtonSettings, (leImage*)&ICON_cog_inactive);
    PowerModeSingle_ButtonSettings->fn->setPressedEventCallback(PowerModeSingle_ButtonSettings, event_PowerModeSingle_ButtonSettings_OnPressed);
    PowerModeSingle_ButtonSettings->fn->setReleasedEventCallback(PowerModeSingle_ButtonSettings, event_PowerModeSingle_ButtonSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PowerModeSingle_ButtonSettings);

    PowerModeSingle_ButtonBack = leButtonWidget_New();
    PowerModeSingle_ButtonBack->fn->setPosition(PowerModeSingle_ButtonBack, 4, 223);
    PowerModeSingle_ButtonBack->fn->setSize(PowerModeSingle_ButtonBack, 45, 45);
    PowerModeSingle_ButtonBack->fn->setScheme(PowerModeSingle_ButtonBack, &BackgroundScheme);
    PowerModeSingle_ButtonBack->fn->setBorderType(PowerModeSingle_ButtonBack, LE_WIDGET_BORDER_NONE);
    PowerModeSingle_ButtonBack->fn->setPressedImage(PowerModeSingle_ButtonBack, (leImage*)&ICON_goBackActive);
    PowerModeSingle_ButtonBack->fn->setReleasedImage(PowerModeSingle_ButtonBack, (leImage*)&ICON_goBackInactive);
    PowerModeSingle_ButtonBack->fn->setPressedEventCallback(PowerModeSingle_ButtonBack, event_PowerModeSingle_ButtonBack_OnPressed);
    PowerModeSingle_ButtonBack->fn->setReleasedEventCallback(PowerModeSingle_ButtonBack, event_PowerModeSingle_ButtonBack_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PowerModeSingle_ButtonBack);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    PowerModeSingle_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_PowerModeSingle(void)
{
}

void screenHide_PowerModeSingle(void)
{
    PowerModeSingle_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    PowerModeSingle_Layer0_FillPanel = NULL;
    PowerModeSingle_ImageRedCircle = NULL;
    PowerModeSingle_LabelSetPoint = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    PowerModeSingle_PanelWidget0 = NULL;
    PowerModeSingle_LabelTimeRemaining = NULL;
    PowerModeSingle_ButtonTimer = NULL;
    PowerModeSingle_ButtonTimerRemaining = NULL;
    PowerModeSingle_ButtonLockScreen = NULL;
    PowerModeSingle_ButtonSettings = NULL;
    PowerModeSingle_ButtonBack = NULL;
    PowerModeSingle_PowerSlider = NULL;


    showing = LE_FALSE;
}

void screenDestroy_PowerModeSingle(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_PowerModeSingle(uint32_t lyrIdx)
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

