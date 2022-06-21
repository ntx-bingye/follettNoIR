#include "gfx/legato/generated/screen/le_gen_screen_ViewErrorLog.h"

// screen member widget declarations
leWidget* root0;

leWidget* ViewErrorLog_Layer0_FillPanel;
leLabelWidget* ViewErrorLog_LabelErrorList;
leButtonWidget* ViewErrorLog_ButtonBack;
leTextFieldWidget* ViewErrorLog_TextFieldErrorCount1;
leLabelWidget* ViewErrorLog_LabelErrorLog1;
leTextFieldWidget* ViewErrorLog_TextFieldErrorCount2;
leLabelWidget* ViewErrorLog_LabelErrorLog2;
leTextFieldWidget* ViewErrorLog_TextFieldErrorCount3;
leLabelWidget* ViewErrorLog_LabelErrorLog3;
leTextFieldWidget* ViewErrorLog_TextFieldErrorCount4;
leLabelWidget* ViewErrorLog_LabelErrorLog4;
leTextFieldWidget* ViewErrorLog_TextFieldErrorCount6;
leLabelWidget* ViewErrorLog_LabelErrorLog6;
leTextFieldWidget* ViewErrorLog_TextFieldErrorCount7;
leLabelWidget* ViewErrorLog_LabelErrorLog7;
leTextFieldWidget* ViewErrorLog_TextFieldErrorCount8;
leLabelWidget* ViewErrorLog_LabelErrorLog8;
leTextFieldWidget* ViewErrorLog_TextFieldErrorCount16;
leLabelWidget* ViewErrorLog_LabelErrorLog16;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_ViewErrorLog(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_ViewErrorLog(void)
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

    ViewErrorLog_Layer0_FillPanel = leWidget_New();
    ViewErrorLog_Layer0_FillPanel->fn->setPosition(ViewErrorLog_Layer0_FillPanel, 0, 0);
    ViewErrorLog_Layer0_FillPanel->fn->setSize(ViewErrorLog_Layer0_FillPanel, 480, 272);
    ViewErrorLog_Layer0_FillPanel->fn->setScheme(ViewErrorLog_Layer0_FillPanel, &BackgroundScheme);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_Layer0_FillPanel);

    ViewErrorLog_LabelErrorList = leLabelWidget_New();
    ViewErrorLog_LabelErrorList->fn->setPosition(ViewErrorLog_LabelErrorList, 16, 16);
    ViewErrorLog_LabelErrorList->fn->setScheme(ViewErrorLog_LabelErrorList, &BackgroundScheme);
    ViewErrorLog_LabelErrorList->fn->setBackgroundType(ViewErrorLog_LabelErrorList, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorList->fn->setString(ViewErrorLog_LabelErrorList, (leString*)&string_ErrorLogView);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorList);

    ViewErrorLog_ButtonBack = leButtonWidget_New();
    ViewErrorLog_ButtonBack->fn->setPosition(ViewErrorLog_ButtonBack, 431, 4);
    ViewErrorLog_ButtonBack->fn->setSize(ViewErrorLog_ButtonBack, 45, 45);
    ViewErrorLog_ButtonBack->fn->setScheme(ViewErrorLog_ButtonBack, &BackgroundScheme);
    ViewErrorLog_ButtonBack->fn->setBackgroundType(ViewErrorLog_ButtonBack, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_ButtonBack->fn->setBorderType(ViewErrorLog_ButtonBack, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_ButtonBack->fn->setPressedImage(ViewErrorLog_ButtonBack, (leImage*)&ICON_goBackActive);
    ViewErrorLog_ButtonBack->fn->setReleasedImage(ViewErrorLog_ButtonBack, (leImage*)&ICON_goBackInactive);
    ViewErrorLog_ButtonBack->fn->setPressedEventCallback(ViewErrorLog_ButtonBack, event_ViewErrorLog_ButtonBack_OnPressed);
    ViewErrorLog_ButtonBack->fn->setReleasedEventCallback(ViewErrorLog_ButtonBack, event_ViewErrorLog_ButtonBack_OnReleased);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_ButtonBack);

    ViewErrorLog_TextFieldErrorCount1 = leTextFieldWidget_New();
    ViewErrorLog_TextFieldErrorCount1->fn->setPosition(ViewErrorLog_TextFieldErrorCount1, 225, 50);
    ViewErrorLog_TextFieldErrorCount1->fn->setSize(ViewErrorLog_TextFieldErrorCount1, 40, 25);
    ViewErrorLog_TextFieldErrorCount1->fn->setScheme(ViewErrorLog_TextFieldErrorCount1, &BackgroundScheme);
    ViewErrorLog_TextFieldErrorCount1->fn->setBackgroundType(ViewErrorLog_TextFieldErrorCount1, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_TextFieldErrorCount1->fn->setBorderType(ViewErrorLog_TextFieldErrorCount1, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_TextFieldErrorCount1->fn->setHAlignment(ViewErrorLog_TextFieldErrorCount1, LE_HALIGN_LEFT);
    ViewErrorLog_TextFieldErrorCount1->fn->setString(ViewErrorLog_TextFieldErrorCount1, (leString*)&string_ErrorCodeCount255);
    ViewErrorLog_TextFieldErrorCount1->fn->setClearValueOnFirstEdit(ViewErrorLog_TextFieldErrorCount1, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_TextFieldErrorCount1);

    ViewErrorLog_LabelErrorLog1 = leLabelWidget_New();
    ViewErrorLog_LabelErrorLog1->fn->setPosition(ViewErrorLog_LabelErrorLog1, 60, 50);
    ViewErrorLog_LabelErrorLog1->fn->setSize(ViewErrorLog_LabelErrorLog1, 160, 25);
    ViewErrorLog_LabelErrorLog1->fn->setScheme(ViewErrorLog_LabelErrorLog1, &BackgroundScheme);
    ViewErrorLog_LabelErrorLog1->fn->setBackgroundType(ViewErrorLog_LabelErrorLog1, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorLog1->fn->setString(ViewErrorLog_LabelErrorLog1, (leString*)&string_Error01);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorLog1);

    ViewErrorLog_TextFieldErrorCount2 = leTextFieldWidget_New();
    ViewErrorLog_TextFieldErrorCount2->fn->setPosition(ViewErrorLog_TextFieldErrorCount2, 225, 75);
    ViewErrorLog_TextFieldErrorCount2->fn->setSize(ViewErrorLog_TextFieldErrorCount2, 40, 25);
    ViewErrorLog_TextFieldErrorCount2->fn->setScheme(ViewErrorLog_TextFieldErrorCount2, &BackgroundScheme);
    ViewErrorLog_TextFieldErrorCount2->fn->setBackgroundType(ViewErrorLog_TextFieldErrorCount2, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_TextFieldErrorCount2->fn->setBorderType(ViewErrorLog_TextFieldErrorCount2, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_TextFieldErrorCount2->fn->setHAlignment(ViewErrorLog_TextFieldErrorCount2, LE_HALIGN_LEFT);
    ViewErrorLog_TextFieldErrorCount2->fn->setString(ViewErrorLog_TextFieldErrorCount2, (leString*)&string_ErrorCodeCount255);
    ViewErrorLog_TextFieldErrorCount2->fn->setClearValueOnFirstEdit(ViewErrorLog_TextFieldErrorCount2, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_TextFieldErrorCount2);

    ViewErrorLog_LabelErrorLog2 = leLabelWidget_New();
    ViewErrorLog_LabelErrorLog2->fn->setPosition(ViewErrorLog_LabelErrorLog2, 60, 75);
    ViewErrorLog_LabelErrorLog2->fn->setSize(ViewErrorLog_LabelErrorLog2, 160, 25);
    ViewErrorLog_LabelErrorLog2->fn->setScheme(ViewErrorLog_LabelErrorLog2, &BackgroundScheme);
    ViewErrorLog_LabelErrorLog2->fn->setBackgroundType(ViewErrorLog_LabelErrorLog2, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorLog2->fn->setString(ViewErrorLog_LabelErrorLog2, (leString*)&string_Error02);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorLog2);

    ViewErrorLog_TextFieldErrorCount3 = leTextFieldWidget_New();
    ViewErrorLog_TextFieldErrorCount3->fn->setPosition(ViewErrorLog_TextFieldErrorCount3, 225, 100);
    ViewErrorLog_TextFieldErrorCount3->fn->setSize(ViewErrorLog_TextFieldErrorCount3, 40, 25);
    ViewErrorLog_TextFieldErrorCount3->fn->setScheme(ViewErrorLog_TextFieldErrorCount3, &BackgroundScheme);
    ViewErrorLog_TextFieldErrorCount3->fn->setBackgroundType(ViewErrorLog_TextFieldErrorCount3, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_TextFieldErrorCount3->fn->setBorderType(ViewErrorLog_TextFieldErrorCount3, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_TextFieldErrorCount3->fn->setHAlignment(ViewErrorLog_TextFieldErrorCount3, LE_HALIGN_LEFT);
    ViewErrorLog_TextFieldErrorCount3->fn->setString(ViewErrorLog_TextFieldErrorCount3, (leString*)&string_ErrorCodeCount255);
    ViewErrorLog_TextFieldErrorCount3->fn->setClearValueOnFirstEdit(ViewErrorLog_TextFieldErrorCount3, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_TextFieldErrorCount3);

    ViewErrorLog_LabelErrorLog3 = leLabelWidget_New();
    ViewErrorLog_LabelErrorLog3->fn->setPosition(ViewErrorLog_LabelErrorLog3, 60, 100);
    ViewErrorLog_LabelErrorLog3->fn->setSize(ViewErrorLog_LabelErrorLog3, 160, 25);
    ViewErrorLog_LabelErrorLog3->fn->setScheme(ViewErrorLog_LabelErrorLog3, &BackgroundScheme);
    ViewErrorLog_LabelErrorLog3->fn->setBackgroundType(ViewErrorLog_LabelErrorLog3, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorLog3->fn->setString(ViewErrorLog_LabelErrorLog3, (leString*)&string_Error03);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorLog3);

    ViewErrorLog_TextFieldErrorCount4 = leTextFieldWidget_New();
    ViewErrorLog_TextFieldErrorCount4->fn->setPosition(ViewErrorLog_TextFieldErrorCount4, 225, 125);
    ViewErrorLog_TextFieldErrorCount4->fn->setSize(ViewErrorLog_TextFieldErrorCount4, 40, 25);
    ViewErrorLog_TextFieldErrorCount4->fn->setScheme(ViewErrorLog_TextFieldErrorCount4, &BackgroundScheme);
    ViewErrorLog_TextFieldErrorCount4->fn->setBackgroundType(ViewErrorLog_TextFieldErrorCount4, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_TextFieldErrorCount4->fn->setBorderType(ViewErrorLog_TextFieldErrorCount4, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_TextFieldErrorCount4->fn->setHAlignment(ViewErrorLog_TextFieldErrorCount4, LE_HALIGN_LEFT);
    ViewErrorLog_TextFieldErrorCount4->fn->setString(ViewErrorLog_TextFieldErrorCount4, (leString*)&string_ErrorCodeCount255);
    ViewErrorLog_TextFieldErrorCount4->fn->setClearValueOnFirstEdit(ViewErrorLog_TextFieldErrorCount4, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_TextFieldErrorCount4);

    ViewErrorLog_LabelErrorLog4 = leLabelWidget_New();
    ViewErrorLog_LabelErrorLog4->fn->setPosition(ViewErrorLog_LabelErrorLog4, 60, 125);
    ViewErrorLog_LabelErrorLog4->fn->setSize(ViewErrorLog_LabelErrorLog4, 160, 25);
    ViewErrorLog_LabelErrorLog4->fn->setScheme(ViewErrorLog_LabelErrorLog4, &BackgroundScheme);
    ViewErrorLog_LabelErrorLog4->fn->setBackgroundType(ViewErrorLog_LabelErrorLog4, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorLog4->fn->setString(ViewErrorLog_LabelErrorLog4, (leString*)&string_Error04);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorLog4);

    ViewErrorLog_TextFieldErrorCount6 = leTextFieldWidget_New();
    ViewErrorLog_TextFieldErrorCount6->fn->setPosition(ViewErrorLog_TextFieldErrorCount6, 225, 150);
    ViewErrorLog_TextFieldErrorCount6->fn->setSize(ViewErrorLog_TextFieldErrorCount6, 40, 25);
    ViewErrorLog_TextFieldErrorCount6->fn->setScheme(ViewErrorLog_TextFieldErrorCount6, &BackgroundScheme);
    ViewErrorLog_TextFieldErrorCount6->fn->setBackgroundType(ViewErrorLog_TextFieldErrorCount6, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_TextFieldErrorCount6->fn->setBorderType(ViewErrorLog_TextFieldErrorCount6, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_TextFieldErrorCount6->fn->setHAlignment(ViewErrorLog_TextFieldErrorCount6, LE_HALIGN_LEFT);
    ViewErrorLog_TextFieldErrorCount6->fn->setString(ViewErrorLog_TextFieldErrorCount6, (leString*)&string_ErrorCodeCount255);
    ViewErrorLog_TextFieldErrorCount6->fn->setClearValueOnFirstEdit(ViewErrorLog_TextFieldErrorCount6, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_TextFieldErrorCount6);

    ViewErrorLog_LabelErrorLog6 = leLabelWidget_New();
    ViewErrorLog_LabelErrorLog6->fn->setPosition(ViewErrorLog_LabelErrorLog6, 60, 150);
    ViewErrorLog_LabelErrorLog6->fn->setSize(ViewErrorLog_LabelErrorLog6, 160, 25);
    ViewErrorLog_LabelErrorLog6->fn->setScheme(ViewErrorLog_LabelErrorLog6, &BackgroundScheme);
    ViewErrorLog_LabelErrorLog6->fn->setBackgroundType(ViewErrorLog_LabelErrorLog6, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorLog6->fn->setString(ViewErrorLog_LabelErrorLog6, (leString*)&string_Error06);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorLog6);

    ViewErrorLog_TextFieldErrorCount7 = leTextFieldWidget_New();
    ViewErrorLog_TextFieldErrorCount7->fn->setPosition(ViewErrorLog_TextFieldErrorCount7, 225, 175);
    ViewErrorLog_TextFieldErrorCount7->fn->setSize(ViewErrorLog_TextFieldErrorCount7, 40, 25);
    ViewErrorLog_TextFieldErrorCount7->fn->setScheme(ViewErrorLog_TextFieldErrorCount7, &BackgroundScheme);
    ViewErrorLog_TextFieldErrorCount7->fn->setBackgroundType(ViewErrorLog_TextFieldErrorCount7, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_TextFieldErrorCount7->fn->setBorderType(ViewErrorLog_TextFieldErrorCount7, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_TextFieldErrorCount7->fn->setHAlignment(ViewErrorLog_TextFieldErrorCount7, LE_HALIGN_LEFT);
    ViewErrorLog_TextFieldErrorCount7->fn->setString(ViewErrorLog_TextFieldErrorCount7, (leString*)&string_ErrorCodeCount255);
    ViewErrorLog_TextFieldErrorCount7->fn->setClearValueOnFirstEdit(ViewErrorLog_TextFieldErrorCount7, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_TextFieldErrorCount7);

    ViewErrorLog_LabelErrorLog7 = leLabelWidget_New();
    ViewErrorLog_LabelErrorLog7->fn->setPosition(ViewErrorLog_LabelErrorLog7, 60, 175);
    ViewErrorLog_LabelErrorLog7->fn->setSize(ViewErrorLog_LabelErrorLog7, 160, 25);
    ViewErrorLog_LabelErrorLog7->fn->setScheme(ViewErrorLog_LabelErrorLog7, &BackgroundScheme);
    ViewErrorLog_LabelErrorLog7->fn->setBackgroundType(ViewErrorLog_LabelErrorLog7, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorLog7->fn->setString(ViewErrorLog_LabelErrorLog7, (leString*)&string_Error07);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorLog7);

    ViewErrorLog_TextFieldErrorCount8 = leTextFieldWidget_New();
    ViewErrorLog_TextFieldErrorCount8->fn->setPosition(ViewErrorLog_TextFieldErrorCount8, 225, 200);
    ViewErrorLog_TextFieldErrorCount8->fn->setSize(ViewErrorLog_TextFieldErrorCount8, 40, 25);
    ViewErrorLog_TextFieldErrorCount8->fn->setScheme(ViewErrorLog_TextFieldErrorCount8, &BackgroundScheme);
    ViewErrorLog_TextFieldErrorCount8->fn->setBackgroundType(ViewErrorLog_TextFieldErrorCount8, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_TextFieldErrorCount8->fn->setBorderType(ViewErrorLog_TextFieldErrorCount8, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_TextFieldErrorCount8->fn->setHAlignment(ViewErrorLog_TextFieldErrorCount8, LE_HALIGN_LEFT);
    ViewErrorLog_TextFieldErrorCount8->fn->setString(ViewErrorLog_TextFieldErrorCount8, (leString*)&string_ErrorCodeCount255);
    ViewErrorLog_TextFieldErrorCount8->fn->setClearValueOnFirstEdit(ViewErrorLog_TextFieldErrorCount8, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_TextFieldErrorCount8);

    ViewErrorLog_LabelErrorLog8 = leLabelWidget_New();
    ViewErrorLog_LabelErrorLog8->fn->setPosition(ViewErrorLog_LabelErrorLog8, 60, 200);
    ViewErrorLog_LabelErrorLog8->fn->setSize(ViewErrorLog_LabelErrorLog8, 160, 25);
    ViewErrorLog_LabelErrorLog8->fn->setScheme(ViewErrorLog_LabelErrorLog8, &BackgroundScheme);
    ViewErrorLog_LabelErrorLog8->fn->setBackgroundType(ViewErrorLog_LabelErrorLog8, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorLog8->fn->setString(ViewErrorLog_LabelErrorLog8, (leString*)&string_Error08);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorLog8);

    ViewErrorLog_TextFieldErrorCount16 = leTextFieldWidget_New();
    ViewErrorLog_TextFieldErrorCount16->fn->setPosition(ViewErrorLog_TextFieldErrorCount16, 225, 225);
    ViewErrorLog_TextFieldErrorCount16->fn->setSize(ViewErrorLog_TextFieldErrorCount16, 40, 25);
    ViewErrorLog_TextFieldErrorCount16->fn->setScheme(ViewErrorLog_TextFieldErrorCount16, &BackgroundScheme);
    ViewErrorLog_TextFieldErrorCount16->fn->setBackgroundType(ViewErrorLog_TextFieldErrorCount16, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_TextFieldErrorCount16->fn->setBorderType(ViewErrorLog_TextFieldErrorCount16, LE_WIDGET_BORDER_NONE);
    ViewErrorLog_TextFieldErrorCount16->fn->setHAlignment(ViewErrorLog_TextFieldErrorCount16, LE_HALIGN_LEFT);
    ViewErrorLog_TextFieldErrorCount16->fn->setString(ViewErrorLog_TextFieldErrorCount16, (leString*)&string_ErrorCodeCount255);
    ViewErrorLog_TextFieldErrorCount16->fn->setClearValueOnFirstEdit(ViewErrorLog_TextFieldErrorCount16, LE_FALSE);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_TextFieldErrorCount16);

    ViewErrorLog_LabelErrorLog16 = leLabelWidget_New();
    ViewErrorLog_LabelErrorLog16->fn->setPosition(ViewErrorLog_LabelErrorLog16, 60, 225);
    ViewErrorLog_LabelErrorLog16->fn->setSize(ViewErrorLog_LabelErrorLog16, 160, 25);
    ViewErrorLog_LabelErrorLog16->fn->setScheme(ViewErrorLog_LabelErrorLog16, &BackgroundScheme);
    ViewErrorLog_LabelErrorLog16->fn->setBackgroundType(ViewErrorLog_LabelErrorLog16, LE_WIDGET_BACKGROUND_NONE);
    ViewErrorLog_LabelErrorLog16->fn->setString(ViewErrorLog_LabelErrorLog16, (leString*)&string_Error16);
    root0->fn->addChild(root0, (leWidget*)ViewErrorLog_LabelErrorLog16);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_ViewErrorLog(void)
{
}

void screenHide_ViewErrorLog(void)
{

    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    ViewErrorLog_Layer0_FillPanel = NULL;
    ViewErrorLog_LabelErrorList = NULL;
    ViewErrorLog_ButtonBack = NULL;
    ViewErrorLog_TextFieldErrorCount1 = NULL;
    ViewErrorLog_LabelErrorLog1 = NULL;
    ViewErrorLog_TextFieldErrorCount2 = NULL;
    ViewErrorLog_LabelErrorLog2 = NULL;
    ViewErrorLog_TextFieldErrorCount3 = NULL;
    ViewErrorLog_LabelErrorLog3 = NULL;
    ViewErrorLog_TextFieldErrorCount4 = NULL;
    ViewErrorLog_LabelErrorLog4 = NULL;
    ViewErrorLog_TextFieldErrorCount6 = NULL;
    ViewErrorLog_LabelErrorLog6 = NULL;
    ViewErrorLog_TextFieldErrorCount7 = NULL;
    ViewErrorLog_LabelErrorLog7 = NULL;
    ViewErrorLog_TextFieldErrorCount8 = NULL;
    ViewErrorLog_LabelErrorLog8 = NULL;
    ViewErrorLog_TextFieldErrorCount16 = NULL;
    ViewErrorLog_LabelErrorLog16 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_ViewErrorLog(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_ViewErrorLog(uint32_t lyrIdx)
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

