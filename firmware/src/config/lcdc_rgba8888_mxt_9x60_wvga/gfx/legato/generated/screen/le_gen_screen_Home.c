#include "gfx/legato/generated/screen/le_gen_screen_Home.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leImageWidget* Home_Layer0_FillPanel;
leImageWidget* Home_CookTekLOGO;
leLabelWidget* Home_ModelWattage;
leWidget* Home_PanelWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Home(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Home(void)
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

    Home_Layer0_FillPanel = leImageWidget_New();
    Home_Layer0_FillPanel->fn->setPosition(Home_Layer0_FillPanel, 0, 0);
    Home_Layer0_FillPanel->fn->setSize(Home_Layer0_FillPanel, 480, 272);
    Home_Layer0_FillPanel->fn->setScheme(Home_Layer0_FillPanel, &BackgroundScheme);
    Home_Layer0_FillPanel->fn->setBorderType(Home_Layer0_FillPanel, LE_WIDGET_BORDER_NONE);
    root0->fn->addChild(root0, (leWidget*)Home_Layer0_FillPanel);

    Home_CookTekLOGO = leImageWidget_New();
    Home_CookTekLOGO->fn->setPosition(Home_CookTekLOGO, 134, 76);
    Home_CookTekLOGO->fn->setSize(Home_CookTekLOGO, 230, 61);
    Home_CookTekLOGO->fn->setScheme(Home_CookTekLOGO, &BackgroundScheme);
    Home_CookTekLOGO->fn->setBorderType(Home_CookTekLOGO, LE_WIDGET_BORDER_NONE);
    Home_CookTekLOGO->fn->setImage(Home_CookTekLOGO, (leImage*)&ICON_CookTek_LOGO);
    root0->fn->addChild(root0, (leWidget*)Home_CookTekLOGO);

    Home_ModelWattage = leLabelWidget_New();
    Home_ModelWattage->fn->setPosition(Home_ModelWattage, 160, 144);
    Home_ModelWattage->fn->setSize(Home_ModelWattage, 264, 30);
    Home_ModelWattage->fn->setScheme(Home_ModelWattage, &BackgroundScheme);
    Home_ModelWattage->fn->setBackgroundType(Home_ModelWattage, LE_WIDGET_BACKGROUND_NONE);
    Home_ModelWattage->fn->setVAlignment(Home_ModelWattage, LE_VALIGN_TOP);
    Home_ModelWattage->fn->setString(Home_ModelWattage, (leString*)&string_HomeModelValue);
    root0->fn->addChild(root0, (leWidget*)Home_ModelWattage);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    Home_PanelWidget0 = leWidget_New();
    Home_PanelWidget0->fn->setPosition(Home_PanelWidget0, 372, 166);
    Home_PanelWidget0->fn->setEnabled(Home_PanelWidget0, LE_FALSE);
    Home_PanelWidget0->fn->setVisible(Home_PanelWidget0, LE_FALSE);
    Home_PanelWidget0->fn->setScheme(Home_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)Home_PanelWidget0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    Home_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Home(void)
{
}

void screenHide_Home(void)
{
    Home_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Home_Layer0_FillPanel = NULL;
    Home_CookTekLOGO = NULL;
    Home_ModelWattage = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    Home_PanelWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Home(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Home(uint32_t lyrIdx)
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

