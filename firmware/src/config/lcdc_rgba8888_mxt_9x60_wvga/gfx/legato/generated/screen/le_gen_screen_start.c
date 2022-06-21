#include "gfx/legato/generated/screen/le_gen_screen_start.h"

// screen member widget declarations
leWidget* root0;

leWidget* start_Layer_0_FillPanel;
leLabelWidget* start_LabelVer;
leImageWidget* start_ImageStart_Logo;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_start(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_start(void)
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

    start_Layer_0_FillPanel = leWidget_New();
    start_Layer_0_FillPanel->fn->setPosition(start_Layer_0_FillPanel, 0, 0);
    start_Layer_0_FillPanel->fn->setSize(start_Layer_0_FillPanel, 480, 272);
    start_Layer_0_FillPanel->fn->setScheme(start_Layer_0_FillPanel, &BlackBack);
    root0->fn->addChild(root0, (leWidget*)start_Layer_0_FillPanel);

    start_LabelVer = leLabelWidget_New();
    start_LabelVer->fn->setPosition(start_LabelVer, 159, 143);
    start_LabelVer->fn->setSize(start_LabelVer, 159, 30);
    start_LabelVer->fn->setScheme(start_LabelVer, &Label_FontLightBlue);
    start_LabelVer->fn->setBackgroundType(start_LabelVer, LE_WIDGET_BACKGROUND_NONE);
    start_LabelVer->fn->setHAlignment(start_LabelVer, LE_HALIGN_CENTER);
    start_LabelVer->fn->setString(start_LabelVer, (leString*)&string_START_Version);
    start_Layer_0_FillPanel->fn->addChild(start_Layer_0_FillPanel, (leWidget*)start_LabelVer);

    start_ImageStart_Logo = leImageWidget_New();
    start_ImageStart_Logo->fn->setPosition(start_ImageStart_Logo, 139, 95);
    start_ImageStart_Logo->fn->setSize(start_ImageStart_Logo, 200, 50);
    start_ImageStart_Logo->fn->setScheme(start_ImageStart_Logo, &BlackBack);
    start_ImageStart_Logo->fn->setBorderType(start_ImageStart_Logo, LE_WIDGET_BORDER_NONE);
    start_ImageStart_Logo->fn->setImage(start_ImageStart_Logo, (leImage*)&Splash_logo);
    start_Layer_0_FillPanel->fn->addChild(start_Layer_0_FillPanel, (leWidget*)start_ImageStart_Logo);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    start_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_start(void)
{
}

void screenHide_start(void)
{
    start_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    start_Layer_0_FillPanel = NULL;
    start_LabelVer = NULL;
    start_ImageStart_Logo = NULL;


    showing = LE_FALSE;
}

void screenDestroy_start(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_start(uint32_t lyrIdx)
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

