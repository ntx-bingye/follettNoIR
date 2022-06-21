#include "gfx/legato/generated/screen/le_gen_screen_ServiceAgentSettingsLimitMaximumCurrent.h"

// screen member widget declarations
leWidget* root0;

leWidget* ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel;
leImageWidget* ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon;
leLabelWidget* ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel;
leLabelWidget* ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent;
leLabelWidget* ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog;
leButtonWidget* ServiceAgentSettingsLimitMaximumCurrent_ButtonReset;
leButtonWidget* ServiceAgentSettingsLimitMaximumCurrent_ButtonBack;
leCheckBoxWidget* ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ServiceAgentSettingsLimitMaximumCurrent(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ServiceAgentSettingsLimitMaximumCurrent(void)
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

    ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel = leWidget_New();
    ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel->fn->setPosition(ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel, 0, 0);
    ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel->fn->setSize(ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel, 480, 272);
    ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel->fn->setScheme(ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel);

    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon = leImageWidget_New();
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon->fn->setPosition(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon, 5, 5);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon->fn->setSize(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon, 40, 40);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon->fn->setScheme(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon, &BackgroundScheme);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon->fn->setBackgroundType(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon->fn->setBorderType(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon, LE_WIDGET_BORDER_NONE);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon->fn->setImage(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon, (leImage*)&gear);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon);

    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel = leLabelWidget_New();
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel->fn->setPosition(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel, 46, 15);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel->fn->setSize(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel, 200, 25);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel->fn->setScheme(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel, &BackgroundScheme);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel->fn->setBackgroundType(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel->fn->setString(ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel, (leString*)&string_OtherSettings);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel);

    ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent = leLabelWidget_New();
    ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent->fn->setPosition(ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent, 45, 90);
    ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent->fn->setSize(ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent, 239, 25);
    ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent->fn->setScheme(ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent, &ForegroundScheme);
    ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent->fn->setBackgroundType(ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent->fn->setHAlignment(ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent, LE_HALIGN_CENTER);
    ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent->fn->setString(ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent, (leString*)&string_CurrentLimitMaximum);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent);

    ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog = leLabelWidget_New();
    ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog->fn->setPosition(ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog, 45, 145);
    ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog->fn->setSize(ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog, 161, 25);
    ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog->fn->setScheme(ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog, &ForegroundScheme);
    ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog->fn->setBackgroundType(ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog->fn->setHAlignment(ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog, LE_HALIGN_CENTER);
    ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog->fn->setString(ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog, (leString*)&string_ErrorLogReset);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog);

    ServiceAgentSettingsLimitMaximumCurrent_ButtonReset = leButtonWidget_New();
    ServiceAgentSettingsLimitMaximumCurrent_ButtonReset->fn->setPosition(ServiceAgentSettingsLimitMaximumCurrent_ButtonReset, 310, 145);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonReset->fn->setSize(ServiceAgentSettingsLimitMaximumCurrent_ButtonReset, 120, 40);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonReset->fn->setScheme(ServiceAgentSettingsLimitMaximumCurrent_ButtonReset, &ButtonScheme);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonReset->fn->setString(ServiceAgentSettingsLimitMaximumCurrent_ButtonReset, (leString*)&string_Reset);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonReset->fn->setPressedEventCallback(ServiceAgentSettingsLimitMaximumCurrent_ButtonReset, event_ServiceAgentSettingsLimitMaximumCurrent_ButtonReset_OnPressed);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonReset->fn->setReleasedEventCallback(ServiceAgentSettingsLimitMaximumCurrent_ButtonReset, event_ServiceAgentSettingsLimitMaximumCurrent_ButtonReset_OnReleased);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaximumCurrent_ButtonReset);

    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack = leButtonWidget_New();
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack->fn->setPosition(ServiceAgentSettingsLimitMaximumCurrent_ButtonBack, 431, 7);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack->fn->setSize(ServiceAgentSettingsLimitMaximumCurrent_ButtonBack, 45, 35);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack->fn->setScheme(ServiceAgentSettingsLimitMaximumCurrent_ButtonBack, &BackgroundScheme);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack->fn->setBorderType(ServiceAgentSettingsLimitMaximumCurrent_ButtonBack, LE_WIDGET_BORDER_NONE);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack->fn->setPressedImage(ServiceAgentSettingsLimitMaximumCurrent_ButtonBack, (leImage*)&ICON_goBackActive);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack->fn->setReleasedImage(ServiceAgentSettingsLimitMaximumCurrent_ButtonBack, (leImage*)&ICON_goBackInactive);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack->fn->setImagePosition(ServiceAgentSettingsLimitMaximumCurrent_ButtonBack, LE_RELATIVE_POSITION_BEHIND);
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack->fn->setReleasedEventCallback(ServiceAgentSettingsLimitMaximumCurrent_ButtonBack, event_ServiceAgentSettingsLimitMaximumCurrent_ButtonBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaximumCurrent_ButtonBack);

    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit = leCheckBoxWidget_New();
    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit->fn->setPosition(ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit, 310, 82);
    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit->fn->setSize(ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit, 120, 40);
    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit->fn->setScheme(ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit, &BackgroundScheme);
    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit->fn->setBorderType(ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit, LE_WIDGET_BORDER_BEVEL);
    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit->fn->setHAlignment(ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit, LE_HALIGN_CENTER);
    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit->fn->setCheckedEventCallback(ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit, event_ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit_OnChecked);
    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit->fn->setUncheckedEventCallback(ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit, event_ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit_OnUnchecked);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ServiceAgentSettingsLimitMaximumCurrent(void)
{
}

void screenHide_ServiceAgentSettingsLimitMaximumCurrent(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ServiceAgentSettingsLimitMaximumCurrent_Layer0_FillPanel = NULL;
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenIcon = NULL;
    ServiceAgentSettingsLimitMaximumCurrent_CurrentScreenLabel = NULL;
    ServiceAgentSettingsLimitMaximumCurrent_LabelLimitMaximumCurrent = NULL;
    ServiceAgentSettingsLimitMaximumCurrent_ResetErrorLog = NULL;
    ServiceAgentSettingsLimitMaximumCurrent_ButtonReset = NULL;
    ServiceAgentSettingsLimitMaximumCurrent_ButtonBack = NULL;
    ServiceAgentSettingsLimitMaximumCurrent_CheckBoxCurrentLimit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ServiceAgentSettingsLimitMaximumCurrent(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ServiceAgentSettingsLimitMaximumCurrent(uint32_t lyrIdx)
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

