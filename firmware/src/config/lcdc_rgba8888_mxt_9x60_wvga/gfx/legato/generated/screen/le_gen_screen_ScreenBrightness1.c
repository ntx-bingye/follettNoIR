#include "gfx/legato/generated/screen/le_gen_screen_ScreenBrightness1.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* ScreenBrightness1_Layer0_FillPanel;
leLabelWidget* ScreenBrightness1_LabelBrightness;
leImageWidget* ScreenBrightness1_ImageBrightness;
leWidget* ScreenBrightness1_PanelWidget0;
leSliderWidget* ScreenBrightness1_BrightSlider;
leButtonWidget* ScreenBrightness1_ButtonBack1;
leLabelWidget* ScreenBrightness1_LabelBrightnessValue;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ScreenBrightness1(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ScreenBrightness1(void)
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

    ScreenBrightness1_Layer0_FillPanel = leWidget_New();
    ScreenBrightness1_Layer0_FillPanel->fn->setPosition(ScreenBrightness1_Layer0_FillPanel, 0, 0);
    ScreenBrightness1_Layer0_FillPanel->fn->setSize(ScreenBrightness1_Layer0_FillPanel, 480, 272);
    ScreenBrightness1_Layer0_FillPanel->fn->setScheme(ScreenBrightness1_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ScreenBrightness1_Layer0_FillPanel);

    ScreenBrightness1_LabelBrightness = leLabelWidget_New();
    ScreenBrightness1_LabelBrightness->fn->setPosition(ScreenBrightness1_LabelBrightness, 50, 15);
    ScreenBrightness1_LabelBrightness->fn->setSize(ScreenBrightness1_LabelBrightness, 250, 25);
    ScreenBrightness1_LabelBrightness->fn->setScheme(ScreenBrightness1_LabelBrightness, &BackgroundScheme);
    ScreenBrightness1_LabelBrightness->fn->setBackgroundType(ScreenBrightness1_LabelBrightness, LE_WIDGET_BACKGROUND_NONE);
    ScreenBrightness1_LabelBrightness->fn->setString(ScreenBrightness1_LabelBrightness, (leString*)&string_ScreenBrightness);
    root0->fn->addChild(root0, (leWidget*)ScreenBrightness1_LabelBrightness);

    ScreenBrightness1_ImageBrightness = leImageWidget_New();
    ScreenBrightness1_ImageBrightness->fn->setPosition(ScreenBrightness1_ImageBrightness, 5, 5);
    ScreenBrightness1_ImageBrightness->fn->setSize(ScreenBrightness1_ImageBrightness, 40, 40);
    ScreenBrightness1_ImageBrightness->fn->setScheme(ScreenBrightness1_ImageBrightness, &BackgroundScheme);
    ScreenBrightness1_ImageBrightness->fn->setBackgroundType(ScreenBrightness1_ImageBrightness, LE_WIDGET_BACKGROUND_NONE);
    ScreenBrightness1_ImageBrightness->fn->setBorderType(ScreenBrightness1_ImageBrightness, LE_WIDGET_BORDER_NONE);
    ScreenBrightness1_ImageBrightness->fn->setImage(ScreenBrightness1_ImageBrightness, (leImage*)&ICON_brightness);
    root0->fn->addChild(root0, (leWidget*)ScreenBrightness1_ImageBrightness);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ScreenBrightness1_PanelWidget0 = leWidget_New();
    ScreenBrightness1_PanelWidget0->fn->setPosition(ScreenBrightness1_PanelWidget0, 23, 204);
    ScreenBrightness1_PanelWidget0->fn->setSize(ScreenBrightness1_PanelWidget0, 445, 58);
    ScreenBrightness1_PanelWidget0->fn->setEnabled(ScreenBrightness1_PanelWidget0, LE_FALSE);
    ScreenBrightness1_PanelWidget0->fn->setVisible(ScreenBrightness1_PanelWidget0, LE_FALSE);
    ScreenBrightness1_PanelWidget0->fn->setScheme(ScreenBrightness1_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)ScreenBrightness1_PanelWidget0);

    ScreenBrightness1_BrightSlider = leSliderWidget_New();
    ScreenBrightness1_BrightSlider->fn->setPosition(ScreenBrightness1_BrightSlider, 47, 95);
    ScreenBrightness1_BrightSlider->fn->setSize(ScreenBrightness1_BrightSlider, 394, 41);
    ScreenBrightness1_BrightSlider->fn->setScheme(ScreenBrightness1_BrightSlider, &SchemeSlider);
    ScreenBrightness1_BrightSlider->fn->setOrientation(ScreenBrightness1_BrightSlider, LE_ORIENTATION_HORIZONTAL, LE_TRUE);
    ScreenBrightness1_BrightSlider->fn->setValue(ScreenBrightness1_BrightSlider, 80);
    ScreenBrightness1_BrightSlider->fn->setGripSize(ScreenBrightness1_BrightSlider, 30);
    ScreenBrightness1_BrightSlider->fn->setValueChangedEventCallback(ScreenBrightness1_BrightSlider, event_ScreenBrightness1_BrightSlider_OnValueChanged);
    root1->fn->addChild(root1, (leWidget*)ScreenBrightness1_BrightSlider);

    ScreenBrightness1_ButtonBack1 = leButtonWidget_New();
    ScreenBrightness1_ButtonBack1->fn->setPosition(ScreenBrightness1_ButtonBack1, 437, 5);
    ScreenBrightness1_ButtonBack1->fn->setSize(ScreenBrightness1_ButtonBack1, 40, 40);
    ScreenBrightness1_ButtonBack1->fn->setScheme(ScreenBrightness1_ButtonBack1, &BackgroundScheme);
    ScreenBrightness1_ButtonBack1->fn->setBorderType(ScreenBrightness1_ButtonBack1, LE_WIDGET_BORDER_NONE);
    ScreenBrightness1_ButtonBack1->fn->setPressedImage(ScreenBrightness1_ButtonBack1, (leImage*)&ICON_goBackActive);
    ScreenBrightness1_ButtonBack1->fn->setReleasedImage(ScreenBrightness1_ButtonBack1, (leImage*)&ICON_goBackInactive);
    ScreenBrightness1_ButtonBack1->fn->setReleasedEventCallback(ScreenBrightness1_ButtonBack1, event_ScreenBrightness1_ButtonBack1_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ScreenBrightness1_ButtonBack1);

    ScreenBrightness1_LabelBrightnessValue = leLabelWidget_New();
    ScreenBrightness1_LabelBrightnessValue->fn->setPosition(ScreenBrightness1_LabelBrightnessValue, 47, 64);
    ScreenBrightness1_LabelBrightnessValue->fn->setSize(ScreenBrightness1_LabelBrightnessValue, 392, 28);
    ScreenBrightness1_LabelBrightnessValue->fn->setScheme(ScreenBrightness1_LabelBrightnessValue, &BackgroundScheme);
    ScreenBrightness1_LabelBrightnessValue->fn->setHAlignment(ScreenBrightness1_LabelBrightnessValue, LE_HALIGN_CENTER);
    ScreenBrightness1_LabelBrightnessValue->fn->setString(ScreenBrightness1_LabelBrightnessValue, (leString*)&string_Percent);
    root1->fn->addChild(root1, (leWidget*)ScreenBrightness1_LabelBrightnessValue);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ScreenBrightness1(void)
{
}

void screenHide_ScreenBrightness1(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ScreenBrightness1_Layer0_FillPanel = NULL;
    ScreenBrightness1_LabelBrightness = NULL;
    ScreenBrightness1_ImageBrightness = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ScreenBrightness1_PanelWidget0 = NULL;
    ScreenBrightness1_BrightSlider = NULL;
    ScreenBrightness1_ButtonBack1 = NULL;
    ScreenBrightness1_LabelBrightnessValue = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ScreenBrightness1(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ScreenBrightness1(uint32_t lyrIdx)
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

