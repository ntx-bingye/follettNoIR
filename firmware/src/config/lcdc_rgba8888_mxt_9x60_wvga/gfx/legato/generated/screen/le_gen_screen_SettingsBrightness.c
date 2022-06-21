#include "gfx/legato/generated/screen/le_gen_screen_SettingsBrightness.h"

// screen member widget declarations
leWidget* root0;

leWidget* SettingsBrightness_Layer0_FillPane;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_SettingsBrightness(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_SettingsBrightness(void)
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

    SettingsBrightness_Layer0_FillPane = leWidget_New();
    SettingsBrightness_Layer0_FillPane->fn->setPosition(SettingsBrightness_Layer0_FillPane, 0, 0);
    SettingsBrightness_Layer0_FillPane->fn->setSize(SettingsBrightness_Layer0_FillPane, 480, 272);
    SettingsBrightness_Layer0_FillPane->fn->setScheme(SettingsBrightness_Layer0_FillPane, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)SettingsBrightness_Layer0_FillPane);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_SettingsBrightness(void)
{
}

void screenHide_SettingsBrightness(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    SettingsBrightness_Layer0_FillPane = NULL;


    showing = LE_FALSE;
}

void screenDestroy_SettingsBrightness(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_SettingsBrightness(uint32_t lyrIdx)
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

