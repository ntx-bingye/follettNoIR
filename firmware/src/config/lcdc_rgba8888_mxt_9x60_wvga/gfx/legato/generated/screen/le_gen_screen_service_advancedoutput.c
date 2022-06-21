#include "gfx/legato/generated/screen/le_gen_screen_service_advancedoutput.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advancedoutput_Layer_0_FillPanel;
leLabelWidget* service_advancedoutput_LblTitle;
leWidget* service_advancedoutput_PanelPage1;
leWidget* service_advancedoutput_PanelPage2;
leButtonWidget* service_advancedoutput_BtnExit;
leButtonWidget* service_advancedoutput_BtnAutomatic;
leButtonWidget* service_advancedoutput_BtnManual;
leButtonWidget* service_advancedoutput_BtnHome;
leLabelWidget* service_advancedoutput_LblMotortitle;
leLabelWidget* service_advancedoutput_LblGearMotorValue;
leLabelWidget* service_advancedoutput_LblLabel1;
leLabelWidget* service_advancedoutput_LblLabel6;
leLabelWidget* service_advancedoutput_LblLabel2;
leLabelWidget* service_advancedoutput_LblLabel3;
leLabelWidget* service_advancedoutput_LblLabel4;
leLabelWidget* service_advancedoutput_LblLabel5;
leButtonWidget* service_advancedoutput_BtnToggle1;
leButtonWidget* service_advancedoutput_BtnToggle2;
leButtonWidget* service_advancedoutput_BtnToggle3;
leButtonWidget* service_advancedoutput_BtnToggle4;
leButtonWidget* service_advancedoutput_BtnToggle5;
leButtonWidget* service_advancedoutput_BtnToggle6;
leButtonWidget* service_advancedoutput_BtnDown;
leLabelWidget* service_advancedoutput_LblLabel7;
leLabelWidget* service_advancedoutput_lblLabel8;
leLabelWidget* service_advancedoutput_LblLabel9;
leLabelWidget* service_advancedoutput_LblLabel10;
leLabelWidget* service_advancedoutput_LblLabel11;
leLabelWidget* service_advancedoutput_LBlLabel12;
leLabelWidget* service_advancedoutput_LblLabel13;
leButtonWidget* service_advancedoutput_BtnToggle7;
leButtonWidget* service_advancedoutput_BtnToggle8;
leButtonWidget* service_advancedoutput_BtnToggle9;
leButtonWidget* service_advancedoutput_BtnToggle10;
leButtonWidget* service_advancedoutput_BtnToggle11;
leButtonWidget* service_advancedoutput_BtnToggle12;
leButtonWidget* service_advancedoutput_BtnToggle13;
leButtonWidget* service_advancedoutput_BtnUp;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advancedoutput(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advancedoutput(void)
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

    service_advancedoutput_Layer_0_FillPanel = leWidget_New();
    service_advancedoutput_Layer_0_FillPanel->fn->setPosition(service_advancedoutput_Layer_0_FillPanel, 0, 0);
    service_advancedoutput_Layer_0_FillPanel->fn->setSize(service_advancedoutput_Layer_0_FillPanel, 480, 272);
    service_advancedoutput_Layer_0_FillPanel->fn->setScheme(service_advancedoutput_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_Layer_0_FillPanel);

    service_advancedoutput_LblTitle = leLabelWidget_New();
    service_advancedoutput_LblTitle->fn->setPosition(service_advancedoutput_LblTitle, 5, 2);
    service_advancedoutput_LblTitle->fn->setSize(service_advancedoutput_LblTitle, 200, 30);
    service_advancedoutput_LblTitle->fn->setScheme(service_advancedoutput_LblTitle, &Label_Gray2A);
    service_advancedoutput_LblTitle->fn->setBackgroundType(service_advancedoutput_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblTitle->fn->setString(service_advancedoutput_LblTitle, (leString*)&string_SERVICE_ADVANCED_Output);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_LblTitle);

    service_advancedoutput_PanelPage1 = leWidget_New();
    service_advancedoutput_PanelPage1->fn->setPosition(service_advancedoutput_PanelPage1, 1, 35);
    service_advancedoutput_PanelPage1->fn->setSize(service_advancedoutput_PanelPage1, 420, 237);
    service_advancedoutput_PanelPage1->fn->setBackgroundType(service_advancedoutput_PanelPage1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_PanelPage1);

    service_advancedoutput_LblGearMotorValue = leLabelWidget_New();
    service_advancedoutput_LblGearMotorValue->fn->setPosition(service_advancedoutput_LblGearMotorValue, 200, 2);
    service_advancedoutput_LblGearMotorValue->fn->setSize(service_advancedoutput_LblGearMotorValue, 217, 30);
    service_advancedoutput_LblGearMotorValue->fn->setScheme(service_advancedoutput_LblGearMotorValue, &Label_FontWhite);
    service_advancedoutput_LblGearMotorValue->fn->setBackgroundType(service_advancedoutput_LblGearMotorValue, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblGearMotorValue->fn->setHAlignment(service_advancedoutput_LblGearMotorValue, LE_HALIGN_CENTER);
    service_advancedoutput_LblGearMotorValue->fn->setString(service_advancedoutput_LblGearMotorValue, (leString*)&string_SERVICE7_OUTPUT_GearMotorValue);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_LblGearMotorValue);

    service_advancedoutput_LblLabel1 = leLabelWidget_New();
    service_advancedoutput_LblLabel1->fn->setPosition(service_advancedoutput_LblLabel1, 72, 2);
    service_advancedoutput_LblLabel1->fn->setSize(service_advancedoutput_LblLabel1, 121, 30);
    service_advancedoutput_LblLabel1->fn->setScheme(service_advancedoutput_LblLabel1, &Button_Gray2A);
    service_advancedoutput_LblLabel1->fn->setBackgroundType(service_advancedoutput_LblLabel1, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel1->fn->setString(service_advancedoutput_LblLabel1, (leString*)&string_SERVICE7_OUTPUT_GearMotor);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_LblLabel1);

    service_advancedoutput_LblLabel6 = leLabelWidget_New();
    service_advancedoutput_LblLabel6->fn->setPosition(service_advancedoutput_LblLabel6, 73, 146);
    service_advancedoutput_LblLabel6->fn->setSize(service_advancedoutput_LblLabel6, 247, 30);
    service_advancedoutput_LblLabel6->fn->setScheme(service_advancedoutput_LblLabel6, &Button_Gray2A);
    service_advancedoutput_LblLabel6->fn->setBackgroundType(service_advancedoutput_LblLabel6, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel6->fn->setString(service_advancedoutput_LblLabel6, (leString*)&string_SERVICE7_OUTPUT_IceDispenseMotor);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_LblLabel6);

    service_advancedoutput_LblLabel2 = leLabelWidget_New();
    service_advancedoutput_LblLabel2->fn->setPosition(service_advancedoutput_LblLabel2, 72, 31);
    service_advancedoutput_LblLabel2->fn->setSize(service_advancedoutput_LblLabel2, 237, 30);
    service_advancedoutput_LblLabel2->fn->setScheme(service_advancedoutput_LblLabel2, &Button_Gray2A);
    service_advancedoutput_LblLabel2->fn->setBackgroundType(service_advancedoutput_LblLabel2, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel2->fn->setString(service_advancedoutput_LblLabel2, (leString*)&string_SERVICE7_OUTPUT_CompressorMotor);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_LblLabel2);

    service_advancedoutput_LblLabel3 = leLabelWidget_New();
    service_advancedoutput_LblLabel3->fn->setPosition(service_advancedoutput_LblLabel3, 72, 60);
    service_advancedoutput_LblLabel3->fn->setSize(service_advancedoutput_LblLabel3, 239, 30);
    service_advancedoutput_LblLabel3->fn->setScheme(service_advancedoutput_LblLabel3, &Button_Gray2A);
    service_advancedoutput_LblLabel3->fn->setBackgroundType(service_advancedoutput_LblLabel3, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel3->fn->setString(service_advancedoutput_LblLabel3, (leString*)&string_SERVICE7_OUTPUT_FanMotor);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_LblLabel3);

    service_advancedoutput_LblLabel4 = leLabelWidget_New();
    service_advancedoutput_LblLabel4->fn->setPosition(service_advancedoutput_LblLabel4, 72, 90);
    service_advancedoutput_LblLabel4->fn->setSize(service_advancedoutput_LblLabel4, 237, 30);
    service_advancedoutput_LblLabel4->fn->setScheme(service_advancedoutput_LblLabel4, &Button_Gray2A);
    service_advancedoutput_LblLabel4->fn->setBackgroundType(service_advancedoutput_LblLabel4, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel4->fn->setString(service_advancedoutput_LblLabel4, (leString*)&string_SERVICE7_OUTPUT_FailSafeValve);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_LblLabel4);

    service_advancedoutput_LblLabel5 = leLabelWidget_New();
    service_advancedoutput_LblLabel5->fn->setPosition(service_advancedoutput_LblLabel5, 72, 119);
    service_advancedoutput_LblLabel5->fn->setSize(service_advancedoutput_LblLabel5, 242, 30);
    service_advancedoutput_LblLabel5->fn->setScheme(service_advancedoutput_LblLabel5, &Button_Gray2A);
    service_advancedoutput_LblLabel5->fn->setBackgroundType(service_advancedoutput_LblLabel5, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel5->fn->setString(service_advancedoutput_LblLabel5, (leString*)&string_SERVICE7_OUTPUT_WaterDispenseValve);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_LblLabel5);

    service_advancedoutput_BtnToggle1 = leButtonWidget_New();
    service_advancedoutput_BtnToggle1->fn->setPosition(service_advancedoutput_BtnToggle1, 7, 2);
    service_advancedoutput_BtnToggle1->fn->setSize(service_advancedoutput_BtnToggle1, 59, 30);
    service_advancedoutput_BtnToggle1->fn->setScheme(service_advancedoutput_BtnToggle1, &Button_Gray2A);
    service_advancedoutput_BtnToggle1->fn->setBorderType(service_advancedoutput_BtnToggle1, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle1->fn->setPressedImage(service_advancedoutput_BtnToggle1, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle1->fn->setReleasedImage(service_advancedoutput_BtnToggle1, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle1->fn->setImageMargin(service_advancedoutput_BtnToggle1, 0);
    service_advancedoutput_BtnToggle1->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle1, event_service_advancedoutput_BtnToggle1_OnReleased);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_BtnToggle1);

    service_advancedoutput_BtnToggle2 = leButtonWidget_New();
    service_advancedoutput_BtnToggle2->fn->setPosition(service_advancedoutput_BtnToggle2, 7, 31);
    service_advancedoutput_BtnToggle2->fn->setSize(service_advancedoutput_BtnToggle2, 59, 30);
    service_advancedoutput_BtnToggle2->fn->setScheme(service_advancedoutput_BtnToggle2, &Button_Gray2A);
    service_advancedoutput_BtnToggle2->fn->setBorderType(service_advancedoutput_BtnToggle2, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle2->fn->setPressedImage(service_advancedoutput_BtnToggle2, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle2->fn->setReleasedImage(service_advancedoutput_BtnToggle2, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle2->fn->setImageMargin(service_advancedoutput_BtnToggle2, 0);
    service_advancedoutput_BtnToggle2->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle2, event_service_advancedoutput_BtnToggle2_OnReleased);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_BtnToggle2);

    service_advancedoutput_BtnToggle3 = leButtonWidget_New();
    service_advancedoutput_BtnToggle3->fn->setPosition(service_advancedoutput_BtnToggle3, 7, 60);
    service_advancedoutput_BtnToggle3->fn->setSize(service_advancedoutput_BtnToggle3, 59, 30);
    service_advancedoutput_BtnToggle3->fn->setScheme(service_advancedoutput_BtnToggle3, &Button_Gray2A);
    service_advancedoutput_BtnToggle3->fn->setBorderType(service_advancedoutput_BtnToggle3, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle3->fn->setPressedImage(service_advancedoutput_BtnToggle3, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle3->fn->setReleasedImage(service_advancedoutput_BtnToggle3, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle3->fn->setImageMargin(service_advancedoutput_BtnToggle3, 0);
    service_advancedoutput_BtnToggle3->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle3, event_service_advancedoutput_BtnToggle3_OnReleased);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_BtnToggle3);

    service_advancedoutput_BtnToggle4 = leButtonWidget_New();
    service_advancedoutput_BtnToggle4->fn->setPosition(service_advancedoutput_BtnToggle4, 7, 90);
    service_advancedoutput_BtnToggle4->fn->setSize(service_advancedoutput_BtnToggle4, 59, 30);
    service_advancedoutput_BtnToggle4->fn->setScheme(service_advancedoutput_BtnToggle4, &Button_Gray2A);
    service_advancedoutput_BtnToggle4->fn->setBorderType(service_advancedoutput_BtnToggle4, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle4->fn->setPressedImage(service_advancedoutput_BtnToggle4, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle4->fn->setReleasedImage(service_advancedoutput_BtnToggle4, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle4->fn->setImageMargin(service_advancedoutput_BtnToggle4, 0);
    service_advancedoutput_BtnToggle4->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle4, event_service_advancedoutput_BtnToggle4_OnReleased);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_BtnToggle4);

    service_advancedoutput_BtnToggle5 = leButtonWidget_New();
    service_advancedoutput_BtnToggle5->fn->setPosition(service_advancedoutput_BtnToggle5, 7, 119);
    service_advancedoutput_BtnToggle5->fn->setSize(service_advancedoutput_BtnToggle5, 59, 30);
    service_advancedoutput_BtnToggle5->fn->setScheme(service_advancedoutput_BtnToggle5, &Button_Gray2A);
    service_advancedoutput_BtnToggle5->fn->setBorderType(service_advancedoutput_BtnToggle5, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle5->fn->setPressedImage(service_advancedoutput_BtnToggle5, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle5->fn->setReleasedImage(service_advancedoutput_BtnToggle5, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle5->fn->setImageMargin(service_advancedoutput_BtnToggle5, 0);
    service_advancedoutput_BtnToggle5->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle5, event_service_advancedoutput_BtnToggle5_OnReleased);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_BtnToggle5);

    service_advancedoutput_BtnToggle6 = leButtonWidget_New();
    service_advancedoutput_BtnToggle6->fn->setPosition(service_advancedoutput_BtnToggle6, 7, 149);
    service_advancedoutput_BtnToggle6->fn->setSize(service_advancedoutput_BtnToggle6, 59, 30);
    service_advancedoutput_BtnToggle6->fn->setScheme(service_advancedoutput_BtnToggle6, &Button_Gray2A);
    service_advancedoutput_BtnToggle6->fn->setBorderType(service_advancedoutput_BtnToggle6, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle6->fn->setPressedImage(service_advancedoutput_BtnToggle6, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle6->fn->setReleasedImage(service_advancedoutput_BtnToggle6, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle6->fn->setImageMargin(service_advancedoutput_BtnToggle6, 0);
    service_advancedoutput_BtnToggle6->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle6, event_service_advancedoutput_BtnToggle6_OnReleased);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_BtnToggle6);

    service_advancedoutput_BtnDown = leButtonWidget_New();
    service_advancedoutput_BtnDown->fn->setPosition(service_advancedoutput_BtnDown, 165, 198);
    service_advancedoutput_BtnDown->fn->setSize(service_advancedoutput_BtnDown, 227, 35);
    service_advancedoutput_BtnDown->fn->setScheme(service_advancedoutput_BtnDown, &Label_FontWhite);
    service_advancedoutput_BtnDown->fn->setBackgroundType(service_advancedoutput_BtnDown, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_BtnDown->fn->setBorderType(service_advancedoutput_BtnDown, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnDown->fn->setHAlignment(service_advancedoutput_BtnDown, LE_HALIGN_LEFT);
    service_advancedoutput_BtnDown->fn->setString(service_advancedoutput_BtnDown, (leString*)&string_nextPage);
    service_advancedoutput_BtnDown->fn->setReleasedImage(service_advancedoutput_BtnDown, (leImage*)&littledown);
    service_advancedoutput_BtnDown->fn->setReleasedEventCallback(service_advancedoutput_BtnDown, event_service_advancedoutput_BtnDown_OnReleased);
    service_advancedoutput_PanelPage1->fn->addChild(service_advancedoutput_PanelPage1, (leWidget*)service_advancedoutput_BtnDown);

    service_advancedoutput_PanelPage2 = leWidget_New();
    service_advancedoutput_PanelPage2->fn->setPosition(service_advancedoutput_PanelPage2, 1, 35);
    service_advancedoutput_PanelPage2->fn->setSize(service_advancedoutput_PanelPage2, 418, 238);
    service_advancedoutput_PanelPage2->fn->setEnabled(service_advancedoutput_PanelPage2, LE_FALSE);
    service_advancedoutput_PanelPage2->fn->setVisible(service_advancedoutput_PanelPage2, LE_FALSE);
    service_advancedoutput_PanelPage2->fn->setBackgroundType(service_advancedoutput_PanelPage2, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_PanelPage2);

    service_advancedoutput_LblLabel7 = leLabelWidget_New();
    service_advancedoutput_LblLabel7->fn->setPosition(service_advancedoutput_LblLabel7, 72, 0);
    service_advancedoutput_LblLabel7->fn->setSize(service_advancedoutput_LblLabel7, 248, 30);
    service_advancedoutput_LblLabel7->fn->setScheme(service_advancedoutput_LblLabel7, &Button_Gray2A);
    service_advancedoutput_LblLabel7->fn->setBackgroundType(service_advancedoutput_LblLabel7, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel7->fn->setString(service_advancedoutput_LblLabel7, (leString*)&string_SERVICE7_OUTPUT_UVLight);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_LblLabel7);

    service_advancedoutput_lblLabel8 = leLabelWidget_New();
    service_advancedoutput_lblLabel8->fn->setPosition(service_advancedoutput_lblLabel8, 72, 30);
    service_advancedoutput_lblLabel8->fn->setSize(service_advancedoutput_lblLabel8, 248, 30);
    service_advancedoutput_lblLabel8->fn->setScheme(service_advancedoutput_lblLabel8, &Button_Gray2A);
    service_advancedoutput_lblLabel8->fn->setBackgroundType(service_advancedoutput_lblLabel8, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_lblLabel8->fn->setString(service_advancedoutput_lblLabel8, (leString*)&string_SERVICE7_OUTPUT_VIVLight);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_lblLabel8);

    service_advancedoutput_LblLabel9 = leLabelWidget_New();
    service_advancedoutput_LblLabel9->fn->setPosition(service_advancedoutput_LblLabel9, 72, 60);
    service_advancedoutput_LblLabel9->fn->setSize(service_advancedoutput_LblLabel9, 241, 30);
    service_advancedoutput_LblLabel9->fn->setScheme(service_advancedoutput_LblLabel9, &Button_Gray2A);
    service_advancedoutput_LblLabel9->fn->setBackgroundType(service_advancedoutput_LblLabel9, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel9->fn->setString(service_advancedoutput_LblLabel9, (leString*)&string_SERVICE7_OUTPUT_HotWaterValve);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_LblLabel9);

    service_advancedoutput_LblLabel10 = leLabelWidget_New();
    service_advancedoutput_LblLabel10->fn->setPosition(service_advancedoutput_LblLabel10, 72, 90);
    service_advancedoutput_LblLabel10->fn->setSize(service_advancedoutput_LblLabel10, 243, 30);
    service_advancedoutput_LblLabel10->fn->setScheme(service_advancedoutput_LblLabel10, &Button_Gray2A);
    service_advancedoutput_LblLabel10->fn->setBackgroundType(service_advancedoutput_LblLabel10, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel10->fn->setString(service_advancedoutput_LblLabel10, (leString*)&string_SERVICE7_OUTPUT_HotPump);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_LblLabel10);

    service_advancedoutput_LblLabel11 = leLabelWidget_New();
    service_advancedoutput_LblLabel11->fn->setPosition(service_advancedoutput_LblLabel11, 72, 120);
    service_advancedoutput_LblLabel11->fn->setSize(service_advancedoutput_LblLabel11, 243, 30);
    service_advancedoutput_LblLabel11->fn->setScheme(service_advancedoutput_LblLabel11, &Button_Gray2A);
    service_advancedoutput_LblLabel11->fn->setBackgroundType(service_advancedoutput_LblLabel11, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel11->fn->setString(service_advancedoutput_LblLabel11, (leString*)&string_SERVICE7_OUTPUT_HotTankElement);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_LblLabel11);

    service_advancedoutput_LBlLabel12 = leLabelWidget_New();
    service_advancedoutput_LBlLabel12->fn->setPosition(service_advancedoutput_LBlLabel12, 72, 150);
    service_advancedoutput_LBlLabel12->fn->setSize(service_advancedoutput_LBlLabel12, 243, 30);
    service_advancedoutput_LBlLabel12->fn->setScheme(service_advancedoutput_LBlLabel12, &Button_Gray2A);
    service_advancedoutput_LBlLabel12->fn->setBackgroundType(service_advancedoutput_LBlLabel12, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LBlLabel12->fn->setString(service_advancedoutput_LBlLabel12, (leString*)&string_SERVICE7_OUTPUT_Spare1);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_LBlLabel12);

    service_advancedoutput_LblLabel13 = leLabelWidget_New();
    service_advancedoutput_LblLabel13->fn->setPosition(service_advancedoutput_LblLabel13, 72, 180);
    service_advancedoutput_LblLabel13->fn->setSize(service_advancedoutput_LblLabel13, 243, 30);
    service_advancedoutput_LblLabel13->fn->setScheme(service_advancedoutput_LblLabel13, &Button_Gray2A);
    service_advancedoutput_LblLabel13->fn->setBackgroundType(service_advancedoutput_LblLabel13, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblLabel13->fn->setString(service_advancedoutput_LblLabel13, (leString*)&string_SERVICE7_OUTPUT_Spare2);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_LblLabel13);

    service_advancedoutput_BtnToggle7 = leButtonWidget_New();
    service_advancedoutput_BtnToggle7->fn->setPosition(service_advancedoutput_BtnToggle7, 7, 0);
    service_advancedoutput_BtnToggle7->fn->setSize(service_advancedoutput_BtnToggle7, 59, 30);
    service_advancedoutput_BtnToggle7->fn->setScheme(service_advancedoutput_BtnToggle7, &Button_Gray2A);
    service_advancedoutput_BtnToggle7->fn->setBorderType(service_advancedoutput_BtnToggle7, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle7->fn->setPressedImage(service_advancedoutput_BtnToggle7, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle7->fn->setReleasedImage(service_advancedoutput_BtnToggle7, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle7->fn->setImageMargin(service_advancedoutput_BtnToggle7, 0);
    service_advancedoutput_BtnToggle7->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle7, event_service_advancedoutput_BtnToggle7_OnReleased);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_BtnToggle7);

    service_advancedoutput_BtnToggle8 = leButtonWidget_New();
    service_advancedoutput_BtnToggle8->fn->setPosition(service_advancedoutput_BtnToggle8, 7, 30);
    service_advancedoutput_BtnToggle8->fn->setSize(service_advancedoutput_BtnToggle8, 59, 30);
    service_advancedoutput_BtnToggle8->fn->setScheme(service_advancedoutput_BtnToggle8, &Button_Gray2A);
    service_advancedoutput_BtnToggle8->fn->setBorderType(service_advancedoutput_BtnToggle8, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle8->fn->setPressedImage(service_advancedoutput_BtnToggle8, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle8->fn->setReleasedImage(service_advancedoutput_BtnToggle8, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle8->fn->setImageMargin(service_advancedoutput_BtnToggle8, 0);
    service_advancedoutput_BtnToggle8->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle8, event_service_advancedoutput_BtnToggle8_OnReleased);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_BtnToggle8);

    service_advancedoutput_BtnToggle9 = leButtonWidget_New();
    service_advancedoutput_BtnToggle9->fn->setPosition(service_advancedoutput_BtnToggle9, 7, 60);
    service_advancedoutput_BtnToggle9->fn->setSize(service_advancedoutput_BtnToggle9, 59, 30);
    service_advancedoutput_BtnToggle9->fn->setScheme(service_advancedoutput_BtnToggle9, &Button_Gray2A);
    service_advancedoutput_BtnToggle9->fn->setBorderType(service_advancedoutput_BtnToggle9, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle9->fn->setPressedImage(service_advancedoutput_BtnToggle9, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle9->fn->setReleasedImage(service_advancedoutput_BtnToggle9, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle9->fn->setImageMargin(service_advancedoutput_BtnToggle9, 0);
    service_advancedoutput_BtnToggle9->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle9, event_service_advancedoutput_BtnToggle9_OnReleased);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_BtnToggle9);

    service_advancedoutput_BtnToggle10 = leButtonWidget_New();
    service_advancedoutput_BtnToggle10->fn->setPosition(service_advancedoutput_BtnToggle10, 7, 90);
    service_advancedoutput_BtnToggle10->fn->setSize(service_advancedoutput_BtnToggle10, 59, 30);
    service_advancedoutput_BtnToggle10->fn->setScheme(service_advancedoutput_BtnToggle10, &Button_Gray2A);
    service_advancedoutput_BtnToggle10->fn->setBorderType(service_advancedoutput_BtnToggle10, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle10->fn->setPressedImage(service_advancedoutput_BtnToggle10, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle10->fn->setReleasedImage(service_advancedoutput_BtnToggle10, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle10->fn->setImageMargin(service_advancedoutput_BtnToggle10, 0);
    service_advancedoutput_BtnToggle10->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle10, event_service_advancedoutput_BtnToggle10_OnReleased);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_BtnToggle10);

    service_advancedoutput_BtnToggle11 = leButtonWidget_New();
    service_advancedoutput_BtnToggle11->fn->setPosition(service_advancedoutput_BtnToggle11, 7, 120);
    service_advancedoutput_BtnToggle11->fn->setSize(service_advancedoutput_BtnToggle11, 59, 30);
    service_advancedoutput_BtnToggle11->fn->setScheme(service_advancedoutput_BtnToggle11, &Button_Gray2A);
    service_advancedoutput_BtnToggle11->fn->setBorderType(service_advancedoutput_BtnToggle11, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle11->fn->setPressedImage(service_advancedoutput_BtnToggle11, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle11->fn->setReleasedImage(service_advancedoutput_BtnToggle11, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle11->fn->setImageMargin(service_advancedoutput_BtnToggle11, 0);
    service_advancedoutput_BtnToggle11->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle11, event_service_advancedoutput_BtnToggle11_OnReleased);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_BtnToggle11);

    service_advancedoutput_BtnToggle12 = leButtonWidget_New();
    service_advancedoutput_BtnToggle12->fn->setPosition(service_advancedoutput_BtnToggle12, 7, 150);
    service_advancedoutput_BtnToggle12->fn->setSize(service_advancedoutput_BtnToggle12, 59, 30);
    service_advancedoutput_BtnToggle12->fn->setScheme(service_advancedoutput_BtnToggle12, &Button_Gray2A);
    service_advancedoutput_BtnToggle12->fn->setBorderType(service_advancedoutput_BtnToggle12, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle12->fn->setPressedImage(service_advancedoutput_BtnToggle12, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle12->fn->setReleasedImage(service_advancedoutput_BtnToggle12, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle12->fn->setImageMargin(service_advancedoutput_BtnToggle12, 0);
    service_advancedoutput_BtnToggle12->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle12, event_service_advancedoutput_BtnToggle12_OnReleased);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_BtnToggle12);

    service_advancedoutput_BtnToggle13 = leButtonWidget_New();
    service_advancedoutput_BtnToggle13->fn->setPosition(service_advancedoutput_BtnToggle13, 7, 180);
    service_advancedoutput_BtnToggle13->fn->setSize(service_advancedoutput_BtnToggle13, 59, 30);
    service_advancedoutput_BtnToggle13->fn->setScheme(service_advancedoutput_BtnToggle13, &Button_Gray2A);
    service_advancedoutput_BtnToggle13->fn->setBorderType(service_advancedoutput_BtnToggle13, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnToggle13->fn->setPressedImage(service_advancedoutput_BtnToggle13, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle13->fn->setReleasedImage(service_advancedoutput_BtnToggle13, (leImage*)&Service_slider_off);
    service_advancedoutput_BtnToggle13->fn->setImageMargin(service_advancedoutput_BtnToggle13, 0);
    service_advancedoutput_BtnToggle13->fn->setReleasedEventCallback(service_advancedoutput_BtnToggle13, event_service_advancedoutput_BtnToggle13_OnReleased);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_BtnToggle13);

    service_advancedoutput_BtnUp = leButtonWidget_New();
    service_advancedoutput_BtnUp->fn->setPosition(service_advancedoutput_BtnUp, 169, 196);
    service_advancedoutput_BtnUp->fn->setSize(service_advancedoutput_BtnUp, 195, 35);
    service_advancedoutput_BtnUp->fn->setScheme(service_advancedoutput_BtnUp, &Label_FontWhite);
    service_advancedoutput_BtnUp->fn->setBackgroundType(service_advancedoutput_BtnUp, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_BtnUp->fn->setBorderType(service_advancedoutput_BtnUp, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnUp->fn->setHAlignment(service_advancedoutput_BtnUp, LE_HALIGN_LEFT);
    service_advancedoutput_BtnUp->fn->setString(service_advancedoutput_BtnUp, (leString*)&string_previousPage);
    service_advancedoutput_BtnUp->fn->setReleasedImage(service_advancedoutput_BtnUp, (leImage*)&littleUP);
    service_advancedoutput_BtnUp->fn->setReleasedEventCallback(service_advancedoutput_BtnUp, event_service_advancedoutput_BtnUp_OnReleased);
    service_advancedoutput_PanelPage2->fn->addChild(service_advancedoutput_PanelPage2, (leWidget*)service_advancedoutput_BtnUp);

    service_advancedoutput_BtnExit = leButtonWidget_New();
    service_advancedoutput_BtnExit->fn->setPosition(service_advancedoutput_BtnExit, 415, 2);
    service_advancedoutput_BtnExit->fn->setSize(service_advancedoutput_BtnExit, 60, 55);
    service_advancedoutput_BtnExit->fn->setScheme(service_advancedoutput_BtnExit, &Button_Transparent);
    service_advancedoutput_BtnExit->fn->setBackgroundType(service_advancedoutput_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_BtnExit->fn->setBorderType(service_advancedoutput_BtnExit, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnExit->fn->setHAlignment(service_advancedoutput_BtnExit, LE_HALIGN_RIGHT);
    service_advancedoutput_BtnExit->fn->setVAlignment(service_advancedoutput_BtnExit, LE_VALIGN_TOP);
    service_advancedoutput_BtnExit->fn->setMargins(service_advancedoutput_BtnExit, 4, 10, 10, 4);
    service_advancedoutput_BtnExit->fn->setPressedImage(service_advancedoutput_BtnExit, (leImage*)&Menu_exit_white);
    service_advancedoutput_BtnExit->fn->setReleasedImage(service_advancedoutput_BtnExit, (leImage*)&Menu_exit_white);
    service_advancedoutput_BtnExit->fn->setReleasedEventCallback(service_advancedoutput_BtnExit, event_service_advancedoutput_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_BtnExit);

    service_advancedoutput_BtnAutomatic = leButtonWidget_New();
    service_advancedoutput_BtnAutomatic->fn->setPosition(service_advancedoutput_BtnAutomatic, 348, 95);
    service_advancedoutput_BtnAutomatic->fn->setSize(service_advancedoutput_BtnAutomatic, 111, 54);
    service_advancedoutput_BtnAutomatic->fn->setScheme(service_advancedoutput_BtnAutomatic, &Button_LightBlue_WhiteBorder);
    service_advancedoutput_BtnAutomatic->fn->setBorderType(service_advancedoutput_BtnAutomatic, LE_WIDGET_BORDER_LINE);
    service_advancedoutput_BtnAutomatic->fn->setString(service_advancedoutput_BtnAutomatic, (leString*)&string_SERVICE7_OUTPUT_Automatic);
    service_advancedoutput_BtnAutomatic->fn->setReleasedEventCallback(service_advancedoutput_BtnAutomatic, event_service_advancedoutput_BtnAutomatic_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_BtnAutomatic);

    service_advancedoutput_BtnManual = leButtonWidget_New();
    service_advancedoutput_BtnManual->fn->setPosition(service_advancedoutput_BtnManual, 347, 159);
    service_advancedoutput_BtnManual->fn->setSize(service_advancedoutput_BtnManual, 114, 54);
    service_advancedoutput_BtnManual->fn->setScheme(service_advancedoutput_BtnManual, &Button_Gray2_WhiteBorder);
    service_advancedoutput_BtnManual->fn->setBorderType(service_advancedoutput_BtnManual, LE_WIDGET_BORDER_LINE);
    service_advancedoutput_BtnManual->fn->setString(service_advancedoutput_BtnManual, (leString*)&string_SERVICE7_OUTPUT_Manual);
    service_advancedoutput_BtnManual->fn->setReleasedEventCallback(service_advancedoutput_BtnManual, event_service_advancedoutput_BtnManual_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_BtnManual);

    service_advancedoutput_BtnHome = leButtonWidget_New();
    service_advancedoutput_BtnHome->fn->setPosition(service_advancedoutput_BtnHome, 439, 230);
    service_advancedoutput_BtnHome->fn->setSize(service_advancedoutput_BtnHome, 40, 40);
    service_advancedoutput_BtnHome->fn->setScheme(service_advancedoutput_BtnHome, &BlackBack);
    service_advancedoutput_BtnHome->fn->setBackgroundType(service_advancedoutput_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_BtnHome->fn->setBorderType(service_advancedoutput_BtnHome, LE_WIDGET_BORDER_NONE);
    service_advancedoutput_BtnHome->fn->setPressedImage(service_advancedoutput_BtnHome, (leImage*)&Menu_home);
    service_advancedoutput_BtnHome->fn->setReleasedImage(service_advancedoutput_BtnHome, (leImage*)&Menu_home);
    service_advancedoutput_BtnHome->fn->setReleasedEventCallback(service_advancedoutput_BtnHome, event_service_advancedoutput_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_BtnHome);

    service_advancedoutput_LblMotortitle = leLabelWidget_New();
    service_advancedoutput_LblMotortitle->fn->setPosition(service_advancedoutput_LblMotortitle, 227, 12);
    service_advancedoutput_LblMotortitle->fn->setSize(service_advancedoutput_LblMotortitle, 185, 25);
    service_advancedoutput_LblMotortitle->fn->setScheme(service_advancedoutput_LblMotortitle, &menu_btn2);
    service_advancedoutput_LblMotortitle->fn->setBackgroundType(service_advancedoutput_LblMotortitle, LE_WIDGET_BACKGROUND_NONE);
    service_advancedoutput_LblMotortitle->fn->setString(service_advancedoutput_LblMotortitle, (leString*)&string_motorTitle);
    root1->fn->addChild(root1, (leWidget*)service_advancedoutput_LblMotortitle);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advancedoutput_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advancedoutput(void)
{
    service_advancedoutput_OnUpdate(); // raise event
}

void screenHide_service_advancedoutput(void)
{
    service_advancedoutput_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advancedoutput_Layer_0_FillPanel = NULL;
    service_advancedoutput_LblTitle = NULL;
    service_advancedoutput_PanelPage1 = NULL;
    service_advancedoutput_PanelPage2 = NULL;
    service_advancedoutput_BtnExit = NULL;
    service_advancedoutput_BtnAutomatic = NULL;
    service_advancedoutput_BtnManual = NULL;
    service_advancedoutput_BtnHome = NULL;
    service_advancedoutput_LblMotortitle = NULL;
    service_advancedoutput_LblGearMotorValue = NULL;
    service_advancedoutput_LblLabel1 = NULL;
    service_advancedoutput_LblLabel6 = NULL;
    service_advancedoutput_LblLabel2 = NULL;
    service_advancedoutput_LblLabel3 = NULL;
    service_advancedoutput_LblLabel4 = NULL;
    service_advancedoutput_LblLabel5 = NULL;
    service_advancedoutput_BtnToggle1 = NULL;
    service_advancedoutput_BtnToggle2 = NULL;
    service_advancedoutput_BtnToggle3 = NULL;
    service_advancedoutput_BtnToggle4 = NULL;
    service_advancedoutput_BtnToggle5 = NULL;
    service_advancedoutput_BtnToggle6 = NULL;
    service_advancedoutput_BtnDown = NULL;
    service_advancedoutput_LblLabel7 = NULL;
    service_advancedoutput_lblLabel8 = NULL;
    service_advancedoutput_LblLabel9 = NULL;
    service_advancedoutput_LblLabel10 = NULL;
    service_advancedoutput_LblLabel11 = NULL;
    service_advancedoutput_LBlLabel12 = NULL;
    service_advancedoutput_LblLabel13 = NULL;
    service_advancedoutput_BtnToggle7 = NULL;
    service_advancedoutput_BtnToggle8 = NULL;
    service_advancedoutput_BtnToggle9 = NULL;
    service_advancedoutput_BtnToggle10 = NULL;
    service_advancedoutput_BtnToggle11 = NULL;
    service_advancedoutput_BtnToggle12 = NULL;
    service_advancedoutput_BtnToggle13 = NULL;
    service_advancedoutput_BtnUp = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advancedoutput(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advancedoutput(uint32_t lyrIdx)
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

