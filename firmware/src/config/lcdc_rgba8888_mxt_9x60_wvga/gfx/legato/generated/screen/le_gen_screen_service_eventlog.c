#include "gfx/legato/generated/screen/le_gen_screen_service_eventlog.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_eventlog_Layer_0_FillPanel;
leWidget* service_eventlog_PanelPage1;
leWidget* service_eventlog_PanelPage2;
leLabelWidget* service_eventlog_LblEvent;
leLabelWidget* service_eventlog_LblStartTime;
leButtonWidget* service_eventlog_BtnHome;
leButtonWidget* service_eventlog_BtnExit;
leButtonWidget* service_eventlog_BtnClear;
leLabelWidget* service_eventlog_LblEvent1;
leLabelWidget* service_eventlog_LblTime1;
leLabelWidget* service_eventlog_LblEvent2;
leLabelWidget* service_eventlog_LblTime2;
leLabelWidget* service_eventlog_LblEvent3;
leLabelWidget* service_eventlog_LblTime3;
leLabelWidget* service_eventlog_LblEvent4;
leLabelWidget* service_eventlog_LblTime4;
leLabelWidget* service_eventlog_LblEvent5;
leLabelWidget* service_eventlog_LblTime5;
leLabelWidget* service_eventlog_LblEvent6;
leLabelWidget* service_eventlog_LblTime6;
leButtonWidget* service_eventlog_BtnDown;
leLabelWidget* service_eventlog_LblEvent7;
leLabelWidget* service_eventlog_LblTime7;
leLabelWidget* service_eventlog_LblEvent8;
leLabelWidget* service_eventlog_LblTime8;
leLabelWidget* service_eventlog_LblEvent9;
leLabelWidget* service_eventlog_LblTime9;
leLabelWidget* service_eventlog_LblEvent10;
leLabelWidget* service_eventlog_LblTime10;
leLabelWidget* service_eventlog_LblEvent11;
leLabelWidget* service_eventlog_LblTime11;
leLabelWidget* service_eventlog_LblEvent12;
leLabelWidget* service_eventlog_LblTime12;
leButtonWidget* service_eventlog_BtnUp;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_eventlog(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_eventlog(void)
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

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_eventlog_Layer_0_FillPanel = leWidget_New();
    service_eventlog_Layer_0_FillPanel->fn->setPosition(service_eventlog_Layer_0_FillPanel, 0, 0);
    service_eventlog_Layer_0_FillPanel->fn->setSize(service_eventlog_Layer_0_FillPanel, 480, 272);
    service_eventlog_Layer_0_FillPanel->fn->setScheme(service_eventlog_Layer_0_FillPanel, &Panel_Gray3);
    root1->fn->addChild(root1, (leWidget*)service_eventlog_Layer_0_FillPanel);

    service_eventlog_PanelPage1 = leWidget_New();
    service_eventlog_PanelPage1->fn->setPosition(service_eventlog_PanelPage1, 0, 44);
    service_eventlog_PanelPage1->fn->setSize(service_eventlog_PanelPage1, 480, 228);
    service_eventlog_PanelPage1->fn->setScheme(service_eventlog_PanelPage1, &BlackBack);
    service_eventlog_PanelPage1->fn->setBackgroundType(service_eventlog_PanelPage1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)service_eventlog_PanelPage1);

    service_eventlog_LblEvent1 = leLabelWidget_New();
    service_eventlog_LblEvent1->fn->setPosition(service_eventlog_LblEvent1, 0, 0);
    service_eventlog_LblEvent1->fn->setSize(service_eventlog_LblEvent1, 148, 38);
    service_eventlog_LblEvent1->fn->setScheme(service_eventlog_LblEvent1, &Label_Gray2A);
    service_eventlog_LblEvent1->fn->setBorderType(service_eventlog_LblEvent1, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent1->fn->setString(service_eventlog_LblEvent1, (leString*)&string_Event);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblEvent1);

    service_eventlog_LblTime1 = leLabelWidget_New();
    service_eventlog_LblTime1->fn->setPosition(service_eventlog_LblTime1, 148, 0);
    service_eventlog_LblTime1->fn->setSize(service_eventlog_LblTime1, 278, 38);
    service_eventlog_LblTime1->fn->setScheme(service_eventlog_LblTime1, &Label_Gray2A);
    service_eventlog_LblTime1->fn->setBorderType(service_eventlog_LblTime1, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime1->fn->setString(service_eventlog_LblTime1, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblTime1);

    service_eventlog_LblEvent2 = leLabelWidget_New();
    service_eventlog_LblEvent2->fn->setPosition(service_eventlog_LblEvent2, 0, 38);
    service_eventlog_LblEvent2->fn->setSize(service_eventlog_LblEvent2, 148, 38);
    service_eventlog_LblEvent2->fn->setScheme(service_eventlog_LblEvent2, &Label_Gray2A);
    service_eventlog_LblEvent2->fn->setBorderType(service_eventlog_LblEvent2, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent2->fn->setString(service_eventlog_LblEvent2, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblEvent2);

    service_eventlog_LblTime2 = leLabelWidget_New();
    service_eventlog_LblTime2->fn->setPosition(service_eventlog_LblTime2, 148, 38);
    service_eventlog_LblTime2->fn->setSize(service_eventlog_LblTime2, 278, 38);
    service_eventlog_LblTime2->fn->setScheme(service_eventlog_LblTime2, &Label_Gray2A);
    service_eventlog_LblTime2->fn->setBorderType(service_eventlog_LblTime2, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime2->fn->setString(service_eventlog_LblTime2, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblTime2);

    service_eventlog_LblEvent3 = leLabelWidget_New();
    service_eventlog_LblEvent3->fn->setPosition(service_eventlog_LblEvent3, 0, 76);
    service_eventlog_LblEvent3->fn->setSize(service_eventlog_LblEvent3, 148, 38);
    service_eventlog_LblEvent3->fn->setScheme(service_eventlog_LblEvent3, &Label_Gray2A);
    service_eventlog_LblEvent3->fn->setBorderType(service_eventlog_LblEvent3, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent3->fn->setString(service_eventlog_LblEvent3, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblEvent3);

    service_eventlog_LblTime3 = leLabelWidget_New();
    service_eventlog_LblTime3->fn->setPosition(service_eventlog_LblTime3, 148, 76);
    service_eventlog_LblTime3->fn->setSize(service_eventlog_LblTime3, 278, 38);
    service_eventlog_LblTime3->fn->setScheme(service_eventlog_LblTime3, &Label_Gray2A);
    service_eventlog_LblTime3->fn->setBorderType(service_eventlog_LblTime3, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime3->fn->setString(service_eventlog_LblTime3, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblTime3);

    service_eventlog_LblEvent4 = leLabelWidget_New();
    service_eventlog_LblEvent4->fn->setPosition(service_eventlog_LblEvent4, 0, 114);
    service_eventlog_LblEvent4->fn->setSize(service_eventlog_LblEvent4, 148, 38);
    service_eventlog_LblEvent4->fn->setScheme(service_eventlog_LblEvent4, &Label_Gray2A);
    service_eventlog_LblEvent4->fn->setBorderType(service_eventlog_LblEvent4, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent4->fn->setString(service_eventlog_LblEvent4, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblEvent4);

    service_eventlog_LblTime4 = leLabelWidget_New();
    service_eventlog_LblTime4->fn->setPosition(service_eventlog_LblTime4, 148, 114);
    service_eventlog_LblTime4->fn->setSize(service_eventlog_LblTime4, 278, 38);
    service_eventlog_LblTime4->fn->setScheme(service_eventlog_LblTime4, &Label_Gray2A);
    service_eventlog_LblTime4->fn->setBorderType(service_eventlog_LblTime4, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime4->fn->setString(service_eventlog_LblTime4, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblTime4);

    service_eventlog_LblEvent5 = leLabelWidget_New();
    service_eventlog_LblEvent5->fn->setPosition(service_eventlog_LblEvent5, 0, 152);
    service_eventlog_LblEvent5->fn->setSize(service_eventlog_LblEvent5, 148, 38);
    service_eventlog_LblEvent5->fn->setScheme(service_eventlog_LblEvent5, &Label_Gray2A);
    service_eventlog_LblEvent5->fn->setBorderType(service_eventlog_LblEvent5, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent5->fn->setString(service_eventlog_LblEvent5, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblEvent5);

    service_eventlog_LblTime5 = leLabelWidget_New();
    service_eventlog_LblTime5->fn->setPosition(service_eventlog_LblTime5, 148, 152);
    service_eventlog_LblTime5->fn->setSize(service_eventlog_LblTime5, 278, 38);
    service_eventlog_LblTime5->fn->setScheme(service_eventlog_LblTime5, &Label_Gray2A);
    service_eventlog_LblTime5->fn->setBorderType(service_eventlog_LblTime5, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime5->fn->setString(service_eventlog_LblTime5, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblTime5);

    service_eventlog_LblEvent6 = leLabelWidget_New();
    service_eventlog_LblEvent6->fn->setPosition(service_eventlog_LblEvent6, 0, 190);
    service_eventlog_LblEvent6->fn->setSize(service_eventlog_LblEvent6, 148, 38);
    service_eventlog_LblEvent6->fn->setScheme(service_eventlog_LblEvent6, &Label_Gray2A);
    service_eventlog_LblEvent6->fn->setBorderType(service_eventlog_LblEvent6, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent6->fn->setString(service_eventlog_LblEvent6, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblEvent6);

    service_eventlog_LblTime6 = leLabelWidget_New();
    service_eventlog_LblTime6->fn->setPosition(service_eventlog_LblTime6, 148, 190);
    service_eventlog_LblTime6->fn->setSize(service_eventlog_LblTime6, 278, 38);
    service_eventlog_LblTime6->fn->setScheme(service_eventlog_LblTime6, &Label_Gray2A);
    service_eventlog_LblTime6->fn->setBorderType(service_eventlog_LblTime6, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime6->fn->setString(service_eventlog_LblTime6, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_LblTime6);

    service_eventlog_BtnDown = leButtonWidget_New();
    service_eventlog_BtnDown->fn->setPosition(service_eventlog_BtnDown, 426, 120);
    service_eventlog_BtnDown->fn->setSize(service_eventlog_BtnDown, 49, 54);
    service_eventlog_BtnDown->fn->setScheme(service_eventlog_BtnDown, &BlackBack);
    service_eventlog_BtnDown->fn->setBackgroundType(service_eventlog_BtnDown, LE_WIDGET_BACKGROUND_NONE);
    service_eventlog_BtnDown->fn->setBorderType(service_eventlog_BtnDown, LE_WIDGET_BORDER_NONE);
    service_eventlog_BtnDown->fn->setPressedImage(service_eventlog_BtnDown, (leImage*)&Menu_down);
    service_eventlog_BtnDown->fn->setReleasedImage(service_eventlog_BtnDown, (leImage*)&Menu_down);
    service_eventlog_BtnDown->fn->setImagePosition(service_eventlog_BtnDown, LE_RELATIVE_POSITION_ABOVE);
    service_eventlog_BtnDown->fn->setReleasedEventCallback(service_eventlog_BtnDown, event_service_eventlog_BtnDown_OnReleased);
    service_eventlog_PanelPage1->fn->addChild(service_eventlog_PanelPage1, (leWidget*)service_eventlog_BtnDown);

    service_eventlog_PanelPage2 = leWidget_New();
    service_eventlog_PanelPage2->fn->setPosition(service_eventlog_PanelPage2, 0, 44);
    service_eventlog_PanelPage2->fn->setSize(service_eventlog_PanelPage2, 480, 228);
    service_eventlog_PanelPage2->fn->setEnabled(service_eventlog_PanelPage2, LE_FALSE);
    service_eventlog_PanelPage2->fn->setVisible(service_eventlog_PanelPage2, LE_FALSE);
    service_eventlog_PanelPage2->fn->setScheme(service_eventlog_PanelPage2, &BlackBack);
    service_eventlog_PanelPage2->fn->setBackgroundType(service_eventlog_PanelPage2, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)service_eventlog_PanelPage2);

    service_eventlog_LblEvent7 = leLabelWidget_New();
    service_eventlog_LblEvent7->fn->setPosition(service_eventlog_LblEvent7, 0, 0);
    service_eventlog_LblEvent7->fn->setSize(service_eventlog_LblEvent7, 148, 38);
    service_eventlog_LblEvent7->fn->setScheme(service_eventlog_LblEvent7, &Label_Gray2A);
    service_eventlog_LblEvent7->fn->setBorderType(service_eventlog_LblEvent7, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent7->fn->setString(service_eventlog_LblEvent7, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblEvent7);

    service_eventlog_LblTime7 = leLabelWidget_New();
    service_eventlog_LblTime7->fn->setPosition(service_eventlog_LblTime7, 148, 0);
    service_eventlog_LblTime7->fn->setSize(service_eventlog_LblTime7, 278, 38);
    service_eventlog_LblTime7->fn->setScheme(service_eventlog_LblTime7, &Label_Gray2A);
    service_eventlog_LblTime7->fn->setBorderType(service_eventlog_LblTime7, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime7->fn->setString(service_eventlog_LblTime7, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblTime7);

    service_eventlog_LblEvent8 = leLabelWidget_New();
    service_eventlog_LblEvent8->fn->setPosition(service_eventlog_LblEvent8, 0, 38);
    service_eventlog_LblEvent8->fn->setSize(service_eventlog_LblEvent8, 148, 38);
    service_eventlog_LblEvent8->fn->setScheme(service_eventlog_LblEvent8, &Label_Gray2A);
    service_eventlog_LblEvent8->fn->setBorderType(service_eventlog_LblEvent8, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent8->fn->setString(service_eventlog_LblEvent8, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblEvent8);

    service_eventlog_LblTime8 = leLabelWidget_New();
    service_eventlog_LblTime8->fn->setPosition(service_eventlog_LblTime8, 148, 38);
    service_eventlog_LblTime8->fn->setSize(service_eventlog_LblTime8, 278, 38);
    service_eventlog_LblTime8->fn->setScheme(service_eventlog_LblTime8, &Label_Gray2A);
    service_eventlog_LblTime8->fn->setBorderType(service_eventlog_LblTime8, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime8->fn->setString(service_eventlog_LblTime8, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblTime8);

    service_eventlog_LblEvent9 = leLabelWidget_New();
    service_eventlog_LblEvent9->fn->setPosition(service_eventlog_LblEvent9, 0, 76);
    service_eventlog_LblEvent9->fn->setSize(service_eventlog_LblEvent9, 148, 38);
    service_eventlog_LblEvent9->fn->setScheme(service_eventlog_LblEvent9, &Label_Gray2A);
    service_eventlog_LblEvent9->fn->setBorderType(service_eventlog_LblEvent9, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent9->fn->setString(service_eventlog_LblEvent9, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblEvent9);

    service_eventlog_LblTime9 = leLabelWidget_New();
    service_eventlog_LblTime9->fn->setPosition(service_eventlog_LblTime9, 148, 76);
    service_eventlog_LblTime9->fn->setSize(service_eventlog_LblTime9, 278, 38);
    service_eventlog_LblTime9->fn->setScheme(service_eventlog_LblTime9, &Label_Gray2A);
    service_eventlog_LblTime9->fn->setBorderType(service_eventlog_LblTime9, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime9->fn->setString(service_eventlog_LblTime9, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblTime9);

    service_eventlog_LblEvent10 = leLabelWidget_New();
    service_eventlog_LblEvent10->fn->setPosition(service_eventlog_LblEvent10, 0, 114);
    service_eventlog_LblEvent10->fn->setSize(service_eventlog_LblEvent10, 148, 38);
    service_eventlog_LblEvent10->fn->setScheme(service_eventlog_LblEvent10, &Label_Gray2A);
    service_eventlog_LblEvent10->fn->setBorderType(service_eventlog_LblEvent10, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent10->fn->setString(service_eventlog_LblEvent10, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblEvent10);

    service_eventlog_LblTime10 = leLabelWidget_New();
    service_eventlog_LblTime10->fn->setPosition(service_eventlog_LblTime10, 148, 114);
    service_eventlog_LblTime10->fn->setSize(service_eventlog_LblTime10, 278, 38);
    service_eventlog_LblTime10->fn->setScheme(service_eventlog_LblTime10, &Label_Gray2A);
    service_eventlog_LblTime10->fn->setBorderType(service_eventlog_LblTime10, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime10->fn->setString(service_eventlog_LblTime10, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblTime10);

    service_eventlog_LblEvent11 = leLabelWidget_New();
    service_eventlog_LblEvent11->fn->setPosition(service_eventlog_LblEvent11, 0, 152);
    service_eventlog_LblEvent11->fn->setSize(service_eventlog_LblEvent11, 148, 38);
    service_eventlog_LblEvent11->fn->setScheme(service_eventlog_LblEvent11, &Label_Gray2A);
    service_eventlog_LblEvent11->fn->setBorderType(service_eventlog_LblEvent11, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent11->fn->setString(service_eventlog_LblEvent11, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblEvent11);

    service_eventlog_LblTime11 = leLabelWidget_New();
    service_eventlog_LblTime11->fn->setPosition(service_eventlog_LblTime11, 148, 152);
    service_eventlog_LblTime11->fn->setSize(service_eventlog_LblTime11, 278, 38);
    service_eventlog_LblTime11->fn->setScheme(service_eventlog_LblTime11, &Label_Gray2A);
    service_eventlog_LblTime11->fn->setBorderType(service_eventlog_LblTime11, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime11->fn->setString(service_eventlog_LblTime11, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblTime11);

    service_eventlog_LblEvent12 = leLabelWidget_New();
    service_eventlog_LblEvent12->fn->setPosition(service_eventlog_LblEvent12, 0, 190);
    service_eventlog_LblEvent12->fn->setSize(service_eventlog_LblEvent12, 148, 38);
    service_eventlog_LblEvent12->fn->setScheme(service_eventlog_LblEvent12, &Label_Gray2A);
    service_eventlog_LblEvent12->fn->setBorderType(service_eventlog_LblEvent12, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent12->fn->setString(service_eventlog_LblEvent12, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblEvent12);

    service_eventlog_LblTime12 = leLabelWidget_New();
    service_eventlog_LblTime12->fn->setPosition(service_eventlog_LblTime12, 148, 190);
    service_eventlog_LblTime12->fn->setSize(service_eventlog_LblTime12, 278, 38);
    service_eventlog_LblTime12->fn->setScheme(service_eventlog_LblTime12, &Panel_Gray2A);
    service_eventlog_LblTime12->fn->setBorderType(service_eventlog_LblTime12, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblTime12->fn->setString(service_eventlog_LblTime12, (leString*)&string_EVENT_BLANK);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_LblTime12);

    service_eventlog_BtnUp = leButtonWidget_New();
    service_eventlog_BtnUp->fn->setPosition(service_eventlog_BtnUp, 427, 120);
    service_eventlog_BtnUp->fn->setSize(service_eventlog_BtnUp, 49, 54);
    service_eventlog_BtnUp->fn->setScheme(service_eventlog_BtnUp, &BlackBack);
    service_eventlog_BtnUp->fn->setBackgroundType(service_eventlog_BtnUp, LE_WIDGET_BACKGROUND_NONE);
    service_eventlog_BtnUp->fn->setBorderType(service_eventlog_BtnUp, LE_WIDGET_BORDER_NONE);
    service_eventlog_BtnUp->fn->setPressedImage(service_eventlog_BtnUp, (leImage*)&Menu_up);
    service_eventlog_BtnUp->fn->setReleasedImage(service_eventlog_BtnUp, (leImage*)&Menu_up);
    service_eventlog_BtnUp->fn->setImagePosition(service_eventlog_BtnUp, LE_RELATIVE_POSITION_ABOVE);
    service_eventlog_BtnUp->fn->setReleasedEventCallback(service_eventlog_BtnUp, event_service_eventlog_BtnUp_OnReleased);
    service_eventlog_PanelPage2->fn->addChild(service_eventlog_PanelPage2, (leWidget*)service_eventlog_BtnUp);

    service_eventlog_LblEvent = leLabelWidget_New();
    service_eventlog_LblEvent->fn->setPosition(service_eventlog_LblEvent, 0, 0);
    service_eventlog_LblEvent->fn->setSize(service_eventlog_LblEvent, 148, 44);
    service_eventlog_LblEvent->fn->setScheme(service_eventlog_LblEvent, &Label_Gray2A);
    service_eventlog_LblEvent->fn->setBorderType(service_eventlog_LblEvent, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblEvent->fn->setString(service_eventlog_LblEvent, (leString*)&string_SERVICE1_Event);
    root1->fn->addChild(root1, (leWidget*)service_eventlog_LblEvent);

    service_eventlog_LblStartTime = leLabelWidget_New();
    service_eventlog_LblStartTime->fn->setPosition(service_eventlog_LblStartTime, 148, 0);
    service_eventlog_LblStartTime->fn->setSize(service_eventlog_LblStartTime, 278, 44);
    service_eventlog_LblStartTime->fn->setScheme(service_eventlog_LblStartTime, &Label_Gray2A);
    service_eventlog_LblStartTime->fn->setBorderType(service_eventlog_LblStartTime, LE_WIDGET_BORDER_LINE);
    service_eventlog_LblStartTime->fn->setString(service_eventlog_LblStartTime, (leString*)&string_StartingTime);
    root1->fn->addChild(root1, (leWidget*)service_eventlog_LblStartTime);

    service_eventlog_BtnHome = leButtonWidget_New();
    service_eventlog_BtnHome->fn->setPosition(service_eventlog_BtnHome, 435, 225);
    service_eventlog_BtnHome->fn->setSize(service_eventlog_BtnHome, 40, 40);
    service_eventlog_BtnHome->fn->setScheme(service_eventlog_BtnHome, &BlackBack);
    service_eventlog_BtnHome->fn->setBackgroundType(service_eventlog_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_eventlog_BtnHome->fn->setBorderType(service_eventlog_BtnHome, LE_WIDGET_BORDER_NONE);
    service_eventlog_BtnHome->fn->setPressedImage(service_eventlog_BtnHome, (leImage*)&Menu_home);
    service_eventlog_BtnHome->fn->setReleasedImage(service_eventlog_BtnHome, (leImage*)&Menu_home);
    service_eventlog_BtnHome->fn->setReleasedEventCallback(service_eventlog_BtnHome, event_service_eventlog_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_eventlog_BtnHome);

    service_eventlog_BtnExit = leButtonWidget_New();
    service_eventlog_BtnExit->fn->setPosition(service_eventlog_BtnExit, 425, 2);
    service_eventlog_BtnExit->fn->setSize(service_eventlog_BtnExit, 50, 50);
    service_eventlog_BtnExit->fn->setScheme(service_eventlog_BtnExit, &Label_Gray2A);
    service_eventlog_BtnExit->fn->setBackgroundType(service_eventlog_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_eventlog_BtnExit->fn->setBorderType(service_eventlog_BtnExit, LE_WIDGET_BORDER_NONE);
    service_eventlog_BtnExit->fn->setHAlignment(service_eventlog_BtnExit, LE_HALIGN_RIGHT);
    service_eventlog_BtnExit->fn->setVAlignment(service_eventlog_BtnExit, LE_VALIGN_TOP);
    service_eventlog_BtnExit->fn->setMargins(service_eventlog_BtnExit, 4, 10, 10, 4);
    service_eventlog_BtnExit->fn->setPressedImage(service_eventlog_BtnExit, (leImage*)&Menu_exit_black);
    service_eventlog_BtnExit->fn->setReleasedImage(service_eventlog_BtnExit, (leImage*)&Menu_exit_black);
    service_eventlog_BtnExit->fn->setReleasedEventCallback(service_eventlog_BtnExit, event_service_eventlog_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_eventlog_BtnExit);

    service_eventlog_BtnClear = leButtonWidget_New();
    service_eventlog_BtnClear->fn->setPosition(service_eventlog_BtnClear, 427, 55);
    service_eventlog_BtnClear->fn->setSize(service_eventlog_BtnClear, 49, 54);
    service_eventlog_BtnClear->fn->setScheme(service_eventlog_BtnClear, &Button_Gray2);
    service_eventlog_BtnClear->fn->setBorderType(service_eventlog_BtnClear, LE_WIDGET_BORDER_NONE);
    service_eventlog_BtnClear->fn->setString(service_eventlog_BtnClear, (leString*)&string_CLEAR_EVENT);
    service_eventlog_BtnClear->fn->setReleasedEventCallback(service_eventlog_BtnClear, event_service_eventlog_BtnClear_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_eventlog_BtnClear);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_eventlog_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_eventlog(void)
{
}

void screenHide_service_eventlog(void)
{
    service_eventlog_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_eventlog_Layer_0_FillPanel = NULL;
    service_eventlog_PanelPage1 = NULL;
    service_eventlog_PanelPage2 = NULL;
    service_eventlog_LblEvent = NULL;
    service_eventlog_LblStartTime = NULL;
    service_eventlog_BtnHome = NULL;
    service_eventlog_BtnExit = NULL;
    service_eventlog_BtnClear = NULL;
    service_eventlog_LblEvent1 = NULL;
    service_eventlog_LblTime1 = NULL;
    service_eventlog_LblEvent2 = NULL;
    service_eventlog_LblTime2 = NULL;
    service_eventlog_LblEvent3 = NULL;
    service_eventlog_LblTime3 = NULL;
    service_eventlog_LblEvent4 = NULL;
    service_eventlog_LblTime4 = NULL;
    service_eventlog_LblEvent5 = NULL;
    service_eventlog_LblTime5 = NULL;
    service_eventlog_LblEvent6 = NULL;
    service_eventlog_LblTime6 = NULL;
    service_eventlog_BtnDown = NULL;
    service_eventlog_LblEvent7 = NULL;
    service_eventlog_LblTime7 = NULL;
    service_eventlog_LblEvent8 = NULL;
    service_eventlog_LblTime8 = NULL;
    service_eventlog_LblEvent9 = NULL;
    service_eventlog_LblTime9 = NULL;
    service_eventlog_LblEvent10 = NULL;
    service_eventlog_LblTime10 = NULL;
    service_eventlog_LblEvent11 = NULL;
    service_eventlog_LblTime11 = NULL;
    service_eventlog_LblEvent12 = NULL;
    service_eventlog_LblTime12 = NULL;
    service_eventlog_BtnUp = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_eventlog(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_eventlog(uint32_t lyrIdx)
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

