#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_installAndRepair.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_installAndRepair_PanelWidget0;
leButtonWidget* selfhelp_installAndRepair_BtnExit;
leButtonWidget* selfhelp_installAndRepair_BtnHome;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_installAndRepair(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_installAndRepair(void)
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

    selfhelp_installAndRepair_PanelWidget0 = leWidget_New();
    selfhelp_installAndRepair_PanelWidget0->fn->setPosition(selfhelp_installAndRepair_PanelWidget0, 0, 0);
    selfhelp_installAndRepair_PanelWidget0->fn->setSize(selfhelp_installAndRepair_PanelWidget0, 480, 272);
    selfhelp_installAndRepair_PanelWidget0->fn->setScheme(selfhelp_installAndRepair_PanelWidget0, &whiteground);
    root1->fn->addChild(root1, (leWidget*)selfhelp_installAndRepair_PanelWidget0);

    selfhelp_installAndRepair_BtnExit = leButtonWidget_New();
    selfhelp_installAndRepair_BtnExit->fn->setPosition(selfhelp_installAndRepair_BtnExit, 430, 0);
    selfhelp_installAndRepair_BtnExit->fn->setSize(selfhelp_installAndRepair_BtnExit, 50, 50);
    selfhelp_installAndRepair_BtnExit->fn->setScheme(selfhelp_installAndRepair_BtnExit, &BlackBack);
    selfhelp_installAndRepair_BtnExit->fn->setBackgroundType(selfhelp_installAndRepair_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_installAndRepair_BtnExit->fn->setBorderType(selfhelp_installAndRepair_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_installAndRepair_BtnExit->fn->setPressedImage(selfhelp_installAndRepair_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_installAndRepair_BtnExit->fn->setReleasedImage(selfhelp_installAndRepair_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_installAndRepair_BtnExit->fn->setPressedEventCallback(selfhelp_installAndRepair_BtnExit, event_selfhelp_installAndRepair_BtnExit_OnPressed);
    selfhelp_installAndRepair_BtnExit->fn->setReleasedEventCallback(selfhelp_installAndRepair_BtnExit, event_selfhelp_installAndRepair_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_installAndRepair_BtnExit);

    selfhelp_installAndRepair_BtnHome = leButtonWidget_New();
    selfhelp_installAndRepair_BtnHome->fn->setPosition(selfhelp_installAndRepair_BtnHome, 429, 222);
    selfhelp_installAndRepair_BtnHome->fn->setSize(selfhelp_installAndRepair_BtnHome, 50, 50);
    selfhelp_installAndRepair_BtnHome->fn->setScheme(selfhelp_installAndRepair_BtnHome, &BlackBack);
    selfhelp_installAndRepair_BtnHome->fn->setBackgroundType(selfhelp_installAndRepair_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_installAndRepair_BtnHome->fn->setBorderType(selfhelp_installAndRepair_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_installAndRepair_BtnHome->fn->setPressedImage(selfhelp_installAndRepair_BtnHome, (leImage*)&Menu_home);
    selfhelp_installAndRepair_BtnHome->fn->setReleasedImage(selfhelp_installAndRepair_BtnHome, (leImage*)&Menu_home);
    selfhelp_installAndRepair_BtnHome->fn->setPressedEventCallback(selfhelp_installAndRepair_BtnHome, event_selfhelp_installAndRepair_BtnHome_OnPressed);
    selfhelp_installAndRepair_BtnHome->fn->setReleasedEventCallback(selfhelp_installAndRepair_BtnHome, event_selfhelp_installAndRepair_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_installAndRepair_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_installAndRepair_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_installAndRepair(void)
{
}

void screenHide_selfhelp_installAndRepair(void)
{
    selfhelp_installAndRepair_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_installAndRepair_PanelWidget0 = NULL;
    selfhelp_installAndRepair_BtnExit = NULL;
    selfhelp_installAndRepair_BtnHome = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_installAndRepair(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_installAndRepair(uint32_t lyrIdx)
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

