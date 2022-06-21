#include "gfx/legato/generated/screen/le_gen_screen_ScreenBrightness.h"

// screen member widget declarations
leWidget* root0;

leWidget* ScreenBrightness_Layer0_FillPanel;
leButtonWidget* ScreenBrightness_ButtonBack;
leSliderWidget* ScreenBrightness_SliderWidgetBrightness;
leLabelWidget* ScreenBrightness_LabelBrightness;
leImageWidget* ScreenBrightness_ImageBrightness;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ScreenBrightness(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ScreenBrightness(void)
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

    ScreenBrightness_Layer0_FillPanel = leWidget_New();
    ScreenBrightness_Layer0_FillPanel->fn->setPosition(ScreenBrightness_Layer0_FillPanel, 0, 0);
    ScreenBrightness_Layer0_FillPanel->fn->setSize(ScreenBrightness_Layer0_FillPanel, 480, 272);
    ScreenBrightness_Layer0_FillPanel->fn->setScheme(ScreenBrightness_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ScreenBrightness_Layer0_FillPanel);

    ScreenBrightness_ButtonBack = leButtonWidget_New();
    ScreenBrightness_ButtonBack->fn->setPosition(ScreenBrightness_ButtonBack, 435, 0);
    ScreenBrightness_ButtonBack->fn->setSize(ScreenBrightness_ButtonBack, 45, 45);
    ScreenBrightness_ButtonBack->fn->setScheme(ScreenBrightness_ButtonBack, &BackgroundScheme);
    ScreenBrightness_ButtonBack->fn->setBackgroundType(ScreenBrightness_ButtonBack, LE_WIDGET_BACKGROUND_NONE);
    ScreenBrightness_ButtonBack->fn->setBorderType(ScreenBrightness_ButtonBack, LE_WIDGET_BORDER_NONE);
    ScreenBrightness_ButtonBack->fn->setPressedImage(ScreenBrightness_ButtonBack, (leImage*)&ICON_goBackActive);
    ScreenBrightness_ButtonBack->fn->setReleasedImage(ScreenBrightness_ButtonBack, (leImage*)&ICON_goBackInactive);
    ScreenBrightness_ButtonBack->fn->setPressedEventCallback(ScreenBrightness_ButtonBack, event_ScreenBrightness_ButtonBack_OnPressed);
    ScreenBrightness_ButtonBack->fn->setReleasedEventCallback(ScreenBrightness_ButtonBack, event_ScreenBrightness_ButtonBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)ScreenBrightness_ButtonBack);

    ScreenBrightness_SliderWidgetBrightness = leSliderWidget_New();
    ScreenBrightness_SliderWidgetBrightness->fn->setPosition(ScreenBrightness_SliderWidgetBrightness, 74, 122);
    ScreenBrightness_SliderWidgetBrightness->fn->setSize(ScreenBrightness_SliderWidgetBrightness, 350, 30);
    ScreenBrightness_SliderWidgetBrightness->fn->setScheme(ScreenBrightness_SliderWidgetBrightness, &SchemeSlider);
    ScreenBrightness_SliderWidgetBrightness->fn->setOrientation(ScreenBrightness_SliderWidgetBrightness, LE_ORIENTATION_HORIZONTAL, LE_TRUE);
    ScreenBrightness_SliderWidgetBrightness->fn->setValue(ScreenBrightness_SliderWidgetBrightness, 80);
    ScreenBrightness_SliderWidgetBrightness->fn->setGripSize(ScreenBrightness_SliderWidgetBrightness, 30);
    ScreenBrightness_SliderWidgetBrightness->fn->setValueChangedEventCallback(ScreenBrightness_SliderWidgetBrightness, event_ScreenBrightness_SliderWidgetBrightness_OnValueChanged);
    root0->fn->addChild(root0, (leWidget*)ScreenBrightness_SliderWidgetBrightness);

    ScreenBrightness_LabelBrightness = leLabelWidget_New();
    ScreenBrightness_LabelBrightness->fn->setPosition(ScreenBrightness_LabelBrightness, 50, 15);
    ScreenBrightness_LabelBrightness->fn->setSize(ScreenBrightness_LabelBrightness, 250, 25);
    ScreenBrightness_LabelBrightness->fn->setScheme(ScreenBrightness_LabelBrightness, &BackgroundScheme);
    ScreenBrightness_LabelBrightness->fn->setBackgroundType(ScreenBrightness_LabelBrightness, LE_WIDGET_BACKGROUND_NONE);
    ScreenBrightness_LabelBrightness->fn->setString(ScreenBrightness_LabelBrightness, (leString*)&string_ScreenBrightness);
    root0->fn->addChild(root0, (leWidget*)ScreenBrightness_LabelBrightness);

    ScreenBrightness_ImageBrightness = leImageWidget_New();
    ScreenBrightness_ImageBrightness->fn->setPosition(ScreenBrightness_ImageBrightness, 5, 5);
    ScreenBrightness_ImageBrightness->fn->setSize(ScreenBrightness_ImageBrightness, 40, 40);
    ScreenBrightness_ImageBrightness->fn->setScheme(ScreenBrightness_ImageBrightness, &BackgroundScheme);
    ScreenBrightness_ImageBrightness->fn->setBackgroundType(ScreenBrightness_ImageBrightness, LE_WIDGET_BACKGROUND_NONE);
    ScreenBrightness_ImageBrightness->fn->setBorderType(ScreenBrightness_ImageBrightness, LE_WIDGET_BORDER_NONE);
    ScreenBrightness_ImageBrightness->fn->setImage(ScreenBrightness_ImageBrightness, (leImage*)&ICON_brightness);
    root0->fn->addChild(root0, (leWidget*)ScreenBrightness_ImageBrightness);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ScreenBrightness(void)
{
}

void screenHide_ScreenBrightness(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ScreenBrightness_Layer0_FillPanel = NULL;
    ScreenBrightness_ButtonBack = NULL;
    ScreenBrightness_SliderWidgetBrightness = NULL;
    ScreenBrightness_LabelBrightness = NULL;
    ScreenBrightness_ImageBrightness = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ScreenBrightness(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ScreenBrightness(uint32_t lyrIdx)
{
    if(lyrIdx >= LE_LAYER_COUNT)
        return NULL;

    switch(lyrIdx)
    {
        case 0:
        {
            return root0;
        }
        default:
        {
            return NULL;
        }
    }
}

