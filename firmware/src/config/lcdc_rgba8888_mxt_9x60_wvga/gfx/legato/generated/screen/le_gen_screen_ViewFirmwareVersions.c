#include "gfx/legato/generated/screen/le_gen_screen_ViewFirmwareVersions.h"

// screen member widget declarations
leWidget* root0;

leWidget* ViewFirmwareVersions_Layer0_FillPanel;
leLabelWidget* ViewFirmwareVersions_LabelFirmwareVersions;
leButtonWidget* ViewFirmwareVersions_ButtonBack;
leTextFieldWidget* ViewFirmwareVersions_TextFieldUI;
leTextFieldWidget* ViewFirmwareVersions_TextFieldHOB1;
leTextFieldWidget* ViewFirmwareVersions_TextFieldHOB2;
leLabelWidget* ViewFirmwareVersions_LabelUI;
leLabelWidget* ViewFirmwareVersions_LabelHOB1;
leLabelWidget* ViewFirmwareVersions_LabelHOB2;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ViewFirmwareVersions(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ViewFirmwareVersions(void)
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

    ViewFirmwareVersions_Layer0_FillPanel = leWidget_New();
    ViewFirmwareVersions_Layer0_FillPanel->fn->setPosition(ViewFirmwareVersions_Layer0_FillPanel, 0, 0);
    ViewFirmwareVersions_Layer0_FillPanel->fn->setSize(ViewFirmwareVersions_Layer0_FillPanel, 480, 272);
    ViewFirmwareVersions_Layer0_FillPanel->fn->setScheme(ViewFirmwareVersions_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_Layer0_FillPanel);

    ViewFirmwareVersions_LabelFirmwareVersions = leLabelWidget_New();
    ViewFirmwareVersions_LabelFirmwareVersions->fn->setPosition(ViewFirmwareVersions_LabelFirmwareVersions, 16, 16);
    ViewFirmwareVersions_LabelFirmwareVersions->fn->setSize(ViewFirmwareVersions_LabelFirmwareVersions, 136, 25);
    ViewFirmwareVersions_LabelFirmwareVersions->fn->setScheme(ViewFirmwareVersions_LabelFirmwareVersions, &BackgroundScheme);
    ViewFirmwareVersions_LabelFirmwareVersions->fn->setBackgroundType(ViewFirmwareVersions_LabelFirmwareVersions, LE_WIDGET_BACKGROUND_NONE);
    ViewFirmwareVersions_LabelFirmwareVersions->fn->setString(ViewFirmwareVersions_LabelFirmwareVersions, (leString*)&string_FirmwareVersionsView);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_LabelFirmwareVersions);

    ViewFirmwareVersions_ButtonBack = leButtonWidget_New();
    ViewFirmwareVersions_ButtonBack->fn->setPosition(ViewFirmwareVersions_ButtonBack, 431, 4);
    ViewFirmwareVersions_ButtonBack->fn->setSize(ViewFirmwareVersions_ButtonBack, 45, 45);
    ViewFirmwareVersions_ButtonBack->fn->setScheme(ViewFirmwareVersions_ButtonBack, &BackgroundScheme);
    ViewFirmwareVersions_ButtonBack->fn->setBackgroundType(ViewFirmwareVersions_ButtonBack, LE_WIDGET_BACKGROUND_NONE);
    ViewFirmwareVersions_ButtonBack->fn->setBorderType(ViewFirmwareVersions_ButtonBack, LE_WIDGET_BORDER_NONE);
    ViewFirmwareVersions_ButtonBack->fn->setPressedImage(ViewFirmwareVersions_ButtonBack, (leImage*)&ICON_goBackActive);
    ViewFirmwareVersions_ButtonBack->fn->setReleasedImage(ViewFirmwareVersions_ButtonBack, (leImage*)&ICON_goBackInactive);
    ViewFirmwareVersions_ButtonBack->fn->setPressedEventCallback(ViewFirmwareVersions_ButtonBack, event_ViewFirmwareVersions_ButtonBack_OnPressed);
    ViewFirmwareVersions_ButtonBack->fn->setReleasedEventCallback(ViewFirmwareVersions_ButtonBack, event_ViewFirmwareVersions_ButtonBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_ButtonBack);

    ViewFirmwareVersions_TextFieldUI = leTextFieldWidget_New();
    ViewFirmwareVersions_TextFieldUI->fn->setPosition(ViewFirmwareVersions_TextFieldUI, 187, 61);
    ViewFirmwareVersions_TextFieldUI->fn->setSize(ViewFirmwareVersions_TextFieldUI, 240, 25);
    ViewFirmwareVersions_TextFieldUI->fn->setScheme(ViewFirmwareVersions_TextFieldUI, &BackgroundScheme);
    ViewFirmwareVersions_TextFieldUI->fn->setBackgroundType(ViewFirmwareVersions_TextFieldUI, LE_WIDGET_BACKGROUND_NONE);
    ViewFirmwareVersions_TextFieldUI->fn->setBorderType(ViewFirmwareVersions_TextFieldUI, LE_WIDGET_BORDER_NONE);
    ViewFirmwareVersions_TextFieldUI->fn->setHAlignment(ViewFirmwareVersions_TextFieldUI, LE_HALIGN_LEFT);
    ViewFirmwareVersions_TextFieldUI->fn->setString(ViewFirmwareVersions_TextFieldUI, (leString*)&string_FirmwareVersionInitial);
    ViewFirmwareVersions_TextFieldUI->fn->setClearValueOnFirstEdit(ViewFirmwareVersions_TextFieldUI, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_TextFieldUI);

    ViewFirmwareVersions_TextFieldHOB1 = leTextFieldWidget_New();
    ViewFirmwareVersions_TextFieldHOB1->fn->setPosition(ViewFirmwareVersions_TextFieldHOB1, 187, 87);
    ViewFirmwareVersions_TextFieldHOB1->fn->setSize(ViewFirmwareVersions_TextFieldHOB1, 240, 25);
    ViewFirmwareVersions_TextFieldHOB1->fn->setScheme(ViewFirmwareVersions_TextFieldHOB1, &BackgroundScheme);
    ViewFirmwareVersions_TextFieldHOB1->fn->setBackgroundType(ViewFirmwareVersions_TextFieldHOB1, LE_WIDGET_BACKGROUND_NONE);
    ViewFirmwareVersions_TextFieldHOB1->fn->setBorderType(ViewFirmwareVersions_TextFieldHOB1, LE_WIDGET_BORDER_NONE);
    ViewFirmwareVersions_TextFieldHOB1->fn->setHAlignment(ViewFirmwareVersions_TextFieldHOB1, LE_HALIGN_LEFT);
    ViewFirmwareVersions_TextFieldHOB1->fn->setString(ViewFirmwareVersions_TextFieldHOB1, (leString*)&string_FirmwareVersionInitial);
    ViewFirmwareVersions_TextFieldHOB1->fn->setClearValueOnFirstEdit(ViewFirmwareVersions_TextFieldHOB1, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_TextFieldHOB1);

    ViewFirmwareVersions_TextFieldHOB2 = leTextFieldWidget_New();
    ViewFirmwareVersions_TextFieldHOB2->fn->setPosition(ViewFirmwareVersions_TextFieldHOB2, 187, 113);
    ViewFirmwareVersions_TextFieldHOB2->fn->setSize(ViewFirmwareVersions_TextFieldHOB2, 240, 25);
    ViewFirmwareVersions_TextFieldHOB2->fn->setScheme(ViewFirmwareVersions_TextFieldHOB2, &BackgroundScheme);
    ViewFirmwareVersions_TextFieldHOB2->fn->setBackgroundType(ViewFirmwareVersions_TextFieldHOB2, LE_WIDGET_BACKGROUND_NONE);
    ViewFirmwareVersions_TextFieldHOB2->fn->setBorderType(ViewFirmwareVersions_TextFieldHOB2, LE_WIDGET_BORDER_NONE);
    ViewFirmwareVersions_TextFieldHOB2->fn->setHAlignment(ViewFirmwareVersions_TextFieldHOB2, LE_HALIGN_LEFT);
    ViewFirmwareVersions_TextFieldHOB2->fn->setString(ViewFirmwareVersions_TextFieldHOB2, (leString*)&string_FirmwareVersionNotEquipped);
    ViewFirmwareVersions_TextFieldHOB2->fn->setClearValueOnFirstEdit(ViewFirmwareVersions_TextFieldHOB2, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_TextFieldHOB2);

    ViewFirmwareVersions_LabelUI = leLabelWidget_New();
    ViewFirmwareVersions_LabelUI->fn->setPosition(ViewFirmwareVersions_LabelUI, 48, 61);
    ViewFirmwareVersions_LabelUI->fn->setSize(ViewFirmwareVersions_LabelUI, 143, 25);
    ViewFirmwareVersions_LabelUI->fn->setScheme(ViewFirmwareVersions_LabelUI, &BackgroundScheme);
    ViewFirmwareVersions_LabelUI->fn->setBackgroundType(ViewFirmwareVersions_LabelUI, LE_WIDGET_BACKGROUND_NONE);
    ViewFirmwareVersions_LabelUI->fn->setString(ViewFirmwareVersions_LabelUI, (leString*)&string_FirmwareVersionUI);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_LabelUI);

    ViewFirmwareVersions_LabelHOB1 = leLabelWidget_New();
    ViewFirmwareVersions_LabelHOB1->fn->setPosition(ViewFirmwareVersions_LabelHOB1, 48, 87);
    ViewFirmwareVersions_LabelHOB1->fn->setSize(ViewFirmwareVersions_LabelHOB1, 143, 25);
    ViewFirmwareVersions_LabelHOB1->fn->setScheme(ViewFirmwareVersions_LabelHOB1, &BackgroundScheme);
    ViewFirmwareVersions_LabelHOB1->fn->setBackgroundType(ViewFirmwareVersions_LabelHOB1, LE_WIDGET_BACKGROUND_NONE);
    ViewFirmwareVersions_LabelHOB1->fn->setString(ViewFirmwareVersions_LabelHOB1, (leString*)&string_FirmwareVersionHOB1);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_LabelHOB1);

    ViewFirmwareVersions_LabelHOB2 = leLabelWidget_New();
    ViewFirmwareVersions_LabelHOB2->fn->setPosition(ViewFirmwareVersions_LabelHOB2, 48, 113);
    ViewFirmwareVersions_LabelHOB2->fn->setSize(ViewFirmwareVersions_LabelHOB2, 143, 25);
    ViewFirmwareVersions_LabelHOB2->fn->setScheme(ViewFirmwareVersions_LabelHOB2, &BackgroundScheme);
    ViewFirmwareVersions_LabelHOB2->fn->setBackgroundType(ViewFirmwareVersions_LabelHOB2, LE_WIDGET_BACKGROUND_NONE);
    ViewFirmwareVersions_LabelHOB2->fn->setString(ViewFirmwareVersions_LabelHOB2, (leString*)&string_FirmwareVersionHOB2);
    root0->fn->addChild(root0, (leWidget*)ViewFirmwareVersions_LabelHOB2);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ViewFirmwareVersions(void)
{
}

void screenHide_ViewFirmwareVersions(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ViewFirmwareVersions_Layer0_FillPanel = NULL;
    ViewFirmwareVersions_LabelFirmwareVersions = NULL;
    ViewFirmwareVersions_ButtonBack = NULL;
    ViewFirmwareVersions_TextFieldUI = NULL;
    ViewFirmwareVersions_TextFieldHOB1 = NULL;
    ViewFirmwareVersions_TextFieldHOB2 = NULL;
    ViewFirmwareVersions_LabelUI = NULL;
    ViewFirmwareVersions_LabelHOB1 = NULL;
    ViewFirmwareVersions_LabelHOB2 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ViewFirmwareVersions(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ViewFirmwareVersions(uint32_t lyrIdx)
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

