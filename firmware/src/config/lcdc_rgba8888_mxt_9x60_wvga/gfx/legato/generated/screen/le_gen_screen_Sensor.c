#include "gfx/legato/generated/screen/le_gen_screen_Sensor.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* Sensor_PanelWidget0;
leButtonWidget* Sensor_BtnHome;
leButtonWidget* Sensor_BtnExit;
leButtonWidget* Sensor_BtnSave;
leWidget* Sensor_PnlSensor1;
leWidget* Sensor_PnlSensor2;
leWidget* Sensor_PnlSensor3;
leLabelWidget* Sensor_LblDisplay;
leButtonWidget* Sensor_BtnRstUI;
leButtonWidget* Sensor_BtnUp1;
leButtonWidget* Sensor_BtnDown1;
leLabelWidget* Sensor_Lblsensor1;
leButtonWidget* Sensor_BtnUp2;
leButtonWidget* Sensor_BtnDown2;
leLabelWidget* Sensor_Lblsensor2;
leLabelWidget* Sensor_Lblsensor3;
leButtonWidget* Sensor_BtnDown3;
leButtonWidget* Sensor_BtnUp3;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_Sensor(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_Sensor(void)
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

    Sensor_PanelWidget0 = leWidget_New();
    Sensor_PanelWidget0->fn->setPosition(Sensor_PanelWidget0, 0, 0);
    Sensor_PanelWidget0->fn->setSize(Sensor_PanelWidget0, 480, 272);
    Sensor_PanelWidget0->fn->setScheme(Sensor_PanelWidget0, &BlackBack);
    root1->fn->addChild(root1, (leWidget*)Sensor_PanelWidget0);

    Sensor_BtnHome = leButtonWidget_New();
    Sensor_BtnHome->fn->setPosition(Sensor_BtnHome, 434, 234);
    Sensor_BtnHome->fn->setSize(Sensor_BtnHome, 46, 37);
    Sensor_BtnHome->fn->setScheme(Sensor_BtnHome, &BlackBack);
    Sensor_BtnHome->fn->setBackgroundType(Sensor_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    Sensor_BtnHome->fn->setBorderType(Sensor_BtnHome, LE_WIDGET_BORDER_NONE);
    Sensor_BtnHome->fn->setReleasedImage(Sensor_BtnHome, (leImage*)&Menu_home);
    Sensor_BtnHome->fn->setReleasedEventCallback(Sensor_BtnHome, event_Sensor_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)Sensor_BtnHome);

    Sensor_BtnExit = leButtonWidget_New();
    Sensor_BtnExit->fn->setPosition(Sensor_BtnExit, 433, 7);
    Sensor_BtnExit->fn->setSize(Sensor_BtnExit, 41, 33);
    Sensor_BtnExit->fn->setScheme(Sensor_BtnExit, &BlackBack);
    Sensor_BtnExit->fn->setBackgroundType(Sensor_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    Sensor_BtnExit->fn->setBorderType(Sensor_BtnExit, LE_WIDGET_BORDER_NONE);
    Sensor_BtnExit->fn->setReleasedImage(Sensor_BtnExit, (leImage*)&Menu_exit_white);
    Sensor_BtnExit->fn->setReleasedEventCallback(Sensor_BtnExit, event_Sensor_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)Sensor_BtnExit);

    Sensor_BtnSave = leButtonWidget_New();
    Sensor_BtnSave->fn->setPosition(Sensor_BtnSave, 418, 84);
    Sensor_BtnSave->fn->setSize(Sensor_BtnSave, 54, 52);
    Sensor_BtnSave->fn->setScheme(Sensor_BtnSave, &whiteground);
    Sensor_BtnSave->fn->setBackgroundType(Sensor_BtnSave, LE_WIDGET_BACKGROUND_NONE);
    Sensor_BtnSave->fn->setString(Sensor_BtnSave, (leString*)&string_save);
    Sensor_BtnSave->fn->setReleasedEventCallback(Sensor_BtnSave, event_Sensor_BtnSave_OnReleased);
    root1->fn->addChild(root1, (leWidget*)Sensor_BtnSave);

    Sensor_PnlSensor1 = leWidget_New();
    Sensor_PnlSensor1->fn->setPosition(Sensor_PnlSensor1, 51, 85);
    Sensor_PnlSensor1->fn->setSize(Sensor_PnlSensor1, 82, 184);
    Sensor_PnlSensor1->fn->setScheme(Sensor_PnlSensor1, &Panel_Gray4);
    Sensor_PnlSensor1->fn->setBackgroundType(Sensor_PnlSensor1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)Sensor_PnlSensor1);

    Sensor_BtnUp1 = leButtonWidget_New();
    Sensor_BtnUp1->fn->setPosition(Sensor_BtnUp1, 9, 5);
    Sensor_BtnUp1->fn->setSize(Sensor_BtnUp1, 50, 50);
    Sensor_BtnUp1->fn->setScheme(Sensor_BtnUp1, &BlackBack);
    Sensor_BtnUp1->fn->setReleasedImage(Sensor_BtnUp1, (leImage*)&Menu_up);
    Sensor_BtnUp1->fn->setReleasedEventCallback(Sensor_BtnUp1, event_Sensor_BtnUp1_OnReleased);
    Sensor_PnlSensor1->fn->addChild(Sensor_PnlSensor1, (leWidget*)Sensor_BtnUp1);

    Sensor_BtnDown1 = leButtonWidget_New();
    Sensor_BtnDown1->fn->setPosition(Sensor_BtnDown1, 9, 95);
    Sensor_BtnDown1->fn->setSize(Sensor_BtnDown1, 50, 50);
    Sensor_BtnDown1->fn->setScheme(Sensor_BtnDown1, &BlackBack);
    Sensor_BtnDown1->fn->setReleasedImage(Sensor_BtnDown1, (leImage*)&Menu_down);
    Sensor_BtnDown1->fn->setReleasedEventCallback(Sensor_BtnDown1, event_Sensor_BtnDown1_OnReleased);
    Sensor_PnlSensor1->fn->addChild(Sensor_PnlSensor1, (leWidget*)Sensor_BtnDown1);

    Sensor_Lblsensor1 = leLabelWidget_New();
    Sensor_Lblsensor1->fn->setPosition(Sensor_Lblsensor1, 7, 151);
    Sensor_Lblsensor1->fn->setSize(Sensor_Lblsensor1, 73, 34);
    Sensor_Lblsensor1->fn->setScheme(Sensor_Lblsensor1, &Label_Gray2A);
    Sensor_Lblsensor1->fn->setBackgroundType(Sensor_Lblsensor1, LE_WIDGET_BACKGROUND_NONE);
    Sensor_Lblsensor1->fn->setString(Sensor_Lblsensor1, (leString*)&string_sensor1);
    Sensor_PnlSensor1->fn->addChild(Sensor_PnlSensor1, (leWidget*)Sensor_Lblsensor1);

    Sensor_PnlSensor2 = leWidget_New();
    Sensor_PnlSensor2->fn->setPosition(Sensor_PnlSensor2, 173, 84);
    Sensor_PnlSensor2->fn->setSize(Sensor_PnlSensor2, 86, 187);
    Sensor_PnlSensor2->fn->setScheme(Sensor_PnlSensor2, &Panel_Gray4);
    Sensor_PnlSensor2->fn->setBackgroundType(Sensor_PnlSensor2, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)Sensor_PnlSensor2);

    Sensor_BtnUp2 = leButtonWidget_New();
    Sensor_BtnUp2->fn->setPosition(Sensor_BtnUp2, 7, 6);
    Sensor_BtnUp2->fn->setSize(Sensor_BtnUp2, 50, 50);
    Sensor_BtnUp2->fn->setScheme(Sensor_BtnUp2, &BlackBack);
    Sensor_BtnUp2->fn->setReleasedImage(Sensor_BtnUp2, (leImage*)&Menu_up);
    Sensor_BtnUp2->fn->setReleasedEventCallback(Sensor_BtnUp2, event_Sensor_BtnUp2_OnReleased);
    Sensor_PnlSensor2->fn->addChild(Sensor_PnlSensor2, (leWidget*)Sensor_BtnUp2);

    Sensor_BtnDown2 = leButtonWidget_New();
    Sensor_BtnDown2->fn->setPosition(Sensor_BtnDown2, 7, 96);
    Sensor_BtnDown2->fn->setSize(Sensor_BtnDown2, 50, 50);
    Sensor_BtnDown2->fn->setScheme(Sensor_BtnDown2, &BlackBack);
    Sensor_BtnDown2->fn->setReleasedImage(Sensor_BtnDown2, (leImage*)&Menu_down);
    Sensor_BtnDown2->fn->setReleasedEventCallback(Sensor_BtnDown2, event_Sensor_BtnDown2_OnReleased);
    Sensor_PnlSensor2->fn->addChild(Sensor_PnlSensor2, (leWidget*)Sensor_BtnDown2);

    Sensor_Lblsensor2 = leLabelWidget_New();
    Sensor_Lblsensor2->fn->setPosition(Sensor_Lblsensor2, -1, 153);
    Sensor_Lblsensor2->fn->setSize(Sensor_Lblsensor2, 85, 33);
    Sensor_Lblsensor2->fn->setScheme(Sensor_Lblsensor2, &Label_Gray2A);
    Sensor_Lblsensor2->fn->setBackgroundType(Sensor_Lblsensor2, LE_WIDGET_BACKGROUND_NONE);
    Sensor_Lblsensor2->fn->setString(Sensor_Lblsensor2, (leString*)&string_sensor2);
    Sensor_PnlSensor2->fn->addChild(Sensor_PnlSensor2, (leWidget*)Sensor_Lblsensor2);

    Sensor_PnlSensor3 = leWidget_New();
    Sensor_PnlSensor3->fn->setPosition(Sensor_PnlSensor3, 293, 87);
    Sensor_PnlSensor3->fn->setSize(Sensor_PnlSensor3, 93, 182);
    Sensor_PnlSensor3->fn->setScheme(Sensor_PnlSensor3, &Panel_Gray4);
    Sensor_PnlSensor3->fn->setBackgroundType(Sensor_PnlSensor3, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->addChild(root1, (leWidget*)Sensor_PnlSensor3);

    Sensor_Lblsensor3 = leLabelWidget_New();
    Sensor_Lblsensor3->fn->setPosition(Sensor_Lblsensor3, 1, 148);
    Sensor_Lblsensor3->fn->setSize(Sensor_Lblsensor3, 92, 33);
    Sensor_Lblsensor3->fn->setScheme(Sensor_Lblsensor3, &Label_Gray2A);
    Sensor_Lblsensor3->fn->setBackgroundType(Sensor_Lblsensor3, LE_WIDGET_BACKGROUND_NONE);
    Sensor_Lblsensor3->fn->setString(Sensor_Lblsensor3, (leString*)&string_sensor3);
    Sensor_PnlSensor3->fn->addChild(Sensor_PnlSensor3, (leWidget*)Sensor_Lblsensor3);

    Sensor_BtnDown3 = leButtonWidget_New();
    Sensor_BtnDown3->fn->setPosition(Sensor_BtnDown3, 7, 93);
    Sensor_BtnDown3->fn->setSize(Sensor_BtnDown3, 50, 50);
    Sensor_BtnDown3->fn->setReleasedImage(Sensor_BtnDown3, (leImage*)&Menu_down);
    Sensor_BtnDown3->fn->setReleasedEventCallback(Sensor_BtnDown3, event_Sensor_BtnDown3_OnReleased);
    Sensor_PnlSensor3->fn->addChild(Sensor_PnlSensor3, (leWidget*)Sensor_BtnDown3);

    Sensor_BtnUp3 = leButtonWidget_New();
    Sensor_BtnUp3->fn->setPosition(Sensor_BtnUp3, 7, 3);
    Sensor_BtnUp3->fn->setSize(Sensor_BtnUp3, 50, 50);
    Sensor_BtnUp3->fn->setReleasedImage(Sensor_BtnUp3, (leImage*)&Menu_up);
    Sensor_BtnUp3->fn->setReleasedEventCallback(Sensor_BtnUp3, event_Sensor_BtnUp3_OnReleased);
    Sensor_PnlSensor3->fn->addChild(Sensor_PnlSensor3, (leWidget*)Sensor_BtnUp3);

    Sensor_LblDisplay = leLabelWidget_New();
    Sensor_LblDisplay->fn->setPosition(Sensor_LblDisplay, 58, 30);
    Sensor_LblDisplay->fn->setSize(Sensor_LblDisplay, 319, 42);
    Sensor_LblDisplay->fn->setScheme(Sensor_LblDisplay, &Label_Gray2A);
    Sensor_LblDisplay->fn->setBackgroundType(Sensor_LblDisplay, LE_WIDGET_BACKGROUND_NONE);
    Sensor_LblDisplay->fn->setString(Sensor_LblDisplay, (leString*)&string_EVENT_BLANK);
    root1->fn->addChild(root1, (leWidget*)Sensor_LblDisplay);

    Sensor_BtnRstUI = leButtonWidget_New();
    Sensor_BtnRstUI->fn->setPosition(Sensor_BtnRstUI, 419, 164);
    Sensor_BtnRstUI->fn->setSize(Sensor_BtnRstUI, 54, 52);
    Sensor_BtnRstUI->fn->setScheme(Sensor_BtnRstUI, &whiteground);
    Sensor_BtnRstUI->fn->setBackgroundType(Sensor_BtnRstUI, LE_WIDGET_BACKGROUND_NONE);
    Sensor_BtnRstUI->fn->setString(Sensor_BtnRstUI, (leString*)&string_RstUI);
    Sensor_BtnRstUI->fn->setReleasedEventCallback(Sensor_BtnRstUI, event_Sensor_BtnRstUI_OnReleased);
    root1->fn->addChild(root1, (leWidget*)Sensor_BtnRstUI);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    Sensor_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_Sensor(void)
{
}

void screenHide_Sensor(void)
{
    Sensor_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    Sensor_PanelWidget0 = NULL;
    Sensor_BtnHome = NULL;
    Sensor_BtnExit = NULL;
    Sensor_BtnSave = NULL;
    Sensor_PnlSensor1 = NULL;
    Sensor_PnlSensor2 = NULL;
    Sensor_PnlSensor3 = NULL;
    Sensor_LblDisplay = NULL;
    Sensor_BtnRstUI = NULL;
    Sensor_BtnUp1 = NULL;
    Sensor_BtnDown1 = NULL;
    Sensor_Lblsensor1 = NULL;
    Sensor_BtnUp2 = NULL;
    Sensor_BtnDown2 = NULL;
    Sensor_Lblsensor2 = NULL;
    Sensor_Lblsensor3 = NULL;
    Sensor_BtnDown3 = NULL;
    Sensor_BtnUp3 = NULL;


    showing = LE_FALSE;
}

void screenDestroy_Sensor(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_Sensor(uint32_t lyrIdx)
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

