#include "gfx/legato/generated/screen/le_gen_screen_MaxCurrentUncheck.h"

// screen member widget declarations
leWidget* root0;

leWidget* MaxCurrentUncheck_PanelWidget0;
leImageWidget* MaxCurrentUncheck_CurrentScreenIcon;
leButtonWidget* MaxCurrentUncheck_ButtonBack;
leLabelWidget* MaxCurrentUncheck_LabelLimitMaximumCurrent;
leLabelWidget* MaxCurrentUncheck_ResetErrorLog;
leButtonWidget* MaxCurrentUncheck_ButtonReset;
leLabelWidget* MaxCurrentUncheck_LabelWidget0;
leCheckBoxWidget* MaxCurrentUncheck_CheckBox10A;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_MaxCurrentUncheck(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_MaxCurrentUncheck(void)
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

    MaxCurrentUncheck_PanelWidget0 = leWidget_New();
    MaxCurrentUncheck_PanelWidget0->fn->setPosition(MaxCurrentUncheck_PanelWidget0, 0, 0);
    MaxCurrentUncheck_PanelWidget0->fn->setSize(MaxCurrentUncheck_PanelWidget0, 480, 272);
    MaxCurrentUncheck_PanelWidget0->fn->setScheme(MaxCurrentUncheck_PanelWidget0, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)MaxCurrentUncheck_PanelWidget0);

    MaxCurrentUncheck_CurrentScreenIcon = leImageWidget_New();
    MaxCurrentUncheck_CurrentScreenIcon->fn->setPosition(MaxCurrentUncheck_CurrentScreenIcon, 5, 5);
    MaxCurrentUncheck_CurrentScreenIcon->fn->setSize(MaxCurrentUncheck_CurrentScreenIcon, 40, 40);
    MaxCurrentUncheck_CurrentScreenIcon->fn->setScheme(MaxCurrentUncheck_CurrentScreenIcon, &BackgroundScheme);
    MaxCurrentUncheck_CurrentScreenIcon->fn->setBackgroundType(MaxCurrentUncheck_CurrentScreenIcon, LE_WIDGET_BACKGROUND_NONE);
    MaxCurrentUncheck_CurrentScreenIcon->fn->setBorderType(MaxCurrentUncheck_CurrentScreenIcon, LE_WIDGET_BORDER_NONE);
    MaxCurrentUncheck_CurrentScreenIcon->fn->setImage(MaxCurrentUncheck_CurrentScreenIcon, (leImage*)&gear);
    root0->fn->addChild(root0, (leWidget*)MaxCurrentUncheck_CurrentScreenIcon);

    MaxCurrentUncheck_ButtonBack = leButtonWidget_New();
    MaxCurrentUncheck_ButtonBack->fn->setPosition(MaxCurrentUncheck_ButtonBack, 431, 7);
    MaxCurrentUncheck_ButtonBack->fn->setSize(MaxCurrentUncheck_ButtonBack, 45, 35);
    MaxCurrentUncheck_ButtonBack->fn->setScheme(MaxCurrentUncheck_ButtonBack, &BackgroundScheme);
    MaxCurrentUncheck_ButtonBack->fn->setBorderType(MaxCurrentUncheck_ButtonBack, LE_WIDGET_BORDER_NONE);
    MaxCurrentUncheck_ButtonBack->fn->setPressedImage(MaxCurrentUncheck_ButtonBack, (leImage*)&ICON_goBackActive);
    MaxCurrentUncheck_ButtonBack->fn->setReleasedImage(MaxCurrentUncheck_ButtonBack, (leImage*)&ICON_goBackInactive);
    MaxCurrentUncheck_ButtonBack->fn->setImagePosition(MaxCurrentUncheck_ButtonBack, LE_RELATIVE_POSITION_BEHIND);
    MaxCurrentUncheck_ButtonBack->fn->setReleasedEventCallback(MaxCurrentUncheck_ButtonBack, event_MaxCurrentUncheck_ButtonBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)MaxCurrentUncheck_ButtonBack);

    MaxCurrentUncheck_LabelLimitMaximumCurrent = leLabelWidget_New();
    MaxCurrentUncheck_LabelLimitMaximumCurrent->fn->setPosition(MaxCurrentUncheck_LabelLimitMaximumCurrent, 45, 90);
    MaxCurrentUncheck_LabelLimitMaximumCurrent->fn->setSize(MaxCurrentUncheck_LabelLimitMaximumCurrent, 235, 25);
    MaxCurrentUncheck_LabelLimitMaximumCurrent->fn->setScheme(MaxCurrentUncheck_LabelLimitMaximumCurrent, &BackgroundScheme);
    MaxCurrentUncheck_LabelLimitMaximumCurrent->fn->setString(MaxCurrentUncheck_LabelLimitMaximumCurrent, (leString*)&string_CurrentLimitMaximum);
    root0->fn->addChild(root0, (leWidget*)MaxCurrentUncheck_LabelLimitMaximumCurrent);

    MaxCurrentUncheck_ResetErrorLog = leLabelWidget_New();
    MaxCurrentUncheck_ResetErrorLog->fn->setPosition(MaxCurrentUncheck_ResetErrorLog, 45, 145);
    MaxCurrentUncheck_ResetErrorLog->fn->setSize(MaxCurrentUncheck_ResetErrorLog, 141, 25);
    MaxCurrentUncheck_ResetErrorLog->fn->setScheme(MaxCurrentUncheck_ResetErrorLog, &BackgroundScheme);
    MaxCurrentUncheck_ResetErrorLog->fn->setString(MaxCurrentUncheck_ResetErrorLog, (leString*)&string_ErrorLogReset);
    root0->fn->addChild(root0, (leWidget*)MaxCurrentUncheck_ResetErrorLog);

    MaxCurrentUncheck_ButtonReset = leButtonWidget_New();
    MaxCurrentUncheck_ButtonReset->fn->setPosition(MaxCurrentUncheck_ButtonReset, 310, 145);
    MaxCurrentUncheck_ButtonReset->fn->setSize(MaxCurrentUncheck_ButtonReset, 120, 40);
    MaxCurrentUncheck_ButtonReset->fn->setScheme(MaxCurrentUncheck_ButtonReset, &BackgroundScheme);
    MaxCurrentUncheck_ButtonReset->fn->setString(MaxCurrentUncheck_ButtonReset, (leString*)&string_Reset);
    MaxCurrentUncheck_ButtonReset->fn->setReleasedEventCallback(MaxCurrentUncheck_ButtonReset, event_MaxCurrentUncheck_ButtonReset_OnReleased);
    root0->fn->addChild(root0, (leWidget*)MaxCurrentUncheck_ButtonReset);

    MaxCurrentUncheck_LabelWidget0 = leLabelWidget_New();
    MaxCurrentUncheck_LabelWidget0->fn->setPosition(MaxCurrentUncheck_LabelWidget0, 46, 15);
    MaxCurrentUncheck_LabelWidget0->fn->setSize(MaxCurrentUncheck_LabelWidget0, 101, 25);
    MaxCurrentUncheck_LabelWidget0->fn->setScheme(MaxCurrentUncheck_LabelWidget0, &BackgroundScheme);
    MaxCurrentUncheck_LabelWidget0->fn->setString(MaxCurrentUncheck_LabelWidget0, (leString*)&string_OtherSettings);
    root0->fn->addChild(root0, (leWidget*)MaxCurrentUncheck_LabelWidget0);

    MaxCurrentUncheck_CheckBox10A = leCheckBoxWidget_New();
    MaxCurrentUncheck_CheckBox10A->fn->setPosition(MaxCurrentUncheck_CheckBox10A, 310, 90);
    MaxCurrentUncheck_CheckBox10A->fn->setSize(MaxCurrentUncheck_CheckBox10A, 120, 43);
    MaxCurrentUncheck_CheckBox10A->fn->setScheme(MaxCurrentUncheck_CheckBox10A, &BackgroundScheme);
    MaxCurrentUncheck_CheckBox10A->fn->setMargins(MaxCurrentUncheck_CheckBox10A, 1, 1, 1, 1);
    MaxCurrentUncheck_CheckBox10A->fn->setChecked(MaxCurrentUncheck_CheckBox10A, LE_TRUE);
    MaxCurrentUncheck_CheckBox10A->fn->setCheckedImage(MaxCurrentUncheck_CheckBox10A, (leImage*)&check);
    MaxCurrentUncheck_CheckBox10A->fn->setUncheckedImage(MaxCurrentUncheck_CheckBox10A, (leImage*)&uncheck);
    MaxCurrentUncheck_CheckBox10A->fn->setImageMargin(MaxCurrentUncheck_CheckBox10A, 0);
    MaxCurrentUncheck_CheckBox10A->fn->setCheckedEventCallback(MaxCurrentUncheck_CheckBox10A, event_MaxCurrentUncheck_CheckBox10A_OnChecked);
    MaxCurrentUncheck_CheckBox10A->fn->setUncheckedEventCallback(MaxCurrentUncheck_CheckBox10A, event_MaxCurrentUncheck_CheckBox10A_OnUnchecked);
    root0->fn->addChild(root0, (leWidget*)MaxCurrentUncheck_CheckBox10A);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_MaxCurrentUncheck(void)
{
}

void screenHide_MaxCurrentUncheck(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    MaxCurrentUncheck_PanelWidget0 = NULL;
    MaxCurrentUncheck_CurrentScreenIcon = NULL;
    MaxCurrentUncheck_ButtonBack = NULL;
    MaxCurrentUncheck_LabelLimitMaximumCurrent = NULL;
    MaxCurrentUncheck_ResetErrorLog = NULL;
    MaxCurrentUncheck_ButtonReset = NULL;
    MaxCurrentUncheck_LabelWidget0 = NULL;
    MaxCurrentUncheck_CheckBox10A = NULL;


    showing = LE_FALSE;
}

void screenDestroy_MaxCurrentUncheck(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_MaxCurrentUncheck(uint32_t lyrIdx)
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

