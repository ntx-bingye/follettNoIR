#include "gfx/legato/generated/screen/le_gen_screen_PerformanceStatus.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* PerformanceStatus_PanelWidget0;
leLabelWidget* PerformanceStatus_LabelOperationalData;
leLabelWidget* PerformanceStatus_LabelVoltageMeasured;
leLabelWidget* PerformanceStatus_LabelFrequencyZeroCross;
leLabelWidget* PerformanceStatus_LabelTopGlassTemperatureMeasured;
leLabelWidget* PerformanceStatus_LabelWattageCalculated;
leTextFieldWidget* PerformanceStatus_TextFieldLineVoltageMeasured;
leTextFieldWidget* PerformanceStatus_TextFieldLineFrequencyZeroCross;
leTextFieldWidget* PerformanceStatus_TextFieldTopGlassTemperatureMeasured;
leTextFieldWidget* PerformanceStatus_TextFieldWattageCalculated;
leButtonWidget* PerformanceStatus_ButtonExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_PerformanceStatus(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_PerformanceStatus(void)
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

    PerformanceStatus_PanelWidget0 = leWidget_New();
    PerformanceStatus_PanelWidget0->fn->setPosition(PerformanceStatus_PanelWidget0, 0, 0);
    PerformanceStatus_PanelWidget0->fn->setSize(PerformanceStatus_PanelWidget0, 480, 272);
    PerformanceStatus_PanelWidget0->fn->setScheme(PerformanceStatus_PanelWidget0, &ForegroundScheme);
    root0->fn->addChild(root0, (leWidget*)PerformanceStatus_PanelWidget0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    PerformanceStatus_LabelOperationalData = leLabelWidget_New();
    PerformanceStatus_LabelOperationalData->fn->setPosition(PerformanceStatus_LabelOperationalData, 31, 29);
    PerformanceStatus_LabelOperationalData->fn->setSize(PerformanceStatus_LabelOperationalData, 157, 25);
    PerformanceStatus_LabelOperationalData->fn->setScheme(PerformanceStatus_LabelOperationalData, &BackgroundScheme);
    PerformanceStatus_LabelOperationalData->fn->setBackgroundType(PerformanceStatus_LabelOperationalData, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_LabelOperationalData->fn->setString(PerformanceStatus_LabelOperationalData, (leString*)&string_PerformanceDataView);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_LabelOperationalData);

    PerformanceStatus_LabelVoltageMeasured = leLabelWidget_New();
    PerformanceStatus_LabelVoltageMeasured->fn->setPosition(PerformanceStatus_LabelVoltageMeasured, 60, 52);
    PerformanceStatus_LabelVoltageMeasured->fn->setSize(PerformanceStatus_LabelVoltageMeasured, 140, 25);
    PerformanceStatus_LabelVoltageMeasured->fn->setScheme(PerformanceStatus_LabelVoltageMeasured, &BackgroundScheme);
    PerformanceStatus_LabelVoltageMeasured->fn->setBackgroundType(PerformanceStatus_LabelVoltageMeasured, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_LabelVoltageMeasured->fn->setString(PerformanceStatus_LabelVoltageMeasured, (leString*)&string_LineVoltage);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_LabelVoltageMeasured);

    PerformanceStatus_LabelFrequencyZeroCross = leLabelWidget_New();
    PerformanceStatus_LabelFrequencyZeroCross->fn->setPosition(PerformanceStatus_LabelFrequencyZeroCross, 60, 78);
    PerformanceStatus_LabelFrequencyZeroCross->fn->setSize(PerformanceStatus_LabelFrequencyZeroCross, 140, 25);
    PerformanceStatus_LabelFrequencyZeroCross->fn->setScheme(PerformanceStatus_LabelFrequencyZeroCross, &BackgroundScheme);
    PerformanceStatus_LabelFrequencyZeroCross->fn->setBackgroundType(PerformanceStatus_LabelFrequencyZeroCross, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_LabelFrequencyZeroCross->fn->setString(PerformanceStatus_LabelFrequencyZeroCross, (leString*)&string_LineFrequency);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_LabelFrequencyZeroCross);

    PerformanceStatus_LabelTopGlassTemperatureMeasured = leLabelWidget_New();
    PerformanceStatus_LabelTopGlassTemperatureMeasured->fn->setPosition(PerformanceStatus_LabelTopGlassTemperatureMeasured, 60, 104);
    PerformanceStatus_LabelTopGlassTemperatureMeasured->fn->setSize(PerformanceStatus_LabelTopGlassTemperatureMeasured, 140, 25);
    PerformanceStatus_LabelTopGlassTemperatureMeasured->fn->setScheme(PerformanceStatus_LabelTopGlassTemperatureMeasured, &BackgroundScheme);
    PerformanceStatus_LabelTopGlassTemperatureMeasured->fn->setBackgroundType(PerformanceStatus_LabelTopGlassTemperatureMeasured, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_LabelTopGlassTemperatureMeasured->fn->setString(PerformanceStatus_LabelTopGlassTemperatureMeasured, (leString*)&string_TopGlassTemperature);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_LabelTopGlassTemperatureMeasured);

    PerformanceStatus_LabelWattageCalculated = leLabelWidget_New();
    PerformanceStatus_LabelWattageCalculated->fn->setPosition(PerformanceStatus_LabelWattageCalculated, 60, 130);
    PerformanceStatus_LabelWattageCalculated->fn->setSize(PerformanceStatus_LabelWattageCalculated, 140, 25);
    PerformanceStatus_LabelWattageCalculated->fn->setScheme(PerformanceStatus_LabelWattageCalculated, &BackgroundScheme);
    PerformanceStatus_LabelWattageCalculated->fn->setBackgroundType(PerformanceStatus_LabelWattageCalculated, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_LabelWattageCalculated->fn->setString(PerformanceStatus_LabelWattageCalculated, (leString*)&string_WattageCalculated);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_LabelWattageCalculated);

    PerformanceStatus_TextFieldLineVoltageMeasured = leTextFieldWidget_New();
    PerformanceStatus_TextFieldLineVoltageMeasured->fn->setPosition(PerformanceStatus_TextFieldLineVoltageMeasured, 210, 52);
    PerformanceStatus_TextFieldLineVoltageMeasured->fn->setScheme(PerformanceStatus_TextFieldLineVoltageMeasured, &BackgroundScheme);
    PerformanceStatus_TextFieldLineVoltageMeasured->fn->setBackgroundType(PerformanceStatus_TextFieldLineVoltageMeasured, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_TextFieldLineVoltageMeasured->fn->setBorderType(PerformanceStatus_TextFieldLineVoltageMeasured, LE_WIDGET_BORDER_NONE);
    PerformanceStatus_TextFieldLineVoltageMeasured->fn->setHAlignment(PerformanceStatus_TextFieldLineVoltageMeasured, LE_HALIGN_LEFT);
    PerformanceStatus_TextFieldLineVoltageMeasured->fn->setString(PerformanceStatus_TextFieldLineVoltageMeasured, (leString*)&string_LineVolts240);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_TextFieldLineVoltageMeasured);

    PerformanceStatus_TextFieldLineFrequencyZeroCross = leTextFieldWidget_New();
    PerformanceStatus_TextFieldLineFrequencyZeroCross->fn->setPosition(PerformanceStatus_TextFieldLineFrequencyZeroCross, 210, 78);
    PerformanceStatus_TextFieldLineFrequencyZeroCross->fn->setScheme(PerformanceStatus_TextFieldLineFrequencyZeroCross, &BackgroundScheme);
    PerformanceStatus_TextFieldLineFrequencyZeroCross->fn->setBackgroundType(PerformanceStatus_TextFieldLineFrequencyZeroCross, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_TextFieldLineFrequencyZeroCross->fn->setBorderType(PerformanceStatus_TextFieldLineFrequencyZeroCross, LE_WIDGET_BORDER_NONE);
    PerformanceStatus_TextFieldLineFrequencyZeroCross->fn->setHAlignment(PerformanceStatus_TextFieldLineFrequencyZeroCross, LE_HALIGN_LEFT);
    PerformanceStatus_TextFieldLineFrequencyZeroCross->fn->setString(PerformanceStatus_TextFieldLineFrequencyZeroCross, (leString*)&string_LineFrequency60Hz);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_TextFieldLineFrequencyZeroCross);

    PerformanceStatus_TextFieldTopGlassTemperatureMeasured = leTextFieldWidget_New();
    PerformanceStatus_TextFieldTopGlassTemperatureMeasured->fn->setPosition(PerformanceStatus_TextFieldTopGlassTemperatureMeasured, 211, 104);
    PerformanceStatus_TextFieldTopGlassTemperatureMeasured->fn->setScheme(PerformanceStatus_TextFieldTopGlassTemperatureMeasured, &BackgroundScheme);
    PerformanceStatus_TextFieldTopGlassTemperatureMeasured->fn->setBackgroundType(PerformanceStatus_TextFieldTopGlassTemperatureMeasured, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_TextFieldTopGlassTemperatureMeasured->fn->setBorderType(PerformanceStatus_TextFieldTopGlassTemperatureMeasured, LE_WIDGET_BORDER_NONE);
    PerformanceStatus_TextFieldTopGlassTemperatureMeasured->fn->setHAlignment(PerformanceStatus_TextFieldTopGlassTemperatureMeasured, LE_HALIGN_LEFT);
    PerformanceStatus_TextFieldTopGlassTemperatureMeasured->fn->setString(PerformanceStatus_TextFieldTopGlassTemperatureMeasured, (leString*)&string_TopGlassTemperature80F);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_TextFieldTopGlassTemperatureMeasured);

    PerformanceStatus_TextFieldWattageCalculated = leTextFieldWidget_New();
    PerformanceStatus_TextFieldWattageCalculated->fn->setPosition(PerformanceStatus_TextFieldWattageCalculated, 210, 130);
    PerformanceStatus_TextFieldWattageCalculated->fn->setScheme(PerformanceStatus_TextFieldWattageCalculated, &BackgroundScheme);
    PerformanceStatus_TextFieldWattageCalculated->fn->setBackgroundType(PerformanceStatus_TextFieldWattageCalculated, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_TextFieldWattageCalculated->fn->setBorderType(PerformanceStatus_TextFieldWattageCalculated, LE_WIDGET_BORDER_NONE);
    PerformanceStatus_TextFieldWattageCalculated->fn->setHAlignment(PerformanceStatus_TextFieldWattageCalculated, LE_HALIGN_LEFT);
    PerformanceStatus_TextFieldWattageCalculated->fn->setString(PerformanceStatus_TextFieldWattageCalculated, (leString*)&string_WattageMeasured2200);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_TextFieldWattageCalculated);

    PerformanceStatus_ButtonExit = leButtonWidget_New();
    PerformanceStatus_ButtonExit->fn->setPosition(PerformanceStatus_ButtonExit, 431, 4);
    PerformanceStatus_ButtonExit->fn->setSize(PerformanceStatus_ButtonExit, 45, 45);
    PerformanceStatus_ButtonExit->fn->setScheme(PerformanceStatus_ButtonExit, &ForegroundScheme);
    PerformanceStatus_ButtonExit->fn->setBackgroundType(PerformanceStatus_ButtonExit, LE_WIDGET_BACKGROUND_NONE);
    PerformanceStatus_ButtonExit->fn->setBorderType(PerformanceStatus_ButtonExit, LE_WIDGET_BORDER_NONE);
    PerformanceStatus_ButtonExit->fn->setPressedImage(PerformanceStatus_ButtonExit, (leImage*)&ICON_goBackActive);
    PerformanceStatus_ButtonExit->fn->setReleasedImage(PerformanceStatus_ButtonExit, (leImage*)&ICON_goBackInactive);
    PerformanceStatus_ButtonExit->fn->setPressedEventCallback(PerformanceStatus_ButtonExit, event_PerformanceStatus_ButtonExit_OnPressed);
    PerformanceStatus_ButtonExit->fn->setReleasedEventCallback(PerformanceStatus_ButtonExit, event_PerformanceStatus_ButtonExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)PerformanceStatus_ButtonExit);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_PerformanceStatus(void)
{
}

void screenHide_PerformanceStatus(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    PerformanceStatus_PanelWidget0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    PerformanceStatus_LabelOperationalData = NULL;
    PerformanceStatus_LabelVoltageMeasured = NULL;
    PerformanceStatus_LabelFrequencyZeroCross = NULL;
    PerformanceStatus_LabelTopGlassTemperatureMeasured = NULL;
    PerformanceStatus_LabelWattageCalculated = NULL;
    PerformanceStatus_TextFieldLineVoltageMeasured = NULL;
    PerformanceStatus_TextFieldLineFrequencyZeroCross = NULL;
    PerformanceStatus_TextFieldTopGlassTemperatureMeasured = NULL;
    PerformanceStatus_TextFieldWattageCalculated = NULL;
    PerformanceStatus_ButtonExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_PerformanceStatus(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_PerformanceStatus(uint32_t lyrIdx)
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

