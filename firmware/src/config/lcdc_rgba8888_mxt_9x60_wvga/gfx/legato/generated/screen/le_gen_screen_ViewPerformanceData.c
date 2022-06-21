#include "gfx/legato/generated/screen/le_gen_screen_ViewPerformanceData.h"

// screen member widget declarations
leWidget* root0;

leWidget* ViewPerformanceData_Layer0_FillPanel;
leLabelWidget* ViewPerformanceData_LabelOperationalData;
leLabelWidget* ViewPerformanceData_LabelVoltageMeasured;
leLabelWidget* ViewPerformanceData_LabelFrequencyZeroCross;
leLabelWidget* ViewPerformanceData_LabelTopGlassTemperatureMeasured;
leLabelWidget* ViewPerformanceData_LabelWattageCalculated;
leTextFieldWidget* ViewPerformanceData_TextFieldLineVoltageMeasured;
leTextFieldWidget* ViewPerformanceData_TextFieldLineFrequencyZeroCross;
leTextFieldWidget* ViewPerformanceData_TextFieldTopGlassTemperatureMeasured;
leTextFieldWidget* ViewPerformanceData_TextFieldWattageCalculated;
leButtonWidget* ViewPerformanceData_ButtonBack;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ViewPerformanceData(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ViewPerformanceData(void)
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

    ViewPerformanceData_Layer0_FillPanel = leWidget_New();
    ViewPerformanceData_Layer0_FillPanel->fn->setPosition(ViewPerformanceData_Layer0_FillPanel, 0, 0);
    ViewPerformanceData_Layer0_FillPanel->fn->setSize(ViewPerformanceData_Layer0_FillPanel, 480, 272);
    ViewPerformanceData_Layer0_FillPanel->fn->setScheme(ViewPerformanceData_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_Layer0_FillPanel);

    ViewPerformanceData_LabelOperationalData = leLabelWidget_New();
    ViewPerformanceData_LabelOperationalData->fn->setPosition(ViewPerformanceData_LabelOperationalData, 16, 16);
    ViewPerformanceData_LabelOperationalData->fn->setSize(ViewPerformanceData_LabelOperationalData, 225, 25);
    ViewPerformanceData_LabelOperationalData->fn->setScheme(ViewPerformanceData_LabelOperationalData, &BackgroundScheme);
    ViewPerformanceData_LabelOperationalData->fn->setBackgroundType(ViewPerformanceData_LabelOperationalData, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_LabelOperationalData->fn->setString(ViewPerformanceData_LabelOperationalData, (leString*)&string_PerformanceDataView);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_LabelOperationalData);

    ViewPerformanceData_LabelVoltageMeasured = leLabelWidget_New();
    ViewPerformanceData_LabelVoltageMeasured->fn->setPosition(ViewPerformanceData_LabelVoltageMeasured, 60, 52);
    ViewPerformanceData_LabelVoltageMeasured->fn->setSize(ViewPerformanceData_LabelVoltageMeasured, 140, 25);
    ViewPerformanceData_LabelVoltageMeasured->fn->setScheme(ViewPerformanceData_LabelVoltageMeasured, &BackgroundScheme);
    ViewPerformanceData_LabelVoltageMeasured->fn->setBackgroundType(ViewPerformanceData_LabelVoltageMeasured, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_LabelVoltageMeasured->fn->setString(ViewPerformanceData_LabelVoltageMeasured, (leString*)&string_LineVoltage);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_LabelVoltageMeasured);

    ViewPerformanceData_LabelFrequencyZeroCross = leLabelWidget_New();
    ViewPerformanceData_LabelFrequencyZeroCross->fn->setPosition(ViewPerformanceData_LabelFrequencyZeroCross, 60, 78);
    ViewPerformanceData_LabelFrequencyZeroCross->fn->setSize(ViewPerformanceData_LabelFrequencyZeroCross, 140, 25);
    ViewPerformanceData_LabelFrequencyZeroCross->fn->setScheme(ViewPerformanceData_LabelFrequencyZeroCross, &BackgroundScheme);
    ViewPerformanceData_LabelFrequencyZeroCross->fn->setBackgroundType(ViewPerformanceData_LabelFrequencyZeroCross, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_LabelFrequencyZeroCross->fn->setString(ViewPerformanceData_LabelFrequencyZeroCross, (leString*)&string_LineFrequency);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_LabelFrequencyZeroCross);

    ViewPerformanceData_LabelTopGlassTemperatureMeasured = leLabelWidget_New();
    ViewPerformanceData_LabelTopGlassTemperatureMeasured->fn->setPosition(ViewPerformanceData_LabelTopGlassTemperatureMeasured, 60, 104);
    ViewPerformanceData_LabelTopGlassTemperatureMeasured->fn->setSize(ViewPerformanceData_LabelTopGlassTemperatureMeasured, 140, 25);
    ViewPerformanceData_LabelTopGlassTemperatureMeasured->fn->setScheme(ViewPerformanceData_LabelTopGlassTemperatureMeasured, &BackgroundScheme);
    ViewPerformanceData_LabelTopGlassTemperatureMeasured->fn->setBackgroundType(ViewPerformanceData_LabelTopGlassTemperatureMeasured, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_LabelTopGlassTemperatureMeasured->fn->setString(ViewPerformanceData_LabelTopGlassTemperatureMeasured, (leString*)&string_TopGlassTemperature);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_LabelTopGlassTemperatureMeasured);

    ViewPerformanceData_LabelWattageCalculated = leLabelWidget_New();
    ViewPerformanceData_LabelWattageCalculated->fn->setPosition(ViewPerformanceData_LabelWattageCalculated, 60, 130);
    ViewPerformanceData_LabelWattageCalculated->fn->setSize(ViewPerformanceData_LabelWattageCalculated, 140, 25);
    ViewPerformanceData_LabelWattageCalculated->fn->setScheme(ViewPerformanceData_LabelWattageCalculated, &BackgroundScheme);
    ViewPerformanceData_LabelWattageCalculated->fn->setBackgroundType(ViewPerformanceData_LabelWattageCalculated, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_LabelWattageCalculated->fn->setString(ViewPerformanceData_LabelWattageCalculated, (leString*)&string_WattageCalculated);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_LabelWattageCalculated);

    ViewPerformanceData_TextFieldLineVoltageMeasured = leTextFieldWidget_New();
    ViewPerformanceData_TextFieldLineVoltageMeasured->fn->setPosition(ViewPerformanceData_TextFieldLineVoltageMeasured, 210, 52);
    ViewPerformanceData_TextFieldLineVoltageMeasured->fn->setScheme(ViewPerformanceData_TextFieldLineVoltageMeasured, &BackgroundScheme);
    ViewPerformanceData_TextFieldLineVoltageMeasured->fn->setBackgroundType(ViewPerformanceData_TextFieldLineVoltageMeasured, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_TextFieldLineVoltageMeasured->fn->setBorderType(ViewPerformanceData_TextFieldLineVoltageMeasured, LE_WIDGET_BORDER_NONE);
    ViewPerformanceData_TextFieldLineVoltageMeasured->fn->setHAlignment(ViewPerformanceData_TextFieldLineVoltageMeasured, LE_HALIGN_LEFT);
    ViewPerformanceData_TextFieldLineVoltageMeasured->fn->setString(ViewPerformanceData_TextFieldLineVoltageMeasured, (leString*)&string_LineVolts240);
    ViewPerformanceData_TextFieldLineVoltageMeasured->fn->setClearValueOnFirstEdit(ViewPerformanceData_TextFieldLineVoltageMeasured, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_TextFieldLineVoltageMeasured);

    ViewPerformanceData_TextFieldLineFrequencyZeroCross = leTextFieldWidget_New();
    ViewPerformanceData_TextFieldLineFrequencyZeroCross->fn->setPosition(ViewPerformanceData_TextFieldLineFrequencyZeroCross, 210, 78);
    ViewPerformanceData_TextFieldLineFrequencyZeroCross->fn->setScheme(ViewPerformanceData_TextFieldLineFrequencyZeroCross, &BackgroundScheme);
    ViewPerformanceData_TextFieldLineFrequencyZeroCross->fn->setBackgroundType(ViewPerformanceData_TextFieldLineFrequencyZeroCross, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_TextFieldLineFrequencyZeroCross->fn->setBorderType(ViewPerformanceData_TextFieldLineFrequencyZeroCross, LE_WIDGET_BORDER_NONE);
    ViewPerformanceData_TextFieldLineFrequencyZeroCross->fn->setHAlignment(ViewPerformanceData_TextFieldLineFrequencyZeroCross, LE_HALIGN_LEFT);
    ViewPerformanceData_TextFieldLineFrequencyZeroCross->fn->setString(ViewPerformanceData_TextFieldLineFrequencyZeroCross, (leString*)&string_LineFrequency60Hz);
    ViewPerformanceData_TextFieldLineFrequencyZeroCross->fn->setClearValueOnFirstEdit(ViewPerformanceData_TextFieldLineFrequencyZeroCross, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_TextFieldLineFrequencyZeroCross);

    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured = leTextFieldWidget_New();
    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured->fn->setPosition(ViewPerformanceData_TextFieldTopGlassTemperatureMeasured, 211, 104);
    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured->fn->setScheme(ViewPerformanceData_TextFieldTopGlassTemperatureMeasured, &BackgroundScheme);
    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured->fn->setBackgroundType(ViewPerformanceData_TextFieldTopGlassTemperatureMeasured, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured->fn->setBorderType(ViewPerformanceData_TextFieldTopGlassTemperatureMeasured, LE_WIDGET_BORDER_NONE);
    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured->fn->setHAlignment(ViewPerformanceData_TextFieldTopGlassTemperatureMeasured, LE_HALIGN_LEFT);
    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured->fn->setString(ViewPerformanceData_TextFieldTopGlassTemperatureMeasured, (leString*)&string_TopGlassTemperature80F);
    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured->fn->setClearValueOnFirstEdit(ViewPerformanceData_TextFieldTopGlassTemperatureMeasured, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_TextFieldTopGlassTemperatureMeasured);

    ViewPerformanceData_TextFieldWattageCalculated = leTextFieldWidget_New();
    ViewPerformanceData_TextFieldWattageCalculated->fn->setPosition(ViewPerformanceData_TextFieldWattageCalculated, 210, 130);
    ViewPerformanceData_TextFieldWattageCalculated->fn->setScheme(ViewPerformanceData_TextFieldWattageCalculated, &BackgroundScheme);
    ViewPerformanceData_TextFieldWattageCalculated->fn->setBackgroundType(ViewPerformanceData_TextFieldWattageCalculated, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_TextFieldWattageCalculated->fn->setBorderType(ViewPerformanceData_TextFieldWattageCalculated, LE_WIDGET_BORDER_NONE);
    ViewPerformanceData_TextFieldWattageCalculated->fn->setHAlignment(ViewPerformanceData_TextFieldWattageCalculated, LE_HALIGN_LEFT);
    ViewPerformanceData_TextFieldWattageCalculated->fn->setString(ViewPerformanceData_TextFieldWattageCalculated, (leString*)&string_WattageMeasured2200);
    ViewPerformanceData_TextFieldWattageCalculated->fn->setClearValueOnFirstEdit(ViewPerformanceData_TextFieldWattageCalculated, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_TextFieldWattageCalculated);

    ViewPerformanceData_ButtonBack = leButtonWidget_New();
    ViewPerformanceData_ButtonBack->fn->setPosition(ViewPerformanceData_ButtonBack, 431, 4);
    ViewPerformanceData_ButtonBack->fn->setSize(ViewPerformanceData_ButtonBack, 45, 45);
    ViewPerformanceData_ButtonBack->fn->setScheme(ViewPerformanceData_ButtonBack, &ForegroundScheme);
    ViewPerformanceData_ButtonBack->fn->setBackgroundType(ViewPerformanceData_ButtonBack, LE_WIDGET_BACKGROUND_NONE);
    ViewPerformanceData_ButtonBack->fn->setBorderType(ViewPerformanceData_ButtonBack, LE_WIDGET_BORDER_NONE);
    ViewPerformanceData_ButtonBack->fn->setPressedImage(ViewPerformanceData_ButtonBack, (leImage*)&ICON_goBackActive);
    ViewPerformanceData_ButtonBack->fn->setReleasedImage(ViewPerformanceData_ButtonBack, (leImage*)&ICON_goBackInactive);
    ViewPerformanceData_ButtonBack->fn->setPressedEventCallback(ViewPerformanceData_ButtonBack, event_ViewPerformanceData_ButtonBack_OnPressed);
    ViewPerformanceData_ButtonBack->fn->setReleasedEventCallback(ViewPerformanceData_ButtonBack, event_ViewPerformanceData_ButtonBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)ViewPerformanceData_ButtonBack);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ViewPerformanceData(void)
{
}

void screenHide_ViewPerformanceData(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ViewPerformanceData_Layer0_FillPanel = NULL;
    ViewPerformanceData_LabelOperationalData = NULL;
    ViewPerformanceData_LabelVoltageMeasured = NULL;
    ViewPerformanceData_LabelFrequencyZeroCross = NULL;
    ViewPerformanceData_LabelTopGlassTemperatureMeasured = NULL;
    ViewPerformanceData_LabelWattageCalculated = NULL;
    ViewPerformanceData_TextFieldLineVoltageMeasured = NULL;
    ViewPerformanceData_TextFieldLineFrequencyZeroCross = NULL;
    ViewPerformanceData_TextFieldTopGlassTemperatureMeasured = NULL;
    ViewPerformanceData_TextFieldWattageCalculated = NULL;
    ViewPerformanceData_ButtonBack = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ViewPerformanceData(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ViewPerformanceData(uint32_t lyrIdx)
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

