#include "gfx/legato/generated/screen/le_gen_screen_SelectOperationaCooklMode.h"

// screen member widget declarations
leWidget* root0;

leWidget* SelectOperationaCooklMode_Layer0_FillPanel;
leLabelWidget* SelectOperationaCooklMode_LabelSelectOne;
leButtonWidget* SelectOperationaCooklMode_ButtonPower;
leButtonWidget* SelectOperationaCooklMode_ButtonTemperature;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_SelectOperationaCooklMode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_SelectOperationaCooklMode(void)
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

    SelectOperationaCooklMode_Layer0_FillPanel = leWidget_New();
    SelectOperationaCooklMode_Layer0_FillPanel->fn->setPosition(SelectOperationaCooklMode_Layer0_FillPanel, 0, 0);
    SelectOperationaCooklMode_Layer0_FillPanel->fn->setSize(SelectOperationaCooklMode_Layer0_FillPanel, 480, 272);
    SelectOperationaCooklMode_Layer0_FillPanel->fn->setScheme(SelectOperationaCooklMode_Layer0_FillPanel, &BackgroundScheme);
    SelectOperationaCooklMode_Layer0_FillPanel->fn->setBorderType(SelectOperationaCooklMode_Layer0_FillPanel, LE_WIDGET_BORDER_LINE);
    SelectOperationaCooklMode_Layer0_FillPanel->fn->setHAlignment(SelectOperationaCooklMode_Layer0_FillPanel, LE_HALIGN_RIGHT);
    root0->fn->addChild(root0, (leWidget*)SelectOperationaCooklMode_Layer0_FillPanel);

    SelectOperationaCooklMode_LabelSelectOne = leLabelWidget_New();
    SelectOperationaCooklMode_LabelSelectOne->fn->setPosition(SelectOperationaCooklMode_LabelSelectOne, 1, 176);
    SelectOperationaCooklMode_LabelSelectOne->fn->setSize(SelectOperationaCooklMode_LabelSelectOne, 478, 60);
    SelectOperationaCooklMode_LabelSelectOne->fn->setScheme(SelectOperationaCooklMode_LabelSelectOne, &BackgroundScheme);
    SelectOperationaCooklMode_LabelSelectOne->fn->setHAlignment(SelectOperationaCooklMode_LabelSelectOne, LE_HALIGN_CENTER);
    SelectOperationaCooklMode_LabelSelectOne->fn->setString(SelectOperationaCooklMode_LabelSelectOne, (leString*)&string_SelectOneToProceed);
    root0->fn->addChild(root0, (leWidget*)SelectOperationaCooklMode_LabelSelectOne);

    SelectOperationaCooklMode_ButtonPower = leButtonWidget_New();
    SelectOperationaCooklMode_ButtonPower->fn->setPosition(SelectOperationaCooklMode_ButtonPower, 86, 105);
    SelectOperationaCooklMode_ButtonPower->fn->setSize(SelectOperationaCooklMode_ButtonPower, 145, 60);
    SelectOperationaCooklMode_ButtonPower->fn->setScheme(SelectOperationaCooklMode_ButtonPower, &BackgroundScheme);
    SelectOperationaCooklMode_ButtonPower->fn->setBackgroundType(SelectOperationaCooklMode_ButtonPower, LE_WIDGET_BACKGROUND_NONE);
    SelectOperationaCooklMode_ButtonPower->fn->setBorderType(SelectOperationaCooklMode_ButtonPower, LE_WIDGET_BORDER_NONE);
    SelectOperationaCooklMode_ButtonPower->fn->setMargins(SelectOperationaCooklMode_ButtonPower, 4, 4, 0, 4);
    SelectOperationaCooklMode_ButtonPower->fn->setString(SelectOperationaCooklMode_ButtonPower, (leString*)&string_Power);
    SelectOperationaCooklMode_ButtonPower->fn->setPressedImage(SelectOperationaCooklMode_ButtonPower, (leImage*)&ICON_settingsActiveL);
    SelectOperationaCooklMode_ButtonPower->fn->setReleasedImage(SelectOperationaCooklMode_ButtonPower, (leImage*)&ICON_settingsActiveL);
    SelectOperationaCooklMode_ButtonPower->fn->setImagePosition(SelectOperationaCooklMode_ButtonPower, LE_RELATIVE_POSITION_BEHIND);
    SelectOperationaCooklMode_ButtonPower->fn->setPressedEventCallback(SelectOperationaCooklMode_ButtonPower, event_SelectOperationaCooklMode_ButtonPower_OnPressed);
    SelectOperationaCooklMode_ButtonPower->fn->setReleasedEventCallback(SelectOperationaCooklMode_ButtonPower, event_SelectOperationaCooklMode_ButtonPower_OnReleased);
    root0->fn->addChild(root0, (leWidget*)SelectOperationaCooklMode_ButtonPower);

    SelectOperationaCooklMode_ButtonTemperature = leButtonWidget_New();
    SelectOperationaCooklMode_ButtonTemperature->fn->setPosition(SelectOperationaCooklMode_ButtonTemperature, 230, 105);
    SelectOperationaCooklMode_ButtonTemperature->fn->setSize(SelectOperationaCooklMode_ButtonTemperature, 145, 60);
    SelectOperationaCooklMode_ButtonTemperature->fn->setScheme(SelectOperationaCooklMode_ButtonTemperature, &BackgroundScheme);
    SelectOperationaCooklMode_ButtonTemperature->fn->setBorderType(SelectOperationaCooklMode_ButtonTemperature, LE_WIDGET_BORDER_NONE);
    SelectOperationaCooklMode_ButtonTemperature->fn->setMargins(SelectOperationaCooklMode_ButtonTemperature, 0, 4, 4, 4);
    SelectOperationaCooklMode_ButtonTemperature->fn->setString(SelectOperationaCooklMode_ButtonTemperature, (leString*)&string_Temperature);
    SelectOperationaCooklMode_ButtonTemperature->fn->setPressedImage(SelectOperationaCooklMode_ButtonTemperature, (leImage*)&ICON_settingsActiveR);
    SelectOperationaCooklMode_ButtonTemperature->fn->setReleasedImage(SelectOperationaCooklMode_ButtonTemperature, (leImage*)&ICON_settingsInactiveR);
    SelectOperationaCooklMode_ButtonTemperature->fn->setImagePosition(SelectOperationaCooklMode_ButtonTemperature, LE_RELATIVE_POSITION_BEHIND);
    SelectOperationaCooklMode_ButtonTemperature->fn->setPressedEventCallback(SelectOperationaCooklMode_ButtonTemperature, event_SelectOperationaCooklMode_ButtonTemperature_OnPressed);
    SelectOperationaCooklMode_ButtonTemperature->fn->setReleasedEventCallback(SelectOperationaCooklMode_ButtonTemperature, event_SelectOperationaCooklMode_ButtonTemperature_OnReleased);
    root0->fn->addChild(root0, (leWidget*)SelectOperationaCooklMode_ButtonTemperature);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_SelectOperationaCooklMode(void)
{
}

void screenHide_SelectOperationaCooklMode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    SelectOperationaCooklMode_Layer0_FillPanel = NULL;
    SelectOperationaCooklMode_LabelSelectOne = NULL;
    SelectOperationaCooklMode_ButtonPower = NULL;
    SelectOperationaCooklMode_ButtonTemperature = NULL;


    showing = LE_FALSE;
}

void screenDestroy_SelectOperationaCooklMode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_SelectOperationaCooklMode(uint32_t lyrIdx)
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

