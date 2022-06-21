#include "gfx/legato/generated/screen/le_gen_screen_ServiceAgentSettingsMaximumWattage.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* ServiceAgentSettingsMaximumWattage_Layer0_FillPanel;
leButtonWidget* ServiceAgentSettingsMaximumWattage_ButtonGearICON;
leLabelWidget* ServiceAgentSettingsMaximumWattage_LabelMaximumWattage;
leLabelWidget* ServiceAgentSettingsMaximumWattage_ServiceAgentSettings;
leWidget* ServiceAgentSettingsMaximumWattage_PanelWidget0;
leListWheelWidget* ServiceAgentSettingsMaximumWattage_ListWheelWattage;
leButtonWidget* ServiceAgentSettingsMaximumWattage_ButtonExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ServiceAgentSettingsMaximumWattage(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ServiceAgentSettingsMaximumWattage(void)
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

    ServiceAgentSettingsMaximumWattage_Layer0_FillPanel = leWidget_New();
    ServiceAgentSettingsMaximumWattage_Layer0_FillPanel->fn->setPosition(ServiceAgentSettingsMaximumWattage_Layer0_FillPanel, 1, -1);
    ServiceAgentSettingsMaximumWattage_Layer0_FillPanel->fn->setSize(ServiceAgentSettingsMaximumWattage_Layer0_FillPanel, 480, 272);
    ServiceAgentSettingsMaximumWattage_Layer0_FillPanel->fn->setScheme(ServiceAgentSettingsMaximumWattage_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsMaximumWattage_Layer0_FillPanel);

    ServiceAgentSettingsMaximumWattage_ButtonGearICON = leButtonWidget_New();
    ServiceAgentSettingsMaximumWattage_ButtonGearICON->fn->setPosition(ServiceAgentSettingsMaximumWattage_ButtonGearICON, 5, 5);
    ServiceAgentSettingsMaximumWattage_ButtonGearICON->fn->setSize(ServiceAgentSettingsMaximumWattage_ButtonGearICON, 45, 45);
    ServiceAgentSettingsMaximumWattage_ButtonGearICON->fn->setScheme(ServiceAgentSettingsMaximumWattage_ButtonGearICON, &ForegroundScheme);
    ServiceAgentSettingsMaximumWattage_ButtonGearICON->fn->setBackgroundType(ServiceAgentSettingsMaximumWattage_ButtonGearICON, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsMaximumWattage_ButtonGearICON->fn->setBorderType(ServiceAgentSettingsMaximumWattage_ButtonGearICON, LE_WIDGET_BORDER_NONE);
    ServiceAgentSettingsMaximumWattage_ButtonGearICON->fn->setReleasedImage(ServiceAgentSettingsMaximumWattage_ButtonGearICON, (leImage*)&gear);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsMaximumWattage_ButtonGearICON);

    ServiceAgentSettingsMaximumWattage_LabelMaximumWattage = leLabelWidget_New();
    ServiceAgentSettingsMaximumWattage_LabelMaximumWattage->fn->setPosition(ServiceAgentSettingsMaximumWattage_LabelMaximumWattage, 15, 136);
    ServiceAgentSettingsMaximumWattage_LabelMaximumWattage->fn->setSize(ServiceAgentSettingsMaximumWattage_LabelMaximumWattage, 190, 25);
    ServiceAgentSettingsMaximumWattage_LabelMaximumWattage->fn->setScheme(ServiceAgentSettingsMaximumWattage_LabelMaximumWattage, &ForegroundScheme);
    ServiceAgentSettingsMaximumWattage_LabelMaximumWattage->fn->setBackgroundType(ServiceAgentSettingsMaximumWattage_LabelMaximumWattage, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsMaximumWattage_LabelMaximumWattage->fn->setString(ServiceAgentSettingsMaximumWattage_LabelMaximumWattage, (leString*)&string_MaximumWattage);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsMaximumWattage_LabelMaximumWattage);

    ServiceAgentSettingsMaximumWattage_ServiceAgentSettings = leLabelWidget_New();
    ServiceAgentSettingsMaximumWattage_ServiceAgentSettings->fn->setPosition(ServiceAgentSettingsMaximumWattage_ServiceAgentSettings, 45, 15);
    ServiceAgentSettingsMaximumWattage_ServiceAgentSettings->fn->setSize(ServiceAgentSettingsMaximumWattage_ServiceAgentSettings, 200, 25);
    ServiceAgentSettingsMaximumWattage_ServiceAgentSettings->fn->setScheme(ServiceAgentSettingsMaximumWattage_ServiceAgentSettings, &ForegroundScheme);
    ServiceAgentSettingsMaximumWattage_ServiceAgentSettings->fn->setBackgroundType(ServiceAgentSettingsMaximumWattage_ServiceAgentSettings, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsMaximumWattage_ServiceAgentSettings->fn->setString(ServiceAgentSettingsMaximumWattage_ServiceAgentSettings, (leString*)&string_WattageSelection);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsMaximumWattage_ServiceAgentSettings);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ServiceAgentSettingsMaximumWattage_PanelWidget0 = leWidget_New();
    ServiceAgentSettingsMaximumWattage_PanelWidget0->fn->setPosition(ServiceAgentSettingsMaximumWattage_PanelWidget0, 371, 161);
    ServiceAgentSettingsMaximumWattage_PanelWidget0->fn->setEnabled(ServiceAgentSettingsMaximumWattage_PanelWidget0, LE_FALSE);
    ServiceAgentSettingsMaximumWattage_PanelWidget0->fn->setVisible(ServiceAgentSettingsMaximumWattage_PanelWidget0, LE_FALSE);
    ServiceAgentSettingsMaximumWattage_PanelWidget0->fn->setScheme(ServiceAgentSettingsMaximumWattage_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsMaximumWattage_PanelWidget0);

    ServiceAgentSettingsMaximumWattage_ListWheelWattage = leListWheelWidget_New();
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setPosition(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 205, 43);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setSize(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 168, 210);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setScheme(ServiceAgentSettingsMaximumWattage_ListWheelWattage, &SelectWheelScheme);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setBorderType(ServiceAgentSettingsMaximumWattage_ListWheelWattage, LE_WIDGET_BORDER_LINE);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setIndicatorArea(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 15);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->appendItem(ServiceAgentSettingsMaximumWattage_ListWheelWattage);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setItemString(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 0, (leString*)&string_Wattage1500);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->appendItem(ServiceAgentSettingsMaximumWattage_ListWheelWattage);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setItemString(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 1, (leString*)&string_Wattage1800);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->appendItem(ServiceAgentSettingsMaximumWattage_ListWheelWattage);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setItemString(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 2, (leString*)&string_Wattage2000);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->appendItem(ServiceAgentSettingsMaximumWattage_ListWheelWattage);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setItemString(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 3, (leString*)&string_Wattage2500);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->appendItem(ServiceAgentSettingsMaximumWattage_ListWheelWattage);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setItemString(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 4, (leString*)&string_Wattage3000);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->appendItem(ServiceAgentSettingsMaximumWattage_ListWheelWattage);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setItemString(ServiceAgentSettingsMaximumWattage_ListWheelWattage, 5, (leString*)&string_Wattage3500);
    ServiceAgentSettingsMaximumWattage_ListWheelWattage->fn->setSelectedItemChangedEventCallback(ServiceAgentSettingsMaximumWattage_ListWheelWattage, event_ServiceAgentSettingsMaximumWattage_ListWheelWattage_OnSelectionChanged);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsMaximumWattage_ListWheelWattage);

    ServiceAgentSettingsMaximumWattage_ButtonExit = leButtonWidget_New();
    ServiceAgentSettingsMaximumWattage_ButtonExit->fn->setPosition(ServiceAgentSettingsMaximumWattage_ButtonExit, 431, 4);
    ServiceAgentSettingsMaximumWattage_ButtonExit->fn->setSize(ServiceAgentSettingsMaximumWattage_ButtonExit, 45, 45);
    ServiceAgentSettingsMaximumWattage_ButtonExit->fn->setScheme(ServiceAgentSettingsMaximumWattage_ButtonExit, &BackgroundScheme);
    ServiceAgentSettingsMaximumWattage_ButtonExit->fn->setBorderType(ServiceAgentSettingsMaximumWattage_ButtonExit, LE_WIDGET_BORDER_NONE);
    ServiceAgentSettingsMaximumWattage_ButtonExit->fn->setPressedImage(ServiceAgentSettingsMaximumWattage_ButtonExit, (leImage*)&ICON_goBackActive);
    ServiceAgentSettingsMaximumWattage_ButtonExit->fn->setReleasedImage(ServiceAgentSettingsMaximumWattage_ButtonExit, (leImage*)&ICON_goBackInactive);
    ServiceAgentSettingsMaximumWattage_ButtonExit->fn->setReleasedEventCallback(ServiceAgentSettingsMaximumWattage_ButtonExit, event_ServiceAgentSettingsMaximumWattage_ButtonExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsMaximumWattage_ButtonExit);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    ServiceAgentSettingsMaximumWattage_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ServiceAgentSettingsMaximumWattage(void)
{
}

void screenHide_ServiceAgentSettingsMaximumWattage(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ServiceAgentSettingsMaximumWattage_Layer0_FillPanel = NULL;
    ServiceAgentSettingsMaximumWattage_ButtonGearICON = NULL;
    ServiceAgentSettingsMaximumWattage_LabelMaximumWattage = NULL;
    ServiceAgentSettingsMaximumWattage_ServiceAgentSettings = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ServiceAgentSettingsMaximumWattage_PanelWidget0 = NULL;
    ServiceAgentSettingsMaximumWattage_ListWheelWattage = NULL;
    ServiceAgentSettingsMaximumWattage_ButtonExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ServiceAgentSettingsMaximumWattage(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ServiceAgentSettingsMaximumWattage(uint32_t lyrIdx)
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

