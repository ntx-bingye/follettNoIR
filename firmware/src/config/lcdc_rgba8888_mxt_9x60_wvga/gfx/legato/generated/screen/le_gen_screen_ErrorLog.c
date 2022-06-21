#include "gfx/legato/generated/screen/le_gen_screen_ErrorLog.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* ErrorLog_Layer0_FillPanel;
leLabelWidget* ErrorLog_LabelErrorList;
leTextFieldWidget* ErrorLog_TextFieldErrorCount1;
leLabelWidget* ErrorLog_LabelErrorLog1;
leTextFieldWidget* ErrorLog_TextFieldErrorCount2;
leLabelWidget* ErrorLog_LabelErrorLog2;
leTextFieldWidget* ErrorLog_TextFieldErrorCount3;
leLabelWidget* ErrorLog_LabelErrorLog3;
leTextFieldWidget* ErrorLog_TextFieldErrorCount4;
leLabelWidget* ErrorLog_LabelErrorLog4;
leTextFieldWidget* ErrorLog_TextFieldErrorCount6;
leLabelWidget* ErrorLog_LabelErrorLog6;
leTextFieldWidget* ErrorLog_TextFieldErrorCount7;
leLabelWidget* ErrorLog_LabelErrorLog7;
leTextFieldWidget* ErrorLog_TextFieldErrorCount8;
leLabelWidget* ErrorLog_LabelErrorLog8;
leTextFieldWidget* ErrorLog_TextFieldErrorCount16;
leLabelWidget* ErrorLog_LabelErrorLog16;
leImageWidget* ErrorLog_ImageWidget0;
leWidget* ErrorLog_PanelWidget0;
leButtonWidget* ErrorLog_ButtonBack;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ErrorLog(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ErrorLog(void)
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

    ErrorLog_Layer0_FillPanel = leWidget_New();
    ErrorLog_Layer0_FillPanel->fn->setPosition(ErrorLog_Layer0_FillPanel, 0, 0);
    ErrorLog_Layer0_FillPanel->fn->setSize(ErrorLog_Layer0_FillPanel, 480, 272);
    ErrorLog_Layer0_FillPanel->fn->setScheme(ErrorLog_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_Layer0_FillPanel);

    ErrorLog_LabelErrorList = leLabelWidget_New();
    ErrorLog_LabelErrorList->fn->setPosition(ErrorLog_LabelErrorList, 45, 15);
    ErrorLog_LabelErrorList->fn->setScheme(ErrorLog_LabelErrorList, &BackgroundScheme);
    ErrorLog_LabelErrorList->fn->setBackgroundType(ErrorLog_LabelErrorList, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorList->fn->setString(ErrorLog_LabelErrorList, (leString*)&string_ErrorLogView);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorList);

    ErrorLog_TextFieldErrorCount1 = leTextFieldWidget_New();
    ErrorLog_TextFieldErrorCount1->fn->setPosition(ErrorLog_TextFieldErrorCount1, 305, 50);
    ErrorLog_TextFieldErrorCount1->fn->setScheme(ErrorLog_TextFieldErrorCount1, &BackgroundScheme);
    ErrorLog_TextFieldErrorCount1->fn->setBackgroundType(ErrorLog_TextFieldErrorCount1, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_TextFieldErrorCount1->fn->setBorderType(ErrorLog_TextFieldErrorCount1, LE_WIDGET_BORDER_NONE);
    ErrorLog_TextFieldErrorCount1->fn->setHAlignment(ErrorLog_TextFieldErrorCount1, LE_HALIGN_LEFT);
    ErrorLog_TextFieldErrorCount1->fn->setString(ErrorLog_TextFieldErrorCount1, (leString*)&string_ErrorCodeCount255);
    ErrorLog_TextFieldErrorCount1->fn->setClearValueOnFirstEdit(ErrorLog_TextFieldErrorCount1, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_TextFieldErrorCount1);

    ErrorLog_LabelErrorLog1 = leLabelWidget_New();
    ErrorLog_LabelErrorLog1->fn->setPosition(ErrorLog_LabelErrorLog1, 30, 50);
    ErrorLog_LabelErrorLog1->fn->setSize(ErrorLog_LabelErrorLog1, 300, 25);
    ErrorLog_LabelErrorLog1->fn->setScheme(ErrorLog_LabelErrorLog1, &BackgroundScheme);
    ErrorLog_LabelErrorLog1->fn->setBackgroundType(ErrorLog_LabelErrorLog1, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorLog1->fn->setString(ErrorLog_LabelErrorLog1, (leString*)&string_Error01);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorLog1);

    ErrorLog_TextFieldErrorCount2 = leTextFieldWidget_New();
    ErrorLog_TextFieldErrorCount2->fn->setPosition(ErrorLog_TextFieldErrorCount2, 305, 75);
    ErrorLog_TextFieldErrorCount2->fn->setScheme(ErrorLog_TextFieldErrorCount2, &BackgroundScheme);
    ErrorLog_TextFieldErrorCount2->fn->setBackgroundType(ErrorLog_TextFieldErrorCount2, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_TextFieldErrorCount2->fn->setBorderType(ErrorLog_TextFieldErrorCount2, LE_WIDGET_BORDER_NONE);
    ErrorLog_TextFieldErrorCount2->fn->setHAlignment(ErrorLog_TextFieldErrorCount2, LE_HALIGN_LEFT);
    ErrorLog_TextFieldErrorCount2->fn->setString(ErrorLog_TextFieldErrorCount2, (leString*)&string_ErrorCodeCount255);
    ErrorLog_TextFieldErrorCount2->fn->setClearValueOnFirstEdit(ErrorLog_TextFieldErrorCount2, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_TextFieldErrorCount2);

    ErrorLog_LabelErrorLog2 = leLabelWidget_New();
    ErrorLog_LabelErrorLog2->fn->setPosition(ErrorLog_LabelErrorLog2, 30, 75);
    ErrorLog_LabelErrorLog2->fn->setSize(ErrorLog_LabelErrorLog2, 300, 25);
    ErrorLog_LabelErrorLog2->fn->setScheme(ErrorLog_LabelErrorLog2, &BackgroundScheme);
    ErrorLog_LabelErrorLog2->fn->setBackgroundType(ErrorLog_LabelErrorLog2, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorLog2->fn->setString(ErrorLog_LabelErrorLog2, (leString*)&string_Error02);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorLog2);

    ErrorLog_TextFieldErrorCount3 = leTextFieldWidget_New();
    ErrorLog_TextFieldErrorCount3->fn->setPosition(ErrorLog_TextFieldErrorCount3, 304, 100);
    ErrorLog_TextFieldErrorCount3->fn->setScheme(ErrorLog_TextFieldErrorCount3, &BackgroundScheme);
    ErrorLog_TextFieldErrorCount3->fn->setBackgroundType(ErrorLog_TextFieldErrorCount3, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_TextFieldErrorCount3->fn->setBorderType(ErrorLog_TextFieldErrorCount3, LE_WIDGET_BORDER_NONE);
    ErrorLog_TextFieldErrorCount3->fn->setHAlignment(ErrorLog_TextFieldErrorCount3, LE_HALIGN_LEFT);
    ErrorLog_TextFieldErrorCount3->fn->setString(ErrorLog_TextFieldErrorCount3, (leString*)&string_ErrorCodeCount255);
    ErrorLog_TextFieldErrorCount3->fn->setClearValueOnFirstEdit(ErrorLog_TextFieldErrorCount3, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_TextFieldErrorCount3);

    ErrorLog_LabelErrorLog3 = leLabelWidget_New();
    ErrorLog_LabelErrorLog3->fn->setPosition(ErrorLog_LabelErrorLog3, 30, 100);
    ErrorLog_LabelErrorLog3->fn->setSize(ErrorLog_LabelErrorLog3, 300, 25);
    ErrorLog_LabelErrorLog3->fn->setScheme(ErrorLog_LabelErrorLog3, &BackgroundScheme);
    ErrorLog_LabelErrorLog3->fn->setBackgroundType(ErrorLog_LabelErrorLog3, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorLog3->fn->setString(ErrorLog_LabelErrorLog3, (leString*)&string_Error03);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorLog3);

    ErrorLog_TextFieldErrorCount4 = leTextFieldWidget_New();
    ErrorLog_TextFieldErrorCount4->fn->setPosition(ErrorLog_TextFieldErrorCount4, 305, 125);
    ErrorLog_TextFieldErrorCount4->fn->setScheme(ErrorLog_TextFieldErrorCount4, &BackgroundScheme);
    ErrorLog_TextFieldErrorCount4->fn->setBackgroundType(ErrorLog_TextFieldErrorCount4, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_TextFieldErrorCount4->fn->setBorderType(ErrorLog_TextFieldErrorCount4, LE_WIDGET_BORDER_NONE);
    ErrorLog_TextFieldErrorCount4->fn->setHAlignment(ErrorLog_TextFieldErrorCount4, LE_HALIGN_LEFT);
    ErrorLog_TextFieldErrorCount4->fn->setString(ErrorLog_TextFieldErrorCount4, (leString*)&string_ErrorCodeCount255);
    ErrorLog_TextFieldErrorCount4->fn->setClearValueOnFirstEdit(ErrorLog_TextFieldErrorCount4, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_TextFieldErrorCount4);

    ErrorLog_LabelErrorLog4 = leLabelWidget_New();
    ErrorLog_LabelErrorLog4->fn->setPosition(ErrorLog_LabelErrorLog4, 30, 125);
    ErrorLog_LabelErrorLog4->fn->setSize(ErrorLog_LabelErrorLog4, 300, 25);
    ErrorLog_LabelErrorLog4->fn->setScheme(ErrorLog_LabelErrorLog4, &BackgroundScheme);
    ErrorLog_LabelErrorLog4->fn->setBackgroundType(ErrorLog_LabelErrorLog4, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorLog4->fn->setString(ErrorLog_LabelErrorLog4, (leString*)&string_Error04);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorLog4);

    ErrorLog_TextFieldErrorCount6 = leTextFieldWidget_New();
    ErrorLog_TextFieldErrorCount6->fn->setPosition(ErrorLog_TextFieldErrorCount6, 305, 150);
    ErrorLog_TextFieldErrorCount6->fn->setScheme(ErrorLog_TextFieldErrorCount6, &BackgroundScheme);
    ErrorLog_TextFieldErrorCount6->fn->setBackgroundType(ErrorLog_TextFieldErrorCount6, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_TextFieldErrorCount6->fn->setBorderType(ErrorLog_TextFieldErrorCount6, LE_WIDGET_BORDER_NONE);
    ErrorLog_TextFieldErrorCount6->fn->setHAlignment(ErrorLog_TextFieldErrorCount6, LE_HALIGN_LEFT);
    ErrorLog_TextFieldErrorCount6->fn->setString(ErrorLog_TextFieldErrorCount6, (leString*)&string_ErrorCodeCount255);
    ErrorLog_TextFieldErrorCount6->fn->setClearValueOnFirstEdit(ErrorLog_TextFieldErrorCount6, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_TextFieldErrorCount6);

    ErrorLog_LabelErrorLog6 = leLabelWidget_New();
    ErrorLog_LabelErrorLog6->fn->setPosition(ErrorLog_LabelErrorLog6, 30, 150);
    ErrorLog_LabelErrorLog6->fn->setSize(ErrorLog_LabelErrorLog6, 300, 25);
    ErrorLog_LabelErrorLog6->fn->setScheme(ErrorLog_LabelErrorLog6, &BackgroundScheme);
    ErrorLog_LabelErrorLog6->fn->setBackgroundType(ErrorLog_LabelErrorLog6, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorLog6->fn->setString(ErrorLog_LabelErrorLog6, (leString*)&string_Error06);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorLog6);

    ErrorLog_TextFieldErrorCount7 = leTextFieldWidget_New();
    ErrorLog_TextFieldErrorCount7->fn->setPosition(ErrorLog_TextFieldErrorCount7, 305, 175);
    ErrorLog_TextFieldErrorCount7->fn->setScheme(ErrorLog_TextFieldErrorCount7, &BackgroundScheme);
    ErrorLog_TextFieldErrorCount7->fn->setBackgroundType(ErrorLog_TextFieldErrorCount7, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_TextFieldErrorCount7->fn->setBorderType(ErrorLog_TextFieldErrorCount7, LE_WIDGET_BORDER_NONE);
    ErrorLog_TextFieldErrorCount7->fn->setHAlignment(ErrorLog_TextFieldErrorCount7, LE_HALIGN_LEFT);
    ErrorLog_TextFieldErrorCount7->fn->setString(ErrorLog_TextFieldErrorCount7, (leString*)&string_ErrorCodeCount255);
    ErrorLog_TextFieldErrorCount7->fn->setClearValueOnFirstEdit(ErrorLog_TextFieldErrorCount7, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_TextFieldErrorCount7);

    ErrorLog_LabelErrorLog7 = leLabelWidget_New();
    ErrorLog_LabelErrorLog7->fn->setPosition(ErrorLog_LabelErrorLog7, 30, 175);
    ErrorLog_LabelErrorLog7->fn->setSize(ErrorLog_LabelErrorLog7, 300, 25);
    ErrorLog_LabelErrorLog7->fn->setScheme(ErrorLog_LabelErrorLog7, &BackgroundScheme);
    ErrorLog_LabelErrorLog7->fn->setBackgroundType(ErrorLog_LabelErrorLog7, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorLog7->fn->setString(ErrorLog_LabelErrorLog7, (leString*)&string_Error07);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorLog7);

    ErrorLog_TextFieldErrorCount8 = leTextFieldWidget_New();
    ErrorLog_TextFieldErrorCount8->fn->setPosition(ErrorLog_TextFieldErrorCount8, 305, 200);
    ErrorLog_TextFieldErrorCount8->fn->setScheme(ErrorLog_TextFieldErrorCount8, &BackgroundScheme);
    ErrorLog_TextFieldErrorCount8->fn->setBackgroundType(ErrorLog_TextFieldErrorCount8, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_TextFieldErrorCount8->fn->setBorderType(ErrorLog_TextFieldErrorCount8, LE_WIDGET_BORDER_NONE);
    ErrorLog_TextFieldErrorCount8->fn->setHAlignment(ErrorLog_TextFieldErrorCount8, LE_HALIGN_LEFT);
    ErrorLog_TextFieldErrorCount8->fn->setString(ErrorLog_TextFieldErrorCount8, (leString*)&string_ErrorCodeCount255);
    ErrorLog_TextFieldErrorCount8->fn->setClearValueOnFirstEdit(ErrorLog_TextFieldErrorCount8, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_TextFieldErrorCount8);

    ErrorLog_LabelErrorLog8 = leLabelWidget_New();
    ErrorLog_LabelErrorLog8->fn->setPosition(ErrorLog_LabelErrorLog8, 30, 200);
    ErrorLog_LabelErrorLog8->fn->setSize(ErrorLog_LabelErrorLog8, 300, 25);
    ErrorLog_LabelErrorLog8->fn->setScheme(ErrorLog_LabelErrorLog8, &BackgroundScheme);
    ErrorLog_LabelErrorLog8->fn->setBackgroundType(ErrorLog_LabelErrorLog8, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorLog8->fn->setString(ErrorLog_LabelErrorLog8, (leString*)&string_Error08);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorLog8);

    ErrorLog_TextFieldErrorCount16 = leTextFieldWidget_New();
    ErrorLog_TextFieldErrorCount16->fn->setPosition(ErrorLog_TextFieldErrorCount16, 305, 225);
    ErrorLog_TextFieldErrorCount16->fn->setScheme(ErrorLog_TextFieldErrorCount16, &BackgroundScheme);
    ErrorLog_TextFieldErrorCount16->fn->setBackgroundType(ErrorLog_TextFieldErrorCount16, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_TextFieldErrorCount16->fn->setBorderType(ErrorLog_TextFieldErrorCount16, LE_WIDGET_BORDER_NONE);
    ErrorLog_TextFieldErrorCount16->fn->setHAlignment(ErrorLog_TextFieldErrorCount16, LE_HALIGN_LEFT);
    ErrorLog_TextFieldErrorCount16->fn->setString(ErrorLog_TextFieldErrorCount16, (leString*)&string_ErrorCodeCount255);
    ErrorLog_TextFieldErrorCount16->fn->setClearValueOnFirstEdit(ErrorLog_TextFieldErrorCount16, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_TextFieldErrorCount16);

    ErrorLog_LabelErrorLog16 = leLabelWidget_New();
    ErrorLog_LabelErrorLog16->fn->setPosition(ErrorLog_LabelErrorLog16, 30, 225);
    ErrorLog_LabelErrorLog16->fn->setSize(ErrorLog_LabelErrorLog16, 300, 25);
    ErrorLog_LabelErrorLog16->fn->setScheme(ErrorLog_LabelErrorLog16, &BackgroundScheme);
    ErrorLog_LabelErrorLog16->fn->setBackgroundType(ErrorLog_LabelErrorLog16, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_LabelErrorLog16->fn->setString(ErrorLog_LabelErrorLog16, (leString*)&string_Error16);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_LabelErrorLog16);

    ErrorLog_ImageWidget0 = leImageWidget_New();
    ErrorLog_ImageWidget0->fn->setPosition(ErrorLog_ImageWidget0, 5, 5);
    ErrorLog_ImageWidget0->fn->setSize(ErrorLog_ImageWidget0, 40, 40);
    ErrorLog_ImageWidget0->fn->setScheme(ErrorLog_ImageWidget0, &BackgroundScheme);
    ErrorLog_ImageWidget0->fn->setBackgroundType(ErrorLog_ImageWidget0, LE_WIDGET_BACKGROUND_NONE);
    ErrorLog_ImageWidget0->fn->setBorderType(ErrorLog_ImageWidget0, LE_WIDGET_BORDER_NONE);
    ErrorLog_ImageWidget0->fn->setImage(ErrorLog_ImageWidget0, (leImage*)&gear);
    root0->fn->addChild(root0, (leWidget*)ErrorLog_ImageWidget0);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    ErrorLog_PanelWidget0 = leWidget_New();
    ErrorLog_PanelWidget0->fn->setPosition(ErrorLog_PanelWidget0, 374, 167);
    ErrorLog_PanelWidget0->fn->setEnabled(ErrorLog_PanelWidget0, LE_FALSE);
    ErrorLog_PanelWidget0->fn->setVisible(ErrorLog_PanelWidget0, LE_FALSE);
    ErrorLog_PanelWidget0->fn->setScheme(ErrorLog_PanelWidget0, &ClearScheme);
    root1->fn->addChild(root1, (leWidget*)ErrorLog_PanelWidget0);

    ErrorLog_ButtonBack = leButtonWidget_New();
    ErrorLog_ButtonBack->fn->setPosition(ErrorLog_ButtonBack, 431, 4);
    ErrorLog_ButtonBack->fn->setSize(ErrorLog_ButtonBack, 45, 45);
    ErrorLog_ButtonBack->fn->setScheme(ErrorLog_ButtonBack, &BackgroundScheme);
    ErrorLog_ButtonBack->fn->setBorderType(ErrorLog_ButtonBack, LE_WIDGET_BORDER_NONE);
    ErrorLog_ButtonBack->fn->setPressedImage(ErrorLog_ButtonBack, (leImage*)&ICON_goBackActive);
    ErrorLog_ButtonBack->fn->setReleasedImage(ErrorLog_ButtonBack, (leImage*)&ICON_goBackInactive);
    ErrorLog_ButtonBack->fn->setPressedEventCallback(ErrorLog_ButtonBack, event_ErrorLog_ButtonBack_OnPressed);
    ErrorLog_ButtonBack->fn->setReleasedEventCallback(ErrorLog_ButtonBack, event_ErrorLog_ButtonBack_OnReleased);
    root1->fn->addChild(root1, (leWidget*)ErrorLog_ButtonBack);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    ErrorLog_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ErrorLog(void)
{
}

void screenHide_ErrorLog(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ErrorLog_Layer0_FillPanel = NULL;
    ErrorLog_LabelErrorList = NULL;
    ErrorLog_TextFieldErrorCount1 = NULL;
    ErrorLog_LabelErrorLog1 = NULL;
    ErrorLog_TextFieldErrorCount2 = NULL;
    ErrorLog_LabelErrorLog2 = NULL;
    ErrorLog_TextFieldErrorCount3 = NULL;
    ErrorLog_LabelErrorLog3 = NULL;
    ErrorLog_TextFieldErrorCount4 = NULL;
    ErrorLog_LabelErrorLog4 = NULL;
    ErrorLog_TextFieldErrorCount6 = NULL;
    ErrorLog_LabelErrorLog6 = NULL;
    ErrorLog_TextFieldErrorCount7 = NULL;
    ErrorLog_LabelErrorLog7 = NULL;
    ErrorLog_TextFieldErrorCount8 = NULL;
    ErrorLog_LabelErrorLog8 = NULL;
    ErrorLog_TextFieldErrorCount16 = NULL;
    ErrorLog_LabelErrorLog16 = NULL;
    ErrorLog_ImageWidget0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    ErrorLog_PanelWidget0 = NULL;
    ErrorLog_ButtonBack = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ErrorLog(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ErrorLog(uint32_t lyrIdx)
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

