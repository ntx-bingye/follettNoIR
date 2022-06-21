#include "gfx/legato/generated/screen/le_gen_screen_CurrentScreenIcon.h"

// screen member widget declarations
leWidget* root0;

leWidget* CurrentScreenIcon_PanelWidget0;
leImageWidget* CurrentScreenIcon_CurrentScreenIcon;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_CurrentScreenIcon(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_CurrentScreenIcon(void)
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

    CurrentScreenIcon_PanelWidget0 = leWidget_New();
    CurrentScreenIcon_PanelWidget0->fn->setPosition(CurrentScreenIcon_PanelWidget0, 0, 0);
    CurrentScreenIcon_PanelWidget0->fn->setSize(CurrentScreenIcon_PanelWidget0, 480, 272);
    CurrentScreenIcon_PanelWidget0->fn->setScheme(CurrentScreenIcon_PanelWidget0, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)CurrentScreenIcon_PanelWidget0);

    CurrentScreenIcon_CurrentScreenIcon = leImageWidget_New();
    CurrentScreenIcon_CurrentScreenIcon->fn->setPosition(CurrentScreenIcon_CurrentScreenIcon, 0, 0);
    CurrentScreenIcon_CurrentScreenIcon->fn->setBorderType(CurrentScreenIcon_CurrentScreenIcon, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)CurrentScreenIcon_CurrentScreenIcon);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_CurrentScreenIcon(void)
{
}

void screenHide_CurrentScreenIcon(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    CurrentScreenIcon_PanelWidget0 = NULL;
    CurrentScreenIcon_CurrentScreenIcon = NULL;


    showing = LE_FALSE;
}

void screenDestroy_CurrentScreenIcon(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_CurrentScreenIcon(uint32_t lyrIdx)
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

