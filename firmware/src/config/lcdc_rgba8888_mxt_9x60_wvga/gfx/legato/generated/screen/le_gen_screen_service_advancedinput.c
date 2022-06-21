#include "gfx/legato/generated/screen/le_gen_screen_service_advancedinput.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advancedinput_Layer_0_FillPanel;
leLabelWidget* service_advancedinput_LabelTitle;
leButtonWidget* service_advancedinput_BnHome;
leButtonWidget* service_advancedinput_BnExit;
leWidget* service_advancedinput_PanelPage2;
leWidget* service_advancedinput_PanelPage1;
leLabelWidget* service_advancedinput_LblHotWaterSensorH;
leLabelWidget* service_advancedinput_LblHotWaterSensorL;
leLabelWidget* service_advancedinput_LblGearMotorCurrent;
leLabelWidget* service_advancedinput_LblPMRequiredIn;
leLabelWidget* service_advancedinput_LblFilterChangeRequiredIn;
leLabelWidget* service_advancedinput_LblWaterQuality;
leButtonWidget* service_advancedinput_BtnPre;
leImageWidget* service_advancedinput_ImgHotWaterSensorH;
leImageWidget* service_advancedinput_ImgHotWaterSensorL;
leLabelWidget* service_advancedinput_lblGearMotorCurrentVal;
leLabelWidget* service_advancedinput_LblPMRequiredInVal;
leLabelWidget* service_advancedinput_LblFilterChangeRequiredInVal;
leLabelWidget* service_advancedinput_LblWaterQualityVal;
leLabelWidget* service_advancedinput_LblActiveMode;
leLabelWidget* service_advancedinput_LblErrorStatus;
leLabelWidget* service_advancedinput_LblHighWaterSensor;
leLabelWidget* service_advancedinput_LblLowWaterSensor;
leLabelWidget* service_advancedinput_LblDripTrayFull;
leLabelWidget* service_advancedinput_LblChassisWaterSensor;
leButtonWidget* service_advancedinput_BtnNext;
leLabelWidget* service_advancedinput_LblActiveModeVal;
leLabelWidget* service_advancedinput_LblErrorStatusVal;
leImageWidget* service_advancedinput_ImgHighWaterSensor;
leImageWidget* service_advancedinput_ImgLowWaterSensor;
leImageWidget* service_advancedinput_ImgDripTrayFull;
leImageWidget* service_advancedinput_ImgChassisWaterSensor;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advancedinput(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advancedinput(void)
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

    service_advancedinput_Layer_0_FillPanel = leWidget_New();
    service_advancedinput_Layer_0_FillPanel->fn->setPosition(service_advancedinput_Layer_0_FillPanel, 0, 0);
    service_advancedinput_Layer_0_FillPanel->fn->setSize(service_advancedinput_Layer_0_FillPanel, 480, 272);
    service_advancedinput_Layer_0_FillPanel->fn->setScheme(service_advancedinput_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advancedinput_Layer_0_FillPanel);

    service_advancedinput_LabelTitle = leLabelWidget_New();
    service_advancedinput_LabelTitle->fn->setPosition(service_advancedinput_LabelTitle, 5, 7);
    service_advancedinput_LabelTitle->fn->setSize(service_advancedinput_LabelTitle, 263, 32);
    service_advancedinput_LabelTitle->fn->setScheme(service_advancedinput_LabelTitle, &Label_Gray2A);
    service_advancedinput_LabelTitle->fn->setBackgroundType(service_advancedinput_LabelTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_LabelTitle->fn->setString(service_advancedinput_LabelTitle, (leString*)&string_SERVICE_ADVANCED_Input);
    root1->fn->addChild(root1, (leWidget*)service_advancedinput_LabelTitle);

    service_advancedinput_BnHome = leButtonWidget_New();
    service_advancedinput_BnHome->fn->setPosition(service_advancedinput_BnHome, 435, 225);
    service_advancedinput_BnHome->fn->setSize(service_advancedinput_BnHome, 40, 40);
    service_advancedinput_BnHome->fn->setScheme(service_advancedinput_BnHome, &BlackBack);
    service_advancedinput_BnHome->fn->setBackgroundType(service_advancedinput_BnHome, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_BnHome->fn->setBorderType(service_advancedinput_BnHome, LE_WIDGET_BORDER_NONE);
    service_advancedinput_BnHome->fn->setPressedImage(service_advancedinput_BnHome, (leImage*)&Menu_home);
    service_advancedinput_BnHome->fn->setReleasedImage(service_advancedinput_BnHome, (leImage*)&Menu_home);
    service_advancedinput_BnHome->fn->setReleasedEventCallback(service_advancedinput_BnHome, event_service_advancedinput_BnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedinput_BnHome);

    service_advancedinput_BnExit = leButtonWidget_New();
    service_advancedinput_BnExit->fn->setPosition(service_advancedinput_BnExit, 425, 2);
    service_advancedinput_BnExit->fn->setSize(service_advancedinput_BnExit, 50, 40);
    service_advancedinput_BnExit->fn->setScheme(service_advancedinput_BnExit, &BlackBack);
    service_advancedinput_BnExit->fn->setBackgroundType(service_advancedinput_BnExit, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_BnExit->fn->setBorderType(service_advancedinput_BnExit, LE_WIDGET_BORDER_NONE);
    service_advancedinput_BnExit->fn->setHAlignment(service_advancedinput_BnExit, LE_HALIGN_RIGHT);
    service_advancedinput_BnExit->fn->setVAlignment(service_advancedinput_BnExit, LE_VALIGN_TOP);
    service_advancedinput_BnExit->fn->setMargins(service_advancedinput_BnExit, 4, 10, 10, 4);
    service_advancedinput_BnExit->fn->setPressedImage(service_advancedinput_BnExit, (leImage*)&Menu_exit_white);
    service_advancedinput_BnExit->fn->setReleasedImage(service_advancedinput_BnExit, (leImage*)&Menu_exit_white);
    service_advancedinput_BnExit->fn->setReleasedEventCallback(service_advancedinput_BnExit, event_service_advancedinput_BnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedinput_BnExit);

    service_advancedinput_PanelPage2 = leWidget_New();
    service_advancedinput_PanelPage2->fn->setPosition(service_advancedinput_PanelPage2, 7, 53);
    service_advancedinput_PanelPage2->fn->setSize(service_advancedinput_PanelPage2, 474, 216);
    service_advancedinput_PanelPage2->fn->setEnabled(service_advancedinput_PanelPage2, LE_FALSE);
    service_advancedinput_PanelPage2->fn->setScheme(service_advancedinput_PanelPage2, &Label_Gray2A);
    service_advancedinput_PanelPage2->fn->setBackgroundType(service_advancedinput_PanelPage2, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)service_advancedinput_PanelPage2);

    service_advancedinput_LblHotWaterSensorH = leLabelWidget_New();
    service_advancedinput_LblHotWaterSensorH->fn->setPosition(service_advancedinput_LblHotWaterSensorH, 0, 0);
    service_advancedinput_LblHotWaterSensorH->fn->setSize(service_advancedinput_LblHotWaterSensorH, 415, 36);
    service_advancedinput_LblHotWaterSensorH->fn->setScheme(service_advancedinput_LblHotWaterSensorH, &Label_Gray2A);
    service_advancedinput_LblHotWaterSensorH->fn->setBorderType(service_advancedinput_LblHotWaterSensorH, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblHotWaterSensorH->fn->setString(service_advancedinput_LblHotWaterSensorH, (leString*)&string_SERVICE7_INPUT_HotTankHighWaterSensor);
    service_advancedinput_PanelPage2->fn->addChild(service_advancedinput_PanelPage2, (leWidget*)service_advancedinput_LblHotWaterSensorH);

    service_advancedinput_ImgHotWaterSensorH = leImageWidget_New();
    service_advancedinput_ImgHotWaterSensorH->fn->setPosition(service_advancedinput_ImgHotWaterSensorH, 280, 0);
    service_advancedinput_ImgHotWaterSensorH->fn->setSize(service_advancedinput_ImgHotWaterSensorH, 135, 36);
    service_advancedinput_ImgHotWaterSensorH->fn->setScheme(service_advancedinput_ImgHotWaterSensorH, &BlackBack);
    service_advancedinput_ImgHotWaterSensorH->fn->setBackgroundType(service_advancedinput_ImgHotWaterSensorH, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_ImgHotWaterSensorH->fn->setBorderType(service_advancedinput_ImgHotWaterSensorH, LE_WIDGET_BORDER_NONE);
    service_advancedinput_ImgHotWaterSensorH->fn->setImage(service_advancedinput_ImgHotWaterSensorH, (leImage*)&Menu_uncheck);
    service_advancedinput_LblHotWaterSensorH->fn->addChild(service_advancedinput_LblHotWaterSensorH, (leWidget*)service_advancedinput_ImgHotWaterSensorH);

    service_advancedinput_LblHotWaterSensorL = leLabelWidget_New();
    service_advancedinput_LblHotWaterSensorL->fn->setPosition(service_advancedinput_LblHotWaterSensorL, 0, 36);
    service_advancedinput_LblHotWaterSensorL->fn->setSize(service_advancedinput_LblHotWaterSensorL, 415, 36);
    service_advancedinput_LblHotWaterSensorL->fn->setScheme(service_advancedinput_LblHotWaterSensorL, &Label_Gray2A);
    service_advancedinput_LblHotWaterSensorL->fn->setBorderType(service_advancedinput_LblHotWaterSensorL, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblHotWaterSensorL->fn->setString(service_advancedinput_LblHotWaterSensorL, (leString*)&string_SERVICE7_INPUT_HotTankLowWaterSensor);
    service_advancedinput_PanelPage2->fn->addChild(service_advancedinput_PanelPage2, (leWidget*)service_advancedinput_LblHotWaterSensorL);

    service_advancedinput_ImgHotWaterSensorL = leImageWidget_New();
    service_advancedinput_ImgHotWaterSensorL->fn->setPosition(service_advancedinput_ImgHotWaterSensorL, 280, 0);
    service_advancedinput_ImgHotWaterSensorL->fn->setSize(service_advancedinput_ImgHotWaterSensorL, 135, 36);
    service_advancedinput_ImgHotWaterSensorL->fn->setScheme(service_advancedinput_ImgHotWaterSensorL, &BlackBack);
    service_advancedinput_ImgHotWaterSensorL->fn->setBackgroundType(service_advancedinput_ImgHotWaterSensorL, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_ImgHotWaterSensorL->fn->setBorderType(service_advancedinput_ImgHotWaterSensorL, LE_WIDGET_BORDER_NONE);
    service_advancedinput_ImgHotWaterSensorL->fn->setImage(service_advancedinput_ImgHotWaterSensorL, (leImage*)&Menu_uncheck);
    service_advancedinput_LblHotWaterSensorL->fn->addChild(service_advancedinput_LblHotWaterSensorL, (leWidget*)service_advancedinput_ImgHotWaterSensorL);

    service_advancedinput_LblGearMotorCurrent = leLabelWidget_New();
    service_advancedinput_LblGearMotorCurrent->fn->setPosition(service_advancedinput_LblGearMotorCurrent, 0, 72);
    service_advancedinput_LblGearMotorCurrent->fn->setSize(service_advancedinput_LblGearMotorCurrent, 415, 36);
    service_advancedinput_LblGearMotorCurrent->fn->setScheme(service_advancedinput_LblGearMotorCurrent, &Label_Gray2A);
    service_advancedinput_LblGearMotorCurrent->fn->setBorderType(service_advancedinput_LblGearMotorCurrent, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblGearMotorCurrent->fn->setString(service_advancedinput_LblGearMotorCurrent, (leString*)&string_SERVICE7_INPUT_GearMotorCurrent);
    service_advancedinput_PanelPage2->fn->addChild(service_advancedinput_PanelPage2, (leWidget*)service_advancedinput_LblGearMotorCurrent);

    service_advancedinput_lblGearMotorCurrentVal = leLabelWidget_New();
    service_advancedinput_lblGearMotorCurrentVal->fn->setPosition(service_advancedinput_lblGearMotorCurrentVal, 280, 0);
    service_advancedinput_lblGearMotorCurrentVal->fn->setSize(service_advancedinput_lblGearMotorCurrentVal, 135, 36);
    service_advancedinput_lblGearMotorCurrentVal->fn->setScheme(service_advancedinput_lblGearMotorCurrentVal, &Label_FontWhite);
    service_advancedinput_lblGearMotorCurrentVal->fn->setBackgroundType(service_advancedinput_lblGearMotorCurrentVal, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_lblGearMotorCurrentVal->fn->setHAlignment(service_advancedinput_lblGearMotorCurrentVal, LE_HALIGN_CENTER);
    service_advancedinput_lblGearMotorCurrentVal->fn->setString(service_advancedinput_lblGearMotorCurrentVal, (leString*)&string_SERVICE7_GEARMOTOR_Amp0);
    service_advancedinput_LblGearMotorCurrent->fn->addChild(service_advancedinput_LblGearMotorCurrent, (leWidget*)service_advancedinput_lblGearMotorCurrentVal);

    service_advancedinput_LblPMRequiredIn = leLabelWidget_New();
    service_advancedinput_LblPMRequiredIn->fn->setPosition(service_advancedinput_LblPMRequiredIn, 0, 108);
    service_advancedinput_LblPMRequiredIn->fn->setSize(service_advancedinput_LblPMRequiredIn, 415, 36);
    service_advancedinput_LblPMRequiredIn->fn->setScheme(service_advancedinput_LblPMRequiredIn, &Label_Gray2A);
    service_advancedinput_LblPMRequiredIn->fn->setBorderType(service_advancedinput_LblPMRequiredIn, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblPMRequiredIn->fn->setString(service_advancedinput_LblPMRequiredIn, (leString*)&string_SERVICE7_INPUT_PMReqired);
    service_advancedinput_PanelPage2->fn->addChild(service_advancedinput_PanelPage2, (leWidget*)service_advancedinput_LblPMRequiredIn);

    service_advancedinput_LblPMRequiredInVal = leLabelWidget_New();
    service_advancedinput_LblPMRequiredInVal->fn->setPosition(service_advancedinput_LblPMRequiredInVal, 280, 0);
    service_advancedinput_LblPMRequiredInVal->fn->setSize(service_advancedinput_LblPMRequiredInVal, 135, 36);
    service_advancedinput_LblPMRequiredInVal->fn->setScheme(service_advancedinput_LblPMRequiredInVal, &Label_Gray2A);
    service_advancedinput_LblPMRequiredInVal->fn->setBackgroundType(service_advancedinput_LblPMRequiredInVal, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_LblPMRequiredInVal->fn->setHAlignment(service_advancedinput_LblPMRequiredInVal, LE_HALIGN_CENTER);
    service_advancedinput_LblPMRequiredInVal->fn->setString(service_advancedinput_LblPMRequiredInVal, (leString*)&string_SERVICE7_INPUT_Days);
    service_advancedinput_LblPMRequiredIn->fn->addChild(service_advancedinput_LblPMRequiredIn, (leWidget*)service_advancedinput_LblPMRequiredInVal);

    service_advancedinput_LblFilterChangeRequiredIn = leLabelWidget_New();
    service_advancedinput_LblFilterChangeRequiredIn->fn->setPosition(service_advancedinput_LblFilterChangeRequiredIn, 0, 144);
    service_advancedinput_LblFilterChangeRequiredIn->fn->setSize(service_advancedinput_LblFilterChangeRequiredIn, 415, 36);
    service_advancedinput_LblFilterChangeRequiredIn->fn->setScheme(service_advancedinput_LblFilterChangeRequiredIn, &Label_Gray2A);
    service_advancedinput_LblFilterChangeRequiredIn->fn->setBorderType(service_advancedinput_LblFilterChangeRequiredIn, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblFilterChangeRequiredIn->fn->setString(service_advancedinput_LblFilterChangeRequiredIn, (leString*)&string_SERVICE7_INPUT_FilterChangeRequired);
    service_advancedinput_PanelPage2->fn->addChild(service_advancedinput_PanelPage2, (leWidget*)service_advancedinput_LblFilterChangeRequiredIn);

    service_advancedinput_LblFilterChangeRequiredInVal = leLabelWidget_New();
    service_advancedinput_LblFilterChangeRequiredInVal->fn->setPosition(service_advancedinput_LblFilterChangeRequiredInVal, 280, 0);
    service_advancedinput_LblFilterChangeRequiredInVal->fn->setSize(service_advancedinput_LblFilterChangeRequiredInVal, 135, 36);
    service_advancedinput_LblFilterChangeRequiredInVal->fn->setScheme(service_advancedinput_LblFilterChangeRequiredInVal, &Label_Gray2A);
    service_advancedinput_LblFilterChangeRequiredInVal->fn->setBackgroundType(service_advancedinput_LblFilterChangeRequiredInVal, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_LblFilterChangeRequiredInVal->fn->setHAlignment(service_advancedinput_LblFilterChangeRequiredInVal, LE_HALIGN_CENTER);
    service_advancedinput_LblFilterChangeRequiredInVal->fn->setString(service_advancedinput_LblFilterChangeRequiredInVal, (leString*)&string_SERVICE7_INPUT_Days);
    service_advancedinput_LblFilterChangeRequiredIn->fn->addChild(service_advancedinput_LblFilterChangeRequiredIn, (leWidget*)service_advancedinput_LblFilterChangeRequiredInVal);

    service_advancedinput_LblWaterQuality = leLabelWidget_New();
    service_advancedinput_LblWaterQuality->fn->setPosition(service_advancedinput_LblWaterQuality, 0, 180);
    service_advancedinput_LblWaterQuality->fn->setSize(service_advancedinput_LblWaterQuality, 415, 36);
    service_advancedinput_LblWaterQuality->fn->setScheme(service_advancedinput_LblWaterQuality, &Label_Gray2A);
    service_advancedinput_LblWaterQuality->fn->setBorderType(service_advancedinput_LblWaterQuality, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblWaterQuality->fn->setString(service_advancedinput_LblWaterQuality, (leString*)&string_SERVICE7_INPUT_WaterQuality);
    service_advancedinput_PanelPage2->fn->addChild(service_advancedinput_PanelPage2, (leWidget*)service_advancedinput_LblWaterQuality);

    service_advancedinput_LblWaterQualityVal = leLabelWidget_New();
    service_advancedinput_LblWaterQualityVal->fn->setPosition(service_advancedinput_LblWaterQualityVal, 280, 0);
    service_advancedinput_LblWaterQualityVal->fn->setSize(service_advancedinput_LblWaterQualityVal, 135, 36);
    service_advancedinput_LblWaterQualityVal->fn->setScheme(service_advancedinput_LblWaterQualityVal, &Label_FontWhite);
    service_advancedinput_LblWaterQualityVal->fn->setBackgroundType(service_advancedinput_LblWaterQualityVal, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_LblWaterQualityVal->fn->setHAlignment(service_advancedinput_LblWaterQualityVal, LE_HALIGN_CENTER);
    service_advancedinput_LblWaterQualityVal->fn->setString(service_advancedinput_LblWaterQualityVal, (leString*)&string_SERVICE7_INPUT_Low);
    service_advancedinput_LblWaterQuality->fn->addChild(service_advancedinput_LblWaterQuality, (leWidget*)service_advancedinput_LblWaterQualityVal);

    service_advancedinput_BtnPre = leButtonWidget_New();
    service_advancedinput_BtnPre->fn->setPosition(service_advancedinput_BtnPre, 416, 63);
    service_advancedinput_BtnPre->fn->setSize(service_advancedinput_BtnPre, 55, 50);
    service_advancedinput_BtnPre->fn->setBackgroundType(service_advancedinput_BtnPre, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_BtnPre->fn->setBorderType(service_advancedinput_BtnPre, LE_WIDGET_BORDER_NONE);
    service_advancedinput_BtnPre->fn->setPressedImage(service_advancedinput_BtnPre, (leImage*)&Menu_up);
    service_advancedinput_BtnPre->fn->setReleasedImage(service_advancedinput_BtnPre, (leImage*)&Menu_up);
    service_advancedinput_BtnPre->fn->setReleasedEventCallback(service_advancedinput_BtnPre, event_service_advancedinput_BtnPre_OnReleased);
    service_advancedinput_PanelPage2->fn->addChild(service_advancedinput_PanelPage2, (leWidget*)service_advancedinput_BtnPre);

    service_advancedinput_PanelPage1 = leWidget_New();
    service_advancedinput_PanelPage1->fn->setPosition(service_advancedinput_PanelPage1, 7, 53);
    service_advancedinput_PanelPage1->fn->setSize(service_advancedinput_PanelPage1, 474, 216);
    service_advancedinput_PanelPage1->fn->setVisible(service_advancedinput_PanelPage1, LE_FALSE);
    service_advancedinput_PanelPage1->fn->setScheme(service_advancedinput_PanelPage1, &Label_Gray2A);
    service_advancedinput_PanelPage1->fn->setBackgroundType(service_advancedinput_PanelPage1, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_PanelPage1->fn->setHAlignment(service_advancedinput_PanelPage1, LE_HALIGN_RIGHT);
    service_advancedinput_PanelPage1->fn->setVAlignment(service_advancedinput_PanelPage1, LE_VALIGN_BOTTOM);
    root1->fn->addChild(root1, (leWidget*)service_advancedinput_PanelPage1);

    service_advancedinput_LblActiveMode = leLabelWidget_New();
    service_advancedinput_LblActiveMode->fn->setPosition(service_advancedinput_LblActiveMode, 0, 0);
    service_advancedinput_LblActiveMode->fn->setSize(service_advancedinput_LblActiveMode, 415, 36);
    service_advancedinput_LblActiveMode->fn->setScheme(service_advancedinput_LblActiveMode, &Label_Gray2A);
    service_advancedinput_LblActiveMode->fn->setBorderType(service_advancedinput_LblActiveMode, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblActiveMode->fn->setString(service_advancedinput_LblActiveMode, (leString*)&string_SERVICE7_INPUT_ActiveMode);
    service_advancedinput_PanelPage1->fn->addChild(service_advancedinput_PanelPage1, (leWidget*)service_advancedinput_LblActiveMode);

    service_advancedinput_LblActiveModeVal = leLabelWidget_New();
    service_advancedinput_LblActiveModeVal->fn->setPosition(service_advancedinput_LblActiveModeVal, 280, 0);
    service_advancedinput_LblActiveModeVal->fn->setSize(service_advancedinput_LblActiveModeVal, 135, 36);
    service_advancedinput_LblActiveModeVal->fn->setScheme(service_advancedinput_LblActiveModeVal, &Label_FontWhite);
    service_advancedinput_LblActiveModeVal->fn->setBackgroundType(service_advancedinput_LblActiveModeVal, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_LblActiveModeVal->fn->setHAlignment(service_advancedinput_LblActiveModeVal, LE_HALIGN_CENTER);
    service_advancedinput_LblActiveModeVal->fn->setString(service_advancedinput_LblActiveModeVal, (leString*)&string_SERVICE7_INPUT_TimeDelay);
    service_advancedinput_LblActiveMode->fn->addChild(service_advancedinput_LblActiveMode, (leWidget*)service_advancedinput_LblActiveModeVal);

    service_advancedinput_LblErrorStatus = leLabelWidget_New();
    service_advancedinput_LblErrorStatus->fn->setPosition(service_advancedinput_LblErrorStatus, 0, 36);
    service_advancedinput_LblErrorStatus->fn->setSize(service_advancedinput_LblErrorStatus, 415, 36);
    service_advancedinput_LblErrorStatus->fn->setScheme(service_advancedinput_LblErrorStatus, &Label_Gray2A);
    service_advancedinput_LblErrorStatus->fn->setBorderType(service_advancedinput_LblErrorStatus, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblErrorStatus->fn->setString(service_advancedinput_LblErrorStatus, (leString*)&string_SERVICE7_INPUT_ErrorStatus);
    service_advancedinput_PanelPage1->fn->addChild(service_advancedinput_PanelPage1, (leWidget*)service_advancedinput_LblErrorStatus);

    service_advancedinput_LblErrorStatusVal = leLabelWidget_New();
    service_advancedinput_LblErrorStatusVal->fn->setPosition(service_advancedinput_LblErrorStatusVal, 280, 0);
    service_advancedinput_LblErrorStatusVal->fn->setSize(service_advancedinput_LblErrorStatusVal, 135, 36);
    service_advancedinput_LblErrorStatusVal->fn->setScheme(service_advancedinput_LblErrorStatusVal, &Label_FontWhite);
    service_advancedinput_LblErrorStatusVal->fn->setBackgroundType(service_advancedinput_LblErrorStatusVal, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_LblErrorStatusVal->fn->setHAlignment(service_advancedinput_LblErrorStatusVal, LE_HALIGN_CENTER);
    service_advancedinput_LblErrorStatusVal->fn->setString(service_advancedinput_LblErrorStatusVal, (leString*)&string_SERVICE7_INPUT_ErrorNone);
    service_advancedinput_LblErrorStatus->fn->addChild(service_advancedinput_LblErrorStatus, (leWidget*)service_advancedinput_LblErrorStatusVal);

    service_advancedinput_LblHighWaterSensor = leLabelWidget_New();
    service_advancedinput_LblHighWaterSensor->fn->setPosition(service_advancedinput_LblHighWaterSensor, 0, 72);
    service_advancedinput_LblHighWaterSensor->fn->setSize(service_advancedinput_LblHighWaterSensor, 415, 36);
    service_advancedinput_LblHighWaterSensor->fn->setScheme(service_advancedinput_LblHighWaterSensor, &Label_Gray2A);
    service_advancedinput_LblHighWaterSensor->fn->setBorderType(service_advancedinput_LblHighWaterSensor, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblHighWaterSensor->fn->setString(service_advancedinput_LblHighWaterSensor, (leString*)&string_SERVICE7_INPUT_HighWaterSensor);
    service_advancedinput_PanelPage1->fn->addChild(service_advancedinput_PanelPage1, (leWidget*)service_advancedinput_LblHighWaterSensor);

    service_advancedinput_ImgHighWaterSensor = leImageWidget_New();
    service_advancedinput_ImgHighWaterSensor->fn->setPosition(service_advancedinput_ImgHighWaterSensor, 280, 0);
    service_advancedinput_ImgHighWaterSensor->fn->setSize(service_advancedinput_ImgHighWaterSensor, 135, 36);
    service_advancedinput_ImgHighWaterSensor->fn->setScheme(service_advancedinput_ImgHighWaterSensor, &BlackBack);
    service_advancedinput_ImgHighWaterSensor->fn->setBackgroundType(service_advancedinput_ImgHighWaterSensor, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_ImgHighWaterSensor->fn->setBorderType(service_advancedinput_ImgHighWaterSensor, LE_WIDGET_BORDER_NONE);
    service_advancedinput_ImgHighWaterSensor->fn->setImage(service_advancedinput_ImgHighWaterSensor, (leImage*)&Menu_uncheck);
    service_advancedinput_LblHighWaterSensor->fn->addChild(service_advancedinput_LblHighWaterSensor, (leWidget*)service_advancedinput_ImgHighWaterSensor);

    service_advancedinput_LblLowWaterSensor = leLabelWidget_New();
    service_advancedinput_LblLowWaterSensor->fn->setPosition(service_advancedinput_LblLowWaterSensor, 0, 108);
    service_advancedinput_LblLowWaterSensor->fn->setSize(service_advancedinput_LblLowWaterSensor, 415, 36);
    service_advancedinput_LblLowWaterSensor->fn->setScheme(service_advancedinput_LblLowWaterSensor, &Label_Gray2A);
    service_advancedinput_LblLowWaterSensor->fn->setBorderType(service_advancedinput_LblLowWaterSensor, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblLowWaterSensor->fn->setString(service_advancedinput_LblLowWaterSensor, (leString*)&string_SERVICE7_INPUT_LowWaterSensor);
    service_advancedinput_PanelPage1->fn->addChild(service_advancedinput_PanelPage1, (leWidget*)service_advancedinput_LblLowWaterSensor);

    service_advancedinput_ImgLowWaterSensor = leImageWidget_New();
    service_advancedinput_ImgLowWaterSensor->fn->setPosition(service_advancedinput_ImgLowWaterSensor, 280, 0);
    service_advancedinput_ImgLowWaterSensor->fn->setSize(service_advancedinput_ImgLowWaterSensor, 135, 36);
    service_advancedinput_ImgLowWaterSensor->fn->setScheme(service_advancedinput_ImgLowWaterSensor, &Label_FontWhite);
    service_advancedinput_ImgLowWaterSensor->fn->setBackgroundType(service_advancedinput_ImgLowWaterSensor, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_ImgLowWaterSensor->fn->setBorderType(service_advancedinput_ImgLowWaterSensor, LE_WIDGET_BORDER_NONE);
    service_advancedinput_ImgLowWaterSensor->fn->setImage(service_advancedinput_ImgLowWaterSensor, (leImage*)&Menu_uncheck);
    service_advancedinput_LblLowWaterSensor->fn->addChild(service_advancedinput_LblLowWaterSensor, (leWidget*)service_advancedinput_ImgLowWaterSensor);

    service_advancedinput_LblDripTrayFull = leLabelWidget_New();
    service_advancedinput_LblDripTrayFull->fn->setPosition(service_advancedinput_LblDripTrayFull, 0, 144);
    service_advancedinput_LblDripTrayFull->fn->setSize(service_advancedinput_LblDripTrayFull, 415, 36);
    service_advancedinput_LblDripTrayFull->fn->setScheme(service_advancedinput_LblDripTrayFull, &Label_Gray2A);
    service_advancedinput_LblDripTrayFull->fn->setBorderType(service_advancedinput_LblDripTrayFull, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblDripTrayFull->fn->setString(service_advancedinput_LblDripTrayFull, (leString*)&string_SERVICE7_INPUT_DripTrayFull);
    service_advancedinput_PanelPage1->fn->addChild(service_advancedinput_PanelPage1, (leWidget*)service_advancedinput_LblDripTrayFull);

    service_advancedinput_ImgDripTrayFull = leImageWidget_New();
    service_advancedinput_ImgDripTrayFull->fn->setPosition(service_advancedinput_ImgDripTrayFull, 280, 0);
    service_advancedinput_ImgDripTrayFull->fn->setSize(service_advancedinput_ImgDripTrayFull, 135, 36);
    service_advancedinput_ImgDripTrayFull->fn->setScheme(service_advancedinput_ImgDripTrayFull, &Label_Gray2A);
    service_advancedinput_ImgDripTrayFull->fn->setBackgroundType(service_advancedinput_ImgDripTrayFull, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_ImgDripTrayFull->fn->setBorderType(service_advancedinput_ImgDripTrayFull, LE_WIDGET_BORDER_NONE);
    service_advancedinput_ImgDripTrayFull->fn->setImage(service_advancedinput_ImgDripTrayFull, (leImage*)&Menu_uncheck);
    service_advancedinput_LblDripTrayFull->fn->addChild(service_advancedinput_LblDripTrayFull, (leWidget*)service_advancedinput_ImgDripTrayFull);

    service_advancedinput_LblChassisWaterSensor = leLabelWidget_New();
    service_advancedinput_LblChassisWaterSensor->fn->setPosition(service_advancedinput_LblChassisWaterSensor, 0, 180);
    service_advancedinput_LblChassisWaterSensor->fn->setSize(service_advancedinput_LblChassisWaterSensor, 415, 36);
    service_advancedinput_LblChassisWaterSensor->fn->setScheme(service_advancedinput_LblChassisWaterSensor, &Label_Gray2A);
    service_advancedinput_LblChassisWaterSensor->fn->setBorderType(service_advancedinput_LblChassisWaterSensor, LE_WIDGET_BORDER_LINE);
    service_advancedinput_LblChassisWaterSensor->fn->setString(service_advancedinput_LblChassisWaterSensor, (leString*)&string_SERVICE7_INPUT_ChassisWaterSensor);
    service_advancedinput_PanelPage1->fn->addChild(service_advancedinput_PanelPage1, (leWidget*)service_advancedinput_LblChassisWaterSensor);

    service_advancedinput_ImgChassisWaterSensor = leImageWidget_New();
    service_advancedinput_ImgChassisWaterSensor->fn->setPosition(service_advancedinput_ImgChassisWaterSensor, 280, 0);
    service_advancedinput_ImgChassisWaterSensor->fn->setSize(service_advancedinput_ImgChassisWaterSensor, 135, 36);
    service_advancedinput_ImgChassisWaterSensor->fn->setScheme(service_advancedinput_ImgChassisWaterSensor, &BlackBack);
    service_advancedinput_ImgChassisWaterSensor->fn->setBackgroundType(service_advancedinput_ImgChassisWaterSensor, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_ImgChassisWaterSensor->fn->setBorderType(service_advancedinput_ImgChassisWaterSensor, LE_WIDGET_BORDER_NONE);
    service_advancedinput_ImgChassisWaterSensor->fn->setImage(service_advancedinput_ImgChassisWaterSensor, (leImage*)&Menu_uncheck);
    service_advancedinput_LblChassisWaterSensor->fn->addChild(service_advancedinput_LblChassisWaterSensor, (leWidget*)service_advancedinput_ImgChassisWaterSensor);

    service_advancedinput_BtnNext = leButtonWidget_New();
    service_advancedinput_BtnNext->fn->setPosition(service_advancedinput_BtnNext, 416, 63);
    service_advancedinput_BtnNext->fn->setSize(service_advancedinput_BtnNext, 55, 50);
    service_advancedinput_BtnNext->fn->setBackgroundType(service_advancedinput_BtnNext, LE_WIDGET_BACKGROUND_NONE);
    service_advancedinput_BtnNext->fn->setBorderType(service_advancedinput_BtnNext, LE_WIDGET_BORDER_NONE);
    service_advancedinput_BtnNext->fn->setPressedImage(service_advancedinput_BtnNext, (leImage*)&Menu_down);
    service_advancedinput_BtnNext->fn->setReleasedImage(service_advancedinput_BtnNext, (leImage*)&Menu_down);
    service_advancedinput_BtnNext->fn->setImagePosition(service_advancedinput_BtnNext, LE_RELATIVE_POSITION_ABOVE);
    service_advancedinput_BtnNext->fn->setReleasedEventCallback(service_advancedinput_BtnNext, event_service_advancedinput_BtnNext_OnReleased);
    service_advancedinput_PanelPage1->fn->addChild(service_advancedinput_PanelPage1, (leWidget*)service_advancedinput_BtnNext);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advancedinput_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advancedinput(void)
{
    service_advancedinput_OnUpdate(); // raise event
}

void screenHide_service_advancedinput(void)
{
    service_advancedinput_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advancedinput_Layer_0_FillPanel = NULL;
    service_advancedinput_LabelTitle = NULL;
    service_advancedinput_BnHome = NULL;
    service_advancedinput_BnExit = NULL;
    service_advancedinput_PanelPage2 = NULL;
    service_advancedinput_PanelPage1 = NULL;
    service_advancedinput_LblHotWaterSensorH = NULL;
    service_advancedinput_LblHotWaterSensorL = NULL;
    service_advancedinput_LblGearMotorCurrent = NULL;
    service_advancedinput_LblPMRequiredIn = NULL;
    service_advancedinput_LblFilterChangeRequiredIn = NULL;
    service_advancedinput_LblWaterQuality = NULL;
    service_advancedinput_BtnPre = NULL;
    service_advancedinput_ImgHotWaterSensorH = NULL;
    service_advancedinput_ImgHotWaterSensorL = NULL;
    service_advancedinput_lblGearMotorCurrentVal = NULL;
    service_advancedinput_LblPMRequiredInVal = NULL;
    service_advancedinput_LblFilterChangeRequiredInVal = NULL;
    service_advancedinput_LblWaterQualityVal = NULL;
    service_advancedinput_LblActiveMode = NULL;
    service_advancedinput_LblErrorStatus = NULL;
    service_advancedinput_LblHighWaterSensor = NULL;
    service_advancedinput_LblLowWaterSensor = NULL;
    service_advancedinput_LblDripTrayFull = NULL;
    service_advancedinput_LblChassisWaterSensor = NULL;
    service_advancedinput_BtnNext = NULL;
    service_advancedinput_LblActiveModeVal = NULL;
    service_advancedinput_LblErrorStatusVal = NULL;
    service_advancedinput_ImgHighWaterSensor = NULL;
    service_advancedinput_ImgLowWaterSensor = NULL;
    service_advancedinput_ImgDripTrayFull = NULL;
    service_advancedinput_ImgChassisWaterSensor = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advancedinput(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advancedinput(uint32_t lyrIdx)
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

