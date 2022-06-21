#include "gfx/legato/generated/screen/le_gen_screen_service_advancedgearmotor.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advancedgearmotor_Layer_0_FillPanel;
leLabelWidget* service_advancedgearmotor_LblTitle;
leWidget* service_advancedgearmotor_PanelWidget2;
leButtonWidget* service_advancedgearmotor_BtnHome;
leButtonWidget* service_advancedgearmotor_BtnExit;
leLineGraphWidget* service_advancedgearmotor_Line;
leLabelWidget* service_advancedgearmotor_LblAmp6;
leLabelWidget* service_advancedgearmotor_LblAmp5;
leLabelWidget* service_advancedgearmotor_LblAmp4;
leLabelWidget* service_advancedgearmotor_LblAmp3;
leLabelWidget* service_advancedgearmotor_LblAmp2;
leLabelWidget* service_advancedgearmotor_LblAmp1;
leLabelWidget* service_advancedgearmotor_LblAmp0;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advancedgearmotor(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advancedgearmotor(void)
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

    service_advancedgearmotor_Layer_0_FillPanel = leWidget_New();
    service_advancedgearmotor_Layer_0_FillPanel->fn->setPosition(service_advancedgearmotor_Layer_0_FillPanel, 0, 0);
    service_advancedgearmotor_Layer_0_FillPanel->fn->setSize(service_advancedgearmotor_Layer_0_FillPanel, 480, 272);
    service_advancedgearmotor_Layer_0_FillPanel->fn->setScheme(service_advancedgearmotor_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)service_advancedgearmotor_Layer_0_FillPanel);

    service_advancedgearmotor_LblTitle = leLabelWidget_New();
    service_advancedgearmotor_LblTitle->fn->setPosition(service_advancedgearmotor_LblTitle, 43, 2);
    service_advancedgearmotor_LblTitle->fn->setSize(service_advancedgearmotor_LblTitle, 380, 30);
    service_advancedgearmotor_LblTitle->fn->setScheme(service_advancedgearmotor_LblTitle, &BlackBack);
    service_advancedgearmotor_LblTitle->fn->setBackgroundType(service_advancedgearmotor_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_LblTitle->fn->setHAlignment(service_advancedgearmotor_LblTitle, LE_HALIGN_CENTER);
    service_advancedgearmotor_LblTitle->fn->setString(service_advancedgearmotor_LblTitle, (leString*)&string_SERVICE7_GEARMOTOR_Title);
    root1->fn->addChild(root1, (leWidget*)service_advancedgearmotor_LblTitle);

    service_advancedgearmotor_PanelWidget2 = leWidget_New();
    service_advancedgearmotor_PanelWidget2->fn->setPosition(service_advancedgearmotor_PanelWidget2, 27, 28);
    service_advancedgearmotor_PanelWidget2->fn->setSize(service_advancedgearmotor_PanelWidget2, 36, 215);
    service_advancedgearmotor_PanelWidget2->fn->setScheme(service_advancedgearmotor_PanelWidget2, &Panel_Gray3);
    service_advancedgearmotor_PanelWidget2->fn->setHAlignment(service_advancedgearmotor_PanelWidget2, LE_HALIGN_RIGHT);
    service_advancedgearmotor_PanelWidget2->fn->setVAlignment(service_advancedgearmotor_PanelWidget2, LE_VALIGN_BOTTOM);
    root1->fn->addChild(root1, (leWidget*)service_advancedgearmotor_PanelWidget2);

    service_advancedgearmotor_LblAmp6 = leLabelWidget_New();
    service_advancedgearmotor_LblAmp6->fn->setPosition(service_advancedgearmotor_LblAmp6, 0, -4);
    service_advancedgearmotor_LblAmp6->fn->setSize(service_advancedgearmotor_LblAmp6, 26, 24);
    service_advancedgearmotor_LblAmp6->fn->setScheme(service_advancedgearmotor_LblAmp6, &BlackBack);
    service_advancedgearmotor_LblAmp6->fn->setBackgroundType(service_advancedgearmotor_LblAmp6, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_LblAmp6->fn->setHAlignment(service_advancedgearmotor_LblAmp6, LE_HALIGN_RIGHT);
    service_advancedgearmotor_LblAmp6->fn->setVAlignment(service_advancedgearmotor_LblAmp6, LE_VALIGN_TOP);
    service_advancedgearmotor_LblAmp6->fn->setMargins(service_advancedgearmotor_LblAmp6, 4, 4, 0, 4);
    service_advancedgearmotor_LblAmp6->fn->setString(service_advancedgearmotor_LblAmp6, (leString*)&string_SERVICE7_GEARMOTOR_Amp4);
    service_advancedgearmotor_PanelWidget2->fn->addChild(service_advancedgearmotor_PanelWidget2, (leWidget*)service_advancedgearmotor_LblAmp6);

    service_advancedgearmotor_LblAmp5 = leLabelWidget_New();
    service_advancedgearmotor_LblAmp5->fn->setPosition(service_advancedgearmotor_LblAmp5, 0, 26);
    service_advancedgearmotor_LblAmp5->fn->setSize(service_advancedgearmotor_LblAmp5, 26, 20);
    service_advancedgearmotor_LblAmp5->fn->setScheme(service_advancedgearmotor_LblAmp5, &BlackBack);
    service_advancedgearmotor_LblAmp5->fn->setBackgroundType(service_advancedgearmotor_LblAmp5, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_LblAmp5->fn->setHAlignment(service_advancedgearmotor_LblAmp5, LE_HALIGN_RIGHT);
    service_advancedgearmotor_LblAmp5->fn->setMargins(service_advancedgearmotor_LblAmp5, 4, 4, 0, 4);
    service_advancedgearmotor_LblAmp5->fn->setString(service_advancedgearmotor_LblAmp5, (leString*)&string_SERVICE7_GEARMOTOR_Amp3);
    service_advancedgearmotor_PanelWidget2->fn->addChild(service_advancedgearmotor_PanelWidget2, (leWidget*)service_advancedgearmotor_LblAmp5);

    service_advancedgearmotor_LblAmp4 = leLabelWidget_New();
    service_advancedgearmotor_LblAmp4->fn->setPosition(service_advancedgearmotor_LblAmp4, 0, 57);
    service_advancedgearmotor_LblAmp4->fn->setSize(service_advancedgearmotor_LblAmp4, 26, 20);
    service_advancedgearmotor_LblAmp4->fn->setScheme(service_advancedgearmotor_LblAmp4, &BlackBack);
    service_advancedgearmotor_LblAmp4->fn->setBackgroundType(service_advancedgearmotor_LblAmp4, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_LblAmp4->fn->setHAlignment(service_advancedgearmotor_LblAmp4, LE_HALIGN_RIGHT);
    service_advancedgearmotor_LblAmp4->fn->setMargins(service_advancedgearmotor_LblAmp4, 4, 4, 0, 4);
    service_advancedgearmotor_LblAmp4->fn->setString(service_advancedgearmotor_LblAmp4, (leString*)&string_SERVICE7_GEARMOTOR_Amp2);
    service_advancedgearmotor_PanelWidget2->fn->addChild(service_advancedgearmotor_PanelWidget2, (leWidget*)service_advancedgearmotor_LblAmp4);

    service_advancedgearmotor_LblAmp3 = leLabelWidget_New();
    service_advancedgearmotor_LblAmp3->fn->setPosition(service_advancedgearmotor_LblAmp3, 0, 88);
    service_advancedgearmotor_LblAmp3->fn->setSize(service_advancedgearmotor_LblAmp3, 26, 20);
    service_advancedgearmotor_LblAmp3->fn->setScheme(service_advancedgearmotor_LblAmp3, &BlackBack);
    service_advancedgearmotor_LblAmp3->fn->setBackgroundType(service_advancedgearmotor_LblAmp3, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_LblAmp3->fn->setHAlignment(service_advancedgearmotor_LblAmp3, LE_HALIGN_RIGHT);
    service_advancedgearmotor_LblAmp3->fn->setMargins(service_advancedgearmotor_LblAmp3, 4, 4, 0, 4);
    service_advancedgearmotor_LblAmp3->fn->setString(service_advancedgearmotor_LblAmp3, (leString*)&string_SERVICE7_GEARMOTOR_Amp5);
    service_advancedgearmotor_PanelWidget2->fn->addChild(service_advancedgearmotor_PanelWidget2, (leWidget*)service_advancedgearmotor_LblAmp3);

    service_advancedgearmotor_LblAmp2 = leLabelWidget_New();
    service_advancedgearmotor_LblAmp2->fn->setPosition(service_advancedgearmotor_LblAmp2, 0, 118);
    service_advancedgearmotor_LblAmp2->fn->setSize(service_advancedgearmotor_LblAmp2, 26, 20);
    service_advancedgearmotor_LblAmp2->fn->setScheme(service_advancedgearmotor_LblAmp2, &BlackBack);
    service_advancedgearmotor_LblAmp2->fn->setBackgroundType(service_advancedgearmotor_LblAmp2, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_LblAmp2->fn->setHAlignment(service_advancedgearmotor_LblAmp2, LE_HALIGN_RIGHT);
    service_advancedgearmotor_LblAmp2->fn->setMargins(service_advancedgearmotor_LblAmp2, 4, 4, 0, 4);
    service_advancedgearmotor_LblAmp2->fn->setString(service_advancedgearmotor_LblAmp2, (leString*)&string_SERVICE7_GEARMOTOR_Amp1);
    service_advancedgearmotor_PanelWidget2->fn->addChild(service_advancedgearmotor_PanelWidget2, (leWidget*)service_advancedgearmotor_LblAmp2);

    service_advancedgearmotor_LblAmp1 = leLabelWidget_New();
    service_advancedgearmotor_LblAmp1->fn->setPosition(service_advancedgearmotor_LblAmp1, 0, 151);
    service_advancedgearmotor_LblAmp1->fn->setSize(service_advancedgearmotor_LblAmp1, 26, 20);
    service_advancedgearmotor_LblAmp1->fn->setScheme(service_advancedgearmotor_LblAmp1, &BlackBack);
    service_advancedgearmotor_LblAmp1->fn->setBackgroundType(service_advancedgearmotor_LblAmp1, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_LblAmp1->fn->setHAlignment(service_advancedgearmotor_LblAmp1, LE_HALIGN_RIGHT);
    service_advancedgearmotor_LblAmp1->fn->setMargins(service_advancedgearmotor_LblAmp1, 4, 4, 0, 4);
    service_advancedgearmotor_LblAmp1->fn->setString(service_advancedgearmotor_LblAmp1, (leString*)&string_SERVICE7_GEARMOTOR_Amp6);
    service_advancedgearmotor_PanelWidget2->fn->addChild(service_advancedgearmotor_PanelWidget2, (leWidget*)service_advancedgearmotor_LblAmp1);

    service_advancedgearmotor_LblAmp0 = leLabelWidget_New();
    service_advancedgearmotor_LblAmp0->fn->setPosition(service_advancedgearmotor_LblAmp0, 0, 179);
    service_advancedgearmotor_LblAmp0->fn->setSize(service_advancedgearmotor_LblAmp0, 26, 20);
    service_advancedgearmotor_LblAmp0->fn->setScheme(service_advancedgearmotor_LblAmp0, &BlackBack);
    service_advancedgearmotor_LblAmp0->fn->setBackgroundType(service_advancedgearmotor_LblAmp0, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_LblAmp0->fn->setHAlignment(service_advancedgearmotor_LblAmp0, LE_HALIGN_RIGHT);
    service_advancedgearmotor_LblAmp0->fn->setMargins(service_advancedgearmotor_LblAmp0, 4, 4, 0, 4);
    service_advancedgearmotor_LblAmp0->fn->setString(service_advancedgearmotor_LblAmp0, (leString*)&string_SERVICE7_GEARMOTOR_Amp0);
    service_advancedgearmotor_PanelWidget2->fn->addChild(service_advancedgearmotor_PanelWidget2, (leWidget*)service_advancedgearmotor_LblAmp0);

    service_advancedgearmotor_BtnHome = leButtonWidget_New();
    service_advancedgearmotor_BtnHome->fn->setPosition(service_advancedgearmotor_BtnHome, 435, 225);
    service_advancedgearmotor_BtnHome->fn->setSize(service_advancedgearmotor_BtnHome, 40, 40);
    service_advancedgearmotor_BtnHome->fn->setScheme(service_advancedgearmotor_BtnHome, &BlackBack);
    service_advancedgearmotor_BtnHome->fn->setBackgroundType(service_advancedgearmotor_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_BtnHome->fn->setBorderType(service_advancedgearmotor_BtnHome, LE_WIDGET_BORDER_NONE);
    service_advancedgearmotor_BtnHome->fn->setPressedImage(service_advancedgearmotor_BtnHome, (leImage*)&Menu_home);
    service_advancedgearmotor_BtnHome->fn->setReleasedImage(service_advancedgearmotor_BtnHome, (leImage*)&Menu_home);
    service_advancedgearmotor_BtnHome->fn->setReleasedEventCallback(service_advancedgearmotor_BtnHome, event_service_advancedgearmotor_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedgearmotor_BtnHome);

    service_advancedgearmotor_BtnExit = leButtonWidget_New();
    service_advancedgearmotor_BtnExit->fn->setPosition(service_advancedgearmotor_BtnExit, 435, 3);
    service_advancedgearmotor_BtnExit->fn->setSize(service_advancedgearmotor_BtnExit, 40, 60);
    service_advancedgearmotor_BtnExit->fn->setScheme(service_advancedgearmotor_BtnExit, &BlackBack);
    service_advancedgearmotor_BtnExit->fn->setBackgroundType(service_advancedgearmotor_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_advancedgearmotor_BtnExit->fn->setBorderType(service_advancedgearmotor_BtnExit, LE_WIDGET_BORDER_NONE);
    service_advancedgearmotor_BtnExit->fn->setHAlignment(service_advancedgearmotor_BtnExit, LE_HALIGN_RIGHT);
    service_advancedgearmotor_BtnExit->fn->setVAlignment(service_advancedgearmotor_BtnExit, LE_VALIGN_TOP);
    service_advancedgearmotor_BtnExit->fn->setMargins(service_advancedgearmotor_BtnExit, 4, 10, 10, 4);
    service_advancedgearmotor_BtnExit->fn->setPressedImage(service_advancedgearmotor_BtnExit, (leImage*)&Menu_exit_black);
    service_advancedgearmotor_BtnExit->fn->setReleasedImage(service_advancedgearmotor_BtnExit, (leImage*)&Menu_exit_black);
    service_advancedgearmotor_BtnExit->fn->setReleasedEventCallback(service_advancedgearmotor_BtnExit, event_service_advancedgearmotor_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedgearmotor_BtnExit);

    service_advancedgearmotor_Line = leLineGraphWidget_New();
    service_advancedgearmotor_Line->fn->setPosition(service_advancedgearmotor_Line, 67, 35);
    service_advancedgearmotor_Line->fn->setSize(service_advancedgearmotor_Line, 350, 193);
    service_advancedgearmotor_Line->fn->setHAlignment(service_advancedgearmotor_Line, LE_HALIGN_RIGHT);
    service_advancedgearmotor_Line->fn->setVAlignment(service_advancedgearmotor_Line, LE_VALIGN_BOTTOM);
    service_advancedgearmotor_Line->fn->setMargins(service_advancedgearmotor_Line, 0, 4, 4, 4);
    service_advancedgearmotor_Line->fn->setTickLength(service_advancedgearmotor_Line, 10);
    service_advancedgearmotor_Line->fn->setMaxValue(service_advancedgearmotor_Line, LINE_GRAPH_AXIS_0, 600);
    service_advancedgearmotor_Line->fn->setValueAxisTickInterval(service_advancedgearmotor_Line, LINE_GRAPH_AXIS_0, 100);
    service_advancedgearmotor_Line->fn->setValueAxisSubtickInterval(service_advancedgearmotor_Line, LINE_GRAPH_AXIS_0, 50);
    service_advancedgearmotor_Line->fn->setValueAxisLabelsVisible(service_advancedgearmotor_Line, LINE_GRAPH_AXIS_0, LE_FALSE);
    service_advancedgearmotor_Line->fn->setTicksLabelFont(service_advancedgearmotor_Line, (leFont*)&ARIALUNI_10);
    service_advancedgearmotor_Line->fn->setCategoryAxisLabelsVisible(service_advancedgearmotor_Line, LE_FALSE);
    service_advancedgearmotor_Line->fn->setCategoryAxisTicksPosition(service_advancedgearmotor_Line, LINE_GRAPH_TICK_CENTER);
    service_advancedgearmotor_Line->fn->addSeries(service_advancedgearmotor_Line);
    service_advancedgearmotor_Line->fn->setSeriesPointType(service_advancedgearmotor_Line, 0, LINE_GRAPH_DATA_POINT_NONE);
    root1->fn->addChild(root1, (leWidget*)service_advancedgearmotor_Line);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advancedgearmotor_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advancedgearmotor(void)
{
}

void screenHide_service_advancedgearmotor(void)
{
    service_advancedgearmotor_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advancedgearmotor_Layer_0_FillPanel = NULL;
    service_advancedgearmotor_LblTitle = NULL;
    service_advancedgearmotor_PanelWidget2 = NULL;
    service_advancedgearmotor_BtnHome = NULL;
    service_advancedgearmotor_BtnExit = NULL;
    service_advancedgearmotor_Line = NULL;
    service_advancedgearmotor_LblAmp6 = NULL;
    service_advancedgearmotor_LblAmp5 = NULL;
    service_advancedgearmotor_LblAmp4 = NULL;
    service_advancedgearmotor_LblAmp3 = NULL;
    service_advancedgearmotor_LblAmp2 = NULL;
    service_advancedgearmotor_LblAmp1 = NULL;
    service_advancedgearmotor_LblAmp0 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advancedgearmotor(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advancedgearmotor(uint32_t lyrIdx)
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

