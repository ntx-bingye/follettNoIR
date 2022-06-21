#include "gfx/legato/generated/screen/le_gen_screen_service_advancedsoftwarereset.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_advancedsoftwarereset_Layer_0_FillPanel;
leLabelWidget* service_advancedsoftwarereset_LblTitle;
leButtonWidget* service_advancedsoftwarereset_BtnExit;
leButtonWidget* service_advancedsoftwarereset_BtnHome;
leButtonWidget* service_advancedsoftwarereset_BtnYes;
leButtonWidget* service_advancedsoftwarereset_BtnNo;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_advancedsoftwarereset(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_advancedsoftwarereset(void)
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

    service_advancedsoftwarereset_Layer_0_FillPanel = leWidget_New();
    service_advancedsoftwarereset_Layer_0_FillPanel->fn->setPosition(service_advancedsoftwarereset_Layer_0_FillPanel, 0, 0);
    service_advancedsoftwarereset_Layer_0_FillPanel->fn->setSize(service_advancedsoftwarereset_Layer_0_FillPanel, 480, 272);
    service_advancedsoftwarereset_Layer_0_FillPanel->fn->setScheme(service_advancedsoftwarereset_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root0->fn->addChild(root0, (leWidget*)service_advancedsoftwarereset_Layer_0_FillPanel);

    service_advancedsoftwarereset_LblTitle = leLabelWidget_New();
    service_advancedsoftwarereset_LblTitle->fn->setPosition(service_advancedsoftwarereset_LblTitle, 50, 29);
    service_advancedsoftwarereset_LblTitle->fn->setSize(service_advancedsoftwarereset_LblTitle, 380, 30);
    service_advancedsoftwarereset_LblTitle->fn->setScheme(service_advancedsoftwarereset_LblTitle, &Label_FontWhite);
    service_advancedsoftwarereset_LblTitle->fn->setBackgroundType(service_advancedsoftwarereset_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_advancedsoftwarereset_LblTitle->fn->setHAlignment(service_advancedsoftwarereset_LblTitle, LE_HALIGN_CENTER);
    service_advancedsoftwarereset_LblTitle->fn->setString(service_advancedsoftwarereset_LblTitle, (leString*)&string_SERVICE7_SOFTWARERESET_Title);
    root0->fn->addChild(root0, (leWidget*)service_advancedsoftwarereset_LblTitle);

    leAddRootWidget(root0, 0);
    leSetLayerColorMode(0, LE_COLOR_MODE_RGBA_8888);

    // layer 1
    root1 = leWidget_New();
    root1->fn->setSize(root1, 480, 272);
    root1->fn->setBackgroundType(root1, LE_WIDGET_BACKGROUND_NONE);
    root1->fn->setMargins(root1, 0, 0, 0, 0);
    root1->flags |= LE_WIDGET_IGNOREEVENTS;
    root1->flags |= LE_WIDGET_IGNOREPICK;

    service_advancedsoftwarereset_BtnExit = leButtonWidget_New();
    service_advancedsoftwarereset_BtnExit->fn->setPosition(service_advancedsoftwarereset_BtnExit, 435, 5);
    service_advancedsoftwarereset_BtnExit->fn->setSize(service_advancedsoftwarereset_BtnExit, 40, 40);
    service_advancedsoftwarereset_BtnExit->fn->setScheme(service_advancedsoftwarereset_BtnExit, &BlackBack);
    service_advancedsoftwarereset_BtnExit->fn->setBackgroundType(service_advancedsoftwarereset_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_advancedsoftwarereset_BtnExit->fn->setBorderType(service_advancedsoftwarereset_BtnExit, LE_WIDGET_BORDER_NONE);
    service_advancedsoftwarereset_BtnExit->fn->setPressedImage(service_advancedsoftwarereset_BtnExit, (leImage*)&Menu_exit_white);
    service_advancedsoftwarereset_BtnExit->fn->setReleasedImage(service_advancedsoftwarereset_BtnExit, (leImage*)&Menu_exit_white);
    service_advancedsoftwarereset_BtnExit->fn->setReleasedEventCallback(service_advancedsoftwarereset_BtnExit, event_service_advancedsoftwarereset_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedsoftwarereset_BtnExit);

    service_advancedsoftwarereset_BtnHome = leButtonWidget_New();
    service_advancedsoftwarereset_BtnHome->fn->setPosition(service_advancedsoftwarereset_BtnHome, 435, 225);
    service_advancedsoftwarereset_BtnHome->fn->setSize(service_advancedsoftwarereset_BtnHome, 40, 40);
    service_advancedsoftwarereset_BtnHome->fn->setScheme(service_advancedsoftwarereset_BtnHome, &BlackBack);
    service_advancedsoftwarereset_BtnHome->fn->setBackgroundType(service_advancedsoftwarereset_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_advancedsoftwarereset_BtnHome->fn->setBorderType(service_advancedsoftwarereset_BtnHome, LE_WIDGET_BORDER_NONE);
    service_advancedsoftwarereset_BtnHome->fn->setPressedImage(service_advancedsoftwarereset_BtnHome, (leImage*)&Menu_home);
    service_advancedsoftwarereset_BtnHome->fn->setReleasedImage(service_advancedsoftwarereset_BtnHome, (leImage*)&Menu_home);
    service_advancedsoftwarereset_BtnHome->fn->setReleasedEventCallback(service_advancedsoftwarereset_BtnHome, event_service_advancedsoftwarereset_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedsoftwarereset_BtnHome);

    service_advancedsoftwarereset_BtnYes = leButtonWidget_New();
    service_advancedsoftwarereset_BtnYes->fn->setPosition(service_advancedsoftwarereset_BtnYes, 125, 115);
    service_advancedsoftwarereset_BtnYes->fn->setSize(service_advancedsoftwarereset_BtnYes, 88, 72);
    service_advancedsoftwarereset_BtnYes->fn->setScheme(service_advancedsoftwarereset_BtnYes, &Button_Gray2);
    service_advancedsoftwarereset_BtnYes->fn->setBorderType(service_advancedsoftwarereset_BtnYes, LE_WIDGET_BORDER_LINE);
    service_advancedsoftwarereset_BtnYes->fn->setString(service_advancedsoftwarereset_BtnYes, (leString*)&string_SERVICE7_FACTORY_Yes);
    service_advancedsoftwarereset_BtnYes->fn->setReleasedEventCallback(service_advancedsoftwarereset_BtnYes, event_service_advancedsoftwarereset_BtnYes_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedsoftwarereset_BtnYes);

    service_advancedsoftwarereset_BtnNo = leButtonWidget_New();
    service_advancedsoftwarereset_BtnNo->fn->setPosition(service_advancedsoftwarereset_BtnNo, 250, 115);
    service_advancedsoftwarereset_BtnNo->fn->setSize(service_advancedsoftwarereset_BtnNo, 88, 72);
    service_advancedsoftwarereset_BtnNo->fn->setScheme(service_advancedsoftwarereset_BtnNo, &Button_Gray2);
    service_advancedsoftwarereset_BtnNo->fn->setBorderType(service_advancedsoftwarereset_BtnNo, LE_WIDGET_BORDER_LINE);
    service_advancedsoftwarereset_BtnNo->fn->setString(service_advancedsoftwarereset_BtnNo, (leString*)&string_SERVICE7_FACTORY_No);
    service_advancedsoftwarereset_BtnNo->fn->setReleasedEventCallback(service_advancedsoftwarereset_BtnNo, event_service_advancedsoftwarereset_BtnNo_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_advancedsoftwarereset_BtnNo);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_advancedsoftwarereset_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_advancedsoftwarereset(void)
{
}

void screenHide_service_advancedsoftwarereset(void)
{
    service_advancedsoftwarereset_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    service_advancedsoftwarereset_Layer_0_FillPanel = NULL;
    service_advancedsoftwarereset_LblTitle = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_advancedsoftwarereset_BtnExit = NULL;
    service_advancedsoftwarereset_BtnHome = NULL;
    service_advancedsoftwarereset_BtnYes = NULL;
    service_advancedsoftwarereset_BtnNo = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_advancedsoftwarereset(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_advancedsoftwarereset(uint32_t lyrIdx)
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

