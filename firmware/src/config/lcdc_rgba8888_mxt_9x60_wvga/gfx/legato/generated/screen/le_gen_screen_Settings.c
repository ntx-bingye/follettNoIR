#include "gfx/legato/generated/screen/le_gen_screen_Settings.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* Settings_Layer0_FillPanel;
leLabelWidget* Settings_LabelSettings;
leImageWidget* Settings_SettingsIcon;
leWidget* Settings_PanelWidget0;
leWidget* Settings_PanelWidget1;
leKeyPadWidget* Settings_KeyPad;
leButtonWidget* Settings_ButtonBack;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Settings(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Settings(void)
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

    Settings_Layer0_FillPanel = leWidget_New();
    Settings_Layer0_FillPanel->fn->setPosition(Settings_Layer0_FillPanel, 0, 0);
    Settings_Layer0_FillPanel->fn->setSize(Settings_Layer0_FillPanel, 480, 272);
    Settings_Layer0_FillPanel->fn->setScheme(Settings_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)Settings_Layer0_FillPanel);

    Settings_LabelSettings = leLabelWidget_New();
    Settings_LabelSettings->fn->setPosition(Settings_LabelSettings, 45, 15);
    Settings_LabelSettings->fn->setSize(Settings_LabelSettings, 150, 25);
    Settings_LabelSettings->fn->setScheme(Settings_LabelSettings, &BackgroundScheme);
    Settings_LabelSettings->fn->setBackgroundType(Settings_LabelSettings, LE_WIDGET_BACKGROUND_NONE);
    Settings_LabelSettings->fn->setString(Settings_LabelSettings, (leString*)&string_SettingsMenu);
    Settings_Layer0_FillPanel->fn->addChild(Settings_Layer0_FillPanel, (leWidget*)Settings_LabelSettings);

    Settings_SettingsIcon = leImageWidget_New();
    Settings_SettingsIcon->fn->setPosition(Settings_SettingsIcon, 5, 5);
    Settings_SettingsIcon->fn->setSize(Settings_SettingsIcon, 40, 40);
    Settings_SettingsIcon->fn->setScheme(Settings_SettingsIcon, &BackgroundScheme);
    Settings_SettingsIcon->fn->setBorderType(Settings_SettingsIcon, LE_WIDGET_BORDER_NONE);
    Settings_SettingsIcon->fn->setImage(Settings_SettingsIcon, (leImage*)&gear);
    Settings_Layer0_FillPanel->fn->addChild(Settings_Layer0_FillPanel, (leWidget*)Settings_SettingsIcon);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    Settings_PanelWidget0 = leWidget_New();
    Settings_PanelWidget0->fn->setPosition(Settings_PanelWidget0, 30, 60);
    Settings_PanelWidget0->fn->setSize(Settings_PanelWidget0, 420, 190);
    Settings_PanelWidget0->fn->setScheme(Settings_PanelWidget0, &BackgroundScheme);
    root1->fn->addChild(root1, (leWidget*)Settings_PanelWidget0);

    Settings_KeyPad = leKeyPadWidget_New(3, 2);
    Settings_KeyPad->fn->setPosition(Settings_KeyPad, 8, 12);
    Settings_KeyPad->fn->setSize(Settings_KeyPad, 405, 162);
    Settings_KeyPad->fn->setScheme(Settings_KeyPad, &BackgroundScheme);
    Settings_KeyPad->fn->setBorderType(Settings_KeyPad, LE_WIDGET_BORDER_LINE);
    leButtonWidget* cell_0_0 = Settings_KeyPad->fn->getCellButton(Settings_KeyPad, 0, 0);
    Settings_KeyPad->fn->setKeyValue(Settings_KeyPad, 0, 0, (leString*)&string_Enable);
    cell_0_0->fn->setString(cell_0_0, (leString*)&string_TemperatureScale);
    leButtonWidget* cell_0_1 = Settings_KeyPad->fn->getCellButton(Settings_KeyPad, 0, 1);
    cell_0_1->fn->setString(cell_0_1, (leString*)&string_ErrorLogView);
    leButtonWidget* cell_1_0 = Settings_KeyPad->fn->getCellButton(Settings_KeyPad, 1, 0);
    cell_1_0->fn->setString(cell_1_0, (leString*)&string_ScreenBrightness);
    leButtonWidget* cell_1_1 = Settings_KeyPad->fn->getCellButton(Settings_KeyPad, 1, 1);
    cell_1_1->fn->setString(cell_1_1, (leString*)&string_FirmwareVersionsView);
    leButtonWidget* cell_2_0 = Settings_KeyPad->fn->getCellButton(Settings_KeyPad, 2, 0);
    cell_2_0->fn->setString(cell_2_0, (leString*)&string_PerformanceDataView);
    leButtonWidget* cell_2_1 = Settings_KeyPad->fn->getCellButton(Settings_KeyPad, 2, 1);
    cell_2_1->fn->setString(cell_2_1, (leString*)&string_ServiceTechnicianSettings);
    Settings_KeyPad->fn->setKeyClickEventCallback(Settings_KeyPad, event_Settings_KeyPad_OnKeyClick);
    Settings_PanelWidget0->fn->addChild(Settings_PanelWidget0, (leWidget*)Settings_KeyPad);

    Settings_PanelWidget1 = leWidget_New();
    Settings_PanelWidget1->fn->setPosition(Settings_PanelWidget1, 385, 1);
    Settings_PanelWidget1->fn->setSize(Settings_PanelWidget1, 95, 56);
    Settings_PanelWidget1->fn->setScheme(Settings_PanelWidget1, &BackgroundScheme);
    root1->fn->addChild(root1, (leWidget*)Settings_PanelWidget1);

    Settings_ButtonBack = leButtonWidget_New();
    Settings_ButtonBack->fn->setPosition(Settings_ButtonBack, 29, 1);
    Settings_ButtonBack->fn->setSize(Settings_ButtonBack, 60, 60);
    Settings_ButtonBack->fn->setScheme(Settings_ButtonBack, &BackgroundScheme);
    Settings_ButtonBack->fn->setBorderType(Settings_ButtonBack, LE_WIDGET_BORDER_NONE);
    Settings_ButtonBack->fn->setPressedImage(Settings_ButtonBack, (leImage*)&ICON_goBackActive);
    Settings_ButtonBack->fn->setReleasedImage(Settings_ButtonBack, (leImage*)&ICON_goBackInactive);
    Settings_ButtonBack->fn->setReleasedEventCallback(Settings_ButtonBack, event_Settings_ButtonBack_OnReleased);
    Settings_PanelWidget1->fn->addChild(Settings_PanelWidget1, (leWidget*)Settings_ButtonBack);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Settings(void)
{
}

void screenHide_Settings(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Settings_Layer0_FillPanel = NULL;
    Settings_LabelSettings = NULL;
    Settings_SettingsIcon = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    Settings_PanelWidget0 = NULL;
    Settings_PanelWidget1 = NULL;
    Settings_KeyPad = NULL;
    Settings_ButtonBack = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Settings(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Settings(uint32_t lyrIdx)
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

