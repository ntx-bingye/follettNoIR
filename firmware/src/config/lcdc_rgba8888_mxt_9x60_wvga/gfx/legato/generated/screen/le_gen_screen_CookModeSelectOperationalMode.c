#include "gfx/legato/generated/screen/le_gen_screen_CookModeSelectOperationalMode.h"

// screen member widget declarations
leWidget* root0;

leWidget* CookModeSelectOperationalMode_Layer0_FillPanel;
leLabelWidget* CookModeSelectOperationalMode_LabelSelectOne;
leButtonWidget* CookModeSelectOperationalMode_ButtonPower;
leButtonWidget* CookModeSelectOperationalMode_ButtonTemperature;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_CookModeSelectOperationalMode(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_CookModeSelectOperationalMode(void)
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

    CookModeSelectOperationalMode_Layer0_FillPanel = leWidget_New();
    CookModeSelectOperationalMode_Layer0_FillPanel->fn->setPosition(CookModeSelectOperationalMode_Layer0_FillPanel, 0, 0);
    CookModeSelectOperationalMode_Layer0_FillPanel->fn->setSize(CookModeSelectOperationalMode_Layer0_FillPanel, 480, 272);
    CookModeSelectOperationalMode_Layer0_FillPanel->fn->setScheme(CookModeSelectOperationalMode_Layer0_FillPanel, &BackgroundScheme);
    CookModeSelectOperationalMode_Layer0_FillPanel->fn->setBorderType(CookModeSelectOperationalMode_Layer0_FillPanel, LE_WIDGET_BORDER_LINE);
    CookModeSelectOperationalMode_Layer0_FillPanel->fn->setHAlignment(CookModeSelectOperationalMode_Layer0_FillPanel, LE_HALIGN_RIGHT);
    root0->fn->addChild(root0, (leWidget*)CookModeSelectOperationalMode_Layer0_FillPanel);

    CookModeSelectOperationalMode_LabelSelectOne = leLabelWidget_New();
    CookModeSelectOperationalMode_LabelSelectOne->fn->setPosition(CookModeSelectOperationalMode_LabelSelectOne, 182, 176);
    CookModeSelectOperationalMode_LabelSelectOne->fn->setSize(CookModeSelectOperationalMode_LabelSelectOne, 123, 60);
    CookModeSelectOperationalMode_LabelSelectOne->fn->setScheme(CookModeSelectOperationalMode_LabelSelectOne, &BackgroundScheme);
    CookModeSelectOperationalMode_LabelSelectOne->fn->setHAlignment(CookModeSelectOperationalMode_LabelSelectOne, LE_HALIGN_RIGHT);
    CookModeSelectOperationalMode_LabelSelectOne->fn->setString(CookModeSelectOperationalMode_LabelSelectOne, (leString*)&string_SelectOneToProceed);
    root0->fn->addChild(root0, (leWidget*)CookModeSelectOperationalMode_LabelSelectOne);

    CookModeSelectOperationalMode_ButtonPower = leButtonWidget_New();
    CookModeSelectOperationalMode_ButtonPower->fn->setPosition(CookModeSelectOperationalMode_ButtonPower, 20, 106);
    CookModeSelectOperationalMode_ButtonPower->fn->setSize(CookModeSelectOperationalMode_ButtonPower, 220, 60);
    CookModeSelectOperationalMode_ButtonPower->fn->setScheme(CookModeSelectOperationalMode_ButtonPower, &ForegroundScheme);
    CookModeSelectOperationalMode_ButtonPower->fn->setBorderType(CookModeSelectOperationalMode_ButtonPower, LE_WIDGET_BORDER_LINE);
    CookModeSelectOperationalMode_ButtonPower->fn->setMargins(CookModeSelectOperationalMode_ButtonPower, 4, 4, 0, 4);
    CookModeSelectOperationalMode_ButtonPower->fn->setString(CookModeSelectOperationalMode_ButtonPower, (leString*)&string_Power);
    CookModeSelectOperationalMode_ButtonPower->fn->setImagePosition(CookModeSelectOperationalMode_ButtonPower, LE_RELATIVE_POSITION_BEHIND);
    root0->fn->addChild(root0, (leWidget*)CookModeSelectOperationalMode_ButtonPower);

    CookModeSelectOperationalMode_ButtonTemperature = leButtonWidget_New();
    CookModeSelectOperationalMode_ButtonTemperature->fn->setPosition(CookModeSelectOperationalMode_ButtonTemperature, 240, 106);
    CookModeSelectOperationalMode_ButtonTemperature->fn->setSize(CookModeSelectOperationalMode_ButtonTemperature, 220, 60);
    // CookModeSelectOperationalMode_ButtonTemperature->fn->setScheme(CookModeSelectOperationalMode_ButtonTemperature, &Background);
    CookModeSelectOperationalMode_ButtonTemperature->fn->setBorderType(CookModeSelectOperationalMode_ButtonTemperature, LE_WIDGET_BORDER_LINE);
    CookModeSelectOperationalMode_ButtonTemperature->fn->setMargins(CookModeSelectOperationalMode_ButtonTemperature, 0, 4, 4, 4);
    CookModeSelectOperationalMode_ButtonTemperature->fn->setString(CookModeSelectOperationalMode_ButtonTemperature, (leString*)&string_Temperature);
    root0->fn->addChild(root0, (leWidget*)CookModeSelectOperationalMode_ButtonTemperature);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_CookModeSelectOperationalMode(void)
{
}

void screenHide_CookModeSelectOperationalMode(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    CookModeSelectOperationalMode_Layer0_FillPanel = NULL;
    CookModeSelectOperationalMode_LabelSelectOne = NULL;
    CookModeSelectOperationalMode_ButtonPower = NULL;
    CookModeSelectOperationalMode_ButtonTemperature = NULL;


    showing = LE_FALSE;
}

void screenDestroy_CookModeSelectOperationalMode(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_CookModeSelectOperationalMode(uint32_t lyrIdx)
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

