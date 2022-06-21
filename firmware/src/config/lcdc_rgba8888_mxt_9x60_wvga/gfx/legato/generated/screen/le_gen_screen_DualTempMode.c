#include "gfx/legato/generated/screen/le_gen_screen_DualTempMode.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* DualTempMode_PanelHOB2Back;
leWidget* DualTempMode_PanelHOB1Back;
leWidget* DualTempMode_PanelGeneral;
leButtonWidget* DualTempMode_ButtonHOB2Clock;
leButtonWidget* DualTempMode_ButtonHOB2Lock;
leLabelWidget* DualTempMode_LabelHOB2GetTemp;
leLabelWidget* DualTempMode_LabelHOB2SetTemp;
leSliderWidget* DualTempMode_SliderHOB2Temp;
leLabelWidget* DualTempMode_LabelHOB2TimeRemaining;
leButtonWidget* DualTempMode_ButtonBigHOB2;
leButtonWidget* DualTempMode_ButtonHOB1Clock;
leButtonWidget* DualTempMode_ButtonHOB1Lock;
leLabelWidget* DualTempMode_LabelHOB1GetTemp;
leLabelWidget* DualTempMode_LabelHOB1SetTemp;
leSliderWidget* DualTempMode_SliderHOB1Temp;
leLabelWidget* DualTempMode_LabelHOB1TimeRemaining;
leButtonWidget* DualTempMode_ButtonBigHOB1;
leButtonWidget* DualTempMode_ButtonBack;
leButtonWidget* DualTempMode_ButtonSettings;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_DualTempMode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_DualTempMode(void)
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

    DualTempMode_PanelHOB2Back = leWidget_New();
    DualTempMode_PanelHOB2Back->fn->setPosition(DualTempMode_PanelHOB2Back, 240, 0);
    DualTempMode_PanelHOB2Back->fn->setSize(DualTempMode_PanelHOB2Back, 240, 220);
    DualTempMode_PanelHOB2Back->fn->setScheme(DualTempMode_PanelHOB2Back, &BackgroundScheme);
    DualTempMode_PanelHOB2Back->fn->setBorderType(DualTempMode_PanelHOB2Back, LE_WIDGET_BORDER_BEVEL);
    root1->fn->addChild(root1, (leWidget*)DualTempMode_PanelHOB2Back);

    DualTempMode_ButtonHOB2Clock = leButtonWidget_New();
    DualTempMode_ButtonHOB2Clock->fn->setPosition(DualTempMode_ButtonHOB2Clock, 0, 0);
    DualTempMode_ButtonHOB2Clock->fn->setSize(DualTempMode_ButtonHOB2Clock, 60, 60);
    DualTempMode_ButtonHOB2Clock->fn->setScheme(DualTempMode_ButtonHOB2Clock, &BackgroundScheme);
    DualTempMode_ButtonHOB2Clock->fn->setBackgroundType(DualTempMode_ButtonHOB2Clock, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_ButtonHOB2Clock->fn->setBorderType(DualTempMode_ButtonHOB2Clock, LE_WIDGET_BORDER_NONE);
    DualTempMode_ButtonHOB2Clock->fn->setPressedImage(DualTempMode_ButtonHOB2Clock, (leImage*)&ICON_timerActive);
    DualTempMode_ButtonHOB2Clock->fn->setReleasedImage(DualTempMode_ButtonHOB2Clock, (leImage*)&ICON_timerInActive);
    DualTempMode_ButtonHOB2Clock->fn->setReleasedEventCallback(DualTempMode_ButtonHOB2Clock, event_DualTempMode_ButtonHOB2Clock_OnReleased);
    DualTempMode_PanelHOB2Back->fn->addChild(DualTempMode_PanelHOB2Back, (leWidget*)DualTempMode_ButtonHOB2Clock);

    DualTempMode_ButtonHOB2Lock = leButtonWidget_New();
    DualTempMode_ButtonHOB2Lock->fn->setPosition(DualTempMode_ButtonHOB2Lock, 180, 0);
    DualTempMode_ButtonHOB2Lock->fn->setSize(DualTempMode_ButtonHOB2Lock, 60, 60);
    DualTempMode_ButtonHOB2Lock->fn->setScheme(DualTempMode_ButtonHOB2Lock, &BackgroundScheme);
    DualTempMode_ButtonHOB2Lock->fn->setBackgroundType(DualTempMode_ButtonHOB2Lock, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_ButtonHOB2Lock->fn->setBorderType(DualTempMode_ButtonHOB2Lock, LE_WIDGET_BORDER_NONE);
    DualTempMode_ButtonHOB2Lock->fn->setPressedImage(DualTempMode_ButtonHOB2Lock, (leImage*)&ICON_lockClosed);
    DualTempMode_ButtonHOB2Lock->fn->setReleasedImage(DualTempMode_ButtonHOB2Lock, (leImage*)&ICON_lockOpen);
    DualTempMode_ButtonHOB2Lock->fn->setPressedEventCallback(DualTempMode_ButtonHOB2Lock, event_DualTempMode_ButtonHOB2Lock_OnPressed);
    DualTempMode_ButtonHOB2Lock->fn->setReleasedEventCallback(DualTempMode_ButtonHOB2Lock, event_DualTempMode_ButtonHOB2Lock_OnReleased);
    DualTempMode_PanelHOB2Back->fn->addChild(DualTempMode_PanelHOB2Back, (leWidget*)DualTempMode_ButtonHOB2Lock);

    DualTempMode_LabelHOB2GetTemp = leLabelWidget_New();
    DualTempMode_LabelHOB2GetTemp->fn->setPosition(DualTempMode_LabelHOB2GetTemp, 35, 70);
    DualTempMode_LabelHOB2GetTemp->fn->setSize(DualTempMode_LabelHOB2GetTemp, 153, 50);
    DualTempMode_LabelHOB2GetTemp->fn->setScheme(DualTempMode_LabelHOB2GetTemp, &BackgroundScheme);
    DualTempMode_LabelHOB2GetTemp->fn->setBackgroundType(DualTempMode_LabelHOB2GetTemp, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_LabelHOB2GetTemp->fn->setHAlignment(DualTempMode_LabelHOB2GetTemp, LE_HALIGN_CENTER);
    DualTempMode_LabelHOB2GetTemp->fn->setString(DualTempMode_LabelHOB2GetTemp, (leString*)&string_TemperatureCurrent);
    DualTempMode_PanelHOB2Back->fn->addChild(DualTempMode_PanelHOB2Back, (leWidget*)DualTempMode_LabelHOB2GetTemp);

    DualTempMode_LabelHOB2SetTemp = leLabelWidget_New();
    DualTempMode_LabelHOB2SetTemp->fn->setPosition(DualTempMode_LabelHOB2SetTemp, 50, 130);
    DualTempMode_LabelHOB2SetTemp->fn->setSize(DualTempMode_LabelHOB2SetTemp, 115, 25);
    DualTempMode_LabelHOB2SetTemp->fn->setScheme(DualTempMode_LabelHOB2SetTemp, &BackgroundScheme);
    DualTempMode_LabelHOB2SetTemp->fn->setBackgroundType(DualTempMode_LabelHOB2SetTemp, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_LabelHOB2SetTemp->fn->setHAlignment(DualTempMode_LabelHOB2SetTemp, LE_HALIGN_CENTER);
    DualTempMode_LabelHOB2SetTemp->fn->setString(DualTempMode_LabelHOB2SetTemp, (leString*)&string_TemperatureSet);
    DualTempMode_PanelHOB2Back->fn->addChild(DualTempMode_PanelHOB2Back, (leWidget*)DualTempMode_LabelHOB2SetTemp);

    DualTempMode_SliderHOB2Temp = leSliderWidget_New();
    DualTempMode_SliderHOB2Temp->fn->setPosition(DualTempMode_SliderHOB2Temp, 20, 172);
    DualTempMode_SliderHOB2Temp->fn->setSize(DualTempMode_SliderHOB2Temp, 210, 36);
    DualTempMode_SliderHOB2Temp->fn->setScheme(DualTempMode_SliderHOB2Temp, &SchemeSlider);
    DualTempMode_SliderHOB2Temp->fn->setBackgroundType(DualTempMode_SliderHOB2Temp, LE_WIDGET_BACKGROUND_NONE);
    
    
    //CHANGED BY BING
    DualTempMode_SliderHOB2Temp->fn->setOrientation(DualTempMode_SliderHOB2Temp, LE_ORIENTATION_HORIZONTAL, LE_FALSE);
    DualTempMode_SliderHOB2Temp->fn->setGripSize(DualTempMode_SliderHOB2Temp, 20);
    DualTempMode_SliderHOB2Temp->fn->setValueChangedEventCallback(DualTempMode_SliderHOB2Temp, event_DualTempMode_SliderHOB2Temp_OnValueChanged);
    DualTempMode_PanelHOB2Back->fn->addChild(DualTempMode_PanelHOB2Back, (leWidget*)DualTempMode_SliderHOB2Temp);

    DualTempMode_LabelHOB2TimeRemaining = leLabelWidget_New();
    DualTempMode_LabelHOB2TimeRemaining->fn->setPosition(DualTempMode_LabelHOB2TimeRemaining, 47, 11);
    DualTempMode_LabelHOB2TimeRemaining->fn->setSize(DualTempMode_LabelHOB2TimeRemaining, 60, 25);
    DualTempMode_LabelHOB2TimeRemaining->fn->setScheme(DualTempMode_LabelHOB2TimeRemaining, &BackgroundScheme);
    DualTempMode_LabelHOB2TimeRemaining->fn->setString(DualTempMode_LabelHOB2TimeRemaining, (leString*)&string_TimerMinutesRemaining);
    DualTempMode_PanelHOB2Back->fn->addChild(DualTempMode_PanelHOB2Back, (leWidget*)DualTempMode_LabelHOB2TimeRemaining);

    DualTempMode_ButtonBigHOB2 = leButtonWidget_New();
    DualTempMode_ButtonBigHOB2->fn->setPosition(DualTempMode_ButtonBigHOB2, 15, 50);
    DualTempMode_ButtonBigHOB2->fn->setSize(DualTempMode_ButtonBigHOB2, 220, 110);
    DualTempMode_ButtonBigHOB2->fn->setScheme(DualTempMode_ButtonBigHOB2, &BackgroundScheme);
    DualTempMode_ButtonBigHOB2->fn->setBackgroundType(DualTempMode_ButtonBigHOB2, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_ButtonBigHOB2->fn->setBorderType(DualTempMode_ButtonBigHOB2, LE_WIDGET_BORDER_NONE);
    DualTempMode_ButtonBigHOB2->fn->setReleasedEventCallback(DualTempMode_ButtonBigHOB2, event_DualTempMode_ButtonBigHOB2_OnReleased);
    DualTempMode_PanelHOB2Back->fn->addChild(DualTempMode_PanelHOB2Back, (leWidget*)DualTempMode_ButtonBigHOB2);

    DualTempMode_PanelHOB1Back = leWidget_New();
    DualTempMode_PanelHOB1Back->fn->setPosition(DualTempMode_PanelHOB1Back, 1, 0);
    DualTempMode_PanelHOB1Back->fn->setSize(DualTempMode_PanelHOB1Back, 240, 220);
    DualTempMode_PanelHOB1Back->fn->setScheme(DualTempMode_PanelHOB1Back, &BackgroundScheme);
    DualTempMode_PanelHOB1Back->fn->setBorderType(DualTempMode_PanelHOB1Back, LE_WIDGET_BORDER_BEVEL);
    root1->fn->addChild(root1, (leWidget*)DualTempMode_PanelHOB1Back);

    DualTempMode_ButtonHOB1Clock = leButtonWidget_New();
    DualTempMode_ButtonHOB1Clock->fn->setPosition(DualTempMode_ButtonHOB1Clock, 0, 0);
    DualTempMode_ButtonHOB1Clock->fn->setSize(DualTempMode_ButtonHOB1Clock, 60, 60);
    DualTempMode_ButtonHOB1Clock->fn->setScheme(DualTempMode_ButtonHOB1Clock, &BackgroundScheme);
    DualTempMode_ButtonHOB1Clock->fn->setBackgroundType(DualTempMode_ButtonHOB1Clock, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_ButtonHOB1Clock->fn->setBorderType(DualTempMode_ButtonHOB1Clock, LE_WIDGET_BORDER_NONE);
    DualTempMode_ButtonHOB1Clock->fn->setPressedImage(DualTempMode_ButtonHOB1Clock, (leImage*)&ICON_timerActive);
    DualTempMode_ButtonHOB1Clock->fn->setReleasedImage(DualTempMode_ButtonHOB1Clock, (leImage*)&ICON_timerInActive);
    DualTempMode_ButtonHOB1Clock->fn->setReleasedEventCallback(DualTempMode_ButtonHOB1Clock, event_DualTempMode_ButtonHOB1Clock_OnReleased);
    DualTempMode_PanelHOB1Back->fn->addChild(DualTempMode_PanelHOB1Back, (leWidget*)DualTempMode_ButtonHOB1Clock);

    DualTempMode_ButtonHOB1Lock = leButtonWidget_New();
    DualTempMode_ButtonHOB1Lock->fn->setPosition(DualTempMode_ButtonHOB1Lock, 180, 0);
    DualTempMode_ButtonHOB1Lock->fn->setSize(DualTempMode_ButtonHOB1Lock, 60, 60);
    DualTempMode_ButtonHOB1Lock->fn->setScheme(DualTempMode_ButtonHOB1Lock, &BackgroundScheme);
    DualTempMode_ButtonHOB1Lock->fn->setBackgroundType(DualTempMode_ButtonHOB1Lock, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_ButtonHOB1Lock->fn->setBorderType(DualTempMode_ButtonHOB1Lock, LE_WIDGET_BORDER_NONE);
    DualTempMode_ButtonHOB1Lock->fn->setPressedImage(DualTempMode_ButtonHOB1Lock, (leImage*)&ICON_lockClosed);
    DualTempMode_ButtonHOB1Lock->fn->setReleasedImage(DualTempMode_ButtonHOB1Lock, (leImage*)&ICON_lockOpen);
    DualTempMode_ButtonHOB1Lock->fn->setPressedEventCallback(DualTempMode_ButtonHOB1Lock, event_DualTempMode_ButtonHOB1Lock_OnPressed);
    DualTempMode_ButtonHOB1Lock->fn->setReleasedEventCallback(DualTempMode_ButtonHOB1Lock, event_DualTempMode_ButtonHOB1Lock_OnReleased);
    DualTempMode_PanelHOB1Back->fn->addChild(DualTempMode_PanelHOB1Back, (leWidget*)DualTempMode_ButtonHOB1Lock);

    DualTempMode_LabelHOB1GetTemp = leLabelWidget_New();
    DualTempMode_LabelHOB1GetTemp->fn->setPosition(DualTempMode_LabelHOB1GetTemp, 35, 70);
    DualTempMode_LabelHOB1GetTemp->fn->setSize(DualTempMode_LabelHOB1GetTemp, 175, 50);
    DualTempMode_LabelHOB1GetTemp->fn->setScheme(DualTempMode_LabelHOB1GetTemp, &BackgroundScheme);
    DualTempMode_LabelHOB1GetTemp->fn->setBackgroundType(DualTempMode_LabelHOB1GetTemp, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_LabelHOB1GetTemp->fn->setHAlignment(DualTempMode_LabelHOB1GetTemp, LE_HALIGN_CENTER);
    DualTempMode_LabelHOB1GetTemp->fn->setString(DualTempMode_LabelHOB1GetTemp, (leString*)&string_TemperatureCurrent);
    DualTempMode_PanelHOB1Back->fn->addChild(DualTempMode_PanelHOB1Back, (leWidget*)DualTempMode_LabelHOB1GetTemp);

    DualTempMode_LabelHOB1SetTemp = leLabelWidget_New();
    DualTempMode_LabelHOB1SetTemp->fn->setPosition(DualTempMode_LabelHOB1SetTemp, 50, 130);
    DualTempMode_LabelHOB1SetTemp->fn->setSize(DualTempMode_LabelHOB1SetTemp, 136, 25);
    DualTempMode_LabelHOB1SetTemp->fn->setScheme(DualTempMode_LabelHOB1SetTemp, &BackgroundScheme);
    DualTempMode_LabelHOB1SetTemp->fn->setBackgroundType(DualTempMode_LabelHOB1SetTemp, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_LabelHOB1SetTemp->fn->setHAlignment(DualTempMode_LabelHOB1SetTemp, LE_HALIGN_CENTER);
    DualTempMode_LabelHOB1SetTemp->fn->setString(DualTempMode_LabelHOB1SetTemp, (leString*)&string_TemperatureSet);
    DualTempMode_PanelHOB1Back->fn->addChild(DualTempMode_PanelHOB1Back, (leWidget*)DualTempMode_LabelHOB1SetTemp);

    DualTempMode_SliderHOB1Temp = leSliderWidget_New();
    DualTempMode_SliderHOB1Temp->fn->setPosition(DualTempMode_SliderHOB1Temp, 20, 172);
    DualTempMode_SliderHOB1Temp->fn->setSize(DualTempMode_SliderHOB1Temp, 210, 37);
    DualTempMode_SliderHOB1Temp->fn->setScheme(DualTempMode_SliderHOB1Temp, &SchemeSlider);
    DualTempMode_SliderHOB1Temp->fn->setBackgroundType(DualTempMode_SliderHOB1Temp, LE_WIDGET_BACKGROUND_NONE);
    
    
    //CHANGE BY BING
    DualTempMode_SliderHOB1Temp->fn->setOrientation(DualTempMode_SliderHOB1Temp, LE_ORIENTATION_HORIZONTAL, LE_FALSE);
    DualTempMode_SliderHOB1Temp->fn->setGripSize(DualTempMode_SliderHOB1Temp, 20);
    DualTempMode_SliderHOB1Temp->fn->setValueChangedEventCallback(DualTempMode_SliderHOB1Temp, event_DualTempMode_SliderHOB1Temp_OnValueChanged);
    DualTempMode_PanelHOB1Back->fn->addChild(DualTempMode_PanelHOB1Back, (leWidget*)DualTempMode_SliderHOB1Temp);

    DualTempMode_LabelHOB1TimeRemaining = leLabelWidget_New();
    DualTempMode_LabelHOB1TimeRemaining->fn->setPosition(DualTempMode_LabelHOB1TimeRemaining, 45, 15);
    DualTempMode_LabelHOB1TimeRemaining->fn->setSize(DualTempMode_LabelHOB1TimeRemaining, 60, 25);
    DualTempMode_LabelHOB1TimeRemaining->fn->setScheme(DualTempMode_LabelHOB1TimeRemaining, &BackgroundScheme);
    DualTempMode_LabelHOB1TimeRemaining->fn->setString(DualTempMode_LabelHOB1TimeRemaining, (leString*)&string_TimerMinutesRemaining);
    DualTempMode_PanelHOB1Back->fn->addChild(DualTempMode_PanelHOB1Back, (leWidget*)DualTempMode_LabelHOB1TimeRemaining);

    DualTempMode_ButtonBigHOB1 = leButtonWidget_New();
    DualTempMode_ButtonBigHOB1->fn->setPosition(DualTempMode_ButtonBigHOB1, 15, 50);
    DualTempMode_ButtonBigHOB1->fn->setSize(DualTempMode_ButtonBigHOB1, 220, 110);
    DualTempMode_ButtonBigHOB1->fn->setScheme(DualTempMode_ButtonBigHOB1, &BackgroundScheme);
    DualTempMode_ButtonBigHOB1->fn->setBackgroundType(DualTempMode_ButtonBigHOB1, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_ButtonBigHOB1->fn->setBorderType(DualTempMode_ButtonBigHOB1, LE_WIDGET_BORDER_NONE);
    DualTempMode_ButtonBigHOB1->fn->setReleasedEventCallback(DualTempMode_ButtonBigHOB1, event_DualTempMode_ButtonBigHOB1_OnReleased);
    DualTempMode_PanelHOB1Back->fn->addChild(DualTempMode_PanelHOB1Back, (leWidget*)DualTempMode_ButtonBigHOB1);

    DualTempMode_PanelGeneral = leWidget_New();
    DualTempMode_PanelGeneral->fn->setPosition(DualTempMode_PanelGeneral, 0, 220);
    DualTempMode_PanelGeneral->fn->setSize(DualTempMode_PanelGeneral, 480, 50);
    DualTempMode_PanelGeneral->fn->setScheme(DualTempMode_PanelGeneral, &BackgroundScheme);
    DualTempMode_PanelGeneral->fn->setBorderType(DualTempMode_PanelGeneral, LE_WIDGET_BORDER_BEVEL);
    root1->fn->addChild(root1, (leWidget*)DualTempMode_PanelGeneral);

    DualTempMode_ButtonBack = leButtonWidget_New();
    DualTempMode_ButtonBack->fn->setPosition(DualTempMode_ButtonBack, 0, 9);
    DualTempMode_ButtonBack->fn->setSize(DualTempMode_ButtonBack, 40, 40);
    DualTempMode_ButtonBack->fn->setScheme(DualTempMode_ButtonBack, &BackgroundScheme);
    DualTempMode_ButtonBack->fn->setBackgroundType(DualTempMode_ButtonBack, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_ButtonBack->fn->setBorderType(DualTempMode_ButtonBack, LE_WIDGET_BORDER_NONE);
    DualTempMode_ButtonBack->fn->setPressedImage(DualTempMode_ButtonBack, (leImage*)&ICON_goBackActive);
    DualTempMode_ButtonBack->fn->setReleasedImage(DualTempMode_ButtonBack, (leImage*)&ICON_goBackInactive);
    DualTempMode_ButtonBack->fn->setReleasedEventCallback(DualTempMode_ButtonBack, event_DualTempMode_ButtonBack_OnReleased);
    DualTempMode_PanelGeneral->fn->addChild(DualTempMode_PanelGeneral, (leWidget*)DualTempMode_ButtonBack);

    DualTempMode_ButtonSettings = leButtonWidget_New();
    DualTempMode_ButtonSettings->fn->setPosition(DualTempMode_ButtonSettings, 442, 11);
    DualTempMode_ButtonSettings->fn->setSize(DualTempMode_ButtonSettings, 40, 40);
    DualTempMode_ButtonSettings->fn->setScheme(DualTempMode_ButtonSettings, &BackgroundScheme);
    DualTempMode_ButtonSettings->fn->setBackgroundType(DualTempMode_ButtonSettings, LE_WIDGET_BACKGROUND_NONE);
    DualTempMode_ButtonSettings->fn->setBorderType(DualTempMode_ButtonSettings, LE_WIDGET_BORDER_NONE);
    DualTempMode_ButtonSettings->fn->setPressedImage(DualTempMode_ButtonSettings, (leImage*)&gear);
    DualTempMode_ButtonSettings->fn->setReleasedImage(DualTempMode_ButtonSettings, (leImage*)&gear);
    DualTempMode_ButtonSettings->fn->setReleasedEventCallback(DualTempMode_ButtonSettings, event_DualTempMode_ButtonSettings_OnReleased);
    DualTempMode_PanelGeneral->fn->addChild(DualTempMode_PanelGeneral, (leWidget*)DualTempMode_ButtonSettings);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    DualTempMode_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_DualTempMode(void)
{
}

void screenHide_DualTempMode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    DualTempMode_PanelHOB2Back = NULL;
    DualTempMode_PanelHOB1Back = NULL;
    DualTempMode_PanelGeneral = NULL;
    DualTempMode_ButtonHOB2Clock = NULL;
    DualTempMode_ButtonHOB2Lock = NULL;
    DualTempMode_LabelHOB2GetTemp = NULL;
    DualTempMode_LabelHOB2SetTemp = NULL;
    DualTempMode_SliderHOB2Temp = NULL;
    DualTempMode_LabelHOB2TimeRemaining = NULL;
    DualTempMode_ButtonBigHOB2 = NULL;
    DualTempMode_ButtonHOB1Clock = NULL;
    DualTempMode_ButtonHOB1Lock = NULL;
    DualTempMode_LabelHOB1GetTemp = NULL;
    DualTempMode_LabelHOB1SetTemp = NULL;
    DualTempMode_SliderHOB1Temp = NULL;
    DualTempMode_LabelHOB1TimeRemaining = NULL;
    DualTempMode_ButtonBigHOB1 = NULL;
    DualTempMode_ButtonBack = NULL;
    DualTempMode_ButtonSettings = NULL;


    showing = LE_FALSE;
}

void screenDestroy_DualTempMode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_DualTempMode(uint32_t lyrIdx)
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

