#include "gfx/legato/generated/screen/le_gen_screen_CookModeSelectPower.h"

// screen member widget declarations
leWidget* root0;

leWidget* CookModeSelectPower_Layer0_FillPanel;
leLabelWidget* CookModeSelectPower_LabelSelectOne;
leButtonWidget* CookModeSelectPower_ButtonPower;
leButtonWidget* CookModeSelectPower_ButtonTemperature;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_CookModeSelectPower(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_CookModeSelectPower(void)
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

    CookModeSelectPower_Layer0_FillPanel = leWidget_New();
    CookModeSelectPower_Layer0_FillPanel->fn->setPosition(CookModeSelectPower_Layer0_FillPanel, 0, 0);
    CookModeSelectPower_Layer0_FillPanel->fn->setSize(CookModeSelectPower_Layer0_FillPanel, 480, 272);
    CookModeSelectPower_Layer0_FillPanel->fn->setScheme(CookModeSelectPower_Layer0_FillPanel, &Background);
    CookModeSelectPower_Layer0_FillPanel->fn->setBorderType(CookModeSelectPower_Layer0_FillPanel, LE_WIDGET_BORDER_LINE);
    CookModeSelectPower_Layer0_FillPanel->fn->setHAlignment(CookModeSelectPower_Layer0_FillPanel, LE_HALIGN_RIGHT);
    root0->fn->addChild(root0, (leWidget*)CookModeSelectPower_Layer0_FillPanel);

    CookModeSelectPower_LabelSelectOne = leLabelWidget_New();
    CookModeSelectPower_LabelSelectOne->fn->setPosition(CookModeSelectPower_LabelSelectOne, 182, 176);
    CookModeSelectPower_LabelSelectOne->fn->setSize(CookModeSelectPower_LabelSelectOne, 123, 60);
    CookModeSelectPower_LabelSelectOne->fn->setScheme(CookModeSelectPower_LabelSelectOne, &Background);
    CookModeSelectPower_LabelSelectOne->fn->setHAlignment(CookModeSelectPower_LabelSelectOne, LE_HALIGN_RIGHT);
    CookModeSelectPower_LabelSelectOne->fn->setString(CookModeSelectPower_LabelSelectOne, (leString*)&string_SelectOneToProceed);
    root0->fn->addChild(root0, (leWidget*)CookModeSelectPower_LabelSelectOne);

    CookModeSelectPower_ButtonPower = leButtonWidget_New();
    CookModeSelectPower_ButtonPower->fn->setPosition(CookModeSelectPower_ButtonPower, 20, 106);
    CookModeSelectPower_ButtonPower->fn->setSize(CookModeSelectPower_ButtonPower, 220, 60);
    CookModeSelectPower_ButtonPower->fn->setScheme(CookModeSelectPower_ButtonPower, &Foreground);
    CookModeSelectPower_ButtonPower->fn->setBorderType(CookModeSelectPower_ButtonPower, LE_WIDGET_BORDER_LINE);
    CookModeSelectPower_ButtonPower->fn->setMargins(CookModeSelectPower_ButtonPower, 4, 4, 0, 4);
    CookModeSelectPower_ButtonPower->fn->setString(CookModeSelectPower_ButtonPower, (leString*)&string_Power);
    CookModeSelectPower_ButtonPower->fn->setImagePosition(CookModeSelectPower_ButtonPower, LE_RELATIVE_POSITION_BEHIND);
    CookModeSelectPower_ButtonPower->fn->setPressedEventCallback(CookModeSelectPower_ButtonPower, event_CookModeSelectPower_ButtonPower_OnPressed);
    CookModeSelectPower_ButtonPower->fn->setReleasedEventCallback(CookModeSelectPower_ButtonPower, event_CookModeSelectPower_ButtonPower_OnReleased);
    root0->fn->addChild(root0, (leWidget*)CookModeSelectPower_ButtonPower);

    CookModeSelectPower_ButtonTemperature = leButtonWidget_New();
    CookModeSelectPower_ButtonTemperature->fn->setPosition(CookModeSelectPower_ButtonTemperature, 240, 106);
    CookModeSelectPower_ButtonTemperature->fn->setSize(CookModeSelectPower_ButtonTemperature, 220, 60);
    CookModeSelectPower_ButtonTemperature->fn->setScheme(CookModeSelectPower_ButtonTemperature, &Background);
    CookModeSelectPower_ButtonTemperature->fn->setBorderType(CookModeSelectPower_ButtonTemperature, LE_WIDGET_BORDER_LINE);
    CookModeSelectPower_ButtonTemperature->fn->setMargins(CookModeSelectPower_ButtonTemperature, 0, 4, 4, 4);
    CookModeSelectPower_ButtonTemperature->fn->setString(CookModeSelectPower_ButtonTemperature, (leString*)&string_Temperature);
    CookModeSelectPower_ButtonTemperature->fn->setPressedEventCallback(CookModeSelectPower_ButtonTemperature, event_CookModeSelectPower_ButtonTemperature_OnPressed);
    CookModeSelectPower_ButtonTemperature->fn->setReleasedEventCallback(CookModeSelectPower_ButtonTemperature, event_CookModeSelectPower_ButtonTemperature_OnReleased);
    root0->fn->addChild(root0, (leWidget*)CookModeSelectPower_ButtonTemperature);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    CookModeSelectPower_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_CookModeSelectPower(void)
{
    CookModeSelectPower_OnUpdate(); // raise event
}

void screenHide_CookModeSelectPower(void)
{
    CookModeSelectPower_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    CookModeSelectPower_Layer0_FillPanel = NULL;
    CookModeSelectPower_LabelSelectOne = NULL;
    CookModeSelectPower_ButtonPower = NULL;
    CookModeSelectPower_ButtonTemperature = NULL;


    showing = LE_FALSE;
}

void screenDestroy_CookModeSelectPower(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_CookModeSelectPower(uint32_t lyrIdx)
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

