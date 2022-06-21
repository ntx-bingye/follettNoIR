#include "gfx/legato/generated/screen/le_gen_screen_help.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* help_PanelWidget1;
leButtonWidget* help_BtnExit;
leKeyPadWidget* help_KeyPadHelp;
leButtonWidget* help_ButtonWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_help(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_help(void)
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

    help_PanelWidget1 = leWidget_New();
    help_PanelWidget1->fn->setPosition(help_PanelWidget1, 0, 0);
    help_PanelWidget1->fn->setSize(help_PanelWidget1, 480, 272);
    help_PanelWidget1->fn->setScheme(help_PanelWidget1, &whiteground);
    root1->fn->addChild(root1, (leWidget*)help_PanelWidget1);

    help_BtnExit = leButtonWidget_New();
    help_BtnExit->fn->setPosition(help_BtnExit, 420, 0);
    help_BtnExit->fn->setSize(help_BtnExit, 60, 45);
    help_BtnExit->fn->setScheme(help_BtnExit, &BlackBack);
    help_BtnExit->fn->setBackgroundType(help_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    help_BtnExit->fn->setBorderType(help_BtnExit, LE_WIDGET_BORDER_NONE);
    help_BtnExit->fn->setPressedImage(help_BtnExit, (leImage*)&Menu_exit_black);
    help_BtnExit->fn->setReleasedImage(help_BtnExit, (leImage*)&Menu_exit_black);
    help_BtnExit->fn->setReleasedEventCallback(help_BtnExit, event_help_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)help_BtnExit);

    help_KeyPadHelp = leKeyPadWidget_New(4, 1);
    help_KeyPadHelp->fn->setPosition(help_KeyPadHelp, 6, 50);
    help_KeyPadHelp->fn->setSize(help_KeyPadHelp, 360, 220);
    help_KeyPadHelp->fn->setScheme(help_KeyPadHelp, &whiteground);
    help_KeyPadHelp->fn->setHAlignment(help_KeyPadHelp, LE_HALIGN_LEFT);
    help_KeyPadHelp->fn->setMargins(help_KeyPadHelp, 0, 0, 0, 0);
    leButtonWidget* cell_0_0 = help_KeyPadHelp->fn->getCellButton(help_KeyPadHelp, 0, 0);
    help_KeyPadHelp->fn->setKeyValue(help_KeyPadHelp, 0, 0, (leString*)&string_SELFHELP_Ice);
    cell_0_0->fn->setString(cell_0_0, (leString*)&string_SELFHELP_Ice);
    cell_0_0->fn->setPressedImage(cell_0_0, &HelpRecPressed);
    cell_0_0->fn->setReleasedImage(cell_0_0, &HelpRec);
    cell_0_0->fn->setImageMargin(cell_0_0, 0);
    leButtonWidget* cell_1_0 = help_KeyPadHelp->fn->getCellButton(help_KeyPadHelp, 1, 0);
    cell_1_0->fn->setString(cell_1_0, (leString*)&string_SELFHELP_Water);
    cell_1_0->fn->setPressedImage(cell_1_0, &HelpRecPressed);
    cell_1_0->fn->setReleasedImage(cell_1_0, &HelpRec);
    cell_1_0->fn->setImageMargin(cell_1_0, 0);
    root1->fn->addChild(root1, (leWidget*)help_KeyPadHelp);

    help_ButtonWidget0 = leButtonWidget_New();
    help_ButtonWidget0->fn->setPosition(help_ButtonWidget0, 5, 45);
    help_ButtonWidget0->fn->setSize(help_ButtonWidget0, 360, 50);
    root1->fn->addChild(root1, (leWidget*)help_ButtonWidget0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    help_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_help(void)
{
}

void screenHide_help(void)
{
    help_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    help_PanelWidget1 = NULL;
    help_BtnExit = NULL;
    help_KeyPadHelp = NULL;
    help_ButtonWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_help(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_help(uint32_t lyrIdx)
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

