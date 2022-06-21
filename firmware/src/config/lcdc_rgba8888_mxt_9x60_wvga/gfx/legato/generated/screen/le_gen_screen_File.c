#include "gfx/legato/generated/screen/le_gen_screen_File.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* File_PanelWidget0;
leButtonWidget* File_BtnUsb2Sst_cfg;
leButtonWidget* File_BtnUsb2Sst_Setting;
leButtonWidget* File_BtnSst2Usb_cfg;
leButtonWidget* File_BtnSst2Usb_setting;
leButtonWidget* File_BtnExit;
leButtonWidget* File_BtnHome;
leLabelWidget* File_lblDisplay;
leLabelWidget* File_lblUsbStatus;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_File(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_File(void)
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

    File_PanelWidget0 = leWidget_New();
    File_PanelWidget0->fn->setPosition(File_PanelWidget0, 1, 0);
    File_PanelWidget0->fn->setSize(File_PanelWidget0, 480, 272);
    File_PanelWidget0->fn->setScheme(File_PanelWidget0, &BlackBack);
    root1->fn->addChild(root1, (leWidget*)File_PanelWidget0);

    File_BtnUsb2Sst_cfg = leButtonWidget_New();
    File_BtnUsb2Sst_cfg->fn->setPosition(File_BtnUsb2Sst_cfg, 4, 107);
    File_BtnUsb2Sst_cfg->fn->setSize(File_BtnUsb2Sst_cfg, 200, 45);
    File_BtnUsb2Sst_cfg->fn->setString(File_BtnUsb2Sst_cfg, (leString*)&string_copy_usb_to_sst_config);
    File_BtnUsb2Sst_cfg->fn->setReleasedEventCallback(File_BtnUsb2Sst_cfg, event_File_BtnUsb2Sst_cfg_OnReleased);
    root1->fn->addChild(root1, (leWidget*)File_BtnUsb2Sst_cfg);

    File_BtnUsb2Sst_Setting = leButtonWidget_New();
    File_BtnUsb2Sst_Setting->fn->setPosition(File_BtnUsb2Sst_Setting, 224, 108);
    File_BtnUsb2Sst_Setting->fn->setSize(File_BtnUsb2Sst_Setting, 200, 45);
    File_BtnUsb2Sst_Setting->fn->setString(File_BtnUsb2Sst_Setting, (leString*)&string_copy_usb_to_sst_setting);
    File_BtnUsb2Sst_Setting->fn->setReleasedEventCallback(File_BtnUsb2Sst_Setting, event_File_BtnUsb2Sst_Setting_OnReleased);
    root1->fn->addChild(root1, (leWidget*)File_BtnUsb2Sst_Setting);

    File_BtnSst2Usb_cfg = leButtonWidget_New();
    File_BtnSst2Usb_cfg->fn->setPosition(File_BtnSst2Usb_cfg, 3, 175);
    File_BtnSst2Usb_cfg->fn->setSize(File_BtnSst2Usb_cfg, 200, 45);
    File_BtnSst2Usb_cfg->fn->setString(File_BtnSst2Usb_cfg, (leString*)&string_copy_sst_to_usb_config);
    File_BtnSst2Usb_cfg->fn->setReleasedEventCallback(File_BtnSst2Usb_cfg, event_File_BtnSst2Usb_cfg_OnReleased);
    root1->fn->addChild(root1, (leWidget*)File_BtnSst2Usb_cfg);

    File_BtnSst2Usb_setting = leButtonWidget_New();
    File_BtnSst2Usb_setting->fn->setPosition(File_BtnSst2Usb_setting, 225, 173);
    File_BtnSst2Usb_setting->fn->setSize(File_BtnSst2Usb_setting, 200, 45);
    File_BtnSst2Usb_setting->fn->setString(File_BtnSst2Usb_setting, (leString*)&string_copy_sst_to_usb_setting);
    File_BtnSst2Usb_setting->fn->setReleasedEventCallback(File_BtnSst2Usb_setting, event_File_BtnSst2Usb_setting_OnReleased);
    root1->fn->addChild(root1, (leWidget*)File_BtnSst2Usb_setting);

    File_BtnExit = leButtonWidget_New();
    File_BtnExit->fn->setPosition(File_BtnExit, 422, 2);
    File_BtnExit->fn->setSize(File_BtnExit, 57, 60);
    File_BtnExit->fn->setBackgroundType(File_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    File_BtnExit->fn->setBorderType(File_BtnExit, LE_WIDGET_BORDER_NONE);
    File_BtnExit->fn->setReleasedImage(File_BtnExit, (leImage*)&Menu_exit_white);
    File_BtnExit->fn->setReleasedEventCallback(File_BtnExit, event_File_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)File_BtnExit);

    File_BtnHome = leButtonWidget_New();
    File_BtnHome->fn->setPosition(File_BtnHome, 427, 224);
    File_BtnHome->fn->setSize(File_BtnHome, 52, 47);
    File_BtnHome->fn->setBackgroundType(File_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    File_BtnHome->fn->setBorderType(File_BtnHome, LE_WIDGET_BORDER_NONE);
    File_BtnHome->fn->setReleasedImage(File_BtnHome, (leImage*)&Menu_home);
    File_BtnHome->fn->setReleasedEventCallback(File_BtnHome, event_File_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)File_BtnHome);

    File_lblDisplay = leLabelWidget_New();
    File_lblDisplay->fn->setPosition(File_lblDisplay, 5, 20);
    File_lblDisplay->fn->setSize(File_lblDisplay, 417, 68);
    File_lblDisplay->fn->setScheme(File_lblDisplay, &Lable_Gray2_FontWhite);
    File_lblDisplay->fn->setBackgroundType(File_lblDisplay, LE_WIDGET_BACKGROUND_NONE);
    File_lblDisplay->fn->setBorderType(File_lblDisplay, LE_WIDGET_BORDER_LINE);
    File_lblDisplay->fn->setString(File_lblDisplay, (leString*)&string_EVENT_BLANK);
    root1->fn->addChild(root1, (leWidget*)File_lblDisplay);

    File_lblUsbStatus = leLabelWidget_New();
    File_lblUsbStatus->fn->setPosition(File_lblUsbStatus, 148, 231);
    File_lblUsbStatus->fn->setSize(File_lblUsbStatus, 174, 33);
    File_lblUsbStatus->fn->setScheme(File_lblUsbStatus, &Label_Gray2A);
    File_lblUsbStatus->fn->setBackgroundType(File_lblUsbStatus, LE_WIDGET_BACKGROUND_NONE);
    File_lblUsbStatus->fn->setString(File_lblUsbStatus, (leString*)&string_usboff);
    root1->fn->addChild(root1, (leWidget*)File_lblUsbStatus);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    File_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_File(void)
{
    File_OnUpdate(); // raise event
}

void screenHide_File(void)
{
    File_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    File_PanelWidget0 = NULL;
    File_BtnUsb2Sst_cfg = NULL;
    File_BtnUsb2Sst_Setting = NULL;
    File_BtnSst2Usb_cfg = NULL;
    File_BtnSst2Usb_setting = NULL;
    File_BtnExit = NULL;
    File_BtnHome = NULL;
    File_lblDisplay = NULL;
    File_lblUsbStatus = NULL;


    showing = LE_FALSE;
}

void screenDestroy_File(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_File(uint32_t lyrIdx)
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

