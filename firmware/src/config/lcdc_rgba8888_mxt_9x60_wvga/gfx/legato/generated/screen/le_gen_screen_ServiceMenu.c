#include "gfx/legato/generated/screen/le_gen_screen_ServiceMenu.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* ServiceMenu_PanelBack;
leImageWidget* ServiceMenu_ServiceMenuIcon;
leLabelWidget* ServiceMenu_LabelServiceSettings;
leWidget* ServiceMenu_PanelWidget0;
leButtonWidget* ServiceMenu_BurronWattageSelection;
leButtonWidget* ServiceMenu_ButtonLineVoltage;
leButtonWidget* ServiceMenu_ButtonOtherSettings;
leButtonWidget* ServiceMenu_ButtonBack;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ServiceMenu(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ServiceMenu(void)
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

    ServiceMenu_PanelBack = leWidget_New();
    ServiceMenu_PanelBack->fn->setPosition(ServiceMenu_PanelBack, 0, 0);
    ServiceMenu_PanelBack->fn->setSize(ServiceMenu_PanelBack, 480, 272);
    ServiceMenu_PanelBack->fn->setScheme(ServiceMenu_PanelBack, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ServiceMenu_PanelBack);

    ServiceMenu_ServiceMenuIcon = leImageWidget_New();
    ServiceMenu_ServiceMenuIcon->fn->setPosition(ServiceMenu_ServiceMenuIcon, 5, 5);
    ServiceMenu_ServiceMenuIcon->fn->setSize(ServiceMenu_ServiceMenuIcon, 40, 40);
    ServiceMenu_ServiceMenuIcon->fn->setScheme(ServiceMenu_ServiceMenuIcon, &BackgroundScheme);
    ServiceMenu_ServiceMenuIcon->fn->setBackgroundType(ServiceMenu_ServiceMenuIcon, LE_WIDGET_BACKGROUND_NONE);
    ServiceMenu_ServiceMenuIcon->fn->setBorderType(ServiceMenu_ServiceMenuIcon, LE_WIDGET_BORDER_NONE);
    ServiceMenu_ServiceMenuIcon->fn->setImage(ServiceMenu_ServiceMenuIcon, (leImage*)&gear);
    root0->fn->addChild(root0, (leWidget*)ServiceMenu_ServiceMenuIcon);

    ServiceMenu_LabelServiceSettings = leLabelWidget_New();
    ServiceMenu_LabelServiceSettings->fn->setPosition(ServiceMenu_LabelServiceSettings, 45, 15);
    ServiceMenu_LabelServiceSettings->fn->setSize(ServiceMenu_LabelServiceSettings, 200, 25);
    ServiceMenu_LabelServiceSettings->fn->setScheme(ServiceMenu_LabelServiceSettings, &BackgroundScheme);
    ServiceMenu_LabelServiceSettings->fn->setBackgroundType(ServiceMenu_LabelServiceSettings, LE_WIDGET_BACKGROUND_NONE);
    ServiceMenu_LabelServiceSettings->fn->setString(ServiceMenu_LabelServiceSettings, (leString*)&string_ServiceTechnicianSettings);
    root0->fn->addChild(root0, (leWidget*)ServiceMenu_LabelServiceSettings);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ServiceMenu_PanelWidget0 = leWidget_New();
    ServiceMenu_PanelWidget0->fn->setPosition(ServiceMenu_PanelWidget0, 374, 163);
    ServiceMenu_PanelWidget0->fn->setEnabled(ServiceMenu_PanelWidget0, LE_FALSE);
    ServiceMenu_PanelWidget0->fn->setVisible(ServiceMenu_PanelWidget0, LE_FALSE);
    ServiceMenu_PanelWidget0->fn->setScheme(ServiceMenu_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)ServiceMenu_PanelWidget0);

    ServiceMenu_BurronWattageSelection = leButtonWidget_New();
    ServiceMenu_BurronWattageSelection->fn->setPosition(ServiceMenu_BurronWattageSelection, 40, 70);
    ServiceMenu_BurronWattageSelection->fn->setSize(ServiceMenu_BurronWattageSelection, 175, 40);
    ServiceMenu_BurronWattageSelection->fn->setScheme(ServiceMenu_BurronWattageSelection, &ButtonScheme);
    ServiceMenu_BurronWattageSelection->fn->setBorderType(ServiceMenu_BurronWattageSelection, LE_WIDGET_BORDER_LINE);
    ServiceMenu_BurronWattageSelection->fn->setString(ServiceMenu_BurronWattageSelection, (leString*)&string_WattageSelection);
    ServiceMenu_BurronWattageSelection->fn->setPressedEventCallback(ServiceMenu_BurronWattageSelection, event_ServiceMenu_BurronWattageSelection_OnPressed);
    ServiceMenu_BurronWattageSelection->fn->setReleasedEventCallback(ServiceMenu_BurronWattageSelection, event_ServiceMenu_BurronWattageSelection_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceMenu_BurronWattageSelection);

    ServiceMenu_ButtonLineVoltage = leButtonWidget_New();
    ServiceMenu_ButtonLineVoltage->fn->setPosition(ServiceMenu_ButtonLineVoltage, 40, 130);
    ServiceMenu_ButtonLineVoltage->fn->setSize(ServiceMenu_ButtonLineVoltage, 175, 40);
    ServiceMenu_ButtonLineVoltage->fn->setScheme(ServiceMenu_ButtonLineVoltage, &ButtonScheme);
    ServiceMenu_ButtonLineVoltage->fn->setBorderType(ServiceMenu_ButtonLineVoltage, LE_WIDGET_BORDER_LINE);
    ServiceMenu_ButtonLineVoltage->fn->setString(ServiceMenu_ButtonLineVoltage, (leString*)&string_LineVoltageCalibration);
    ServiceMenu_ButtonLineVoltage->fn->setPressedEventCallback(ServiceMenu_ButtonLineVoltage, event_ServiceMenu_ButtonLineVoltage_OnPressed);
    ServiceMenu_ButtonLineVoltage->fn->setReleasedEventCallback(ServiceMenu_ButtonLineVoltage, event_ServiceMenu_ButtonLineVoltage_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceMenu_ButtonLineVoltage);

    ServiceMenu_ButtonOtherSettings = leButtonWidget_New();
    ServiceMenu_ButtonOtherSettings->fn->setPosition(ServiceMenu_ButtonOtherSettings, 40, 190);
    ServiceMenu_ButtonOtherSettings->fn->setSize(ServiceMenu_ButtonOtherSettings, 175, 40);
    ServiceMenu_ButtonOtherSettings->fn->setScheme(ServiceMenu_ButtonOtherSettings, &ButtonScheme);
    ServiceMenu_ButtonOtherSettings->fn->setBorderType(ServiceMenu_ButtonOtherSettings, LE_WIDGET_BORDER_LINE);
    ServiceMenu_ButtonOtherSettings->fn->setString(ServiceMenu_ButtonOtherSettings, (leString*)&string_OtherSettings);
    ServiceMenu_ButtonOtherSettings->fn->setPressedEventCallback(ServiceMenu_ButtonOtherSettings, event_ServiceMenu_ButtonOtherSettings_OnPressed);
    ServiceMenu_ButtonOtherSettings->fn->setReleasedEventCallback(ServiceMenu_ButtonOtherSettings, event_ServiceMenu_ButtonOtherSettings_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceMenu_ButtonOtherSettings);

    ServiceMenu_ButtonBack = leButtonWidget_New();
    ServiceMenu_ButtonBack->fn->setPosition(ServiceMenu_ButtonBack, 426, 7);
    ServiceMenu_ButtonBack->fn->setSize(ServiceMenu_ButtonBack, 46, 37);
    ServiceMenu_ButtonBack->fn->setScheme(ServiceMenu_ButtonBack, &ForegroundScheme);
    ServiceMenu_ButtonBack->fn->setBorderType(ServiceMenu_ButtonBack, LE_WIDGET_BORDER_NONE);
    ServiceMenu_ButtonBack->fn->setPressedImage(ServiceMenu_ButtonBack, (leImage*)&ICON_goBackActive);
    ServiceMenu_ButtonBack->fn->setReleasedImage(ServiceMenu_ButtonBack, (leImage*)&ICON_goBackInactive);
    ServiceMenu_ButtonBack->fn->setImagePosition(ServiceMenu_ButtonBack, LE_RELATIVE_POSITION_BEHIND);
    ServiceMenu_ButtonBack->fn->setReleasedEventCallback(ServiceMenu_ButtonBack, event_ServiceMenu_ButtonBack_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceMenu_ButtonBack);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ServiceMenu(void)
{
}

void screenHide_ServiceMenu(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ServiceMenu_PanelBack = NULL;
    ServiceMenu_ServiceMenuIcon = NULL;
    ServiceMenu_LabelServiceSettings = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ServiceMenu_PanelWidget0 = NULL;
    ServiceMenu_BurronWattageSelection = NULL;
    ServiceMenu_ButtonLineVoltage = NULL;
    ServiceMenu_ButtonOtherSettings = NULL;
    ServiceMenu_ButtonBack = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ServiceMenu(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ServiceMenu(uint32_t lyrIdx)
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

