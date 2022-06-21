#include "gfx/legato/generated/screen/le_gen_screen_service_advancedconfig.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advancedconfig_Layer_0_FillPanel;
leLabelWidget* service_advancedconfig_LblTitle;
leLabelWidget* service_advancedconfig_LblScannerDetectedAnswer;
leLabelWidget* service_advancedconfig_LblScannerDetected;
leLabelWidget* service_advancedconfig_LblFlashDetectedAnswer;
leLabelWidget* service_advancedconfig_LblFlashDetected;
leLabelWidget* service_advancedconfig_LblScanMessage;
leButtonWidget* service_advancedconfig_ButtonExit;
leButtonWidget* service_advancedconfig_ButtonClear;
leButtonWidget* service_advancedconfig_ButtonAccept;
leButtonWidget* service_advancedconfig_ButtonHome;
leLabelWidget* service_advancedconfig_LblInputBox;
leButtonWidget* service_advancedconfig_BtnHidden;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advancedconfig(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advancedconfig(void)
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

    service_advancedconfig_Layer_0_FillPanel = leWidget_New();
    service_advancedconfig_Layer_0_FillPanel->fn->setPosition(service_advancedconfig_Layer_0_FillPanel, 0, 0);
    service_advancedconfig_Layer_0_FillPanel->fn->setSize(service_advancedconfig_Layer_0_FillPanel, 480, 272);
    service_advancedconfig_Layer_0_FillPanel->fn->setScheme(service_advancedconfig_Layer_0_FillPanel, &Panel_Gray1);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_Layer_0_FillPanel);

    service_advancedconfig_LblTitle = leLabelWidget_New();
    service_advancedconfig_LblTitle->fn->setPosition(service_advancedconfig_LblTitle, 50, 10);
    service_advancedconfig_LblTitle->fn->setSize(service_advancedconfig_LblTitle, 380, 30);
    service_advancedconfig_LblTitle->fn->setScheme(service_advancedconfig_LblTitle, &Label_FontWhite);
    service_advancedconfig_LblTitle->fn->setBackgroundType(service_advancedconfig_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_LblTitle->fn->setHAlignment(service_advancedconfig_LblTitle, LE_HALIGN_CENTER);
    service_advancedconfig_LblTitle->fn->setString(service_advancedconfig_LblTitle, (leString*)&string_SERVICE7_CONFIG_Title);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_LblTitle);

    service_advancedconfig_LblScannerDetectedAnswer = leLabelWidget_New();
    service_advancedconfig_LblScannerDetectedAnswer->fn->setPosition(service_advancedconfig_LblScannerDetectedAnswer, 397, 230);
    service_advancedconfig_LblScannerDetectedAnswer->fn->setSize(service_advancedconfig_LblScannerDetectedAnswer, 33, 30);
    service_advancedconfig_LblScannerDetectedAnswer->fn->setScheme(service_advancedconfig_LblScannerDetectedAnswer, &Label_FontRed);
    service_advancedconfig_LblScannerDetectedAnswer->fn->setBackgroundType(service_advancedconfig_LblScannerDetectedAnswer, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_LblScannerDetectedAnswer->fn->setString(service_advancedconfig_LblScannerDetectedAnswer, (leString*)&string_SERVICE7_CONFIG_No);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_LblScannerDetectedAnswer);

    service_advancedconfig_LblScannerDetected = leLabelWidget_New();
    service_advancedconfig_LblScannerDetected->fn->setPosition(service_advancedconfig_LblScannerDetected, 239, 230);
    service_advancedconfig_LblScannerDetected->fn->setSize(service_advancedconfig_LblScannerDetected, 160, 30);
    service_advancedconfig_LblScannerDetected->fn->setScheme(service_advancedconfig_LblScannerDetected, &Label_FontWhite);
    service_advancedconfig_LblScannerDetected->fn->setBackgroundType(service_advancedconfig_LblScannerDetected, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_LblScannerDetected->fn->setHAlignment(service_advancedconfig_LblScannerDetected, LE_HALIGN_RIGHT);
    service_advancedconfig_LblScannerDetected->fn->setString(service_advancedconfig_LblScannerDetected, (leString*)&string_SERVICE7_CONFIG_ScannerDetectedNo);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_LblScannerDetected);

    service_advancedconfig_LblFlashDetectedAnswer = leLabelWidget_New();
    service_advancedconfig_LblFlashDetectedAnswer->fn->setPosition(service_advancedconfig_LblFlashDetectedAnswer, 177, 230);
    service_advancedconfig_LblFlashDetectedAnswer->fn->setSize(service_advancedconfig_LblFlashDetectedAnswer, 33, 30);
    service_advancedconfig_LblFlashDetectedAnswer->fn->setScheme(service_advancedconfig_LblFlashDetectedAnswer, &Label_FontRed);
    service_advancedconfig_LblFlashDetectedAnswer->fn->setBackgroundType(service_advancedconfig_LblFlashDetectedAnswer, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_LblFlashDetectedAnswer->fn->setString(service_advancedconfig_LblFlashDetectedAnswer, (leString*)&string_SERVICE7_CONFIG_No);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_LblFlashDetectedAnswer);

    service_advancedconfig_LblFlashDetected = leLabelWidget_New();
    service_advancedconfig_LblFlashDetected->fn->setPosition(service_advancedconfig_LblFlashDetected, 4, 230);
    service_advancedconfig_LblFlashDetected->fn->setSize(service_advancedconfig_LblFlashDetected, 176, 30);
    service_advancedconfig_LblFlashDetected->fn->setScheme(service_advancedconfig_LblFlashDetected, &Label_FontWhite);
    service_advancedconfig_LblFlashDetected->fn->setBackgroundType(service_advancedconfig_LblFlashDetected, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_LblFlashDetected->fn->setHAlignment(service_advancedconfig_LblFlashDetected, LE_HALIGN_RIGHT);
    service_advancedconfig_LblFlashDetected->fn->setString(service_advancedconfig_LblFlashDetected, (leString*)&string_SERVICE7_CONFIG_FlashDetected);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_LblFlashDetected);

    service_advancedconfig_LblScanMessage = leLabelWidget_New();
    service_advancedconfig_LblScanMessage->fn->setPosition(service_advancedconfig_LblScanMessage, 30, 38);
    service_advancedconfig_LblScanMessage->fn->setSize(service_advancedconfig_LblScanMessage, 400, 30);
    service_advancedconfig_LblScanMessage->fn->setScheme(service_advancedconfig_LblScanMessage, &Label_FontWhite);
    service_advancedconfig_LblScanMessage->fn->setBackgroundType(service_advancedconfig_LblScanMessage, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_LblScanMessage->fn->setHAlignment(service_advancedconfig_LblScanMessage, LE_HALIGN_CENTER);
    service_advancedconfig_LblScanMessage->fn->setString(service_advancedconfig_LblScanMessage, (leString*)&string_SERVICE7_CONFIG_ScanMessage);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_LblScanMessage);

    service_advancedconfig_ButtonExit = leButtonWidget_New();
    service_advancedconfig_ButtonExit->fn->setPosition(service_advancedconfig_ButtonExit, 415, 3);
    service_advancedconfig_ButtonExit->fn->setSize(service_advancedconfig_ButtonExit, 60, 60);
    service_advancedconfig_ButtonExit->fn->setScheme(service_advancedconfig_ButtonExit, &BlackBack);
    service_advancedconfig_ButtonExit->fn->setBackgroundType(service_advancedconfig_ButtonExit, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_ButtonExit->fn->setBorderType(service_advancedconfig_ButtonExit, LE_WIDGET_BORDER_NONE);
    service_advancedconfig_ButtonExit->fn->setHAlignment(service_advancedconfig_ButtonExit, LE_HALIGN_RIGHT);
    service_advancedconfig_ButtonExit->fn->setVAlignment(service_advancedconfig_ButtonExit, LE_VALIGN_TOP);
    service_advancedconfig_ButtonExit->fn->setMargins(service_advancedconfig_ButtonExit, 4, 10, 10, 4);
    service_advancedconfig_ButtonExit->fn->setPressedImage(service_advancedconfig_ButtonExit, (leImage*)&Menu_exit_white);
    service_advancedconfig_ButtonExit->fn->setReleasedImage(service_advancedconfig_ButtonExit, (leImage*)&Menu_exit_white);
    service_advancedconfig_ButtonExit->fn->setReleasedEventCallback(service_advancedconfig_ButtonExit, event_service_advancedconfig_ButtonExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_ButtonExit);

    service_advancedconfig_ButtonClear = leButtonWidget_New();
    service_advancedconfig_ButtonClear->fn->setPosition(service_advancedconfig_ButtonClear, 125, 135);
    service_advancedconfig_ButtonClear->fn->setSize(service_advancedconfig_ButtonClear, 88, 72);
    service_advancedconfig_ButtonClear->fn->setScheme(service_advancedconfig_ButtonClear, &Button_Gray2);
    service_advancedconfig_ButtonClear->fn->setBorderType(service_advancedconfig_ButtonClear, LE_WIDGET_BORDER_LINE);
    service_advancedconfig_ButtonClear->fn->setString(service_advancedconfig_ButtonClear, (leString*)&string_SERVICE7_CONFIG_Clear);
    service_advancedconfig_ButtonClear->fn->setReleasedEventCallback(service_advancedconfig_ButtonClear, event_service_advancedconfig_ButtonClear_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_ButtonClear);

    service_advancedconfig_ButtonAccept = leButtonWidget_New();
    service_advancedconfig_ButtonAccept->fn->setPosition(service_advancedconfig_ButtonAccept, 250, 135);
    service_advancedconfig_ButtonAccept->fn->setSize(service_advancedconfig_ButtonAccept, 88, 72);
    service_advancedconfig_ButtonAccept->fn->setScheme(service_advancedconfig_ButtonAccept, &Button_Gray2);
    service_advancedconfig_ButtonAccept->fn->setBorderType(service_advancedconfig_ButtonAccept, LE_WIDGET_BORDER_LINE);
    service_advancedconfig_ButtonAccept->fn->setString(service_advancedconfig_ButtonAccept, (leString*)&string_SERVICE7_CONFIG_Accept);
    service_advancedconfig_ButtonAccept->fn->setReleasedEventCallback(service_advancedconfig_ButtonAccept, event_service_advancedconfig_ButtonAccept_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_ButtonAccept);

    service_advancedconfig_ButtonHome = leButtonWidget_New();
    service_advancedconfig_ButtonHome->fn->setPosition(service_advancedconfig_ButtonHome, 435, 225);
    service_advancedconfig_ButtonHome->fn->setSize(service_advancedconfig_ButtonHome, 40, 40);
    service_advancedconfig_ButtonHome->fn->setScheme(service_advancedconfig_ButtonHome, &BlackBack);
    service_advancedconfig_ButtonHome->fn->setBackgroundType(service_advancedconfig_ButtonHome, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_ButtonHome->fn->setBorderType(service_advancedconfig_ButtonHome, LE_WIDGET_BORDER_NONE);
    service_advancedconfig_ButtonHome->fn->setPressedImage(service_advancedconfig_ButtonHome, (leImage*)&Menu_home);
    service_advancedconfig_ButtonHome->fn->setReleasedImage(service_advancedconfig_ButtonHome, (leImage*)&Menu_home);
    service_advancedconfig_ButtonHome->fn->setReleasedEventCallback(service_advancedconfig_ButtonHome, event_service_advancedconfig_ButtonHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_ButtonHome);

    service_advancedconfig_LblInputBox = leLabelWidget_New();
    service_advancedconfig_LblInputBox->fn->setPosition(service_advancedconfig_LblInputBox, 100, 85);
    service_advancedconfig_LblInputBox->fn->setSize(service_advancedconfig_LblInputBox, 260, 25);
    service_advancedconfig_LblInputBox->fn->setScheme(service_advancedconfig_LblInputBox, &Label_Gray4_FontBlack);
    service_advancedconfig_LblInputBox->fn->setString(service_advancedconfig_LblInputBox, (leString*)&string_EVENT_BLANK);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_LblInputBox);

    service_advancedconfig_BtnHidden = leButtonWidget_New();
    service_advancedconfig_BtnHidden->fn->setPosition(service_advancedconfig_BtnHidden, 6, 228);
    service_advancedconfig_BtnHidden->fn->setSize(service_advancedconfig_BtnHidden, 212, 38);
    service_advancedconfig_BtnHidden->fn->setScheme(service_advancedconfig_BtnHidden, &BlackBack);
    service_advancedconfig_BtnHidden->fn->setBackgroundType(service_advancedconfig_BtnHidden, LE_WIDGET_BACKGROUND_NONE);
    service_advancedconfig_BtnHidden->fn->setBorderType(service_advancedconfig_BtnHidden, LE_WIDGET_BORDER_NONE);
    service_advancedconfig_BtnHidden->fn->setReleasedEventCallback(service_advancedconfig_BtnHidden, event_service_advancedconfig_BtnHidden_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedconfig_BtnHidden);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advancedconfig_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advancedconfig(void)
{
    service_advancedconfig_OnUpdate(); // raise event
}

void screenHide_service_advancedconfig(void)
{
    service_advancedconfig_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advancedconfig_Layer_0_FillPanel = NULL;
    service_advancedconfig_LblTitle = NULL;
    service_advancedconfig_LblScannerDetectedAnswer = NULL;
    service_advancedconfig_LblScannerDetected = NULL;
    service_advancedconfig_LblFlashDetectedAnswer = NULL;
    service_advancedconfig_LblFlashDetected = NULL;
    service_advancedconfig_LblScanMessage = NULL;
    service_advancedconfig_ButtonExit = NULL;
    service_advancedconfig_ButtonClear = NULL;
    service_advancedconfig_ButtonAccept = NULL;
    service_advancedconfig_ButtonHome = NULL;
    service_advancedconfig_LblInputBox = NULL;
    service_advancedconfig_BtnHidden = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advancedconfig(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advancedconfig(uint32_t lyrIdx)
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

