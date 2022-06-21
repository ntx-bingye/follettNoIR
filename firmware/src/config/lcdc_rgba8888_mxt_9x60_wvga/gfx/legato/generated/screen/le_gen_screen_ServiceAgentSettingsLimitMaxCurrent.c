#include "gfx/legato/generated/screen/le_gen_screen_ServiceAgentSettingsLimitMaxCurrent.h"
#include "app.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel;
leImageWidget* ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon;
leLabelWidget* ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel;
leLabelWidget* ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent;
leLabelWidget* ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog;
leButtonWidget* ServiceAgentSettingsLimitMaxCurrent_ButtonBack;
leButtonWidget* ServiceAgentSettingsLimitMaxCurrent_ButtonReset;
leButtonWidget* ServiceAgentSettingsLimitMaxCurrent_ButtonOn;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ServiceAgentSettingsLimitMaxCurrent(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ServiceAgentSettingsLimitMaxCurrent(void)
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

    ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel = leWidget_New();
    ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel->fn->setPosition(ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel, 0, 0);
    ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel->fn->setSize(ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel, 480, 272);
    ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel);

    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon = leImageWidget_New();
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon->fn->setPosition(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon, 5, 5);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon->fn->setSize(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon, 40, 40);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon, &BackgroundScheme);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon->fn->setBackgroundType(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon->fn->setBorderType(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon, LE_WIDGET_BORDER_NONE);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon->fn->setImage(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon, (leImage*)&gear);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon);

    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel = leLabelWidget_New();
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel->fn->setPosition(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel, 46, 15);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel->fn->setSize(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel, 200, 25);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel, &BackgroundScheme);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel->fn->setBackgroundType(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel->fn->setString(ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel, (leString*)&string_OtherSettings);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel);

    ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent = leLabelWidget_New();
    ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent->fn->setPosition(ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent, 45, 90);
    ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent->fn->setSize(ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent, 239, 25);
    ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent, &ForegroundScheme);
    ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent->fn->setBackgroundType(ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent->fn->setHAlignment(ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent, LE_HALIGN_CENTER);
    ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent->fn->setString(ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent, (leString*)&string_CurrentLimitMaximum);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent);

    ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog = leLabelWidget_New();
    ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog->fn->setPosition(ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog, 45, 145);
    ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog->fn->setSize(ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog, 161, 25);
    ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog, &ForegroundScheme);
    ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog->fn->setBackgroundType(ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog, LE_WIDGET_BACKGROUND_NONE);
    ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog->fn->setHAlignment(ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog, LE_HALIGN_CENTER);
    ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog->fn->setString(ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog, (leString*)&string_ErrorLogReset);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog);

    ServiceAgentSettingsLimitMaxCurrent_ButtonBack = leButtonWidget_New();
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack->fn->setPosition(ServiceAgentSettingsLimitMaxCurrent_ButtonBack, 431, 7);
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack->fn->setSize(ServiceAgentSettingsLimitMaxCurrent_ButtonBack, 45, 35);
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonBack, &BackgroundScheme);
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack->fn->setBorderType(ServiceAgentSettingsLimitMaxCurrent_ButtonBack, LE_WIDGET_BORDER_NONE);
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack->fn->setPressedImage(ServiceAgentSettingsLimitMaxCurrent_ButtonBack, (leImage*)&ICON_goBackActive);
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack->fn->setReleasedImage(ServiceAgentSettingsLimitMaxCurrent_ButtonBack, (leImage*)&ICON_goBackInactive);
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack->fn->setImagePosition(ServiceAgentSettingsLimitMaxCurrent_ButtonBack, LE_RELATIVE_POSITION_BEHIND);
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack->fn->setReleasedEventCallback(ServiceAgentSettingsLimitMaxCurrent_ButtonBack, event_ServiceAgentSettingsLimitMaxCurrent_ButtonBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)ServiceAgentSettingsLimitMaxCurrent_ButtonBack);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ServiceAgentSettingsLimitMaxCurrent_ButtonReset = leButtonWidget_New();
    ServiceAgentSettingsLimitMaxCurrent_ButtonReset->fn->setPosition(ServiceAgentSettingsLimitMaxCurrent_ButtonReset, 310, 145);
    ServiceAgentSettingsLimitMaxCurrent_ButtonReset->fn->setSize(ServiceAgentSettingsLimitMaxCurrent_ButtonReset, 70, 30);
    ServiceAgentSettingsLimitMaxCurrent_ButtonReset->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonReset, &BackgroundScheme);
    ServiceAgentSettingsLimitMaxCurrent_ButtonReset->fn->setString(ServiceAgentSettingsLimitMaxCurrent_ButtonReset, (leString*)&string_Reset);
    ServiceAgentSettingsLimitMaxCurrent_ButtonReset->fn->setPressedEventCallback(ServiceAgentSettingsLimitMaxCurrent_ButtonReset, event_ServiceAgentSettingsLimitMaxCurrent_ButtonReset_OnPressed);
    ServiceAgentSettingsLimitMaxCurrent_ButtonReset->fn->setReleasedEventCallback(ServiceAgentSettingsLimitMaxCurrent_ButtonReset, event_ServiceAgentSettingsLimitMaxCurrent_ButtonReset_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsLimitMaxCurrent_ButtonReset);

    ServiceAgentSettingsLimitMaxCurrent_ButtonOn = leButtonWidget_New();
    ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setPosition(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, 310, 87);
    ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setSize(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, 70, 30);
    
    //added by bing
    if (gCurVar0.currentGov == 0)
    {
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, &offscheme);
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setString(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, (leString*)&string_OFF);
    }
    else
    {
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, &BackgroundScheme);
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setString(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, (leString*)&string_ON);
    }
    
    ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setPressedEventCallback(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, event_ServiceAgentSettingsLimitMaxCurrent_ButtonOn_OnPressed);
    ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setReleasedEventCallback(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, event_ServiceAgentSettingsLimitMaxCurrent_ButtonOn_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ServiceAgentSettingsLimitMaxCurrent_ButtonOn);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ServiceAgentSettingsLimitMaxCurrent(void)
{
}

void screenHide_ServiceAgentSettingsLimitMaxCurrent(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ServiceAgentSettingsLimitMaxCurrent_Layer0_FillPanel = NULL;
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenIcon = NULL;
    ServiceAgentSettingsLimitMaxCurrent_CurrentScreenLabel = NULL;
    ServiceAgentSettingsLimitMaxCurrent_LabelLimitMaximumCurrent = NULL;
    ServiceAgentSettingsLimitMaxCurrent_ResetErrorLog = NULL;
    ServiceAgentSettingsLimitMaxCurrent_ButtonBack = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ServiceAgentSettingsLimitMaxCurrent_ButtonReset = NULL;
    ServiceAgentSettingsLimitMaxCurrent_ButtonOn = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ServiceAgentSettingsLimitMaxCurrent(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ServiceAgentSettingsLimitMaxCurrent(uint32_t lyrIdx)
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

