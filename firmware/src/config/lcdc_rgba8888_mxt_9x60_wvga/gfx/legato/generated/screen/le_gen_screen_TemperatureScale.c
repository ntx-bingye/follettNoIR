#include "gfx/legato/generated/screen/le_gen_screen_TemperatureScale.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* TemperatureScale_Layer0_FillPanel;
leImageWidget* TemperatureScale_TempIcon;
leLabelWidget* TemperatureScale_LabelTempScale;
leWidget* TemperatureScale_PanelWidget0;
leButtonWidget* TemperatureScale_ButtonScaleFahrenheit;
leButtonWidget* TemperatureScale_ButtonScaleCentigrade;
leButtonWidget* TemperatureScale_ButtonBack;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_TemperatureScale(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_TemperatureScale(void)
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

    TemperatureScale_Layer0_FillPanel = leWidget_New();
    TemperatureScale_Layer0_FillPanel->fn->setPosition(TemperatureScale_Layer0_FillPanel, 0, 0);
    TemperatureScale_Layer0_FillPanel->fn->setSize(TemperatureScale_Layer0_FillPanel, 480, 272);
    TemperatureScale_Layer0_FillPanel->fn->setScheme(TemperatureScale_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)TemperatureScale_Layer0_FillPanel);

    TemperatureScale_TempIcon = leImageWidget_New();
    TemperatureScale_TempIcon->fn->setPosition(TemperatureScale_TempIcon, 5, 5);
    TemperatureScale_TempIcon->fn->setSize(TemperatureScale_TempIcon, 40, 40);
    TemperatureScale_TempIcon->fn->setScheme(TemperatureScale_TempIcon, &BackgroundScheme);
    TemperatureScale_TempIcon->fn->setBackgroundType(TemperatureScale_TempIcon, LE_WIDGET_BACKGROUND_NONE);
    TemperatureScale_TempIcon->fn->setBorderType(TemperatureScale_TempIcon, LE_WIDGET_BORDER_NONE);
    TemperatureScale_TempIcon->fn->setImage(TemperatureScale_TempIcon, (leImage*)&ICON_thermometer);
    root0->fn->addChild(root0, (leWidget*)TemperatureScale_TempIcon);

    TemperatureScale_LabelTempScale = leLabelWidget_New();
    TemperatureScale_LabelTempScale->fn->setPosition(TemperatureScale_LabelTempScale, 50, 15);
    TemperatureScale_LabelTempScale->fn->setSize(TemperatureScale_LabelTempScale, 350, 25);
    TemperatureScale_LabelTempScale->fn->setScheme(TemperatureScale_LabelTempScale, &BackgroundScheme);
    TemperatureScale_LabelTempScale->fn->setBackgroundType(TemperatureScale_LabelTempScale, LE_WIDGET_BACKGROUND_NONE);
    TemperatureScale_LabelTempScale->fn->setString(TemperatureScale_LabelTempScale, (leString*)&string_TemperatureScale);
    root0->fn->addChild(root0, (leWidget*)TemperatureScale_LabelTempScale);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    TemperatureScale_PanelWidget0 = leWidget_New();
    TemperatureScale_PanelWidget0->fn->setPosition(TemperatureScale_PanelWidget0, 373, 167);
    TemperatureScale_PanelWidget0->fn->setEnabled(TemperatureScale_PanelWidget0, LE_FALSE);
    TemperatureScale_PanelWidget0->fn->setVisible(TemperatureScale_PanelWidget0, LE_FALSE);
    TemperatureScale_PanelWidget0->fn->setScheme(TemperatureScale_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)TemperatureScale_PanelWidget0);

    TemperatureScale_ButtonScaleFahrenheit = leButtonWidget_New();
    TemperatureScale_ButtonScaleFahrenheit->fn->setPosition(TemperatureScale_ButtonScaleFahrenheit, 86, 109);
    TemperatureScale_ButtonScaleFahrenheit->fn->setSize(TemperatureScale_ButtonScaleFahrenheit, 145, 53);
    TemperatureScale_ButtonScaleFahrenheit->fn->setScheme(TemperatureScale_ButtonScaleFahrenheit, &BackgroundScheme);
    TemperatureScale_ButtonScaleFahrenheit->fn->setBorderType(TemperatureScale_ButtonScaleFahrenheit, LE_WIDGET_BORDER_NONE);
    TemperatureScale_ButtonScaleFahrenheit->fn->setMargins(TemperatureScale_ButtonScaleFahrenheit, 0, 0, 0, 0);
    TemperatureScale_ButtonScaleFahrenheit->fn->setString(TemperatureScale_ButtonScaleFahrenheit, (leString*)&string_TemperatureFahrenheit);
    TemperatureScale_ButtonScaleFahrenheit->fn->setPressedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsActiveL);
    TemperatureScale_ButtonScaleFahrenheit->fn->setReleasedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsActiveL);
    TemperatureScale_ButtonScaleFahrenheit->fn->setImagePosition(TemperatureScale_ButtonScaleFahrenheit, LE_RELATIVE_POSITION_BEHIND);
    TemperatureScale_ButtonScaleFahrenheit->fn->setPressedEventCallback(TemperatureScale_ButtonScaleFahrenheit, event_TemperatureScale_ButtonScaleFahrenheit_OnPressed);
    TemperatureScale_ButtonScaleFahrenheit->fn->setReleasedEventCallback(TemperatureScale_ButtonScaleFahrenheit, event_TemperatureScale_ButtonScaleFahrenheit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)TemperatureScale_ButtonScaleFahrenheit);

    TemperatureScale_ButtonScaleCentigrade = leButtonWidget_New();
    TemperatureScale_ButtonScaleCentigrade->fn->setPosition(TemperatureScale_ButtonScaleCentigrade, 230, 109);
    TemperatureScale_ButtonScaleCentigrade->fn->setSize(TemperatureScale_ButtonScaleCentigrade, 145, 53);
    TemperatureScale_ButtonScaleCentigrade->fn->setScheme(TemperatureScale_ButtonScaleCentigrade, &BackgroundScheme);
    TemperatureScale_ButtonScaleCentigrade->fn->setBorderType(TemperatureScale_ButtonScaleCentigrade, LE_WIDGET_BORDER_NONE);
    TemperatureScale_ButtonScaleCentigrade->fn->setMargins(TemperatureScale_ButtonScaleCentigrade, 0, 0, 0, 0);
    TemperatureScale_ButtonScaleCentigrade->fn->setString(TemperatureScale_ButtonScaleCentigrade, (leString*)&string_TemperatureCentigrade);
    TemperatureScale_ButtonScaleCentigrade->fn->setPressedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsActiveR);
    TemperatureScale_ButtonScaleCentigrade->fn->setReleasedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsInactiveR);
    TemperatureScale_ButtonScaleCentigrade->fn->setImagePosition(TemperatureScale_ButtonScaleCentigrade, LE_RELATIVE_POSITION_BEHIND);
    TemperatureScale_ButtonScaleCentigrade->fn->setPressedEventCallback(TemperatureScale_ButtonScaleCentigrade, event_TemperatureScale_ButtonScaleCentigrade_OnPressed);
    TemperatureScale_ButtonScaleCentigrade->fn->setReleasedEventCallback(TemperatureScale_ButtonScaleCentigrade, event_TemperatureScale_ButtonScaleCentigrade_OnReleased);
    root1->fn->addChild(root1, (leWidget*)TemperatureScale_ButtonScaleCentigrade);

    TemperatureScale_ButtonBack = leButtonWidget_New();
    TemperatureScale_ButtonBack->fn->setPosition(TemperatureScale_ButtonBack, 431, 4);
    TemperatureScale_ButtonBack->fn->setSize(TemperatureScale_ButtonBack, 45, 45);
    TemperatureScale_ButtonBack->fn->setScheme(TemperatureScale_ButtonBack, &BackgroundScheme);
    TemperatureScale_ButtonBack->fn->setBorderType(TemperatureScale_ButtonBack, LE_WIDGET_BORDER_NONE);
    TemperatureScale_ButtonBack->fn->setPressedImage(TemperatureScale_ButtonBack, (leImage*)&ICON_goBackActive);
    TemperatureScale_ButtonBack->fn->setReleasedImage(TemperatureScale_ButtonBack, (leImage*)&ICON_goBackInactive);
    TemperatureScale_ButtonBack->fn->setPressedEventCallback(TemperatureScale_ButtonBack, event_TemperatureScale_ButtonBack_OnPressed);
    TemperatureScale_ButtonBack->fn->setReleasedEventCallback(TemperatureScale_ButtonBack, event_TemperatureScale_ButtonBack_OnReleased);
    root1->fn->addChild(root1, (leWidget*)TemperatureScale_ButtonBack);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    TemperatureScale_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_TemperatureScale(void)
{
}

void screenHide_TemperatureScale(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    TemperatureScale_Layer0_FillPanel = NULL;
    TemperatureScale_TempIcon = NULL;
    TemperatureScale_LabelTempScale = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    TemperatureScale_PanelWidget0 = NULL;
    TemperatureScale_ButtonScaleFahrenheit = NULL;
    TemperatureScale_ButtonScaleCentigrade = NULL;
    TemperatureScale_ButtonBack = NULL;


    showing = LE_FALSE;
}

void screenDestroy_TemperatureScale(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_TemperatureScale(uint32_t lyrIdx)
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

