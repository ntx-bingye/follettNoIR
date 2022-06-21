#include "gfx/legato/generated/screen/le_gen_screen_Error.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* Error_Layer0_FillPanel;
leImageWidget* Error_WarningIcon;
leLabelWidget* Error_LabelOperatorNote;
leLabelWidget* Error_LabelOperatorNoteA;
leWidget* Error_PanelWidget0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Error(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Error(void)
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

    Error_Layer0_FillPanel = leWidget_New();
    Error_Layer0_FillPanel->fn->setPosition(Error_Layer0_FillPanel, 0, 0);
    Error_Layer0_FillPanel->fn->setSize(Error_Layer0_FillPanel, 480, 272);
    Error_Layer0_FillPanel->fn->setScheme(Error_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)Error_Layer0_FillPanel);

    Error_WarningIcon = leImageWidget_New();
    Error_WarningIcon->fn->setPosition(Error_WarningIcon, 32, 40);
    Error_WarningIcon->fn->setSize(Error_WarningIcon, 70, 80);
    Error_WarningIcon->fn->setScheme(Error_WarningIcon, &RedScheme);
    Error_WarningIcon->fn->setBorderType(Error_WarningIcon, LE_WIDGET_BORDER_NONE);
    Error_WarningIcon->fn->setImage(Error_WarningIcon, (leImage*)&warning);
    root0->fn->addChild(root0, (leWidget*)Error_WarningIcon);

    Error_LabelOperatorNote = leLabelWidget_New();
    Error_LabelOperatorNote->fn->setPosition(Error_LabelOperatorNote, 102, 40);
    Error_LabelOperatorNote->fn->setSize(Error_LabelOperatorNote, 330, 80);
    Error_LabelOperatorNote->fn->setScheme(Error_LabelOperatorNote, &LayerScheme);
    Error_LabelOperatorNote->fn->setString(Error_LabelOperatorNote, (leString*)&string_Error01);
    root0->fn->addChild(root0, (leWidget*)Error_LabelOperatorNote);

    Error_LabelOperatorNoteA = leLabelWidget_New();
    Error_LabelOperatorNoteA->fn->setPosition(Error_LabelOperatorNoteA, 31, 152);
    Error_LabelOperatorNoteA->fn->setSize(Error_LabelOperatorNoteA, 400, 80);
    Error_LabelOperatorNoteA->fn->setScheme(Error_LabelOperatorNoteA, &BackgroundScheme);
    Error_LabelOperatorNoteA->fn->setBackgroundType(Error_LabelOperatorNoteA, LE_WIDGET_BACKGROUND_NONE);
    Error_LabelOperatorNoteA->fn->setString(Error_LabelOperatorNoteA, (leString*)&string_Error01b);
    root0->fn->addChild(root0, (leWidget*)Error_LabelOperatorNoteA);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    Error_PanelWidget0 = leWidget_New();
    Error_PanelWidget0->fn->setPosition(Error_PanelWidget0, 367, 163);
    Error_PanelWidget0->fn->setEnabled(Error_PanelWidget0, LE_FALSE);
    Error_PanelWidget0->fn->setVisible(Error_PanelWidget0, LE_FALSE);
    Error_PanelWidget0->fn->setScheme(Error_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)Error_PanelWidget0);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    Error_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Error(void)
{
}

void screenHide_Error(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    Error_Layer0_FillPanel = NULL;
    Error_WarningIcon = NULL;
    Error_LabelOperatorNote = NULL;
    Error_LabelOperatorNoteA = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    Error_PanelWidget0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Error(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Error(uint32_t lyrIdx)
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

