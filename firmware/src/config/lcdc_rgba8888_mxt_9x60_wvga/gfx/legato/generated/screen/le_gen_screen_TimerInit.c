#include "gfx/legato/generated/screen/le_gen_screen_TimerInit.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* TimerInit_PanelWidget0;
leLabelWidget* TimerInit_LabelTimerUserNote;
leLabelWidget* TimerInit_TimerValue;
leButtonWidget* TimerInit_ButtonExit;
leKeyPadWidget* TimerInit_KeyPadWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_TimerInit(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_TimerInit(void)
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

    TimerInit_PanelWidget0 = leWidget_New();
    TimerInit_PanelWidget0->fn->setPosition(TimerInit_PanelWidget0, 0, 0);
    TimerInit_PanelWidget0->fn->setSize(TimerInit_PanelWidget0, 480, 272);
    TimerInit_PanelWidget0->fn->setScheme(TimerInit_PanelWidget0, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)TimerInit_PanelWidget0);

    TimerInit_LabelTimerUserNote = leLabelWidget_New();
    TimerInit_LabelTimerUserNote->fn->setPosition(TimerInit_LabelTimerUserNote, 50, 29);
    TimerInit_LabelTimerUserNote->fn->setSize(TimerInit_LabelTimerUserNote, 380, 25);
    TimerInit_LabelTimerUserNote->fn->setScheme(TimerInit_LabelTimerUserNote, &BackgroundScheme);
    TimerInit_LabelTimerUserNote->fn->setBackgroundType(TimerInit_LabelTimerUserNote, LE_WIDGET_BACKGROUND_NONE);
    TimerInit_LabelTimerUserNote->fn->setHAlignment(TimerInit_LabelTimerUserNote, LE_HALIGN_CENTER);
    TimerInit_LabelTimerUserNote->fn->setString(TimerInit_LabelTimerUserNote, (leString*)&string_TimerEnterMinutes);
    root0->fn->addChild(root0, (leWidget*)TimerInit_LabelTimerUserNote);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    TimerInit_TimerValue = leLabelWidget_New();
    TimerInit_TimerValue->fn->setPosition(TimerInit_TimerValue, 184, 64);
    TimerInit_TimerValue->fn->setSize(TimerInit_TimerValue, 108, 32);
    TimerInit_TimerValue->fn->setScheme(TimerInit_TimerValue, &LayerScheme);
    TimerInit_TimerValue->fn->setHAlignment(TimerInit_TimerValue, LE_HALIGN_CENTER);
    TimerInit_TimerValue->fn->setString(TimerInit_TimerValue, (leString*)&string_TimerMinutes);
    root1->fn->addChild(root1, (leWidget*)TimerInit_TimerValue);

    TimerInit_ButtonExit = leButtonWidget_New();
    TimerInit_ButtonExit->fn->setPosition(TimerInit_ButtonExit, 431, 4);
    TimerInit_ButtonExit->fn->setSize(TimerInit_ButtonExit, 45, 45);
    TimerInit_ButtonExit->fn->setScheme(TimerInit_ButtonExit, &BackgroundScheme);
    TimerInit_ButtonExit->fn->setBorderType(TimerInit_ButtonExit, LE_WIDGET_BORDER_NONE);
    TimerInit_ButtonExit->fn->setPressedImage(TimerInit_ButtonExit, (leImage*)&ICON_exitActive);
    TimerInit_ButtonExit->fn->setReleasedImage(TimerInit_ButtonExit, (leImage*)&ICON_exitInactive);
    TimerInit_ButtonExit->fn->setPressedEventCallback(TimerInit_ButtonExit, event_TimerInit_ButtonExit_OnPressed);
    TimerInit_ButtonExit->fn->setReleasedEventCallback(TimerInit_ButtonExit, event_TimerInit_ButtonExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)TimerInit_ButtonExit);

    TimerInit_KeyPadWidget0 = leKeyPadWidget_New(2, 6);
    TimerInit_KeyPadWidget0->fn->setPosition(TimerInit_KeyPadWidget0, 43, 142);
    TimerInit_KeyPadWidget0->fn->setSize(TimerInit_KeyPadWidget0, 400, 120);
    TimerInit_KeyPadWidget0->fn->setScheme(TimerInit_KeyPadWidget0, &BackgroundScheme);
    leButtonWidget* cell_0_0 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 0, 0);
    cell_0_0->fn->setString(cell_0_0, (leString*)&string_Keypad0);
    leButtonWidget* cell_0_1 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 0, 1);
    cell_0_1->fn->setString(cell_0_1, (leString*)&string_Keypad1);
    leButtonWidget* cell_0_2 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 0, 2);
    cell_0_2->fn->setString(cell_0_2, (leString*)&string_Keypad2);
    leButtonWidget* cell_0_3 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 0, 3);
    cell_0_3->fn->setString(cell_0_3, (leString*)&string_Keypad3);
    leButtonWidget* cell_0_4 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 0, 4);
    cell_0_4->fn->setString(cell_0_4, (leString*)&string_Keypad4);
    leButtonWidget* cell_0_5 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 0, 5);
    cell_0_5->fn->setString(cell_0_5, (leString*)&string_Keypad5);
    leButtonWidget* cell_1_0 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 1, 0);
    cell_1_0->fn->setString(cell_1_0, (leString*)&string_Keypad6);
    leButtonWidget* cell_1_1 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 1, 1);
    cell_1_1->fn->setString(cell_1_1, (leString*)&string_Keypad7);
    leButtonWidget* cell_1_2 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 1, 2);
    cell_1_2->fn->setString(cell_1_2, (leString*)&string_keypad8);
    leButtonWidget* cell_1_3 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 1, 3);
    cell_1_3->fn->setString(cell_1_3, (leString*)&string_Keypad9);
    leButtonWidget* cell_1_4 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 1, 4);
    cell_1_4->fn->setString(cell_1_4, (leString*)&string_BACK);
    leButtonWidget* cell_1_5 = TimerInit_KeyPadWidget0->fn->getCellButton(TimerInit_KeyPadWidget0, 1, 5);
    cell_1_5->fn->setString(cell_1_5, (leString*)&string_ENTER);
    TimerInit_KeyPadWidget0->fn->setKeyClickEventCallback(TimerInit_KeyPadWidget0, event_TimerInit_KeyPadWidget0_OnKeyClick);
    root1->fn->addChild(root1, (leWidget*)TimerInit_KeyPadWidget0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    TimerInit_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_TimerInit(void)
{
}

void screenHide_TimerInit(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    TimerInit_PanelWidget0 = NULL;
    TimerInit_LabelTimerUserNote = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    TimerInit_TimerValue = NULL;
    TimerInit_ButtonExit = NULL;
    TimerInit_KeyPadWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_TimerInit(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_TimerInit(uint32_t lyrIdx)
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

