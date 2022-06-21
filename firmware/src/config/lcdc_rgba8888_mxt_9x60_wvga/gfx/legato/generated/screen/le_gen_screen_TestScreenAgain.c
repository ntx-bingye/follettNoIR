#include "gfx/legato/generated/screen/le_gen_screen_TestScreenAgain.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;
leWidget* root2;

leWidget* TestScreenAgain_PanelWidget2;
leButtonWidget* TestScreenAgain_ButtonWidget1;
leWidget* TestScreenAgain_PanelWidget1;
leButtonWidget* TestScreenAgain_ButtonWidget0;
leWidget* TestScreenAgain_PanelWidget0;
leCircleWidget* TestScreenAgain_CircleWidget0;
leCircularSliderWidget* TestScreenAgain_CircularSliderWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_TestScreenAgain(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_TestScreenAgain(void)
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

    TestScreenAgain_PanelWidget2 = leWidget_New();
    TestScreenAgain_PanelWidget2->fn->setPosition(TestScreenAgain_PanelWidget2, 0, 0);
    TestScreenAgain_PanelWidget2->fn->setSize(TestScreenAgain_PanelWidget2, 480, 272);
    TestScreenAgain_PanelWidget2->fn->setScheme(TestScreenAgain_PanelWidget2, &RedScheme);
    root0->fn->addChild(root0, (leWidget*)TestScreenAgain_PanelWidget2);

    TestScreenAgain_ButtonWidget1 = leButtonWidget_New();
    TestScreenAgain_ButtonWidget1->fn->setPosition(TestScreenAgain_ButtonWidget1, 335, 76);
    TestScreenAgain_ButtonWidget1->fn->setScheme(TestScreenAgain_ButtonWidget1, &defaultScheme);
    root0->fn->addChild(root0, (leWidget*)TestScreenAgain_ButtonWidget1);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    TestScreenAgain_PanelWidget1 = leWidget_New();
    TestScreenAgain_PanelWidget1->fn->setPosition(TestScreenAgain_PanelWidget1, 0, 0);
    TestScreenAgain_PanelWidget1->fn->setSize(TestScreenAgain_PanelWidget1, 480, 272);
    TestScreenAgain_PanelWidget1->fn->setScheme(TestScreenAgain_PanelWidget1, &BlueScheme);
    root1->fn->addChild(root1, (leWidget*)TestScreenAgain_PanelWidget1);

    TestScreenAgain_ButtonWidget0 = leButtonWidget_New();
    TestScreenAgain_ButtonWidget0->fn->setPosition(TestScreenAgain_ButtonWidget0, 112, 173);
    TestScreenAgain_ButtonWidget0->fn->setScheme(TestScreenAgain_ButtonWidget0, &defaultScheme);
    root1->fn->addChild(root1, (leWidget*)TestScreenAgain_ButtonWidget0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    // layer 2
    root2 = leWidget_New();
    root2->fn->setSize(root2, 480, 272);
    root2->fn->setBackgroundType(root2, LE_WIDGET_BACKGROUND_NONE);
    root2->fn->setMargins(root2, 0, 0, 0, 0);
    root2->flags |= LE_WIDGET_IGNOREEVENTS;
    root2->flags |= LE_WIDGET_IGNOREPICK;

    TestScreenAgain_PanelWidget0 = leWidget_New();
    TestScreenAgain_PanelWidget0->fn->setPosition(TestScreenAgain_PanelWidget0, 0, 0);
    TestScreenAgain_PanelWidget0->fn->setSize(TestScreenAgain_PanelWidget0, 480, 272);
    TestScreenAgain_PanelWidget0->fn->setScheme(TestScreenAgain_PanelWidget0, &GreenScheme);
    root2->fn->addChild(root2, (leWidget*)TestScreenAgain_PanelWidget0);

    TestScreenAgain_CircleWidget0 = leCircleWidget_New();
    TestScreenAgain_CircleWidget0->fn->setPosition(TestScreenAgain_CircleWidget0, 205, 57);
    TestScreenAgain_CircleWidget0->fn->setScheme(TestScreenAgain_CircleWidget0, &defaultScheme);
    root2->fn->addChild(root2, (leWidget*)TestScreenAgain_CircleWidget0);

    TestScreenAgain_CircularSliderWidget0 = leCircularSliderWidget_New();
    TestScreenAgain_CircularSliderWidget0->fn->setPosition(TestScreenAgain_CircularSliderWidget0, 69, 32);
    TestScreenAgain_CircularSliderWidget0->fn->setScheme(TestScreenAgain_CircularSliderWidget0, &defaultScheme);
    root2->fn->addChild(root2, (leWidget*)TestScreenAgain_CircularSliderWidget0);

    leAddRootWidget(root2, 2);
    leSetLayerColorMode(2, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_TestScreenAgain(void)
{
}

void screenHide_TestScreenAgain(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    TestScreenAgain_PanelWidget2 = NULL;
    TestScreenAgain_ButtonWidget1 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    TestScreenAgain_PanelWidget1 = NULL;
    TestScreenAgain_ButtonWidget0 = NULL;

    leRemoveRootWidget(root2, 2);
    leWidget_Delete(root2);
    root2 = NULL;

    TestScreenAgain_PanelWidget0 = NULL;
    TestScreenAgain_CircleWidget0 = NULL;
    TestScreenAgain_CircularSliderWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_TestScreenAgain(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_TestScreenAgain(uint32_t lyrIdx)
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
        case 2:
        {
            return root2;
        }
        default:
        {
            return NULL;
        }
    }
}

