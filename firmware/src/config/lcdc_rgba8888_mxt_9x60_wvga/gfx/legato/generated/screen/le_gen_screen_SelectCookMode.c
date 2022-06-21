#include "gfx/legato/generated/screen/le_gen_screen_SelectCookMode.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* SelectCookMode_Layer0_FillPanel;
leWidget* SelectCookMode_PanelWidget0;
leButtonWidget* SelectCookMode_ButtonPower;
leButtonWidget* SelectCookMode_ButtonTemperature;
leButtonWidget* SelectCookMode_ButtonBack;
leLabelWidget* SelectCookMode_LabelSelectOne;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_SelectCookMode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_SelectCookMode(void)
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

    SelectCookMode_Layer0_FillPanel = leWidget_New();
    SelectCookMode_Layer0_FillPanel->fn->setPosition(SelectCookMode_Layer0_FillPanel, 0, 0);
    SelectCookMode_Layer0_FillPanel->fn->setSize(SelectCookMode_Layer0_FillPanel, 480, 272);
    SelectCookMode_Layer0_FillPanel->fn->setScheme(SelectCookMode_Layer0_FillPanel, &BackgroundScheme);
    SelectCookMode_Layer0_FillPanel->fn->setHAlignment(SelectCookMode_Layer0_FillPanel, LE_HALIGN_RIGHT);
    root0->fn->addChild(root0, (leWidget*)SelectCookMode_Layer0_FillPanel);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    SelectCookMode_PanelWidget0 = leWidget_New();
    SelectCookMode_PanelWidget0->fn->setPosition(SelectCookMode_PanelWidget0, 2, 100);
    SelectCookMode_PanelWidget0->fn->setSize(SelectCookMode_PanelWidget0, 471, 168);
    SelectCookMode_PanelWidget0->fn->setScheme(SelectCookMode_PanelWidget0, &BackgroundScheme);
    root1->fn->addChild(root1, (leWidget*)SelectCookMode_PanelWidget0);

    SelectCookMode_ButtonPower = leButtonWidget_New();
    SelectCookMode_ButtonPower->fn->setPosition(SelectCookMode_ButtonPower, 84, 9);
    SelectCookMode_ButtonPower->fn->setSize(SelectCookMode_ButtonPower, 145, 53);
    SelectCookMode_ButtonPower->fn->setScheme(SelectCookMode_ButtonPower, &ForegroundScheme);
    SelectCookMode_ButtonPower->fn->setBorderType(SelectCookMode_ButtonPower, LE_WIDGET_BORDER_LINE);
    SelectCookMode_ButtonPower->fn->setMargins(SelectCookMode_ButtonPower, 0, 0, 0, 0);
    SelectCookMode_ButtonPower->fn->setString(SelectCookMode_ButtonPower, (leString*)&string_Power);
    SelectCookMode_ButtonPower->fn->setImagePosition(SelectCookMode_ButtonPower, LE_RELATIVE_POSITION_BEHIND);
    SelectCookMode_ButtonPower->fn->setReleasedEventCallback(SelectCookMode_ButtonPower, event_SelectCookMode_ButtonPower_OnReleased);
    SelectCookMode_PanelWidget0->fn->addChild(SelectCookMode_PanelWidget0, (leWidget*)SelectCookMode_ButtonPower);

    SelectCookMode_ButtonTemperature = leButtonWidget_New();
    SelectCookMode_ButtonTemperature->fn->setPosition(SelectCookMode_ButtonTemperature, 228, 9);
    SelectCookMode_ButtonTemperature->fn->setSize(SelectCookMode_ButtonTemperature, 145, 53);
    SelectCookMode_ButtonTemperature->fn->setScheme(SelectCookMode_ButtonTemperature, &BackgroundScheme);
    SelectCookMode_ButtonTemperature->fn->setBorderType(SelectCookMode_ButtonTemperature, LE_WIDGET_BORDER_LINE);
    SelectCookMode_ButtonTemperature->fn->setMargins(SelectCookMode_ButtonTemperature, 0, 0, 0, 0);
    SelectCookMode_ButtonTemperature->fn->setString(SelectCookMode_ButtonTemperature, (leString*)&string_Temperature);
    SelectCookMode_ButtonTemperature->fn->setImagePosition(SelectCookMode_ButtonTemperature, LE_RELATIVE_POSITION_BEHIND);
    SelectCookMode_ButtonTemperature->fn->setReleasedEventCallback(SelectCookMode_ButtonTemperature, event_SelectCookMode_ButtonTemperature_OnReleased);
    SelectCookMode_PanelWidget0->fn->addChild(SelectCookMode_PanelWidget0, (leWidget*)SelectCookMode_ButtonTemperature);

    SelectCookMode_ButtonBack = leButtonWidget_New();
    SelectCookMode_ButtonBack->fn->setPosition(SelectCookMode_ButtonBack, 1, 122);
    SelectCookMode_ButtonBack->fn->setSize(SelectCookMode_ButtonBack, 45, 45);
    SelectCookMode_ButtonBack->fn->setScheme(SelectCookMode_ButtonBack, &BackgroundScheme);
    SelectCookMode_ButtonBack->fn->setBorderType(SelectCookMode_ButtonBack, LE_WIDGET_BORDER_NONE);
    SelectCookMode_ButtonBack->fn->setPressedImage(SelectCookMode_ButtonBack, (leImage*)&ICON_goBackActive);
    SelectCookMode_ButtonBack->fn->setReleasedImage(SelectCookMode_ButtonBack, (leImage*)&ICON_goBackInactive);
    SelectCookMode_ButtonBack->fn->setReleasedEventCallback(SelectCookMode_ButtonBack, event_SelectCookMode_ButtonBack_OnReleased);
    SelectCookMode_PanelWidget0->fn->addChild(SelectCookMode_PanelWidget0, (leWidget*)SelectCookMode_ButtonBack);

    SelectCookMode_LabelSelectOne = leLabelWidget_New();
    SelectCookMode_LabelSelectOne->fn->setPosition(SelectCookMode_LabelSelectOne, 147, 73);
    SelectCookMode_LabelSelectOne->fn->setSize(SelectCookMode_LabelSelectOne, 168, 35);
    SelectCookMode_LabelSelectOne->fn->setScheme(SelectCookMode_LabelSelectOne, &BackgroundScheme);
    SelectCookMode_LabelSelectOne->fn->setHAlignment(SelectCookMode_LabelSelectOne, LE_HALIGN_CENTER);
    SelectCookMode_LabelSelectOne->fn->setString(SelectCookMode_LabelSelectOne, (leString*)&string_SelectOneToProceed);
    SelectCookMode_PanelWidget0->fn->addChild(SelectCookMode_PanelWidget0, (leWidget*)SelectCookMode_LabelSelectOne);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    SelectCookMode_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_SelectCookMode(void)
{
}

void screenHide_SelectCookMode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    SelectCookMode_Layer0_FillPanel = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    SelectCookMode_PanelWidget0 = NULL;
    SelectCookMode_ButtonPower = NULL;
    SelectCookMode_ButtonTemperature = NULL;
    SelectCookMode_ButtonBack = NULL;
    SelectCookMode_LabelSelectOne = NULL;


    showing = LE_FALSE;
}

void screenDestroy_SelectCookMode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_SelectCookMode(uint32_t lyrIdx)
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

