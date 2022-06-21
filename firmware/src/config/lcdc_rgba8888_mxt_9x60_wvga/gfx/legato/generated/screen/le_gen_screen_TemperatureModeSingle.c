#include "gfx/legato/generated/screen/le_gen_screen_TemperatureModeSingle.h"
#include "app.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* TemperatureModeSingle_Layer0_FillPanel;
leImageWidget* TemperatureModeSingle_ImageRedCircle;
leWidget* TemperatureModeSingle_PanelWidgetL1;
leButtonWidget* TemperatureModeSingle_ButtonBack;
leButtonWidget* TemperatureModeSingle_ButtonLockScreen;
leButtonWidget* TemperatureModeSingle_ButtonTimer;
leButtonWidget* TemperatureModeSingle_ButtonSettings;
leLabelWidget* TemperatureModeSingle_LabelTimeRemaining;
leLabelWidget* TemperatureModeSingle_LabelTemperatureCurrent;
leLabelWidget* TemperatureModeSingle_LabelTemperatureSet;
leCircularSliderWidget* TemperatureModeSingle_TempSlider;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_TemperatureModeSingle(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_TemperatureModeSingle(void)
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

    TemperatureModeSingle_Layer0_FillPanel = leWidget_New();
    TemperatureModeSingle_Layer0_FillPanel->fn->setPosition(TemperatureModeSingle_Layer0_FillPanel, 0, 0);
    TemperatureModeSingle_Layer0_FillPanel->fn->setSize(TemperatureModeSingle_Layer0_FillPanel, 480, 272);
    TemperatureModeSingle_Layer0_FillPanel->fn->setScheme(TemperatureModeSingle_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)TemperatureModeSingle_Layer0_FillPanel);

    TemperatureModeSingle_ImageRedCircle = leImageWidget_New();
    TemperatureModeSingle_ImageRedCircle->fn->setPosition(TemperatureModeSingle_ImageRedCircle, 112, 5);
    TemperatureModeSingle_ImageRedCircle->fn->setSize(TemperatureModeSingle_ImageRedCircle, 254, 250);
    TemperatureModeSingle_ImageRedCircle->fn->setEnabled(TemperatureModeSingle_ImageRedCircle, LE_FALSE);
    TemperatureModeSingle_ImageRedCircle->fn->setScheme(TemperatureModeSingle_ImageRedCircle, &BackgroundScheme);
    TemperatureModeSingle_ImageRedCircle->fn->setBackgroundType(TemperatureModeSingle_ImageRedCircle, LE_WIDGET_BACKGROUND_NONE);
    TemperatureModeSingle_ImageRedCircle->fn->setBorderType(TemperatureModeSingle_ImageRedCircle, LE_WIDGET_BORDER_NONE);
    TemperatureModeSingle_ImageRedCircle->fn->setImage(TemperatureModeSingle_ImageRedCircle, (leImage*)&ICON_Red_Circle2);
    root0->fn->addChild(root0, (leWidget*)TemperatureModeSingle_ImageRedCircle);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    TemperatureModeSingle_PanelWidgetL1 = leWidget_New();
    TemperatureModeSingle_PanelWidgetL1->fn->setPosition(TemperatureModeSingle_PanelWidgetL1, 114, 6);
    TemperatureModeSingle_PanelWidgetL1->fn->setSize(TemperatureModeSingle_PanelWidgetL1, 254, 250);
    TemperatureModeSingle_PanelWidgetL1->fn->setScheme(TemperatureModeSingle_PanelWidgetL1, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)TemperatureModeSingle_PanelWidgetL1);

    TemperatureModeSingle_TempSlider = leCircularSliderWidget_New();
    TemperatureModeSingle_TempSlider->fn->setPosition(TemperatureModeSingle_TempSlider, 0, 0);
    TemperatureModeSingle_TempSlider->fn->setSize(TemperatureModeSingle_TempSlider, 254, 250);
    TemperatureModeSingle_TempSlider->fn->setEnabled(TemperatureModeSingle_TempSlider, LE_FALSE);
    TemperatureModeSingle_TempSlider->fn->setScheme(TemperatureModeSingle_TempSlider, &BlueScheme);
    TemperatureModeSingle_TempSlider->fn->setRadius(TemperatureModeSingle_TempSlider, 110);
    TemperatureModeSingle_TempSlider->fn->setStartAngle(TemperatureModeSingle_TempSlider, 90);
    TemperatureModeSingle_TempSlider->fn->setSpanAngle(TemperatureModeSingle_TempSlider, 360);
    TemperatureModeSingle_TempSlider->fn->setValue(TemperatureModeSingle_TempSlider, 100);
    TemperatureModeSingle_TempSlider->fn->setArcVisible(TemperatureModeSingle_TempSlider, OUTSIDE_CIRCLE_BORDER, LE_FALSE);
    TemperatureModeSingle_TempSlider->fn->setArcVisible(TemperatureModeSingle_TempSlider, INSIDE_CIRCLE_BORDER, LE_FALSE);
    TemperatureModeSingle_TempSlider->fn->setArcThickness(TemperatureModeSingle_TempSlider, ACTIVE_AREA, 50);
    TemperatureModeSingle_TempSlider->fn->setArcVisible(TemperatureModeSingle_TempSlider, ACTIVE_AREA, LE_FALSE);
    TemperatureModeSingle_TempSlider->fn->setArcVisible(TemperatureModeSingle_TempSlider, INACTIVE_AREA, LE_FALSE);
    TemperatureModeSingle_TempSlider->fn->setArcThickness(TemperatureModeSingle_TempSlider, CIRCLE_BUTTON, 5);
    TemperatureModeSingle_TempSlider->fn->setArcRadius(TemperatureModeSingle_TempSlider, CIRCLE_BUTTON, 10);
    TemperatureModeSingle_TempSlider->fn->setTouchOnButtonOnly(TemperatureModeSingle_TempSlider, LE_FALSE);
    TemperatureModeSingle_TempSlider->fn->setArcScheme(TemperatureModeSingle_TempSlider, CIRCLE_BUTTON, &WarningScheme);
    TemperatureModeSingle_TempSlider->fn->setValueChangedEventCallback(TemperatureModeSingle_TempSlider, event_TemperatureModeSingle_TempSlider_OnValueChanged);
    TemperatureModeSingle_PanelWidgetL1->fn->addChild(TemperatureModeSingle_PanelWidgetL1, (leWidget*)TemperatureModeSingle_TempSlider);

    TemperatureModeSingle_ButtonBack = leButtonWidget_New();
    TemperatureModeSingle_ButtonBack->fn->setPosition(TemperatureModeSingle_ButtonBack, 4, 223);
    TemperatureModeSingle_ButtonBack->fn->setSize(TemperatureModeSingle_ButtonBack, 45, 45);
    TemperatureModeSingle_ButtonBack->fn->setEnabled(TemperatureModeSingle_ButtonBack, LE_FALSE);
    TemperatureModeSingle_ButtonBack->fn->setScheme(TemperatureModeSingle_ButtonBack, &BackgroundScheme);
    TemperatureModeSingle_ButtonBack->fn->setBorderType(TemperatureModeSingle_ButtonBack, LE_WIDGET_BORDER_NONE);
    TemperatureModeSingle_ButtonBack->fn->setPressedImage(TemperatureModeSingle_ButtonBack, (leImage*)&ICON_goBackActive);
    TemperatureModeSingle_ButtonBack->fn->setReleasedImage(TemperatureModeSingle_ButtonBack, (leImage*)&ICON_goBackInactive);
    TemperatureModeSingle_ButtonBack->fn->setReleasedEventCallback(TemperatureModeSingle_ButtonBack, event_TemperatureModeSingle_ButtonBack_OnReleased);
    root1->fn->addChild(root1, (leWidget*)TemperatureModeSingle_ButtonBack);

    TemperatureModeSingle_ButtonLockScreen = leButtonWidget_New();
    TemperatureModeSingle_ButtonLockScreen->fn->setPosition(TemperatureModeSingle_ButtonLockScreen, 431, 4);
    TemperatureModeSingle_ButtonLockScreen->fn->setSize(TemperatureModeSingle_ButtonLockScreen, 45, 45);
    TemperatureModeSingle_ButtonLockScreen->fn->setScheme(TemperatureModeSingle_ButtonLockScreen, &BackgroundScheme);
    TemperatureModeSingle_ButtonLockScreen->fn->setBorderType(TemperatureModeSingle_ButtonLockScreen, LE_WIDGET_BORDER_NONE);
    
    //changed by bing
    
    //TemperatureModeSingle_ButtonLockScreen->fn->setToggleable(TemperatureModeSingle_ButtonLockScreen, LE_TRUE);
    //TemperatureModeSingle_ButtonLockScreen->fn->setPressedImage(TemperatureModeSingle_ButtonLockScreen, (leImage*)&ICON_lockOpen);
    
    if(gCurVar0.powerLockFlag == true)
        TemperatureModeSingle_ButtonLockScreen->fn->setReleasedImage(TemperatureModeSingle_ButtonLockScreen, (leImage*)&ICON_lockClosed);
    else
        TemperatureModeSingle_ButtonLockScreen->fn->setReleasedImage(TemperatureModeSingle_ButtonLockScreen, (leImage*)&ICON_lockOpen);
    
    //TemperatureModeSingle_ButtonLockScreen->fn->setReleasedImage(TemperatureModeSingle_ButtonLockScreen, (leImage*)&ICON_lockOpen);
    
    TemperatureModeSingle_ButtonLockScreen->fn->setPressedEventCallback(TemperatureModeSingle_ButtonLockScreen, event_TemperatureModeSingle_ButtonLockScreen_OnPressed);
    TemperatureModeSingle_ButtonLockScreen->fn->setReleasedEventCallback(TemperatureModeSingle_ButtonLockScreen, event_TemperatureModeSingle_ButtonLockScreen_OnReleased);
    root1->fn->addChild(root1, (leWidget*)TemperatureModeSingle_ButtonLockScreen);

    TemperatureModeSingle_ButtonTimer = leButtonWidget_New();
    TemperatureModeSingle_ButtonTimer->fn->setPosition(TemperatureModeSingle_ButtonTimer, 4, 4);
    TemperatureModeSingle_ButtonTimer->fn->setSize(TemperatureModeSingle_ButtonTimer, 45, 45);
    TemperatureModeSingle_ButtonTimer->fn->setEnabled(TemperatureModeSingle_ButtonTimer, LE_FALSE);
    TemperatureModeSingle_ButtonTimer->fn->setScheme(TemperatureModeSingle_ButtonTimer, &BackgroundScheme);
    TemperatureModeSingle_ButtonTimer->fn->setBorderType(TemperatureModeSingle_ButtonTimer, LE_WIDGET_BORDER_NONE);
    TemperatureModeSingle_ButtonTimer->fn->setPressedImage(TemperatureModeSingle_ButtonTimer, (leImage*)&ICON_timerActive);
    TemperatureModeSingle_ButtonTimer->fn->setReleasedImage(TemperatureModeSingle_ButtonTimer, (leImage*)&ICON_timerInActive);
    TemperatureModeSingle_ButtonTimer->fn->setReleasedEventCallback(TemperatureModeSingle_ButtonTimer, event_TemperatureModeSingle_ButtonTimer_OnReleased);
    root1->fn->addChild(root1, (leWidget*)TemperatureModeSingle_ButtonTimer);

    TemperatureModeSingle_ButtonSettings = leButtonWidget_New();
    TemperatureModeSingle_ButtonSettings->fn->setPosition(TemperatureModeSingle_ButtonSettings, 431, 223);
    TemperatureModeSingle_ButtonSettings->fn->setSize(TemperatureModeSingle_ButtonSettings, 45, 45);
    TemperatureModeSingle_ButtonSettings->fn->setEnabled(TemperatureModeSingle_ButtonSettings, LE_FALSE);
    TemperatureModeSingle_ButtonSettings->fn->setScheme(TemperatureModeSingle_ButtonSettings, &BackgroundScheme);
    TemperatureModeSingle_ButtonSettings->fn->setBorderType(TemperatureModeSingle_ButtonSettings, LE_WIDGET_BORDER_NONE);
    TemperatureModeSingle_ButtonSettings->fn->setPressedImage(TemperatureModeSingle_ButtonSettings, (leImage*)&ICON_cog_active);
    TemperatureModeSingle_ButtonSettings->fn->setReleasedImage(TemperatureModeSingle_ButtonSettings, (leImage*)&ICON_cog_inactive);
    TemperatureModeSingle_ButtonSettings->fn->setReleasedEventCallback(TemperatureModeSingle_ButtonSettings, event_TemperatureModeSingle_ButtonSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)TemperatureModeSingle_ButtonSettings);

    TemperatureModeSingle_LabelTimeRemaining = leLabelWidget_New();
    TemperatureModeSingle_LabelTimeRemaining->fn->setPosition(TemperatureModeSingle_LabelTimeRemaining, 45, 15);
    TemperatureModeSingle_LabelTimeRemaining->fn->setSize(TemperatureModeSingle_LabelTimeRemaining, 60, 25);
    TemperatureModeSingle_LabelTimeRemaining->fn->setEnabled(TemperatureModeSingle_LabelTimeRemaining, LE_FALSE);
    TemperatureModeSingle_LabelTimeRemaining->fn->setVisible(TemperatureModeSingle_LabelTimeRemaining, LE_FALSE);
    TemperatureModeSingle_LabelTimeRemaining->fn->setScheme(TemperatureModeSingle_LabelTimeRemaining, &BackgroundScheme);
    TemperatureModeSingle_LabelTimeRemaining->fn->setString(TemperatureModeSingle_LabelTimeRemaining, (leString*)&string_TimerMinutesRemaining);
    root1->fn->addChild(root1, (leWidget*)TemperatureModeSingle_LabelTimeRemaining);

    TemperatureModeSingle_LabelTemperatureCurrent = leLabelWidget_New();
    TemperatureModeSingle_LabelTemperatureCurrent->fn->setPosition(TemperatureModeSingle_LabelTemperatureCurrent, 176, 104);
    TemperatureModeSingle_LabelTemperatureCurrent->fn->setSize(TemperatureModeSingle_LabelTemperatureCurrent, 131, 54);
    TemperatureModeSingle_LabelTemperatureCurrent->fn->setScheme(TemperatureModeSingle_LabelTemperatureCurrent, &BackgroundScheme);
    TemperatureModeSingle_LabelTemperatureCurrent->fn->setHAlignment(TemperatureModeSingle_LabelTemperatureCurrent, LE_HALIGN_CENTER);
    TemperatureModeSingle_LabelTemperatureCurrent->fn->setString(TemperatureModeSingle_LabelTemperatureCurrent, (leString*)&string_TemperatureCurrent);
    root1->fn->addChild(root1, (leWidget*)TemperatureModeSingle_LabelTemperatureCurrent);

    TemperatureModeSingle_LabelTemperatureSet = leLabelWidget_New();
    TemperatureModeSingle_LabelTemperatureSet->fn->setPosition(TemperatureModeSingle_LabelTemperatureSet, 169, 155);
    TemperatureModeSingle_LabelTemperatureSet->fn->setSize(TemperatureModeSingle_LabelTemperatureSet, 139, 27);
    TemperatureModeSingle_LabelTemperatureSet->fn->setScheme(TemperatureModeSingle_LabelTemperatureSet, &BackgroundScheme);
    TemperatureModeSingle_LabelTemperatureSet->fn->setHAlignment(TemperatureModeSingle_LabelTemperatureSet, LE_HALIGN_CENTER);
    TemperatureModeSingle_LabelTemperatureSet->fn->setString(TemperatureModeSingle_LabelTemperatureSet, (leString*)&string_TemperatureSet);
    root1->fn->addChild(root1, (leWidget*)TemperatureModeSingle_LabelTemperatureSet);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    TemperatureModeSingle_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_TemperatureModeSingle(void)
{
}

void screenHide_TemperatureModeSingle(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    TemperatureModeSingle_Layer0_FillPanel = NULL;
    TemperatureModeSingle_ImageRedCircle = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    TemperatureModeSingle_PanelWidgetL1 = NULL;
    TemperatureModeSingle_ButtonBack = NULL;
    TemperatureModeSingle_ButtonLockScreen = NULL;
    TemperatureModeSingle_ButtonTimer = NULL;
    TemperatureModeSingle_ButtonSettings = NULL;
    TemperatureModeSingle_LabelTimeRemaining = NULL;
    TemperatureModeSingle_LabelTemperatureCurrent = NULL;
    TemperatureModeSingle_LabelTemperatureSet = NULL;
    TemperatureModeSingle_TempSlider = NULL;


    showing = LE_FALSE;
}

void screenDestroy_TemperatureModeSingle(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_TemperatureModeSingle(uint32_t lyrIdx)
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

