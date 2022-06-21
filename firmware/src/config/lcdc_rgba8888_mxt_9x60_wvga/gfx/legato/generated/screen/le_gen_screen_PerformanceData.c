#include "gfx/legato/generated/screen/le_gen_screen_PerformanceData.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* PerformanceData_Layer0_FillPanel;
leImageWidget* PerformanceData_PerformaceDataIcon;
leLabelWidget* PerformanceData_LabelOperationalData;
leLabelWidget* PerformanceData_LabelVoltageMeasured;
leLabelWidget* PerformanceData_LabelFrequencyZeroCross;
leLabelWidget* PerformanceData_LabelTopGlassTemperatureMeasured;
leLabelWidget* PerformanceData_LabelWattageCalculated;
leWidget* PerformanceData_PanelWidget0;
leLabelWidget* PerformanceData_LabelDualPerData;
leButtonWidget* PerformanceData_ButtonBack;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_PerformanceData(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_PerformanceData(void)
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

    PerformanceData_Layer0_FillPanel = leWidget_New();
    PerformanceData_Layer0_FillPanel->fn->setPosition(PerformanceData_Layer0_FillPanel, 0, 0);
    PerformanceData_Layer0_FillPanel->fn->setSize(PerformanceData_Layer0_FillPanel, 480, 272);
    PerformanceData_Layer0_FillPanel->fn->setScheme(PerformanceData_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)PerformanceData_Layer0_FillPanel);

    PerformanceData_PerformaceDataIcon = leImageWidget_New();
    PerformanceData_PerformaceDataIcon->fn->setPosition(PerformanceData_PerformaceDataIcon, 5, 5);
    PerformanceData_PerformaceDataIcon->fn->setSize(PerformanceData_PerformaceDataIcon, 40, 40);
    PerformanceData_PerformaceDataIcon->fn->setScheme(PerformanceData_PerformaceDataIcon, &BackgroundScheme);
    PerformanceData_PerformaceDataIcon->fn->setBackgroundType(PerformanceData_PerformaceDataIcon, LE_WIDGET_BACKGROUND_NONE);
    PerformanceData_PerformaceDataIcon->fn->setBorderType(PerformanceData_PerformaceDataIcon, LE_WIDGET_BORDER_NONE);
    PerformanceData_PerformaceDataIcon->fn->setImage(PerformanceData_PerformaceDataIcon, (leImage*)&gear);
    PerformanceData_Layer0_FillPanel->fn->addChild(PerformanceData_Layer0_FillPanel, (leWidget*)PerformanceData_PerformaceDataIcon);

    PerformanceData_LabelOperationalData = leLabelWidget_New();
    PerformanceData_LabelOperationalData->fn->setPosition(PerformanceData_LabelOperationalData, 50, 15);
    PerformanceData_LabelOperationalData->fn->setSize(PerformanceData_LabelOperationalData, 225, 25);
    PerformanceData_LabelOperationalData->fn->setScheme(PerformanceData_LabelOperationalData, &BackgroundScheme);
    PerformanceData_LabelOperationalData->fn->setBackgroundType(PerformanceData_LabelOperationalData, LE_WIDGET_BACKGROUND_NONE);
    PerformanceData_LabelOperationalData->fn->setString(PerformanceData_LabelOperationalData, (leString*)&string_PerformanceDataView);
    PerformanceData_Layer0_FillPanel->fn->addChild(PerformanceData_Layer0_FillPanel, (leWidget*)PerformanceData_LabelOperationalData);

    PerformanceData_LabelVoltageMeasured = leLabelWidget_New();
    PerformanceData_LabelVoltageMeasured->fn->setPosition(PerformanceData_LabelVoltageMeasured, 40, 90);
    PerformanceData_LabelVoltageMeasured->fn->setSize(PerformanceData_LabelVoltageMeasured, 380, 30);
    PerformanceData_LabelVoltageMeasured->fn->setScheme(PerformanceData_LabelVoltageMeasured, &BackgroundScheme);
    PerformanceData_LabelVoltageMeasured->fn->setBackgroundType(PerformanceData_LabelVoltageMeasured, LE_WIDGET_BACKGROUND_NONE);
    PerformanceData_LabelVoltageMeasured->fn->setString(PerformanceData_LabelVoltageMeasured, (leString*)&string_LineVoltage);
    PerformanceData_Layer0_FillPanel->fn->addChild(PerformanceData_Layer0_FillPanel, (leWidget*)PerformanceData_LabelVoltageMeasured);

    PerformanceData_LabelFrequencyZeroCross = leLabelWidget_New();
    PerformanceData_LabelFrequencyZeroCross->fn->setPosition(PerformanceData_LabelFrequencyZeroCross, 40, 140);
    PerformanceData_LabelFrequencyZeroCross->fn->setSize(PerformanceData_LabelFrequencyZeroCross, 380, 30);
    PerformanceData_LabelFrequencyZeroCross->fn->setScheme(PerformanceData_LabelFrequencyZeroCross, &BackgroundScheme);
    PerformanceData_LabelFrequencyZeroCross->fn->setBackgroundType(PerformanceData_LabelFrequencyZeroCross, LE_WIDGET_BACKGROUND_NONE);
    PerformanceData_LabelFrequencyZeroCross->fn->setString(PerformanceData_LabelFrequencyZeroCross, (leString*)&string_LineFrequency);
    PerformanceData_Layer0_FillPanel->fn->addChild(PerformanceData_Layer0_FillPanel, (leWidget*)PerformanceData_LabelFrequencyZeroCross);

    PerformanceData_LabelTopGlassTemperatureMeasured = leLabelWidget_New();
    PerformanceData_LabelTopGlassTemperatureMeasured->fn->setPosition(PerformanceData_LabelTopGlassTemperatureMeasured, 40, 180);
    PerformanceData_LabelTopGlassTemperatureMeasured->fn->setSize(PerformanceData_LabelTopGlassTemperatureMeasured, 380, 30);
    PerformanceData_LabelTopGlassTemperatureMeasured->fn->setScheme(PerformanceData_LabelTopGlassTemperatureMeasured, &BackgroundScheme);
    PerformanceData_LabelTopGlassTemperatureMeasured->fn->setBackgroundType(PerformanceData_LabelTopGlassTemperatureMeasured, LE_WIDGET_BACKGROUND_NONE);
    PerformanceData_LabelTopGlassTemperatureMeasured->fn->setString(PerformanceData_LabelTopGlassTemperatureMeasured, (leString*)&string_TopGlassTemperature);
    PerformanceData_Layer0_FillPanel->fn->addChild(PerformanceData_Layer0_FillPanel, (leWidget*)PerformanceData_LabelTopGlassTemperatureMeasured);

    PerformanceData_LabelWattageCalculated = leLabelWidget_New();
    PerformanceData_LabelWattageCalculated->fn->setPosition(PerformanceData_LabelWattageCalculated, 40, 220);
    PerformanceData_LabelWattageCalculated->fn->setSize(PerformanceData_LabelWattageCalculated, 380, 30);
    PerformanceData_LabelWattageCalculated->fn->setScheme(PerformanceData_LabelWattageCalculated, &BackgroundScheme);
    PerformanceData_LabelWattageCalculated->fn->setBackgroundType(PerformanceData_LabelWattageCalculated, LE_WIDGET_BACKGROUND_NONE);
    PerformanceData_LabelWattageCalculated->fn->setString(PerformanceData_LabelWattageCalculated, (leString*)&string_WattageCalculated);
    PerformanceData_Layer0_FillPanel->fn->addChild(PerformanceData_Layer0_FillPanel, (leWidget*)PerformanceData_LabelWattageCalculated);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    PerformanceData_PanelWidget0 = leWidget_New();
    PerformanceData_PanelWidget0->fn->setPosition(PerformanceData_PanelWidget0, 405, 2);
    PerformanceData_PanelWidget0->fn->setSize(PerformanceData_PanelWidget0, 74, 66);
    PerformanceData_PanelWidget0->fn->setScheme(PerformanceData_PanelWidget0, &BackgroundScheme);
    root1->fn->addChild(root1, (leWidget*)PerformanceData_PanelWidget0);

    PerformanceData_ButtonBack = leButtonWidget_New();
    PerformanceData_ButtonBack->fn->setPosition(PerformanceData_ButtonBack, 15, 1);
    PerformanceData_ButtonBack->fn->setSize(PerformanceData_ButtonBack, 60, 60);
    PerformanceData_ButtonBack->fn->setScheme(PerformanceData_ButtonBack, &BackgroundScheme);
    PerformanceData_ButtonBack->fn->setBorderType(PerformanceData_ButtonBack, LE_WIDGET_BORDER_NONE);
    PerformanceData_ButtonBack->fn->setPressedImage(PerformanceData_ButtonBack, (leImage*)&ICON_goBackActive);
    PerformanceData_ButtonBack->fn->setReleasedImage(PerformanceData_ButtonBack, (leImage*)&ICON_goBackInactive);
    PerformanceData_ButtonBack->fn->setReleasedEventCallback(PerformanceData_ButtonBack, event_PerformanceData_ButtonBack_OnReleased);
    PerformanceData_PanelWidget0->fn->addChild(PerformanceData_PanelWidget0, (leWidget*)PerformanceData_ButtonBack);

    PerformanceData_LabelDualPerData = leLabelWidget_New();
    PerformanceData_LabelDualPerData->fn->setPosition(PerformanceData_LabelDualPerData, 200, 50);
    PerformanceData_LabelDualPerData->fn->setSize(PerformanceData_LabelDualPerData, 197, 30);
    PerformanceData_LabelDualPerData->fn->setVisible(PerformanceData_LabelDualPerData, LE_FALSE);
    PerformanceData_LabelDualPerData->fn->setScheme(PerformanceData_LabelDualPerData, &BackgroundScheme);
    PerformanceData_LabelDualPerData->fn->setBackgroundType(PerformanceData_LabelDualPerData, LE_WIDGET_BACKGROUND_NONE);
    PerformanceData_LabelDualPerData->fn->setString(PerformanceData_LabelDualPerData, (leString*)&string_dualPerData);
    root1->fn->addChild(root1, (leWidget*)PerformanceData_LabelDualPerData);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    PerformanceData_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_PerformanceData(void)
{
}

void screenHide_PerformanceData(void)
{
    PerformanceData_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    PerformanceData_Layer0_FillPanel = NULL;
    PerformanceData_PerformaceDataIcon = NULL;
    PerformanceData_LabelOperationalData = NULL;
    PerformanceData_LabelVoltageMeasured = NULL;
    PerformanceData_LabelFrequencyZeroCross = NULL;
    PerformanceData_LabelTopGlassTemperatureMeasured = NULL;
    PerformanceData_LabelWattageCalculated = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    PerformanceData_PanelWidget0 = NULL;
    PerformanceData_LabelDualPerData = NULL;
    PerformanceData_ButtonBack = NULL;


    showing = LE_FALSE;
}

void screenDestroy_PerformanceData(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_PerformanceData(uint32_t lyrIdx)
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

