#include "gfx/legato/generated/screen/le_gen_screen_sysinfo.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* sysinfo_Layer_0_FillPanel;
leLabelWidget* sysinfo_LblModel;
leLabelWidget* sysinfo_LblSerial;
leLabelWidget* sysinfo_LblWaterFilter;
leLabelWidget* sysinfo_LblDrain;
leLabelWidget* sysinfo_LblHotWater;
leLabelWidget* sysinfo_LblAmWater;
leLabelWidget* sysinfo_LblIMCVersion;
leLabelWidget* sysinfo_LblUIVersion;
leButtonWidget* sysinfo_BtnExit;
leButtonWidget* sysinfo_BtnHome;
leLabelWidget* sysinfo_LblModelValue;
leLabelWidget* sysinfo_LblSerialValue;
leLabelWidget* sysinfo_LblWaterFilterValue;
leLabelWidget* sysinfo_LblDrainValue;
leLabelWidget* sysinfo_LblHotWaterValue;
leLabelWidget* sysinfo_LblAmWaterValue;
leLabelWidget* sysinfo_LblIMCVersionValue;
leLabelWidget* sysinfo_LblUIVersionValue;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_sysinfo(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_sysinfo(void)
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

    sysinfo_Layer_0_FillPanel = leWidget_New();
    sysinfo_Layer_0_FillPanel->fn->setPosition(sysinfo_Layer_0_FillPanel, 0, 0);
    sysinfo_Layer_0_FillPanel->fn->setSize(sysinfo_Layer_0_FillPanel, 480, 272);
    sysinfo_Layer_0_FillPanel->fn->setScheme(sysinfo_Layer_0_FillPanel, &Button_Gray1);
    root1->fn->addChild(root1, (leWidget*)sysinfo_Layer_0_FillPanel);

    sysinfo_LblModel = leLabelWidget_New();
    sysinfo_LblModel->fn->setPosition(sysinfo_LblModel, 10, 15);
    sysinfo_LblModel->fn->setSize(sysinfo_LblModel, 415, 30);
    sysinfo_LblModel->fn->setScheme(sysinfo_LblModel, &Label_Gray2A);
    sysinfo_LblModel->fn->setBorderType(sysinfo_LblModel, LE_WIDGET_BORDER_LINE);
    sysinfo_LblModel->fn->setString(sysinfo_LblModel, (leString*)&string_SYSINFO_Model);
    root1->fn->addChild(root1, (leWidget*)sysinfo_LblModel);

    sysinfo_LblModelValue = leLabelWidget_New();
    sysinfo_LblModelValue->fn->setPosition(sysinfo_LblModelValue, 280, 0);
    sysinfo_LblModelValue->fn->setSize(sysinfo_LblModelValue, 135, 30);
    sysinfo_LblModelValue->fn->setScheme(sysinfo_LblModelValue, &Label_FontWhite);
    sysinfo_LblModelValue->fn->setBackgroundType(sysinfo_LblModelValue, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_LblModelValue->fn->setHAlignment(sysinfo_LblModelValue, LE_HALIGN_RIGHT);
    sysinfo_LblModelValue->fn->setString(sysinfo_LblModelValue, (leString*)&string_SYSINFO_Model);
    sysinfo_LblModel->fn->addChild(sysinfo_LblModel, (leWidget*)sysinfo_LblModelValue);

    sysinfo_LblSerial = leLabelWidget_New();
    sysinfo_LblSerial->fn->setPosition(sysinfo_LblSerial, 10, 46);
    sysinfo_LblSerial->fn->setSize(sysinfo_LblSerial, 415, 30);
    sysinfo_LblSerial->fn->setScheme(sysinfo_LblSerial, &Label_Gray2A);
    sysinfo_LblSerial->fn->setBorderType(sysinfo_LblSerial, LE_WIDGET_BORDER_LINE);
    sysinfo_LblSerial->fn->setString(sysinfo_LblSerial, (leString*)&string_SYSINFO_Serial);
    root1->fn->addChild(root1, (leWidget*)sysinfo_LblSerial);

    sysinfo_LblSerialValue = leLabelWidget_New();
    sysinfo_LblSerialValue->fn->setPosition(sysinfo_LblSerialValue, 280, 0);
    sysinfo_LblSerialValue->fn->setSize(sysinfo_LblSerialValue, 135, 30);
    sysinfo_LblSerialValue->fn->setScheme(sysinfo_LblSerialValue, &Label_FontWhite);
    sysinfo_LblSerialValue->fn->setBackgroundType(sysinfo_LblSerialValue, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_LblSerialValue->fn->setHAlignment(sysinfo_LblSerialValue, LE_HALIGN_RIGHT);
    sysinfo_LblSerialValue->fn->setString(sysinfo_LblSerialValue, (leString*)&string_SYSINFO_Serial);
    sysinfo_LblSerial->fn->addChild(sysinfo_LblSerial, (leWidget*)sysinfo_LblSerialValue);

    sysinfo_LblWaterFilter = leLabelWidget_New();
    sysinfo_LblWaterFilter->fn->setPosition(sysinfo_LblWaterFilter, 10, 77);
    sysinfo_LblWaterFilter->fn->setSize(sysinfo_LblWaterFilter, 415, 30);
    sysinfo_LblWaterFilter->fn->setScheme(sysinfo_LblWaterFilter, &Label_Gray2A);
    sysinfo_LblWaterFilter->fn->setBorderType(sysinfo_LblWaterFilter, LE_WIDGET_BORDER_LINE);
    sysinfo_LblWaterFilter->fn->setString(sysinfo_LblWaterFilter, (leString*)&string_SYSINFO_WaterFilter);
    root1->fn->addChild(root1, (leWidget*)sysinfo_LblWaterFilter);

    sysinfo_LblWaterFilterValue = leLabelWidget_New();
    sysinfo_LblWaterFilterValue->fn->setPosition(sysinfo_LblWaterFilterValue, 280, 0);
    sysinfo_LblWaterFilterValue->fn->setSize(sysinfo_LblWaterFilterValue, 135, 30);
    sysinfo_LblWaterFilterValue->fn->setScheme(sysinfo_LblWaterFilterValue, &Label_FontWhite);
    sysinfo_LblWaterFilterValue->fn->setBackgroundType(sysinfo_LblWaterFilterValue, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_LblWaterFilterValue->fn->setHAlignment(sysinfo_LblWaterFilterValue, LE_HALIGN_RIGHT);
    sysinfo_LblWaterFilterValue->fn->setString(sysinfo_LblWaterFilterValue, (leString*)&string_SYSINFO_Installed);
    sysinfo_LblWaterFilter->fn->addChild(sysinfo_LblWaterFilter, (leWidget*)sysinfo_LblWaterFilterValue);

    sysinfo_LblDrain = leLabelWidget_New();
    sysinfo_LblDrain->fn->setPosition(sysinfo_LblDrain, 10, 108);
    sysinfo_LblDrain->fn->setSize(sysinfo_LblDrain, 415, 30);
    sysinfo_LblDrain->fn->setScheme(sysinfo_LblDrain, &Label_Gray2A);
    sysinfo_LblDrain->fn->setBorderType(sysinfo_LblDrain, LE_WIDGET_BORDER_LINE);
    sysinfo_LblDrain->fn->setString(sysinfo_LblDrain, (leString*)&string_SYSINFO_Drain);
    root1->fn->addChild(root1, (leWidget*)sysinfo_LblDrain);

    sysinfo_LblDrainValue = leLabelWidget_New();
    sysinfo_LblDrainValue->fn->setPosition(sysinfo_LblDrainValue, 280, 0);
    sysinfo_LblDrainValue->fn->setSize(sysinfo_LblDrainValue, 135, 30);
    sysinfo_LblDrainValue->fn->setScheme(sysinfo_LblDrainValue, &Label_FontWhite);
    sysinfo_LblDrainValue->fn->setBackgroundType(sysinfo_LblDrainValue, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_LblDrainValue->fn->setHAlignment(sysinfo_LblDrainValue, LE_HALIGN_RIGHT);
    sysinfo_LblDrainValue->fn->setString(sysinfo_LblDrainValue, (leString*)&string_SYSINFO_Installed);
    sysinfo_LblDrain->fn->addChild(sysinfo_LblDrain, (leWidget*)sysinfo_LblDrainValue);

    sysinfo_LblHotWater = leLabelWidget_New();
    sysinfo_LblHotWater->fn->setPosition(sysinfo_LblHotWater, 10, 139);
    sysinfo_LblHotWater->fn->setSize(sysinfo_LblHotWater, 415, 30);
    sysinfo_LblHotWater->fn->setScheme(sysinfo_LblHotWater, &Label_Gray2A);
    sysinfo_LblHotWater->fn->setBorderType(sysinfo_LblHotWater, LE_WIDGET_BORDER_LINE);
    sysinfo_LblHotWater->fn->setString(sysinfo_LblHotWater, (leString*)&string_SYSINFO_HotWater);
    root1->fn->addChild(root1, (leWidget*)sysinfo_LblHotWater);

    sysinfo_LblHotWaterValue = leLabelWidget_New();
    sysinfo_LblHotWaterValue->fn->setPosition(sysinfo_LblHotWaterValue, 280, 0);
    sysinfo_LblHotWaterValue->fn->setSize(sysinfo_LblHotWaterValue, 135, 30);
    sysinfo_LblHotWaterValue->fn->setScheme(sysinfo_LblHotWaterValue, &Label_FontWhite);
    sysinfo_LblHotWaterValue->fn->setBackgroundType(sysinfo_LblHotWaterValue, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_LblHotWaterValue->fn->setHAlignment(sysinfo_LblHotWaterValue, LE_HALIGN_RIGHT);
    sysinfo_LblHotWaterValue->fn->setString(sysinfo_LblHotWaterValue, (leString*)&string_SYSINFO_NotInstalled);
    sysinfo_LblHotWater->fn->addChild(sysinfo_LblHotWater, (leWidget*)sysinfo_LblHotWaterValue);

    sysinfo_LblAmWater = leLabelWidget_New();
    sysinfo_LblAmWater->fn->setPosition(sysinfo_LblAmWater, 10, 170);
    sysinfo_LblAmWater->fn->setSize(sysinfo_LblAmWater, 415, 30);
    sysinfo_LblAmWater->fn->setScheme(sysinfo_LblAmWater, &Label_Gray2A);
    sysinfo_LblAmWater->fn->setBorderType(sysinfo_LblAmWater, LE_WIDGET_BORDER_LINE);
    sysinfo_LblAmWater->fn->setString(sysinfo_LblAmWater, (leString*)&string_SYSINFO_SparklingWater);
    root1->fn->addChild(root1, (leWidget*)sysinfo_LblAmWater);

    sysinfo_LblAmWaterValue = leLabelWidget_New();
    sysinfo_LblAmWaterValue->fn->setPosition(sysinfo_LblAmWaterValue, 280, 0);
    sysinfo_LblAmWaterValue->fn->setSize(sysinfo_LblAmWaterValue, 135, 30);
    sysinfo_LblAmWaterValue->fn->setScheme(sysinfo_LblAmWaterValue, &Label_FontWhite);
    sysinfo_LblAmWaterValue->fn->setBackgroundType(sysinfo_LblAmWaterValue, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_LblAmWaterValue->fn->setHAlignment(sysinfo_LblAmWaterValue, LE_HALIGN_RIGHT);
    sysinfo_LblAmWaterValue->fn->setString(sysinfo_LblAmWaterValue, (leString*)&string_SYSINFO_NotInstalled);
    sysinfo_LblAmWater->fn->addChild(sysinfo_LblAmWater, (leWidget*)sysinfo_LblAmWaterValue);

    sysinfo_LblIMCVersion = leLabelWidget_New();
    sysinfo_LblIMCVersion->fn->setPosition(sysinfo_LblIMCVersion, 10, 201);
    sysinfo_LblIMCVersion->fn->setSize(sysinfo_LblIMCVersion, 415, 30);
    sysinfo_LblIMCVersion->fn->setScheme(sysinfo_LblIMCVersion, &Label_Gray2A);
    sysinfo_LblIMCVersion->fn->setBorderType(sysinfo_LblIMCVersion, LE_WIDGET_BORDER_LINE);
    sysinfo_LblIMCVersion->fn->setString(sysinfo_LblIMCVersion, (leString*)&string_SYSINFO_IMCVersion);
    root1->fn->addChild(root1, (leWidget*)sysinfo_LblIMCVersion);

    sysinfo_LblIMCVersionValue = leLabelWidget_New();
    sysinfo_LblIMCVersionValue->fn->setPosition(sysinfo_LblIMCVersionValue, 210, 0);
    sysinfo_LblIMCVersionValue->fn->setSize(sysinfo_LblIMCVersionValue, 205, 30);
    sysinfo_LblIMCVersionValue->fn->setScheme(sysinfo_LblIMCVersionValue, &Label_FontWhite);
    sysinfo_LblIMCVersionValue->fn->setBackgroundType(sysinfo_LblIMCVersionValue, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_LblIMCVersionValue->fn->setHAlignment(sysinfo_LblIMCVersionValue, LE_HALIGN_RIGHT);
    sysinfo_LblIMCVersionValue->fn->setString(sysinfo_LblIMCVersionValue, (leString*)&string_SYSINFO_IMCVersion);
    sysinfo_LblIMCVersion->fn->addChild(sysinfo_LblIMCVersion, (leWidget*)sysinfo_LblIMCVersionValue);

    sysinfo_LblUIVersion = leLabelWidget_New();
    sysinfo_LblUIVersion->fn->setPosition(sysinfo_LblUIVersion, 10, 232);
    sysinfo_LblUIVersion->fn->setSize(sysinfo_LblUIVersion, 415, 30);
    sysinfo_LblUIVersion->fn->setScheme(sysinfo_LblUIVersion, &Label_Gray2A);
    sysinfo_LblUIVersion->fn->setBorderType(sysinfo_LblUIVersion, LE_WIDGET_BORDER_LINE);
    sysinfo_LblUIVersion->fn->setString(sysinfo_LblUIVersion, (leString*)&string_SYSINFO_UIVersion);
    root1->fn->addChild(root1, (leWidget*)sysinfo_LblUIVersion);

    sysinfo_LblUIVersionValue = leLabelWidget_New();
    sysinfo_LblUIVersionValue->fn->setPosition(sysinfo_LblUIVersionValue, 225, 0);
    sysinfo_LblUIVersionValue->fn->setSize(sysinfo_LblUIVersionValue, 190, 30);
    sysinfo_LblUIVersionValue->fn->setScheme(sysinfo_LblUIVersionValue, &Label_FontWhite);
    sysinfo_LblUIVersionValue->fn->setBackgroundType(sysinfo_LblUIVersionValue, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_LblUIVersionValue->fn->setHAlignment(sysinfo_LblUIVersionValue, LE_HALIGN_RIGHT);
    sysinfo_LblUIVersionValue->fn->setString(sysinfo_LblUIVersionValue, (leString*)&string_SYSINFO_UIVersion);
    sysinfo_LblUIVersion->fn->addChild(sysinfo_LblUIVersion, (leWidget*)sysinfo_LblUIVersionValue);

    sysinfo_BtnExit = leButtonWidget_New();
    sysinfo_BtnExit->fn->setPosition(sysinfo_BtnExit, 425, 2);
    sysinfo_BtnExit->fn->setSize(sysinfo_BtnExit, 50, 60);
    sysinfo_BtnExit->fn->setScheme(sysinfo_BtnExit, &BlackBack);
    sysinfo_BtnExit->fn->setBackgroundType(sysinfo_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_BtnExit->fn->setBorderType(sysinfo_BtnExit, LE_WIDGET_BORDER_NONE);
    sysinfo_BtnExit->fn->setHAlignment(sysinfo_BtnExit, LE_HALIGN_RIGHT);
    sysinfo_BtnExit->fn->setVAlignment(sysinfo_BtnExit, LE_VALIGN_TOP);
    sysinfo_BtnExit->fn->setMargins(sysinfo_BtnExit, 4, 10, 10, 4);
    sysinfo_BtnExit->fn->setPressedImage(sysinfo_BtnExit, (leImage*)&Menu_exit_white);
    sysinfo_BtnExit->fn->setReleasedImage(sysinfo_BtnExit, (leImage*)&Menu_exit_white);
    sysinfo_BtnExit->fn->setReleasedEventCallback(sysinfo_BtnExit, event_sysinfo_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)sysinfo_BtnExit);

    sysinfo_BtnHome = leButtonWidget_New();
    sysinfo_BtnHome->fn->setPosition(sysinfo_BtnHome, 435, 225);
    sysinfo_BtnHome->fn->setSize(sysinfo_BtnHome, 40, 40);
    sysinfo_BtnHome->fn->setScheme(sysinfo_BtnHome, &BlackBack);
    sysinfo_BtnHome->fn->setBackgroundType(sysinfo_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    sysinfo_BtnHome->fn->setBorderType(sysinfo_BtnHome, LE_WIDGET_BORDER_NONE);
    sysinfo_BtnHome->fn->setPressedImage(sysinfo_BtnHome, (leImage*)&Menu_home);
    sysinfo_BtnHome->fn->setReleasedImage(sysinfo_BtnHome, (leImage*)&Menu_home);
    sysinfo_BtnHome->fn->setReleasedEventCallback(sysinfo_BtnHome, event_sysinfo_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)sysinfo_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    sysinfo_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_sysinfo(void)
{
}

void screenHide_sysinfo(void)
{
    sysinfo_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    sysinfo_Layer_0_FillPanel = NULL;
    sysinfo_LblModel = NULL;
    sysinfo_LblSerial = NULL;
    sysinfo_LblWaterFilter = NULL;
    sysinfo_LblDrain = NULL;
    sysinfo_LblHotWater = NULL;
    sysinfo_LblAmWater = NULL;
    sysinfo_LblIMCVersion = NULL;
    sysinfo_LblUIVersion = NULL;
    sysinfo_BtnExit = NULL;
    sysinfo_BtnHome = NULL;
    sysinfo_LblModelValue = NULL;
    sysinfo_LblSerialValue = NULL;
    sysinfo_LblWaterFilterValue = NULL;
    sysinfo_LblDrainValue = NULL;
    sysinfo_LblHotWaterValue = NULL;
    sysinfo_LblAmWaterValue = NULL;
    sysinfo_LblIMCVersionValue = NULL;
    sysinfo_LblUIVersionValue = NULL;


    showing = LE_FALSE;
}

void screenDestroy_sysinfo(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_sysinfo(uint32_t lyrIdx)
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

