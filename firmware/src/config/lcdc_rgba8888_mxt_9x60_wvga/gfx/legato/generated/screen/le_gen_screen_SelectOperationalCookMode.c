#include "gfx/legato/generated/screen/le_gen_screen_SelectOperationalCookMode.h"

// screen member widget declarations
leWidget* root0;

leWidget* SelectOperationalCookMode_Layer0_FillPanel;
leLabelWidget* SelectOperationalCookMode_LabelSelectOne;
leButtonWidget* SelectOperationalCookMode_ButtonPower;
leButtonWidget* SelectOperationalCookMode_ButtonTemperature;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_SelectOperationalCookMode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_SelectOperationalCookMode(void)
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

    SelectOperationalCookMode_Layer0_FillPanel = leWidget_New();
    SelectOperationalCookMode_Layer0_FillPanel->fn->setPosition(SelectOperationalCookMode_Layer0_FillPanel, 0, 0);
    SelectOperationalCookMode_Layer0_FillPanel->fn->setSize(SelectOperationalCookMode_Layer0_FillPanel, 480, 272);
    SelectOperationalCookMode_Layer0_FillPanel->fn->setScheme(SelectOperationalCookMode_Layer0_FillPanel, &BackgroundScheme);
    SelectOperationalCookMode_Layer0_FillPanel->fn->setBorderType(SelectOperationalCookMode_Layer0_FillPanel, LE_WIDGET_BORDER_LINE);
    SelectOperationalCookMode_Layer0_FillPanel->fn->setHAlignment(SelectOperationalCookMode_Layer0_FillPanel, LE_HALIGN_RIGHT);
    root0->fn->addChild(root0, (leWidget*)SelectOperationalCookMode_Layer0_FillPanel);

    SelectOperationalCookMode_LabelSelectOne = leLabelWidget_New();
    SelectOperationalCookMode_LabelSelectOne->fn->setPosition(SelectOperationalCookMode_LabelSelectOne, 1, 176);
    SelectOperationalCookMode_LabelSelectOne->fn->setSize(SelectOperationalCookMode_LabelSelectOne, 478, 60);
    SelectOperationalCookMode_LabelSelectOne->fn->setScheme(SelectOperationalCookMode_LabelSelectOne, &BackgroundScheme);
    SelectOperationalCookMode_LabelSelectOne->fn->setHAlignment(SelectOperationalCookMode_LabelSelectOne, LE_HALIGN_CENTER);
    SelectOperationalCookMode_LabelSelectOne->fn->setString(SelectOperationalCookMode_LabelSelectOne, (leString*)&string_SelectOneToProceed);
    root0->fn->addChild(root0, (leWidget*)SelectOperationalCookMode_LabelSelectOne);

    SelectOperationalCookMode_ButtonPower = leButtonWidget_New();
    SelectOperationalCookMode_ButtonPower->fn->setPosition(SelectOperationalCookMode_ButtonPower, 86, 105);
    SelectOperationalCookMode_ButtonPower->fn->setSize(SelectOperationalCookMode_ButtonPower, 145, 60);
    SelectOperationalCookMode_ButtonPower->fn->setScheme(SelectOperationalCookMode_ButtonPower, &BackgroundScheme);
    SelectOperationalCookMode_ButtonPower->fn->setBackgroundType(SelectOperationalCookMode_ButtonPower, LE_WIDGET_BACKGROUND_NONE);
    SelectOperationalCookMode_ButtonPower->fn->setBorderType(SelectOperationalCookMode_ButtonPower, LE_WIDGET_BORDER_NONE);
    SelectOperationalCookMode_ButtonPower->fn->setMargins(SelectOperationalCookMode_ButtonPower, 4, 4, 0, 4);
    SelectOperationalCookMode_ButtonPower->fn->setString(SelectOperationalCookMode_ButtonPower, (leString*)&string_Power);
    SelectOperationalCookMode_ButtonPower->fn->setPressedImage(SelectOperationalCookMode_ButtonPower, (leImage*)&ICON_settingsActiveL);
    SelectOperationalCookMode_ButtonPower->fn->setReleasedImage(SelectOperationalCookMode_ButtonPower, (leImage*)&ICON_settingsActiveL);
    SelectOperationalCookMode_ButtonPower->fn->setImagePosition(SelectOperationalCookMode_ButtonPower, LE_RELATIVE_POSITION_BEHIND);
    SelectOperationalCookMode_ButtonPower->fn->setPressedEventCallback(SelectOperationalCookMode_ButtonPower, event_SelectOperationalCookMode_ButtonPower_OnPressed);
    SelectOperationalCookMode_ButtonPower->fn->setReleasedEventCallback(SelectOperationalCookMode_ButtonPower, event_SelectOperationalCookMode_ButtonPower_OnReleased);
    root0->fn->addChild(root0, (leWidget*)SelectOperationalCookMode_ButtonPower);

    SelectOperationalCookMode_ButtonTemperature = leButtonWidget_New();
    SelectOperationalCookMode_ButtonTemperature->fn->setPosition(SelectOperationalCookMode_ButtonTemperature, 230, 105);
    SelectOperationalCookMode_ButtonTemperature->fn->setSize(SelectOperationalCookMode_ButtonTemperature, 145, 60);
    SelectOperationalCookMode_ButtonTemperature->fn->setScheme(SelectOperationalCookMode_ButtonTemperature, &BackgroundScheme);
    SelectOperationalCookMode_ButtonTemperature->fn->setBorderType(SelectOperationalCookMode_ButtonTemperature, LE_WIDGET_BORDER_NONE);
    SelectOperationalCookMode_ButtonTemperature->fn->setMargins(SelectOperationalCookMode_ButtonTemperature, 0, 4, 4, 4);
    SelectOperationalCookMode_ButtonTemperature->fn->setString(SelectOperationalCookMode_ButtonTemperature, (leString*)&string_Temperature);
    SelectOperationalCookMode_ButtonTemperature->fn->setPressedImage(SelectOperationalCookMode_ButtonTemperature, (leImage*)&ICON_settingsActiveR);
    SelectOperationalCookMode_ButtonTemperature->fn->setReleasedImage(SelectOperationalCookMode_ButtonTemperature, (leImage*)&ICON_settingsInactiveR);
    SelectOperationalCookMode_ButtonTemperature->fn->setImagePosition(SelectOperationalCookMode_ButtonTemperature, LE_RELATIVE_POSITION_BEHIND);
    SelectOperationalCookMode_ButtonTemperature->fn->setPressedEventCallback(SelectOperationalCookMode_ButtonTemperature, event_SelectOperationalCookMode_ButtonTemperature_OnPressed);
    SelectOperationalCookMode_ButtonTemperature->fn->setReleasedEventCallback(SelectOperationalCookMode_ButtonTemperature, event_SelectOperationalCookMode_ButtonTemperature_OnReleased);
    root0->fn->addChild(root0, (leWidget*)SelectOperationalCookMode_ButtonTemperature);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_SelectOperationalCookMode(void)
{
}

void screenHide_SelectOperationalCookMode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    SelectOperationalCookMode_Layer0_FillPanel = NULL;
    SelectOperationalCookMode_LabelSelectOne = NULL;
    SelectOperationalCookMode_ButtonPower = NULL;
    SelectOperationalCookMode_ButtonTemperature = NULL;


    showing = LE_FALSE;
}

void screenDestroy_SelectOperationalCookMode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_SelectOperationalCookMode(uint32_t lyrIdx)
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

