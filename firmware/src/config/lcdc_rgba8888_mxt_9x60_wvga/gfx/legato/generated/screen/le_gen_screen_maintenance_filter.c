#include "gfx/legato/generated/screen/le_gen_screen_maintenance_filter.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* maintenance_filter_Layer_0_FillPanel;
leImageWidget* maintenance_filter_ImgFilter;
leImageWidget* maintenance_filter_ImgStepCount;
leImageWidget* maintenance_filter_ImgStep1OfX;
leImageWidget* maintenance_filter_ImgContact;
leImageWidget* maintenance_filter_ImgComplete;
leLabelWidget* maintenance_filter_LblInstructions;
leLabelWidget* maintenance_filter_LblStepCount;
leLabelWidget* maintenance_filter_LblStep1OfX;
leButtonWidget* maintenance_filter_BtnHome;
leButtonWidget* maintenance_filter_BtnExit;
leButtonWidget* maintenance_filter_BtnComplete;
leButtonWidget* maintenance_filter_BtnContact;
leButtonWidget* maintenance_filter_BtnNext;
leButtonWidget* maintenance_filter_BtnPrev;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_maintenance_filter(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_maintenance_filter(void)
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

    maintenance_filter_Layer_0_FillPanel = leWidget_New();
    maintenance_filter_Layer_0_FillPanel->fn->setPosition(maintenance_filter_Layer_0_FillPanel, 0, 0);
    maintenance_filter_Layer_0_FillPanel->fn->setSize(maintenance_filter_Layer_0_FillPanel, 480, 272);
    maintenance_filter_Layer_0_FillPanel->fn->setScheme(maintenance_filter_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_Layer_0_FillPanel);

    maintenance_filter_ImgFilter = leImageWidget_New();
    maintenance_filter_ImgFilter->fn->setPosition(maintenance_filter_ImgFilter, 115, 35);
    maintenance_filter_ImgFilter->fn->setSize(maintenance_filter_ImgFilter, 250, 180);
    maintenance_filter_ImgFilter->fn->setScheme(maintenance_filter_ImgFilter, &BlackBack);
    maintenance_filter_ImgFilter->fn->setBorderType(maintenance_filter_ImgFilter, LE_WIDGET_BORDER_NONE);
    maintenance_filter_ImgFilter->fn->setImage(maintenance_filter_ImgFilter, (leImage*)&filter1);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_ImgFilter);

    maintenance_filter_ImgStepCount = leImageWidget_New();
    maintenance_filter_ImgStepCount->fn->setPosition(maintenance_filter_ImgStepCount, 88, 52);
    maintenance_filter_ImgStepCount->fn->setSize(maintenance_filter_ImgStepCount, 30, 30);
    maintenance_filter_ImgStepCount->fn->setScheme(maintenance_filter_ImgStepCount, &BlackBack);
    maintenance_filter_ImgStepCount->fn->setBackgroundType(maintenance_filter_ImgStepCount, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_ImgStepCount->fn->setBorderType(maintenance_filter_ImgStepCount, LE_WIDGET_BORDER_NONE);
    maintenance_filter_ImgStepCount->fn->setImage(maintenance_filter_ImgStepCount, (leImage*)&Menu_step_count);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_ImgStepCount);

    maintenance_filter_ImgStep1OfX = leImageWidget_New();
    maintenance_filter_ImgStep1OfX->fn->setPosition(maintenance_filter_ImgStep1OfX, 415, 55);
    maintenance_filter_ImgStep1OfX->fn->setSize(maintenance_filter_ImgStep1OfX, 55, 35);
    maintenance_filter_ImgStep1OfX->fn->setScheme(maintenance_filter_ImgStep1OfX, &BlackBack);
    maintenance_filter_ImgStep1OfX->fn->setBackgroundType(maintenance_filter_ImgStep1OfX, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_ImgStep1OfX->fn->setBorderType(maintenance_filter_ImgStep1OfX, LE_WIDGET_BORDER_NONE);
    maintenance_filter_ImgStep1OfX->fn->setImage(maintenance_filter_ImgStep1OfX, (leImage*)&Menu_step_number);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_ImgStep1OfX);

    maintenance_filter_ImgContact = leImageWidget_New();
    maintenance_filter_ImgContact->fn->setPosition(maintenance_filter_ImgContact, 10, 225);
    maintenance_filter_ImgContact->fn->setSize(maintenance_filter_ImgContact, 140, 40);
    maintenance_filter_ImgContact->fn->setScheme(maintenance_filter_ImgContact, &BlackBack);
    maintenance_filter_ImgContact->fn->setBackgroundType(maintenance_filter_ImgContact, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_ImgContact->fn->setBorderType(maintenance_filter_ImgContact, LE_WIDGET_BORDER_NONE);
    maintenance_filter_ImgContact->fn->setImage(maintenance_filter_ImgContact, (leImage*)&Contact_service_gray2_border);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_ImgContact);

    maintenance_filter_ImgComplete = leImageWidget_New();
    maintenance_filter_ImgComplete->fn->setPosition(maintenance_filter_ImgComplete, 175, 116);
    maintenance_filter_ImgComplete->fn->setSize(maintenance_filter_ImgComplete, 140, 40);
    maintenance_filter_ImgComplete->fn->setScheme(maintenance_filter_ImgComplete, &BlackBack);
    maintenance_filter_ImgComplete->fn->setBackgroundType(maintenance_filter_ImgComplete, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_ImgComplete->fn->setBorderType(maintenance_filter_ImgComplete, LE_WIDGET_BORDER_NONE);
    maintenance_filter_ImgComplete->fn->setImage(maintenance_filter_ImgComplete, (leImage*)&Contact_service_gray2_border);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_ImgComplete);

    maintenance_filter_LblInstructions = leLabelWidget_New();
    maintenance_filter_LblInstructions->fn->setPosition(maintenance_filter_LblInstructions, 45, 5);
    maintenance_filter_LblInstructions->fn->setSize(maintenance_filter_LblInstructions, 390, 30);
    maintenance_filter_LblInstructions->fn->setScheme(maintenance_filter_LblInstructions, &Label_FontBlack);
    maintenance_filter_LblInstructions->fn->setBackgroundType(maintenance_filter_LblInstructions, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_LblInstructions->fn->setHAlignment(maintenance_filter_LblInstructions, LE_HALIGN_CENTER);
    maintenance_filter_LblInstructions->fn->setString(maintenance_filter_LblInstructions, (leString*)&string_MAINTENANCE_FILTER_Instructions);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_LblInstructions);

    maintenance_filter_LblStepCount = leLabelWidget_New();
    maintenance_filter_LblStepCount->fn->setPosition(maintenance_filter_LblStepCount, 88, 52);
    maintenance_filter_LblStepCount->fn->setSize(maintenance_filter_LblStepCount, 30, 30);
    maintenance_filter_LblStepCount->fn->setScheme(maintenance_filter_LblStepCount, &Label_FontWhite);
    maintenance_filter_LblStepCount->fn->setBackgroundType(maintenance_filter_LblStepCount, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_LblStepCount->fn->setHAlignment(maintenance_filter_LblStepCount, LE_HALIGN_CENTER);
    maintenance_filter_LblStepCount->fn->setString(maintenance_filter_LblStepCount, (leString*)&string_MAINTENANCE_FILTER_StepCount);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_LblStepCount);

    maintenance_filter_LblStep1OfX = leLabelWidget_New();
    maintenance_filter_LblStep1OfX->fn->setPosition(maintenance_filter_LblStep1OfX, 415, 55);
    maintenance_filter_LblStep1OfX->fn->setSize(maintenance_filter_LblStep1OfX, 55, 35);
    maintenance_filter_LblStep1OfX->fn->setScheme(maintenance_filter_LblStep1OfX, &Label_FontWhite);
    maintenance_filter_LblStep1OfX->fn->setBackgroundType(maintenance_filter_LblStep1OfX, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_LblStep1OfX->fn->setHAlignment(maintenance_filter_LblStep1OfX, LE_HALIGN_CENTER);
    maintenance_filter_LblStep1OfX->fn->setString(maintenance_filter_LblStep1OfX, (leString*)&string_MAINTENANCE_FILTER_Step1OfX);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_LblStep1OfX);

    maintenance_filter_BtnHome = leButtonWidget_New();
    maintenance_filter_BtnHome->fn->setPosition(maintenance_filter_BtnHome, 435, 225);
    maintenance_filter_BtnHome->fn->setSize(maintenance_filter_BtnHome, 40, 40);
    maintenance_filter_BtnHome->fn->setScheme(maintenance_filter_BtnHome, &BlackBack);
    maintenance_filter_BtnHome->fn->setBackgroundType(maintenance_filter_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_BtnHome->fn->setBorderType(maintenance_filter_BtnHome, LE_WIDGET_BORDER_NONE);
    maintenance_filter_BtnHome->fn->setPressedImage(maintenance_filter_BtnHome, (leImage*)&Menu_home);
    maintenance_filter_BtnHome->fn->setReleasedImage(maintenance_filter_BtnHome, (leImage*)&Menu_home);
    maintenance_filter_BtnHome->fn->setReleasedEventCallback(maintenance_filter_BtnHome, event_maintenance_filter_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_BtnHome);

    maintenance_filter_BtnExit = leButtonWidget_New();
    maintenance_filter_BtnExit->fn->setPosition(maintenance_filter_BtnExit, 415, 2);
    maintenance_filter_BtnExit->fn->setSize(maintenance_filter_BtnExit, 60, 60);
    maintenance_filter_BtnExit->fn->setScheme(maintenance_filter_BtnExit, &BlackBack);
    maintenance_filter_BtnExit->fn->setBackgroundType(maintenance_filter_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_BtnExit->fn->setBorderType(maintenance_filter_BtnExit, LE_WIDGET_BORDER_NONE);
    maintenance_filter_BtnExit->fn->setHAlignment(maintenance_filter_BtnExit, LE_HALIGN_RIGHT);
    maintenance_filter_BtnExit->fn->setVAlignment(maintenance_filter_BtnExit, LE_VALIGN_TOP);
    maintenance_filter_BtnExit->fn->setMargins(maintenance_filter_BtnExit, 4, 10, 10, 4);
    maintenance_filter_BtnExit->fn->setPressedImage(maintenance_filter_BtnExit, (leImage*)&Menu_exit_black);
    maintenance_filter_BtnExit->fn->setReleasedImage(maintenance_filter_BtnExit, (leImage*)&Menu_exit_black);
    maintenance_filter_BtnExit->fn->setReleasedEventCallback(maintenance_filter_BtnExit, event_maintenance_filter_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_BtnExit);

    maintenance_filter_BtnComplete = leButtonWidget_New();
    maintenance_filter_BtnComplete->fn->setPosition(maintenance_filter_BtnComplete, 175, 112);
    maintenance_filter_BtnComplete->fn->setSize(maintenance_filter_BtnComplete, 139, 42);
    maintenance_filter_BtnComplete->fn->setScheme(maintenance_filter_BtnComplete, &Label_FontWhite);
    maintenance_filter_BtnComplete->fn->setBackgroundType(maintenance_filter_BtnComplete, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_BtnComplete->fn->setBorderType(maintenance_filter_BtnComplete, LE_WIDGET_BORDER_NONE);
    maintenance_filter_BtnComplete->fn->setString(maintenance_filter_BtnComplete, (leString*)&string_MAINTENANCE_FILTER_Complete);
    maintenance_filter_BtnComplete->fn->setReleasedEventCallback(maintenance_filter_BtnComplete, event_maintenance_filter_BtnComplete_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_BtnComplete);

    maintenance_filter_BtnContact = leButtonWidget_New();
    maintenance_filter_BtnContact->fn->setPosition(maintenance_filter_BtnContact, 10, 221);
    maintenance_filter_BtnContact->fn->setSize(maintenance_filter_BtnContact, 139, 42);
    maintenance_filter_BtnContact->fn->setScheme(maintenance_filter_BtnContact, &Label_FontWhite);
    maintenance_filter_BtnContact->fn->setBackgroundType(maintenance_filter_BtnContact, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_BtnContact->fn->setBorderType(maintenance_filter_BtnContact, LE_WIDGET_BORDER_NONE);
    maintenance_filter_BtnContact->fn->setString(maintenance_filter_BtnContact, (leString*)&string_MAINTENANCE_FILTER_ContactService);
    maintenance_filter_BtnContact->fn->setReleasedEventCallback(maintenance_filter_BtnContact, event_maintenance_filter_BtnContact_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_BtnContact);

    maintenance_filter_BtnNext = leButtonWidget_New();
    maintenance_filter_BtnNext->fn->setPosition(maintenance_filter_BtnNext, 415, 100);
    maintenance_filter_BtnNext->fn->setSize(maintenance_filter_BtnNext, 55, 55);
    maintenance_filter_BtnNext->fn->setScheme(maintenance_filter_BtnNext, &BlackBack);
    maintenance_filter_BtnNext->fn->setBackgroundType(maintenance_filter_BtnNext, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_BtnNext->fn->setBorderType(maintenance_filter_BtnNext, LE_WIDGET_BORDER_NONE);
    maintenance_filter_BtnNext->fn->setPressedImage(maintenance_filter_BtnNext, (leImage*)&Menu_next);
    maintenance_filter_BtnNext->fn->setReleasedImage(maintenance_filter_BtnNext, (leImage*)&Menu_next);
    maintenance_filter_BtnNext->fn->setReleasedEventCallback(maintenance_filter_BtnNext, event_maintenance_filter_BtnNext_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_BtnNext);

    maintenance_filter_BtnPrev = leButtonWidget_New();
    maintenance_filter_BtnPrev->fn->setPosition(maintenance_filter_BtnPrev, 10, 100);
    maintenance_filter_BtnPrev->fn->setSize(maintenance_filter_BtnPrev, 55, 55);
    maintenance_filter_BtnPrev->fn->setScheme(maintenance_filter_BtnPrev, &BlackBack);
    maintenance_filter_BtnPrev->fn->setBackgroundType(maintenance_filter_BtnPrev, LE_WIDGET_BACKGROUND_NONE);
    maintenance_filter_BtnPrev->fn->setBorderType(maintenance_filter_BtnPrev, LE_WIDGET_BORDER_NONE);
    maintenance_filter_BtnPrev->fn->setPressedImage(maintenance_filter_BtnPrev, (leImage*)&Menu_prev);
    maintenance_filter_BtnPrev->fn->setReleasedImage(maintenance_filter_BtnPrev, (leImage*)&Menu_prev);
    maintenance_filter_BtnPrev->fn->setReleasedEventCallback(maintenance_filter_BtnPrev, event_maintenance_filter_BtnPrev_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_filter_BtnPrev);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    maintenance_filter_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_maintenance_filter(void)
{
}

void screenHide_maintenance_filter(void)
{
    maintenance_filter_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    maintenance_filter_Layer_0_FillPanel = NULL;
    maintenance_filter_ImgFilter = NULL;
    maintenance_filter_ImgStepCount = NULL;
    maintenance_filter_ImgStep1OfX = NULL;
    maintenance_filter_ImgContact = NULL;
    maintenance_filter_ImgComplete = NULL;
    maintenance_filter_LblInstructions = NULL;
    maintenance_filter_LblStepCount = NULL;
    maintenance_filter_LblStep1OfX = NULL;
    maintenance_filter_BtnHome = NULL;
    maintenance_filter_BtnExit = NULL;
    maintenance_filter_BtnComplete = NULL;
    maintenance_filter_BtnContact = NULL;
    maintenance_filter_BtnNext = NULL;
    maintenance_filter_BtnPrev = NULL;


    showing = LE_FALSE;
}

void screenDestroy_maintenance_filter(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_maintenance_filter(uint32_t lyrIdx)
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

