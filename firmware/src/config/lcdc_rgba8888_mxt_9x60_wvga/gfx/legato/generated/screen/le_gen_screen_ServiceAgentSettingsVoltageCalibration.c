#include "gfx/legato/generated/screen/le_gen_screen_ServiceAgentSettingsVoltageCalibration.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel;
leImageWidget* ServiceAgentSettingsVoltageCalibration_SettingsIcon;
leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration;
leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelActualVoltage;
leLabelWidget* ServiceAgentSettingsVoltageCalibration_ActialVoltageValue;
leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage;
leLabelWidget* ServiceAgentSettingsVoltageCalibration_LineVoltageValue;
leButtonWidget* ServiceAgentSettingsVoltageCalibration_ButtonExit;
leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue;
leLabelWidget* ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString;
leButtonWidget* ServiceAgentSettingsVoltageCalibration_ButtonPlus;
leButtonWidget* ServiceAgentSettingsVoltageCalibration_ButtonMinus;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ServiceAgentSettingsVoltageCalibration(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ServiceAgentSettingsVoltageCalibration(void)
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

    ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel = leWidget_New();
    ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel->fn->setPosition(ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel, 0, 0);
    ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel->fn->setSize(ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel, 480, 272);
    ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel->fn->setScheme(ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel);

    ServiceAgentSettingsVoltageCalibration_SettingsIcon = leImageWidget_New();
    ServiceAgentSettingsVoltageCalibration_SettingsIcon->fn->setPosition(ServiceAgentSettingsVoltageCalibration_SettingsIcon, 5, 5);
    ServiceAgentSettingsVoltageCalibration_SettingsIcon->fn->setSize(ServiceAgentSettingsVoltageCalibration_SettingsIcon, 40, 40);
    ServiceAgentSettingsVoltageCalibration_SettingsIcon->fn->setScheme(ServiceAgentSettingsVoltageCalibration_SettingsIcon, &BackgroundScheme);
    ServiceAgentSettingsVoltageCalibration_SettingsIcon->fn->setBackgroundType(ServiceAgentSettingsVoltageCalibration_SettingsIcon, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsVoltageCalibration_SettingsIcon->fn->setBorderType(ServiceAgentSettingsVoltageCalibration_SettingsIcon, LE_WIDGET_BORDER_NONE);
    ServiceAgentSettingsVoltageCalibration_SettingsIcon->fn->setImage(ServiceAgentSettingsVoltageCalibration_SettingsIcon, (leImage*)&gear);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsVoltageCalibration_SettingsIcon);

    ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration = leLabelWidget_New();
    ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration->fn->setPosition(ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration, 45, 15);
    ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration->fn->setSize(ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration, 200, 25);
    ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration->fn->setScheme(ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration, &ForegroundScheme);
    ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration->fn->setBackgroundType(ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration->fn->setString(ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration, (leString*)&string_LineVoltageCalibration);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration);

    ServiceAgentSettingsVoltageCalibration_LabelActualVoltage = leLabelWidget_New();
    ServiceAgentSettingsVoltageCalibration_LabelActualVoltage->fn->setPosition(ServiceAgentSettingsVoltageCalibration_LabelActualVoltage, 30, 65);
    ServiceAgentSettingsVoltageCalibration_LabelActualVoltage->fn->setSize(ServiceAgentSettingsVoltageCalibration_LabelActualVoltage, 230, 25);
    ServiceAgentSettingsVoltageCalibration_LabelActualVoltage->fn->setScheme(ServiceAgentSettingsVoltageCalibration_LabelActualVoltage, &ForegroundScheme);
    ServiceAgentSettingsVoltageCalibration_LabelActualVoltage->fn->setBackgroundType(ServiceAgentSettingsVoltageCalibration_LabelActualVoltage, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsVoltageCalibration_LabelActualVoltage->fn->setString(ServiceAgentSettingsVoltageCalibration_LabelActualVoltage, (leString*)&string_LineVoltageActual);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsVoltageCalibration_LabelActualVoltage);

    ServiceAgentSettingsVoltageCalibration_ActialVoltageValue = leLabelWidget_New();
    ServiceAgentSettingsVoltageCalibration_ActialVoltageValue->fn->setPosition(ServiceAgentSettingsVoltageCalibration_ActialVoltageValue, 270, 65);
    ServiceAgentSettingsVoltageCalibration_ActialVoltageValue->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ActialVoltageValue, &BackgroundScheme);
    ServiceAgentSettingsVoltageCalibration_ActialVoltageValue->fn->setBackgroundType(ServiceAgentSettingsVoltageCalibration_ActialVoltageValue, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsVoltageCalibration_ActialVoltageValue->fn->setString(ServiceAgentSettingsVoltageCalibration_ActialVoltageValue, (leString*)&string_LineVoltage240);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsVoltageCalibration_ActialVoltageValue);

    ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage = leLabelWidget_New();
    ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage->fn->setPosition(ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage, 30, 110);
    ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage->fn->setSize(ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage, 230, 25);
    ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage->fn->setScheme(ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage, &ForegroundScheme);
    ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage->fn->setBackgroundType(ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage->fn->setString(ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage, (leString*)&string_LineVoltageMeasured);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage);

    ServiceAgentSettingsVoltageCalibration_LineVoltageValue = leLabelWidget_New();
    ServiceAgentSettingsVoltageCalibration_LineVoltageValue->fn->setPosition(ServiceAgentSettingsVoltageCalibration_LineVoltageValue, 270, 111);
    ServiceAgentSettingsVoltageCalibration_LineVoltageValue->fn->setSize(ServiceAgentSettingsVoltageCalibration_LineVoltageValue, 61, 25);
    ServiceAgentSettingsVoltageCalibration_LineVoltageValue->fn->setScheme(ServiceAgentSettingsVoltageCalibration_LineVoltageValue, &BackgroundScheme);
    ServiceAgentSettingsVoltageCalibration_LineVoltageValue->fn->setBackgroundType(ServiceAgentSettingsVoltageCalibration_LineVoltageValue, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsVoltageCalibration_LineVoltageValue->fn->setString(ServiceAgentSettingsVoltageCalibration_LineVoltageValue, (leString*)&string_LineVoltage246);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsVoltageCalibration_LineVoltageValue);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ServiceAgentSettingsVoltageCalibration_ButtonExit = leButtonWidget_New();
    ServiceAgentSettingsVoltageCalibration_ButtonExit->fn->setPosition(ServiceAgentSettingsVoltageCalibration_ButtonExit, 431, 5);
    ServiceAgentSettingsVoltageCalibration_ButtonExit->fn->setSize(ServiceAgentSettingsVoltageCalibration_ButtonExit, 45, 45);
    ServiceAgentSettingsVoltageCalibration_ButtonExit->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonExit, &ForegroundScheme);
    ServiceAgentSettingsVoltageCalibration_ButtonExit->fn->setBorderType(ServiceAgentSettingsVoltageCalibration_ButtonExit, LE_WIDGET_BORDER_NONE);
    ServiceAgentSettingsVoltageCalibration_ButtonExit->fn->setPressedImage(ServiceAgentSettingsVoltageCalibration_ButtonExit, (leImage*)&ICON_goBackActive);
    ServiceAgentSettingsVoltageCalibration_ButtonExit->fn->setReleasedImage(ServiceAgentSettingsVoltageCalibration_ButtonExit, (leImage*)&ICON_goBackInactive);
    ServiceAgentSettingsVoltageCalibration_ButtonExit->fn->setReleasedEventCallback(ServiceAgentSettingsVoltageCalibration_ButtonExit, event_ServiceAgentSettingsVoltageCalibration_ButtonExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsVoltageCalibration_ButtonExit);

    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue = leLabelWidget_New();
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue->fn->setPosition(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue, 270, 156);
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue->fn->setSize(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue, 43, 35);
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue->fn->setScheme(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue, &BackgroundScheme);
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue->fn->setString(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue, (leString*)&string_SetOffset);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue);

    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString = leLabelWidget_New();
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString->fn->setPosition(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString, 30, 156);
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString->fn->setSize(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString, 192, 25);
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString->fn->setScheme(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString, &BackgroundScheme);
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString->fn->setString(ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString, (leString*)&string_SetOffsetString);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString);

    ServiceAgentSettingsVoltageCalibration_ButtonPlus = leButtonWidget_New();
    ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setPosition(ServiceAgentSettingsVoltageCalibration_ButtonPlus, 350, 156);
    ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setSize(ServiceAgentSettingsVoltageCalibration_ButtonPlus, 45, 40);
    ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonPlus, &BackgroundScheme);
    ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setBorderType(ServiceAgentSettingsVoltageCalibration_ButtonPlus, LE_WIDGET_BORDER_LINE);
    ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setString(ServiceAgentSettingsVoltageCalibration_ButtonPlus, (leString*)&string_Plus);
    ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setPressedEventCallback(ServiceAgentSettingsVoltageCalibration_ButtonPlus, event_ServiceAgentSettingsVoltageCalibration_ButtonPlus_OnPressed);
    ServiceAgentSettingsVoltageCalibration_ButtonPlus->fn->setReleasedEventCallback(ServiceAgentSettingsVoltageCalibration_ButtonPlus, event_ServiceAgentSettingsVoltageCalibration_ButtonPlus_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsVoltageCalibration_ButtonPlus);

    ServiceAgentSettingsVoltageCalibration_ButtonMinus = leButtonWidget_New();
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setPosition(ServiceAgentSettingsVoltageCalibration_ButtonMinus, 420, 156);
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setSize(ServiceAgentSettingsVoltageCalibration_ButtonMinus, 45, 40);
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setScheme(ServiceAgentSettingsVoltageCalibration_ButtonMinus, &BackgroundScheme);
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setBorderType(ServiceAgentSettingsVoltageCalibration_ButtonMinus, LE_WIDGET_BORDER_LINE);
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setString(ServiceAgentSettingsVoltageCalibration_ButtonMinus, (leString*)&string_Minus);
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setPressedEventCallback(ServiceAgentSettingsVoltageCalibration_ButtonMinus, event_ServiceAgentSettingsVoltageCalibration_ButtonMinus_OnPressed);
    ServiceAgentSettingsVoltageCalibration_ButtonMinus->fn->setReleasedEventCallback(ServiceAgentSettingsVoltageCalibration_ButtonMinus, event_ServiceAgentSettingsVoltageCalibration_ButtonMinus_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsVoltageCalibration_ButtonMinus);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    ServiceAgentSettingsVoltageCalibration_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ServiceAgentSettingsVoltageCalibration(void)
{
}

void screenHide_ServiceAgentSettingsVoltageCalibration(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ServiceAgentSettingsVoltageCalibration_Layer0_FillPanel = NULL;
    ServiceAgentSettingsVoltageCalibration_SettingsIcon = NULL;
    ServiceAgentSettingsVoltageCalibration_LabelLineVoltageCalibration = NULL;
    ServiceAgentSettingsVoltageCalibration_LabelActualVoltage = NULL;
    ServiceAgentSettingsVoltageCalibration_ActialVoltageValue = NULL;
    ServiceAgentSettingsVoltageCalibration_LabelMeasuredVoltage = NULL;
    ServiceAgentSettingsVoltageCalibration_LineVoltageValue = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ServiceAgentSettingsVoltageCalibration_ButtonExit = NULL;
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageValue = NULL;
    ServiceAgentSettingsVoltageCalibration_LabelSetOffsetVoltageString = NULL;
    ServiceAgentSettingsVoltageCalibration_ButtonPlus = NULL;
    ServiceAgentSettingsVoltageCalibration_ButtonMinus = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ServiceAgentSettingsVoltageCalibration(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ServiceAgentSettingsVoltageCalibration(uint32_t lyrIdx)
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

