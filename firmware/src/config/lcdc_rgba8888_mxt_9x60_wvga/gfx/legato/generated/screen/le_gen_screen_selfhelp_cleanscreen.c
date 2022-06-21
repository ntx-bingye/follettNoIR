#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_cleanscreen.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_cleanscreen_Layer_0_FillPanel;
leLabelWidget* selfhelp_cleanscreen_LblTitle;
leLineWidget* selfhelp_cleanscreen_Line;
leLabelWidget* selfhelp_cleanscreen_LblInstructions;
leButtonWidget* selfhelp_cleanscreen_BtnHome;
leButtonWidget* selfhelp_cleanscreen_BtnLock;
leButtonWidget* selfhelp_cleanscreen_BtnExit;
leButtonWidget* selfhelp_cleanscreen_BtnUnlock;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_cleanscreen(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_cleanscreen(void)
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

    selfhelp_cleanscreen_Layer_0_FillPanel = leWidget_New();
    selfhelp_cleanscreen_Layer_0_FillPanel->fn->setPosition(selfhelp_cleanscreen_Layer_0_FillPanel, 0, 0);
    selfhelp_cleanscreen_Layer_0_FillPanel->fn->setSize(selfhelp_cleanscreen_Layer_0_FillPanel, 480, 272);
    selfhelp_cleanscreen_Layer_0_FillPanel->fn->setScheme(selfhelp_cleanscreen_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleanscreen_Layer_0_FillPanel);

    selfhelp_cleanscreen_LblTitle = leLabelWidget_New();
    selfhelp_cleanscreen_LblTitle->fn->setPosition(selfhelp_cleanscreen_LblTitle, 10, 5);
    selfhelp_cleanscreen_LblTitle->fn->setSize(selfhelp_cleanscreen_LblTitle, 380, 30);
    selfhelp_cleanscreen_LblTitle->fn->setScheme(selfhelp_cleanscreen_LblTitle, &Label_FontBlack);
    selfhelp_cleanscreen_LblTitle->fn->setBackgroundType(selfhelp_cleanscreen_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleanscreen_LblTitle->fn->setString(selfhelp_cleanscreen_LblTitle, (leString*)&string_SELFHELP6_CleanScreen);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleanscreen_LblTitle);

    selfhelp_cleanscreen_Line = leLineWidget_New();
    selfhelp_cleanscreen_Line->fn->setPosition(selfhelp_cleanscreen_Line, 121, 194);
    selfhelp_cleanscreen_Line->fn->setSize(selfhelp_cleanscreen_Line, 28, 10);
    selfhelp_cleanscreen_Line->fn->setScheme(selfhelp_cleanscreen_Line, &Line_Black);
    selfhelp_cleanscreen_Line->fn->setBackgroundType(selfhelp_cleanscreen_Line, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleanscreen_Line->fn->setHAlignment(selfhelp_cleanscreen_Line, LE_HALIGN_RIGHT);
    selfhelp_cleanscreen_Line->fn->setVAlignment(selfhelp_cleanscreen_Line, LE_VALIGN_BOTTOM);
    selfhelp_cleanscreen_Line->fn->setEndPoint(selfhelp_cleanscreen_Line, 20, 0);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleanscreen_Line);

    selfhelp_cleanscreen_LblInstructions = leLabelWidget_New();
    selfhelp_cleanscreen_LblInstructions->fn->setPosition(selfhelp_cleanscreen_LblInstructions, 145, 168);
    selfhelp_cleanscreen_LblInstructions->fn->setSize(selfhelp_cleanscreen_LblInstructions, 83, 50);
    selfhelp_cleanscreen_LblInstructions->fn->setScheme(selfhelp_cleanscreen_LblInstructions, &Label_FontBlack);
    selfhelp_cleanscreen_LblInstructions->fn->setBackgroundType(selfhelp_cleanscreen_LblInstructions, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleanscreen_LblInstructions->fn->setString(selfhelp_cleanscreen_LblInstructions, (leString*)&string_Hold_5_seconds);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleanscreen_LblInstructions);

    selfhelp_cleanscreen_BtnHome = leButtonWidget_New();
    selfhelp_cleanscreen_BtnHome->fn->setPosition(selfhelp_cleanscreen_BtnHome, 435, 225);
    selfhelp_cleanscreen_BtnHome->fn->setSize(selfhelp_cleanscreen_BtnHome, 40, 40);
    selfhelp_cleanscreen_BtnHome->fn->setScheme(selfhelp_cleanscreen_BtnHome, &BlackBack);
    selfhelp_cleanscreen_BtnHome->fn->setBackgroundType(selfhelp_cleanscreen_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleanscreen_BtnHome->fn->setBorderType(selfhelp_cleanscreen_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_cleanscreen_BtnHome->fn->setPressedImage(selfhelp_cleanscreen_BtnHome, (leImage*)&Menu_home);
    selfhelp_cleanscreen_BtnHome->fn->setReleasedImage(selfhelp_cleanscreen_BtnHome, (leImage*)&Menu_home);
    selfhelp_cleanscreen_BtnHome->fn->setReleasedEventCallback(selfhelp_cleanscreen_BtnHome, event_selfhelp_cleanscreen_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleanscreen_BtnHome);

    selfhelp_cleanscreen_BtnLock = leButtonWidget_New();
    selfhelp_cleanscreen_BtnLock->fn->setPosition(selfhelp_cleanscreen_BtnLock, 28, 67);
    selfhelp_cleanscreen_BtnLock->fn->setSize(selfhelp_cleanscreen_BtnLock, 88, 72);
    selfhelp_cleanscreen_BtnLock->fn->setScheme(selfhelp_cleanscreen_BtnLock, &Button_Gray2);
    selfhelp_cleanscreen_BtnLock->fn->setBorderType(selfhelp_cleanscreen_BtnLock, LE_WIDGET_BORDER_LINE);
    selfhelp_cleanscreen_BtnLock->fn->setString(selfhelp_cleanscreen_BtnLock, (leString*)&string_MAINTENANCE_CLEANSCREEN_Lock);
    selfhelp_cleanscreen_BtnLock->fn->setReleasedEventCallback(selfhelp_cleanscreen_BtnLock, event_selfhelp_cleanscreen_BtnLock_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleanscreen_BtnLock);

    selfhelp_cleanscreen_BtnExit = leButtonWidget_New();
    selfhelp_cleanscreen_BtnExit->fn->setPosition(selfhelp_cleanscreen_BtnExit, 415, 2);
    selfhelp_cleanscreen_BtnExit->fn->setSize(selfhelp_cleanscreen_BtnExit, 60, 80);
    selfhelp_cleanscreen_BtnExit->fn->setScheme(selfhelp_cleanscreen_BtnExit, &BlackBack);
    selfhelp_cleanscreen_BtnExit->fn->setBackgroundType(selfhelp_cleanscreen_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleanscreen_BtnExit->fn->setBorderType(selfhelp_cleanscreen_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_cleanscreen_BtnExit->fn->setHAlignment(selfhelp_cleanscreen_BtnExit, LE_HALIGN_RIGHT);
    selfhelp_cleanscreen_BtnExit->fn->setVAlignment(selfhelp_cleanscreen_BtnExit, LE_VALIGN_TOP);
    selfhelp_cleanscreen_BtnExit->fn->setMargins(selfhelp_cleanscreen_BtnExit, 4, 10, 10, 4);
    selfhelp_cleanscreen_BtnExit->fn->setPressedImage(selfhelp_cleanscreen_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_cleanscreen_BtnExit->fn->setReleasedImage(selfhelp_cleanscreen_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_cleanscreen_BtnExit->fn->setReleasedEventCallback(selfhelp_cleanscreen_BtnExit, event_selfhelp_cleanscreen_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleanscreen_BtnExit);

    selfhelp_cleanscreen_BtnUnlock = leButtonWidget_New();
    selfhelp_cleanscreen_BtnUnlock->fn->setPosition(selfhelp_cleanscreen_BtnUnlock, 28, 159);
    selfhelp_cleanscreen_BtnUnlock->fn->setSize(selfhelp_cleanscreen_BtnUnlock, 88, 72);
    selfhelp_cleanscreen_BtnUnlock->fn->setScheme(selfhelp_cleanscreen_BtnUnlock, &Button_Gray2);
    selfhelp_cleanscreen_BtnUnlock->fn->setBorderType(selfhelp_cleanscreen_BtnUnlock, LE_WIDGET_BORDER_LINE);
    selfhelp_cleanscreen_BtnUnlock->fn->setString(selfhelp_cleanscreen_BtnUnlock, (leString*)&string_MAINTENANCE_CLEANSCREEN_Unlock);
    selfhelp_cleanscreen_BtnUnlock->fn->setPressedEventCallback(selfhelp_cleanscreen_BtnUnlock, event_selfhelp_cleanscreen_BtnUnlock_OnPressed);
    selfhelp_cleanscreen_BtnUnlock->fn->setReleasedEventCallback(selfhelp_cleanscreen_BtnUnlock, event_selfhelp_cleanscreen_BtnUnlock_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleanscreen_BtnUnlock);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_cleanscreen_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_cleanscreen(void)
{
}

void screenHide_selfhelp_cleanscreen(void)
{
    selfhelp_cleanscreen_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_cleanscreen_Layer_0_FillPanel = NULL;
    selfhelp_cleanscreen_LblTitle = NULL;
    selfhelp_cleanscreen_Line = NULL;
    selfhelp_cleanscreen_LblInstructions = NULL;
    selfhelp_cleanscreen_BtnHome = NULL;
    selfhelp_cleanscreen_BtnLock = NULL;
    selfhelp_cleanscreen_BtnExit = NULL;
    selfhelp_cleanscreen_BtnUnlock = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_cleanscreen(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_cleanscreen(uint32_t lyrIdx)
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

