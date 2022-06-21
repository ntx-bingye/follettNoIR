#include "gfx/legato/generated/screen/le_gen_screen_FirmwareVersions.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* FirmwareVersions_Layer0_FillPanel;
leLabelWidget* FirmwareVersions_LabelFirmwareVersions;
leImageWidget* FirmwareVersions_VersionIcon;
leLabelWidget* FirmwareVersions_LabelUI;
leLabelWidget* FirmwareVersions_LabelHOB1;
leLabelWidget* FirmwareVersions_LabelHOB2;
leLabelWidget* FirmwareVersions_VersionUIValue;
leLabelWidget* FirmwareVersions_VersionHOB1Value;
leLabelWidget* FirmwareVersions_VersionHOB2Value;
leWidget* FirmwareVersions_PanelWidget0;
leButtonWidget* FirmwareVersions_ButtonBack;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_FirmwareVersions(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_FirmwareVersions(void)
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

    FirmwareVersions_Layer0_FillPanel = leWidget_New();
    FirmwareVersions_Layer0_FillPanel->fn->setPosition(FirmwareVersions_Layer0_FillPanel, 0, 0);
    FirmwareVersions_Layer0_FillPanel->fn->setSize(FirmwareVersions_Layer0_FillPanel, 480, 272);
    FirmwareVersions_Layer0_FillPanel->fn->setScheme(FirmwareVersions_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_Layer0_FillPanel);

    FirmwareVersions_LabelFirmwareVersions = leLabelWidget_New();
    FirmwareVersions_LabelFirmwareVersions->fn->setPosition(FirmwareVersions_LabelFirmwareVersions, 45, 15);
    FirmwareVersions_LabelFirmwareVersions->fn->setSize(FirmwareVersions_LabelFirmwareVersions, 136, 25);
    FirmwareVersions_LabelFirmwareVersions->fn->setScheme(FirmwareVersions_LabelFirmwareVersions, &BackgroundScheme);
    FirmwareVersions_LabelFirmwareVersions->fn->setBackgroundType(FirmwareVersions_LabelFirmwareVersions, LE_WIDGET_BACKGROUND_NONE);
    FirmwareVersions_LabelFirmwareVersions->fn->setString(FirmwareVersions_LabelFirmwareVersions, (leString*)&string_FirmwareVersionsView);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_LabelFirmwareVersions);

    FirmwareVersions_VersionIcon = leImageWidget_New();
    FirmwareVersions_VersionIcon->fn->setPosition(FirmwareVersions_VersionIcon, 5, 5);
    FirmwareVersions_VersionIcon->fn->setSize(FirmwareVersions_VersionIcon, 40, 40);
    FirmwareVersions_VersionIcon->fn->setScheme(FirmwareVersions_VersionIcon, &BackgroundScheme);
    FirmwareVersions_VersionIcon->fn->setBackgroundType(FirmwareVersions_VersionIcon, LE_WIDGET_BACKGROUND_NONE);
    FirmwareVersions_VersionIcon->fn->setBorderType(FirmwareVersions_VersionIcon, LE_WIDGET_BORDER_NONE);
    FirmwareVersions_VersionIcon->fn->setImage(FirmwareVersions_VersionIcon, (leImage*)&gear);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_VersionIcon);

    FirmwareVersions_LabelUI = leLabelWidget_New();
    FirmwareVersions_LabelUI->fn->setPosition(FirmwareVersions_LabelUI, 30, 60);
    FirmwareVersions_LabelUI->fn->setSize(FirmwareVersions_LabelUI, 240, 30);
    FirmwareVersions_LabelUI->fn->setScheme(FirmwareVersions_LabelUI, &BackgroundScheme);
    FirmwareVersions_LabelUI->fn->setBackgroundType(FirmwareVersions_LabelUI, LE_WIDGET_BACKGROUND_NONE);
    FirmwareVersions_LabelUI->fn->setString(FirmwareVersions_LabelUI, (leString*)&string_FirmwareVersionUI);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_LabelUI);

    FirmwareVersions_LabelHOB1 = leLabelWidget_New();
    FirmwareVersions_LabelHOB1->fn->setPosition(FirmwareVersions_LabelHOB1, 30, 105);
    FirmwareVersions_LabelHOB1->fn->setSize(FirmwareVersions_LabelHOB1, 240, 30);
    FirmwareVersions_LabelHOB1->fn->setScheme(FirmwareVersions_LabelHOB1, &BackgroundScheme);
    FirmwareVersions_LabelHOB1->fn->setBackgroundType(FirmwareVersions_LabelHOB1, LE_WIDGET_BACKGROUND_NONE);
    FirmwareVersions_LabelHOB1->fn->setString(FirmwareVersions_LabelHOB1, (leString*)&string_FirmwareVersionHOB1);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_LabelHOB1);

    FirmwareVersions_LabelHOB2 = leLabelWidget_New();
    FirmwareVersions_LabelHOB2->fn->setPosition(FirmwareVersions_LabelHOB2, 30, 150);
    FirmwareVersions_LabelHOB2->fn->setSize(FirmwareVersions_LabelHOB2, 240, 30);
    FirmwareVersions_LabelHOB2->fn->setScheme(FirmwareVersions_LabelHOB2, &BackgroundScheme);
    FirmwareVersions_LabelHOB2->fn->setBackgroundType(FirmwareVersions_LabelHOB2, LE_WIDGET_BACKGROUND_NONE);
    FirmwareVersions_LabelHOB2->fn->setString(FirmwareVersions_LabelHOB2, (leString*)&string_FirmwareVersionHOB2);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_LabelHOB2);

    FirmwareVersions_VersionUIValue = leLabelWidget_New();
    FirmwareVersions_VersionUIValue->fn->setPosition(FirmwareVersions_VersionUIValue, 265, 60);
    FirmwareVersions_VersionUIValue->fn->setSize(FirmwareVersions_VersionUIValue, 100, 30);
    FirmwareVersions_VersionUIValue->fn->setScheme(FirmwareVersions_VersionUIValue, &BackgroundScheme);
    FirmwareVersions_VersionUIValue->fn->setBackgroundType(FirmwareVersions_VersionUIValue, LE_WIDGET_BACKGROUND_NONE);
    FirmwareVersions_VersionUIValue->fn->setString(FirmwareVersions_VersionUIValue, (leString*)&string_VersionUIValue);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_VersionUIValue);

    FirmwareVersions_VersionHOB1Value = leLabelWidget_New();
    FirmwareVersions_VersionHOB1Value->fn->setPosition(FirmwareVersions_VersionHOB1Value, 275, 105);
    FirmwareVersions_VersionHOB1Value->fn->setSize(FirmwareVersions_VersionHOB1Value, 100, 30);
    FirmwareVersions_VersionHOB1Value->fn->setScheme(FirmwareVersions_VersionHOB1Value, &BackgroundScheme);
    FirmwareVersions_VersionHOB1Value->fn->setBackgroundType(FirmwareVersions_VersionHOB1Value, LE_WIDGET_BACKGROUND_NONE);
    FirmwareVersions_VersionHOB1Value->fn->setString(FirmwareVersions_VersionHOB1Value, (leString*)&string_WattageMeasured2200);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_VersionHOB1Value);

    FirmwareVersions_VersionHOB2Value = leLabelWidget_New();
    FirmwareVersions_VersionHOB2Value->fn->setPosition(FirmwareVersions_VersionHOB2Value, 275, 150);
    FirmwareVersions_VersionHOB2Value->fn->setSize(FirmwareVersions_VersionHOB2Value, 100, 30);
    FirmwareVersions_VersionHOB2Value->fn->setScheme(FirmwareVersions_VersionHOB2Value, &BackgroundScheme);
    FirmwareVersions_VersionHOB2Value->fn->setBackgroundType(FirmwareVersions_VersionHOB2Value, LE_WIDGET_BACKGROUND_NONE);
    FirmwareVersions_VersionHOB2Value->fn->setString(FirmwareVersions_VersionHOB2Value, (leString*)&string_VersionHOB2Value);
    root0->fn->addChild(root0, (leWidget*)FirmwareVersions_VersionHOB2Value);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    FirmwareVersions_PanelWidget0 = leWidget_New();
    FirmwareVersions_PanelWidget0->fn->setPosition(FirmwareVersions_PanelWidget0, 373, 165);
    FirmwareVersions_PanelWidget0->fn->setEnabled(FirmwareVersions_PanelWidget0, LE_FALSE);
    FirmwareVersions_PanelWidget0->fn->setVisible(FirmwareVersions_PanelWidget0, LE_FALSE);
    FirmwareVersions_PanelWidget0->fn->setScheme(FirmwareVersions_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)FirmwareVersions_PanelWidget0);

    FirmwareVersions_ButtonBack = leButtonWidget_New();
    FirmwareVersions_ButtonBack->fn->setPosition(FirmwareVersions_ButtonBack, 431, 4);
    FirmwareVersions_ButtonBack->fn->setSize(FirmwareVersions_ButtonBack, 45, 45);
    FirmwareVersions_ButtonBack->fn->setScheme(FirmwareVersions_ButtonBack, &BackgroundScheme);
    FirmwareVersions_ButtonBack->fn->setBorderType(FirmwareVersions_ButtonBack, LE_WIDGET_BORDER_NONE);
    FirmwareVersions_ButtonBack->fn->setPressedImage(FirmwareVersions_ButtonBack, (leImage*)&ICON_goBackActive);
    FirmwareVersions_ButtonBack->fn->setReleasedImage(FirmwareVersions_ButtonBack, (leImage*)&ICON_goBackInactive);
    FirmwareVersions_ButtonBack->fn->setPressedEventCallback(FirmwareVersions_ButtonBack, event_FirmwareVersions_ButtonBack_OnPressed);
    FirmwareVersions_ButtonBack->fn->setReleasedEventCallback(FirmwareVersions_ButtonBack, event_FirmwareVersions_ButtonBack_OnReleased);
    root1->fn->addChild(root1, (leWidget*)FirmwareVersions_ButtonBack);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    FirmwareVersions_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_FirmwareVersions(void)
{
}

void screenHide_FirmwareVersions(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    FirmwareVersions_Layer0_FillPanel = NULL;
    FirmwareVersions_LabelFirmwareVersions = NULL;
    FirmwareVersions_VersionIcon = NULL;
    FirmwareVersions_LabelUI = NULL;
    FirmwareVersions_LabelHOB1 = NULL;
    FirmwareVersions_LabelHOB2 = NULL;
    FirmwareVersions_VersionUIValue = NULL;
    FirmwareVersions_VersionHOB1Value = NULL;
    FirmwareVersions_VersionHOB2Value = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    FirmwareVersions_PanelWidget0 = NULL;
    FirmwareVersions_ButtonBack = NULL;


    showing = LE_FALSE;
}

void screenDestroy_FirmwareVersions(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_FirmwareVersions(uint32_t lyrIdx)
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

