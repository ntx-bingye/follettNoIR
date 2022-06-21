#include "gfx/legato/generated/screen/le_gen_screen_service_pminterval.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* service_pminterval_Layer_0_FillPanel;
leLabelWidget* service_pminterval_LblTitle;
leImageWidget* service_pminterval_ImgLine;
leLabelWidget* service_pminterval_LblSubTitle;
leLabelWidget* service_pminterval_LblPMIntervalValue;
leLabelWidget* service_pminterval_LblMonths;
leImageWidget* service_pminterval_ImgCancel;
leButtonWidget* service_pminterval_BtnExit;
leButtonWidget* service_pminterval_BtnRight;
leButtonWidget* service_pminterval_BtnLeft;
leButtonWidget* service_pminterval_BtnHome;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_service_pminterval(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_service_pminterval(void)
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

    service_pminterval_Layer_0_FillPanel = leWidget_New();
    service_pminterval_Layer_0_FillPanel->fn->setPosition(service_pminterval_Layer_0_FillPanel, 0, 0);
    service_pminterval_Layer_0_FillPanel->fn->setSize(service_pminterval_Layer_0_FillPanel, 480, 272);
    service_pminterval_Layer_0_FillPanel->fn->setScheme(service_pminterval_Layer_0_FillPanel, &Button_Gray3);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_Layer_0_FillPanel);

    service_pminterval_LblTitle = leLabelWidget_New();
    service_pminterval_LblTitle->fn->setPosition(service_pminterval_LblTitle, 110, 29);
    service_pminterval_LblTitle->fn->setSize(service_pminterval_LblTitle, 222, 25);
    service_pminterval_LblTitle->fn->setScheme(service_pminterval_LblTitle, &Label_FontWhite);
    service_pminterval_LblTitle->fn->setBackgroundType(service_pminterval_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_LblTitle->fn->setHAlignment(service_pminterval_LblTitle, LE_HALIGN_CENTER);
    service_pminterval_LblTitle->fn->setString(service_pminterval_LblTitle, (leString*)&string_SERVICE4_PMInterval);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_LblTitle);

    service_pminterval_ImgLine = leImageWidget_New();
    service_pminterval_ImgLine->fn->setPosition(service_pminterval_ImgLine, 100, 59);
    service_pminterval_ImgLine->fn->setSize(service_pminterval_ImgLine, 250, 8);
    service_pminterval_ImgLine->fn->setScheme(service_pminterval_ImgLine, &BlackBack);
    service_pminterval_ImgLine->fn->setBackgroundType(service_pminterval_ImgLine, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_ImgLine->fn->setBorderType(service_pminterval_ImgLine, LE_WIDGET_BORDER_NONE);
    service_pminterval_ImgLine->fn->setImage(service_pminterval_ImgLine, (leImage*)&Menu_line);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_ImgLine);

    service_pminterval_LblSubTitle = leLabelWidget_New();
    service_pminterval_LblSubTitle->fn->setPosition(service_pminterval_LblSubTitle, 96, 76);
    service_pminterval_LblSubTitle->fn->setSize(service_pminterval_LblSubTitle, 237, 30);
    service_pminterval_LblSubTitle->fn->setScheme(service_pminterval_LblSubTitle, &Label_FontWhite);
    service_pminterval_LblSubTitle->fn->setBackgroundType(service_pminterval_LblSubTitle, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_LblSubTitle->fn->setHAlignment(service_pminterval_LblSubTitle, LE_HALIGN_CENTER);
    service_pminterval_LblSubTitle->fn->setString(service_pminterval_LblSubTitle, (leString*)&string_SERVICE4_AdjustInterval);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_LblSubTitle);

    service_pminterval_LblPMIntervalValue = leLabelWidget_New();
    service_pminterval_LblPMIntervalValue->fn->setPosition(service_pminterval_LblPMIntervalValue, 146, 130);
    service_pminterval_LblPMIntervalValue->fn->setSize(service_pminterval_LblPMIntervalValue, 112, 55);
    service_pminterval_LblPMIntervalValue->fn->setScheme(service_pminterval_LblPMIntervalValue, &Label_FontWhite);
    service_pminterval_LblPMIntervalValue->fn->setBackgroundType(service_pminterval_LblPMIntervalValue, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_LblPMIntervalValue->fn->setHAlignment(service_pminterval_LblPMIntervalValue, LE_HALIGN_CENTER);
    service_pminterval_LblPMIntervalValue->fn->setString(service_pminterval_LblPMIntervalValue, (leString*)&string_SERVICE4_PMIntervalValue);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_LblPMIntervalValue);

    service_pminterval_LblMonths = leLabelWidget_New();
    service_pminterval_LblMonths->fn->setPosition(service_pminterval_LblMonths, 86, 193);
    service_pminterval_LblMonths->fn->setSize(service_pminterval_LblMonths, 237, 24);
    service_pminterval_LblMonths->fn->setScheme(service_pminterval_LblMonths, &Label_FontWhite);
    service_pminterval_LblMonths->fn->setBackgroundType(service_pminterval_LblMonths, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_LblMonths->fn->setHAlignment(service_pminterval_LblMonths, LE_HALIGN_CENTER);
    service_pminterval_LblMonths->fn->setString(service_pminterval_LblMonths, (leString*)&string_SERVICE4_Months);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_LblMonths);

    service_pminterval_ImgCancel = leImageWidget_New();
    service_pminterval_ImgCancel->fn->setPosition(service_pminterval_ImgCancel, 171, 121);
    service_pminterval_ImgCancel->fn->setSize(service_pminterval_ImgCancel, 64, 64);
    service_pminterval_ImgCancel->fn->setBackgroundType(service_pminterval_ImgCancel, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_ImgCancel->fn->setBorderType(service_pminterval_ImgCancel, LE_WIDGET_BORDER_NONE);
    service_pminterval_ImgCancel->fn->setImage(service_pminterval_ImgCancel, (leImage*)&Menu_cancel);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_ImgCancel);

    service_pminterval_BtnExit = leButtonWidget_New();
    service_pminterval_BtnExit->fn->setPosition(service_pminterval_BtnExit, 415, 2);
    service_pminterval_BtnExit->fn->setSize(service_pminterval_BtnExit, 60, 60);
    service_pminterval_BtnExit->fn->setScheme(service_pminterval_BtnExit, &BlackBack);
    service_pminterval_BtnExit->fn->setBackgroundType(service_pminterval_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_BtnExit->fn->setBorderType(service_pminterval_BtnExit, LE_WIDGET_BORDER_NONE);
    service_pminterval_BtnExit->fn->setHAlignment(service_pminterval_BtnExit, LE_HALIGN_RIGHT);
    service_pminterval_BtnExit->fn->setVAlignment(service_pminterval_BtnExit, LE_VALIGN_TOP);
    service_pminterval_BtnExit->fn->setMargins(service_pminterval_BtnExit, 4, 10, 10, 4);
    service_pminterval_BtnExit->fn->setPressedImage(service_pminterval_BtnExit, (leImage*)&Menu_exit_white);
    service_pminterval_BtnExit->fn->setReleasedImage(service_pminterval_BtnExit, (leImage*)&Menu_exit_white);
    service_pminterval_BtnExit->fn->setReleasedEventCallback(service_pminterval_BtnExit, event_service_pminterval_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_BtnExit);

    service_pminterval_BtnRight = leButtonWidget_New();
    service_pminterval_BtnRight->fn->setPosition(service_pminterval_BtnRight, 260, 130);
    service_pminterval_BtnRight->fn->setSize(service_pminterval_BtnRight, 40, 45);
    service_pminterval_BtnRight->fn->setScheme(service_pminterval_BtnRight, &BlackBack);
    service_pminterval_BtnRight->fn->setBackgroundType(service_pminterval_BtnRight, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_BtnRight->fn->setBorderType(service_pminterval_BtnRight, LE_WIDGET_BORDER_NONE);
    service_pminterval_BtnRight->fn->setPressedImage(service_pminterval_BtnRight, (leImage*)&Menu_chevron_right);
    service_pminterval_BtnRight->fn->setReleasedImage(service_pminterval_BtnRight, (leImage*)&Menu_chevron_right);
    service_pminterval_BtnRight->fn->setReleasedEventCallback(service_pminterval_BtnRight, event_service_pminterval_BtnRight_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_BtnRight);

    service_pminterval_BtnLeft = leButtonWidget_New();
    service_pminterval_BtnLeft->fn->setPosition(service_pminterval_BtnLeft, 110, 130);
    service_pminterval_BtnLeft->fn->setSize(service_pminterval_BtnLeft, 40, 45);
    service_pminterval_BtnLeft->fn->setScheme(service_pminterval_BtnLeft, &BlackBack);
    service_pminterval_BtnLeft->fn->setBackgroundType(service_pminterval_BtnLeft, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_BtnLeft->fn->setBorderType(service_pminterval_BtnLeft, LE_WIDGET_BORDER_NONE);
    service_pminterval_BtnLeft->fn->setPressedImage(service_pminterval_BtnLeft, (leImage*)&Menu_chevron_left);
    service_pminterval_BtnLeft->fn->setReleasedImage(service_pminterval_BtnLeft, (leImage*)&Menu_chevron_left);
    service_pminterval_BtnLeft->fn->setReleasedEventCallback(service_pminterval_BtnLeft, event_service_pminterval_BtnLeft_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_BtnLeft);

    service_pminterval_BtnHome = leButtonWidget_New();
    service_pminterval_BtnHome->fn->setPosition(service_pminterval_BtnHome, 429, 220);
    service_pminterval_BtnHome->fn->setSize(service_pminterval_BtnHome, 50, 50);
    service_pminterval_BtnHome->fn->setScheme(service_pminterval_BtnHome, &BlackBack);
    service_pminterval_BtnHome->fn->setBackgroundType(service_pminterval_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    service_pminterval_BtnHome->fn->setBorderType(service_pminterval_BtnHome, LE_WIDGET_BORDER_NONE);
    service_pminterval_BtnHome->fn->setPressedImage(service_pminterval_BtnHome, (leImage*)&Menu_home);
    service_pminterval_BtnHome->fn->setReleasedImage(service_pminterval_BtnHome, (leImage*)&Menu_home);
    service_pminterval_BtnHome->fn->setReleasedEventCallback(service_pminterval_BtnHome, event_service_pminterval_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)service_pminterval_BtnHome);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    service_pminterval_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_service_pminterval(void)
{
}

void screenHide_service_pminterval(void)
{
    service_pminterval_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    service_pminterval_Layer_0_FillPanel = NULL;
    service_pminterval_LblTitle = NULL;
    service_pminterval_ImgLine = NULL;
    service_pminterval_LblSubTitle = NULL;
    service_pminterval_LblPMIntervalValue = NULL;
    service_pminterval_LblMonths = NULL;
    service_pminterval_ImgCancel = NULL;
    service_pminterval_BtnExit = NULL;
    service_pminterval_BtnRight = NULL;
    service_pminterval_BtnLeft = NULL;
    service_pminterval_BtnHome = NULL;


    showing = LE_FALSE;
}

void screenDestroy_service_pminterval(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_service_pminterval(uint32_t lyrIdx)
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

