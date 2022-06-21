#include "gfx/legato/generated/screen/le_gen_screen_DualPowerMode.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* DualPowerMode_PanelHOB1Back;
leWidget* DualPowerMode_PanelHOB2Back;
leWidget* DualPowerMode_PanelGeneral;
leButtonWidget* DualPowerMode_ButtonHOB1Clock;
leButtonWidget* DualPowerMode_ButtonHOB1Lock;
leLabelWidget* DualPowerMode_LabelHOB1TimeRemaining;
leLabelWidget* DualPowerMode_LabelHOB1SetPower;
leButtonWidget* DualPowerMode_ButtonBigHOB1;
leSliderWidget* DualPowerMode_SliderHOB1;
leButtonWidget* DualPowerMode_ButtonHOB2Clock;
leButtonWidget* DualPowerMode_ButtonHOB2Lock;
leLabelWidget* DualPowerMode_LabelHOB2TimeRemaining;
leLabelWidget* DualPowerMode_LabelHOB2SetPower;
leButtonWidget* DualPowerMode_ButtonBigHOB2;
leSliderWidget* DualPowerMode_SliderHOB2;
leButtonWidget* DualPowerMode_ButtonBack;
leButtonWidget* DualPowerMode_ButtonSettings;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_DualPowerMode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_DualPowerMode(void)
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

    DualPowerMode_PanelHOB1Back = leWidget_New();
    DualPowerMode_PanelHOB1Back->fn->setPosition(DualPowerMode_PanelHOB1Back, 0, 0);
    DualPowerMode_PanelHOB1Back->fn->setSize(DualPowerMode_PanelHOB1Back, 240, 220);
    DualPowerMode_PanelHOB1Back->fn->setScheme(DualPowerMode_PanelHOB1Back, &BackgroundScheme);
    DualPowerMode_PanelHOB1Back->fn->setBorderType(DualPowerMode_PanelHOB1Back, LE_WIDGET_BORDER_BEVEL);
    root1->fn->addChild(root1, (leWidget*)DualPowerMode_PanelHOB1Back);

    DualPowerMode_ButtonHOB1Clock = leButtonWidget_New();
    DualPowerMode_ButtonHOB1Clock->fn->setPosition(DualPowerMode_ButtonHOB1Clock, 0, 0);
    DualPowerMode_ButtonHOB1Clock->fn->setSize(DualPowerMode_ButtonHOB1Clock, 60, 60);
    DualPowerMode_ButtonHOB1Clock->fn->setScheme(DualPowerMode_ButtonHOB1Clock, &BackgroundScheme);
    DualPowerMode_ButtonHOB1Clock->fn->setBackgroundType(DualPowerMode_ButtonHOB1Clock, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_ButtonHOB1Clock->fn->setBorderType(DualPowerMode_ButtonHOB1Clock, LE_WIDGET_BORDER_NONE);
    DualPowerMode_ButtonHOB1Clock->fn->setPressedImage(DualPowerMode_ButtonHOB1Clock, (leImage*)&ICON_timerActive);
    DualPowerMode_ButtonHOB1Clock->fn->setReleasedImage(DualPowerMode_ButtonHOB1Clock, (leImage*)&ICON_timerInActive);
    DualPowerMode_ButtonHOB1Clock->fn->setReleasedEventCallback(DualPowerMode_ButtonHOB1Clock, event_DualPowerMode_ButtonHOB1Clock_OnReleased);
    DualPowerMode_PanelHOB1Back->fn->addChild(DualPowerMode_PanelHOB1Back, (leWidget*)DualPowerMode_ButtonHOB1Clock);

    DualPowerMode_ButtonHOB1Lock = leButtonWidget_New();
    DualPowerMode_ButtonHOB1Lock->fn->setPosition(DualPowerMode_ButtonHOB1Lock, 180, 0);
    DualPowerMode_ButtonHOB1Lock->fn->setSize(DualPowerMode_ButtonHOB1Lock, 60, 60);
    DualPowerMode_ButtonHOB1Lock->fn->setScheme(DualPowerMode_ButtonHOB1Lock, &BackgroundScheme);
    DualPowerMode_ButtonHOB1Lock->fn->setBackgroundType(DualPowerMode_ButtonHOB1Lock, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_ButtonHOB1Lock->fn->setBorderType(DualPowerMode_ButtonHOB1Lock, LE_WIDGET_BORDER_NONE);
    DualPowerMode_ButtonHOB1Lock->fn->setPressedImage(DualPowerMode_ButtonHOB1Lock, (leImage*)&ICON_lockClosed);
    DualPowerMode_ButtonHOB1Lock->fn->setReleasedImage(DualPowerMode_ButtonHOB1Lock, (leImage*)&ICON_lockOpen);
    DualPowerMode_ButtonHOB1Lock->fn->setPressedEventCallback(DualPowerMode_ButtonHOB1Lock, event_DualPowerMode_ButtonHOB1Lock_OnPressed);
    DualPowerMode_ButtonHOB1Lock->fn->setReleasedEventCallback(DualPowerMode_ButtonHOB1Lock, event_DualPowerMode_ButtonHOB1Lock_OnReleased);
    DualPowerMode_PanelHOB1Back->fn->addChild(DualPowerMode_PanelHOB1Back, (leWidget*)DualPowerMode_ButtonHOB1Lock);

    DualPowerMode_LabelHOB1TimeRemaining = leLabelWidget_New();
    DualPowerMode_LabelHOB1TimeRemaining->fn->setPosition(DualPowerMode_LabelHOB1TimeRemaining, 45, 15);
    DualPowerMode_LabelHOB1TimeRemaining->fn->setSize(DualPowerMode_LabelHOB1TimeRemaining, 60, 25);
    DualPowerMode_LabelHOB1TimeRemaining->fn->setScheme(DualPowerMode_LabelHOB1TimeRemaining, &BackgroundScheme);
    DualPowerMode_LabelHOB1TimeRemaining->fn->setBackgroundType(DualPowerMode_LabelHOB1TimeRemaining, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_LabelHOB1TimeRemaining->fn->setString(DualPowerMode_LabelHOB1TimeRemaining, (leString*)&string_TimerMinutesRemaining);
    DualPowerMode_PanelHOB1Back->fn->addChild(DualPowerMode_PanelHOB1Back, (leWidget*)DualPowerMode_LabelHOB1TimeRemaining);

    DualPowerMode_LabelHOB1SetPower = leLabelWidget_New();
    DualPowerMode_LabelHOB1SetPower->fn->setPosition(DualPowerMode_LabelHOB1SetPower, 65, 90);
    DualPowerMode_LabelHOB1SetPower->fn->setSize(DualPowerMode_LabelHOB1SetPower, 125, 50);
    DualPowerMode_LabelHOB1SetPower->fn->setScheme(DualPowerMode_LabelHOB1SetPower, &BackgroundScheme);
    DualPowerMode_LabelHOB1SetPower->fn->setBackgroundType(DualPowerMode_LabelHOB1SetPower, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_LabelHOB1SetPower->fn->setString(DualPowerMode_LabelHOB1SetPower, (leString*)&string_PowerValue);
    DualPowerMode_PanelHOB1Back->fn->addChild(DualPowerMode_PanelHOB1Back, (leWidget*)DualPowerMode_LabelHOB1SetPower);

    DualPowerMode_ButtonBigHOB1 = leButtonWidget_New();
    DualPowerMode_ButtonBigHOB1->fn->setPosition(DualPowerMode_ButtonBigHOB1, 15, 50);
    DualPowerMode_ButtonBigHOB1->fn->setSize(DualPowerMode_ButtonBigHOB1, 220, 110);
    DualPowerMode_ButtonBigHOB1->fn->setScheme(DualPowerMode_ButtonBigHOB1, &BackgroundScheme);
    DualPowerMode_ButtonBigHOB1->fn->setBackgroundType(DualPowerMode_ButtonBigHOB1, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_ButtonBigHOB1->fn->setBorderType(DualPowerMode_ButtonBigHOB1, LE_WIDGET_BORDER_NONE);
    DualPowerMode_ButtonBigHOB1->fn->setReleasedEventCallback(DualPowerMode_ButtonBigHOB1, event_DualPowerMode_ButtonBigHOB1_OnReleased);
    DualPowerMode_PanelHOB1Back->fn->addChild(DualPowerMode_PanelHOB1Back, (leWidget*)DualPowerMode_ButtonBigHOB1);

    DualPowerMode_SliderHOB1 = leSliderWidget_New();
    DualPowerMode_SliderHOB1->fn->setPosition(DualPowerMode_SliderHOB1, 20, 172);
    DualPowerMode_SliderHOB1->fn->setSize(DualPowerMode_SliderHOB1, 210, 37);
    DualPowerMode_SliderHOB1->fn->setScheme(DualPowerMode_SliderHOB1, &SchemeSlider);
    DualPowerMode_SliderHOB1->fn->setBackgroundType(DualPowerMode_SliderHOB1, LE_WIDGET_BACKGROUND_NONE);
    
    //changed by bing
    DualPowerMode_SliderHOB1->fn->setOrientation(DualPowerMode_SliderHOB1, LE_ORIENTATION_HORIZONTAL, LE_FALSE);
    
    
    DualPowerMode_SliderHOB1->fn->setGripSize(DualPowerMode_SliderHOB1, 20);
    DualPowerMode_SliderHOB1->fn->setValueChangedEventCallback(DualPowerMode_SliderHOB1, event_DualPowerMode_SliderHOB1_OnValueChanged);
    DualPowerMode_PanelHOB1Back->fn->addChild(DualPowerMode_PanelHOB1Back, (leWidget*)DualPowerMode_SliderHOB1);

    DualPowerMode_PanelHOB2Back = leWidget_New();
    DualPowerMode_PanelHOB2Back->fn->setPosition(DualPowerMode_PanelHOB2Back, 240, 0);
    DualPowerMode_PanelHOB2Back->fn->setSize(DualPowerMode_PanelHOB2Back, 240, 220);
    DualPowerMode_PanelHOB2Back->fn->setScheme(DualPowerMode_PanelHOB2Back, &BackgroundScheme);
    DualPowerMode_PanelHOB2Back->fn->setBorderType(DualPowerMode_PanelHOB2Back, LE_WIDGET_BORDER_BEVEL);
    root1->fn->addChild(root1, (leWidget*)DualPowerMode_PanelHOB2Back);

    DualPowerMode_ButtonHOB2Clock = leButtonWidget_New();
    DualPowerMode_ButtonHOB2Clock->fn->setPosition(DualPowerMode_ButtonHOB2Clock, 0, 0);
    DualPowerMode_ButtonHOB2Clock->fn->setSize(DualPowerMode_ButtonHOB2Clock, 60, 60);
    DualPowerMode_ButtonHOB2Clock->fn->setScheme(DualPowerMode_ButtonHOB2Clock, &BackgroundScheme);
    DualPowerMode_ButtonHOB2Clock->fn->setBackgroundType(DualPowerMode_ButtonHOB2Clock, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_ButtonHOB2Clock->fn->setBorderType(DualPowerMode_ButtonHOB2Clock, LE_WIDGET_BORDER_NONE);
    DualPowerMode_ButtonHOB2Clock->fn->setPressedImage(DualPowerMode_ButtonHOB2Clock, (leImage*)&ICON_timerActive);
    DualPowerMode_ButtonHOB2Clock->fn->setReleasedImage(DualPowerMode_ButtonHOB2Clock, (leImage*)&ICON_timerInActive);
    DualPowerMode_ButtonHOB2Clock->fn->setReleasedEventCallback(DualPowerMode_ButtonHOB2Clock, event_DualPowerMode_ButtonHOB2Clock_OnReleased);
    DualPowerMode_PanelHOB2Back->fn->addChild(DualPowerMode_PanelHOB2Back, (leWidget*)DualPowerMode_ButtonHOB2Clock);

    DualPowerMode_ButtonHOB2Lock = leButtonWidget_New();
    DualPowerMode_ButtonHOB2Lock->fn->setPosition(DualPowerMode_ButtonHOB2Lock, 180, 0);
    DualPowerMode_ButtonHOB2Lock->fn->setSize(DualPowerMode_ButtonHOB2Lock, 60, 60);
    DualPowerMode_ButtonHOB2Lock->fn->setScheme(DualPowerMode_ButtonHOB2Lock, &BackgroundScheme);
    DualPowerMode_ButtonHOB2Lock->fn->setBackgroundType(DualPowerMode_ButtonHOB2Lock, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_ButtonHOB2Lock->fn->setBorderType(DualPowerMode_ButtonHOB2Lock, LE_WIDGET_BORDER_NONE);
    DualPowerMode_ButtonHOB2Lock->fn->setPressedImage(DualPowerMode_ButtonHOB2Lock, (leImage*)&ICON_lockClosed);
    DualPowerMode_ButtonHOB2Lock->fn->setReleasedImage(DualPowerMode_ButtonHOB2Lock, (leImage*)&ICON_lockOpen);
    DualPowerMode_ButtonHOB2Lock->fn->setPressedEventCallback(DualPowerMode_ButtonHOB2Lock, event_DualPowerMode_ButtonHOB2Lock_OnPressed);
    DualPowerMode_ButtonHOB2Lock->fn->setReleasedEventCallback(DualPowerMode_ButtonHOB2Lock, event_DualPowerMode_ButtonHOB2Lock_OnReleased);
    DualPowerMode_PanelHOB2Back->fn->addChild(DualPowerMode_PanelHOB2Back, (leWidget*)DualPowerMode_ButtonHOB2Lock);

    DualPowerMode_LabelHOB2TimeRemaining = leLabelWidget_New();
    DualPowerMode_LabelHOB2TimeRemaining->fn->setPosition(DualPowerMode_LabelHOB2TimeRemaining, 60, 15);
    DualPowerMode_LabelHOB2TimeRemaining->fn->setSize(DualPowerMode_LabelHOB2TimeRemaining, 60, 25);
    DualPowerMode_LabelHOB2TimeRemaining->fn->setScheme(DualPowerMode_LabelHOB2TimeRemaining, &BackgroundScheme);
    DualPowerMode_LabelHOB2TimeRemaining->fn->setBackgroundType(DualPowerMode_LabelHOB2TimeRemaining, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_LabelHOB2TimeRemaining->fn->setString(DualPowerMode_LabelHOB2TimeRemaining, (leString*)&string_TimerMinutesRemaining);
    DualPowerMode_PanelHOB2Back->fn->addChild(DualPowerMode_PanelHOB2Back, (leWidget*)DualPowerMode_LabelHOB2TimeRemaining);

    DualPowerMode_LabelHOB2SetPower = leLabelWidget_New();
    DualPowerMode_LabelHOB2SetPower->fn->setPosition(DualPowerMode_LabelHOB2SetPower, 65, 90);
    DualPowerMode_LabelHOB2SetPower->fn->setSize(DualPowerMode_LabelHOB2SetPower, 125, 50);
    DualPowerMode_LabelHOB2SetPower->fn->setScheme(DualPowerMode_LabelHOB2SetPower, &BackgroundScheme);
    DualPowerMode_LabelHOB2SetPower->fn->setBackgroundType(DualPowerMode_LabelHOB2SetPower, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_LabelHOB2SetPower->fn->setString(DualPowerMode_LabelHOB2SetPower, (leString*)&string_PowerValue);
    DualPowerMode_PanelHOB2Back->fn->addChild(DualPowerMode_PanelHOB2Back, (leWidget*)DualPowerMode_LabelHOB2SetPower);

    DualPowerMode_ButtonBigHOB2 = leButtonWidget_New();
    DualPowerMode_ButtonBigHOB2->fn->setPosition(DualPowerMode_ButtonBigHOB2, 15, 50);
    DualPowerMode_ButtonBigHOB2->fn->setSize(DualPowerMode_ButtonBigHOB2, 220, 110);
    DualPowerMode_ButtonBigHOB2->fn->setScheme(DualPowerMode_ButtonBigHOB2, &BackgroundScheme);
    DualPowerMode_ButtonBigHOB2->fn->setBackgroundType(DualPowerMode_ButtonBigHOB2, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_ButtonBigHOB2->fn->setBorderType(DualPowerMode_ButtonBigHOB2, LE_WIDGET_BORDER_NONE);
    DualPowerMode_ButtonBigHOB2->fn->setReleasedEventCallback(DualPowerMode_ButtonBigHOB2, event_DualPowerMode_ButtonBigHOB2_OnReleased);
    DualPowerMode_PanelHOB2Back->fn->addChild(DualPowerMode_PanelHOB2Back, (leWidget*)DualPowerMode_ButtonBigHOB2);

    DualPowerMode_SliderHOB2 = leSliderWidget_New();
    DualPowerMode_SliderHOB2->fn->setPosition(DualPowerMode_SliderHOB2, 20, 172);
    DualPowerMode_SliderHOB2->fn->setSize(DualPowerMode_SliderHOB2, 210, 37);
    DualPowerMode_SliderHOB2->fn->setScheme(DualPowerMode_SliderHOB2, &SchemeSlider);
    DualPowerMode_SliderHOB2->fn->setBackgroundType(DualPowerMode_SliderHOB2, LE_WIDGET_BACKGROUND_NONE);
    
    
    //changed by bing
    
    DualPowerMode_SliderHOB2->fn->setOrientation(DualPowerMode_SliderHOB2, LE_ORIENTATION_HORIZONTAL, LE_FALSE);
    
    
    DualPowerMode_SliderHOB2->fn->setGripSize(DualPowerMode_SliderHOB2, 20);
    DualPowerMode_SliderHOB2->fn->setValueChangedEventCallback(DualPowerMode_SliderHOB2, event_DualPowerMode_SliderHOB2_OnValueChanged);
    DualPowerMode_PanelHOB2Back->fn->addChild(DualPowerMode_PanelHOB2Back, (leWidget*)DualPowerMode_SliderHOB2);

    DualPowerMode_PanelGeneral = leWidget_New();
    DualPowerMode_PanelGeneral->fn->setPosition(DualPowerMode_PanelGeneral, 0, 220);
    DualPowerMode_PanelGeneral->fn->setSize(DualPowerMode_PanelGeneral, 480, 50);
    DualPowerMode_PanelGeneral->fn->setScheme(DualPowerMode_PanelGeneral, &BackgroundScheme);
    DualPowerMode_PanelGeneral->fn->setBorderType(DualPowerMode_PanelGeneral, LE_WIDGET_BORDER_BEVEL);
    root1->fn->addChild(root1, (leWidget*)DualPowerMode_PanelGeneral);

    DualPowerMode_ButtonBack = leButtonWidget_New();
    DualPowerMode_ButtonBack->fn->setPosition(DualPowerMode_ButtonBack, 0, 10);
    DualPowerMode_ButtonBack->fn->setSize(DualPowerMode_ButtonBack, 40, 40);
    DualPowerMode_ButtonBack->fn->setScheme(DualPowerMode_ButtonBack, &BackgroundScheme);
    DualPowerMode_ButtonBack->fn->setBackgroundType(DualPowerMode_ButtonBack, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_ButtonBack->fn->setBorderType(DualPowerMode_ButtonBack, LE_WIDGET_BORDER_NONE);
    DualPowerMode_ButtonBack->fn->setPressedImage(DualPowerMode_ButtonBack, (leImage*)&ICON_goBackActive);
    DualPowerMode_ButtonBack->fn->setReleasedImage(DualPowerMode_ButtonBack, (leImage*)&ICON_goBackInactive);
    DualPowerMode_ButtonBack->fn->setReleasedEventCallback(DualPowerMode_ButtonBack, event_DualPowerMode_ButtonBack_OnReleased);
    DualPowerMode_PanelGeneral->fn->addChild(DualPowerMode_PanelGeneral, (leWidget*)DualPowerMode_ButtonBack);

    DualPowerMode_ButtonSettings = leButtonWidget_New();
    DualPowerMode_ButtonSettings->fn->setPosition(DualPowerMode_ButtonSettings, 440, 10);
    DualPowerMode_ButtonSettings->fn->setSize(DualPowerMode_ButtonSettings, 40, 40);
    DualPowerMode_ButtonSettings->fn->setScheme(DualPowerMode_ButtonSettings, &BackgroundScheme);
    DualPowerMode_ButtonSettings->fn->setBackgroundType(DualPowerMode_ButtonSettings, LE_WIDGET_BACKGROUND_NONE);
    DualPowerMode_ButtonSettings->fn->setBorderType(DualPowerMode_ButtonSettings, LE_WIDGET_BORDER_NONE);
    DualPowerMode_ButtonSettings->fn->setPressedImage(DualPowerMode_ButtonSettings, (leImage*)&gear);
    DualPowerMode_ButtonSettings->fn->setReleasedImage(DualPowerMode_ButtonSettings, (leImage*)&gear);
    DualPowerMode_ButtonSettings->fn->setReleasedEventCallback(DualPowerMode_ButtonSettings, event_DualPowerMode_ButtonSettings_OnReleased);
    DualPowerMode_PanelGeneral->fn->addChild(DualPowerMode_PanelGeneral, (leWidget*)DualPowerMode_ButtonSettings);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    DualPowerMode_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_DualPowerMode(void)
{
}

void screenHide_DualPowerMode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    DualPowerMode_PanelHOB1Back = NULL;
    DualPowerMode_PanelHOB2Back = NULL;
    DualPowerMode_PanelGeneral = NULL;
    DualPowerMode_ButtonHOB1Clock = NULL;
    DualPowerMode_ButtonHOB1Lock = NULL;
    DualPowerMode_LabelHOB1TimeRemaining = NULL;
    DualPowerMode_LabelHOB1SetPower = NULL;
    DualPowerMode_ButtonBigHOB1 = NULL;
    DualPowerMode_SliderHOB1 = NULL;
    DualPowerMode_ButtonHOB2Clock = NULL;
    DualPowerMode_ButtonHOB2Lock = NULL;
    DualPowerMode_LabelHOB2TimeRemaining = NULL;
    DualPowerMode_LabelHOB2SetPower = NULL;
    DualPowerMode_ButtonBigHOB2 = NULL;
    DualPowerMode_SliderHOB2 = NULL;
    DualPowerMode_ButtonBack = NULL;
    DualPowerMode_ButtonSettings = NULL;


    showing = LE_FALSE;
}

void screenDestroy_DualPowerMode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_DualPowerMode(uint32_t lyrIdx)
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

