#include "gfx/legato/generated/screen/le_gen_screen_instructStep.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* instructStep_Layer_0_FillPanel;
leLabelWidget* instructStep_LblInstructions;
leImageSequenceWidget* instructStep_ImgSqn;
leImageWidget* instructStep_ImgContact;
leImageWidget* instructStep_ImgComplete;
leImageWidget* instructStep_ImgStep1OfX;
leImageWidget* instructStep_ImgStepCount;
leLabelWidget* instructStep_LblStep1OfX;
leLabelWidget* instructStep_LblStepCount;
leButtonWidget* instructStep_BtnHome;
leButtonWidget* instructStep_BtnPrev;
leButtonWidget* instructStep_BtnNext;
leButtonWidget* instructStep_BtnExit;
leButtonWidget* instructStep_BtnComplete;
leButtonWidget* instructStep_BtnContact;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_instructStep(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_instructStep(void)
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

    instructStep_Layer_0_FillPanel = leWidget_New();
    instructStep_Layer_0_FillPanel->fn->setPosition(instructStep_Layer_0_FillPanel, 0, 0);
    instructStep_Layer_0_FillPanel->fn->setSize(instructStep_Layer_0_FillPanel, 480, 272);
    instructStep_Layer_0_FillPanel->fn->setScheme(instructStep_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)instructStep_Layer_0_FillPanel);

    instructStep_LblInstructions = leLabelWidget_New();
    instructStep_LblInstructions->fn->setPosition(instructStep_LblInstructions, 45, 5);
    instructStep_LblInstructions->fn->setSize(instructStep_LblInstructions, 390, 70);
    instructStep_LblInstructions->fn->setScheme(instructStep_LblInstructions, &Label_FontBlack);
    instructStep_LblInstructions->fn->setBackgroundType(instructStep_LblInstructions, LE_WIDGET_BACKGROUND_NONE);
    instructStep_LblInstructions->fn->setHAlignment(instructStep_LblInstructions, LE_HALIGN_CENTER);
    instructStep_LblInstructions->fn->setVAlignment(instructStep_LblInstructions, LE_VALIGN_TOP);
    instructStep_LblInstructions->fn->setMargins(instructStep_LblInstructions, 0, 4, 4, 0);
    instructStep_LblInstructions->fn->setString(instructStep_LblInstructions, (leString*)&string_MAINTENANCE_SANITIZE_Instructions);
    root1->fn->addChild(root1, (leWidget*)instructStep_LblInstructions);

    instructStep_ImgSqn = leImageSequenceWidget_New();
    instructStep_ImgSqn->fn->setPosition(instructStep_ImgSqn, 115, 35);
    instructStep_ImgSqn->fn->setSize(instructStep_ImgSqn, 260, 180);
    instructStep_ImgSqn->fn->setVisible(instructStep_ImgSqn, LE_FALSE);
    instructStep_ImgSqn->fn->setScheme(instructStep_ImgSqn, &AriaImport_LayerFillScheme);
    instructStep_ImgSqn->fn->setImageCount(instructStep_ImgSqn, 7);
    instructStep_ImgSqn->fn->setImage(instructStep_ImgSqn, 0, &step1);
    instructStep_ImgSqn->fn->setImageDelay(instructStep_ImgSqn, 0, 1000);
    instructStep_ImgSqn->fn->setImage(instructStep_ImgSqn, 1, &step2);
    instructStep_ImgSqn->fn->setImageDelay(instructStep_ImgSqn, 1, 1000);
    instructStep_ImgSqn->fn->setImage(instructStep_ImgSqn, 2, &step3);
    instructStep_ImgSqn->fn->setImageDelay(instructStep_ImgSqn, 2, 1000);
    instructStep_ImgSqn->fn->setImage(instructStep_ImgSqn, 3, &step4);
    instructStep_ImgSqn->fn->setImageDelay(instructStep_ImgSqn, 3, 1000);
    instructStep_ImgSqn->fn->setImage(instructStep_ImgSqn, 4, &filter5);
    instructStep_ImgSqn->fn->setImageDelay(instructStep_ImgSqn, 4, 1000);
    instructStep_ImgSqn->fn->setImage(instructStep_ImgSqn, 5, &filter6);
    instructStep_ImgSqn->fn->setImageDelay(instructStep_ImgSqn, 5, 1000);
    instructStep_ImgSqn->fn->setImage(instructStep_ImgSqn, 6, &sanitize6);
    instructStep_ImgSqn->fn->setImageDelay(instructStep_ImgSqn, 6, 1000);
    root1->fn->addChild(root1, (leWidget*)instructStep_ImgSqn);

    instructStep_ImgContact = leImageWidget_New();
    instructStep_ImgContact->fn->setPosition(instructStep_ImgContact, 10, 225);
    instructStep_ImgContact->fn->setSize(instructStep_ImgContact, 140, 40);
    instructStep_ImgContact->fn->setScheme(instructStep_ImgContact, &BlackBack);
    instructStep_ImgContact->fn->setBackgroundType(instructStep_ImgContact, LE_WIDGET_BACKGROUND_NONE);
    instructStep_ImgContact->fn->setBorderType(instructStep_ImgContact, LE_WIDGET_BORDER_NONE);
    instructStep_ImgContact->fn->setImage(instructStep_ImgContact, (leImage*)&Contact_service_gray2_border);
    root1->fn->addChild(root1, (leWidget*)instructStep_ImgContact);

    instructStep_ImgComplete = leImageWidget_New();
    instructStep_ImgComplete->fn->setPosition(instructStep_ImgComplete, 175, 116);
    instructStep_ImgComplete->fn->setSize(instructStep_ImgComplete, 140, 40);
    instructStep_ImgComplete->fn->setScheme(instructStep_ImgComplete, &BlackBack);
    instructStep_ImgComplete->fn->setBackgroundType(instructStep_ImgComplete, LE_WIDGET_BACKGROUND_NONE);
    instructStep_ImgComplete->fn->setBorderType(instructStep_ImgComplete, LE_WIDGET_BORDER_NONE);
    instructStep_ImgComplete->fn->setImage(instructStep_ImgComplete, (leImage*)&Contact_service_gray2_border);
    root1->fn->addChild(root1, (leWidget*)instructStep_ImgComplete);

    instructStep_ImgStep1OfX = leImageWidget_New();
    instructStep_ImgStep1OfX->fn->setPosition(instructStep_ImgStep1OfX, 415, 55);
    instructStep_ImgStep1OfX->fn->setSize(instructStep_ImgStep1OfX, 55, 35);
    instructStep_ImgStep1OfX->fn->setScheme(instructStep_ImgStep1OfX, &BlackBack);
    instructStep_ImgStep1OfX->fn->setBackgroundType(instructStep_ImgStep1OfX, LE_WIDGET_BACKGROUND_NONE);
    instructStep_ImgStep1OfX->fn->setBorderType(instructStep_ImgStep1OfX, LE_WIDGET_BORDER_NONE);
    instructStep_ImgStep1OfX->fn->setImage(instructStep_ImgStep1OfX, (leImage*)&Menu_step_number);
    root1->fn->addChild(root1, (leWidget*)instructStep_ImgStep1OfX);

    instructStep_ImgStepCount = leImageWidget_New();
    instructStep_ImgStepCount->fn->setPosition(instructStep_ImgStepCount, 88, 52);
    instructStep_ImgStepCount->fn->setSize(instructStep_ImgStepCount, 30, 30);
    instructStep_ImgStepCount->fn->setScheme(instructStep_ImgStepCount, &BlackBack);
    instructStep_ImgStepCount->fn->setBackgroundType(instructStep_ImgStepCount, LE_WIDGET_BACKGROUND_NONE);
    instructStep_ImgStepCount->fn->setBorderType(instructStep_ImgStepCount, LE_WIDGET_BORDER_NONE);
    instructStep_ImgStepCount->fn->setImage(instructStep_ImgStepCount, (leImage*)&Menu_step_count);
    root1->fn->addChild(root1, (leWidget*)instructStep_ImgStepCount);

    instructStep_LblStep1OfX = leLabelWidget_New();
    instructStep_LblStep1OfX->fn->setPosition(instructStep_LblStep1OfX, 415, 55);
    instructStep_LblStep1OfX->fn->setSize(instructStep_LblStep1OfX, 55, 35);
    instructStep_LblStep1OfX->fn->setScheme(instructStep_LblStep1OfX, &Label_FontWhite);
    instructStep_LblStep1OfX->fn->setBackgroundType(instructStep_LblStep1OfX, LE_WIDGET_BACKGROUND_NONE);
    instructStep_LblStep1OfX->fn->setHAlignment(instructStep_LblStep1OfX, LE_HALIGN_CENTER);
    instructStep_LblStep1OfX->fn->setString(instructStep_LblStep1OfX, (leString*)&string_MAINTENANCE_FILTER_Step1OfX);
    root1->fn->addChild(root1, (leWidget*)instructStep_LblStep1OfX);

    instructStep_LblStepCount = leLabelWidget_New();
    instructStep_LblStepCount->fn->setPosition(instructStep_LblStepCount, 88, 52);
    instructStep_LblStepCount->fn->setSize(instructStep_LblStepCount, 30, 30);
    instructStep_LblStepCount->fn->setScheme(instructStep_LblStepCount, &Label_FontWhite);
    instructStep_LblStepCount->fn->setBackgroundType(instructStep_LblStepCount, LE_WIDGET_BACKGROUND_NONE);
    instructStep_LblStepCount->fn->setHAlignment(instructStep_LblStepCount, LE_HALIGN_CENTER);
    instructStep_LblStepCount->fn->setString(instructStep_LblStepCount, (leString*)&string_MAINTENANCE_SANITIZE_StepCount);
    root1->fn->addChild(root1, (leWidget*)instructStep_LblStepCount);

    instructStep_BtnHome = leButtonWidget_New();
    instructStep_BtnHome->fn->setPosition(instructStep_BtnHome, 435, 225);
    instructStep_BtnHome->fn->setSize(instructStep_BtnHome, 40, 40);
    instructStep_BtnHome->fn->setScheme(instructStep_BtnHome, &BlackBack);
    instructStep_BtnHome->fn->setBackgroundType(instructStep_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    instructStep_BtnHome->fn->setBorderType(instructStep_BtnHome, LE_WIDGET_BORDER_NONE);
    instructStep_BtnHome->fn->setPressedImage(instructStep_BtnHome, (leImage*)&Menu_home);
    instructStep_BtnHome->fn->setReleasedImage(instructStep_BtnHome, (leImage*)&Menu_home);
    instructStep_BtnHome->fn->setReleasedEventCallback(instructStep_BtnHome, event_instructStep_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)instructStep_BtnHome);

    instructStep_BtnPrev = leButtonWidget_New();
    instructStep_BtnPrev->fn->setPosition(instructStep_BtnPrev, 10, 100);
    instructStep_BtnPrev->fn->setSize(instructStep_BtnPrev, 55, 55);
    instructStep_BtnPrev->fn->setScheme(instructStep_BtnPrev, &Layer_Gray3);
    instructStep_BtnPrev->fn->setBackgroundType(instructStep_BtnPrev, LE_WIDGET_BACKGROUND_NONE);
    instructStep_BtnPrev->fn->setBorderType(instructStep_BtnPrev, LE_WIDGET_BORDER_NONE);
    instructStep_BtnPrev->fn->setPressedImage(instructStep_BtnPrev, (leImage*)&Menu_prev);
    instructStep_BtnPrev->fn->setReleasedImage(instructStep_BtnPrev, (leImage*)&Menu_prev);
    instructStep_BtnPrev->fn->setReleasedEventCallback(instructStep_BtnPrev, event_instructStep_BtnPrev_OnReleased);
    root1->fn->addChild(root1, (leWidget*)instructStep_BtnPrev);

    instructStep_BtnNext = leButtonWidget_New();
    instructStep_BtnNext->fn->setPosition(instructStep_BtnNext, 415, 100);
    instructStep_BtnNext->fn->setSize(instructStep_BtnNext, 55, 55);
    instructStep_BtnNext->fn->setScheme(instructStep_BtnNext, &Layer_Gray3);
    instructStep_BtnNext->fn->setBackgroundType(instructStep_BtnNext, LE_WIDGET_BACKGROUND_NONE);
    instructStep_BtnNext->fn->setBorderType(instructStep_BtnNext, LE_WIDGET_BORDER_NONE);
    instructStep_BtnNext->fn->setPressedImage(instructStep_BtnNext, (leImage*)&Menu_next);
    instructStep_BtnNext->fn->setReleasedImage(instructStep_BtnNext, (leImage*)&Menu_next);
    instructStep_BtnNext->fn->setReleasedEventCallback(instructStep_BtnNext, event_instructStep_BtnNext_OnReleased);
    root1->fn->addChild(root1, (leWidget*)instructStep_BtnNext);

    instructStep_BtnExit = leButtonWidget_New();
    instructStep_BtnExit->fn->setPosition(instructStep_BtnExit, 415, 2);
    instructStep_BtnExit->fn->setSize(instructStep_BtnExit, 60, 60);
    instructStep_BtnExit->fn->setScheme(instructStep_BtnExit, &BlackBack);
    instructStep_BtnExit->fn->setBackgroundType(instructStep_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    instructStep_BtnExit->fn->setBorderType(instructStep_BtnExit, LE_WIDGET_BORDER_NONE);
    instructStep_BtnExit->fn->setHAlignment(instructStep_BtnExit, LE_HALIGN_RIGHT);
    instructStep_BtnExit->fn->setVAlignment(instructStep_BtnExit, LE_VALIGN_TOP);
    instructStep_BtnExit->fn->setMargins(instructStep_BtnExit, 4, 10, 10, 4);
    instructStep_BtnExit->fn->setPressedImage(instructStep_BtnExit, (leImage*)&Menu_exit_black);
    instructStep_BtnExit->fn->setReleasedImage(instructStep_BtnExit, (leImage*)&Menu_exit_black);
    instructStep_BtnExit->fn->setReleasedEventCallback(instructStep_BtnExit, event_instructStep_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)instructStep_BtnExit);

    instructStep_BtnComplete = leButtonWidget_New();
    instructStep_BtnComplete->fn->setPosition(instructStep_BtnComplete, 175, 112);
    instructStep_BtnComplete->fn->setSize(instructStep_BtnComplete, 139, 42);
    instructStep_BtnComplete->fn->setScheme(instructStep_BtnComplete, &Label_FontWhite);
    instructStep_BtnComplete->fn->setBackgroundType(instructStep_BtnComplete, LE_WIDGET_BACKGROUND_NONE);
    instructStep_BtnComplete->fn->setBorderType(instructStep_BtnComplete, LE_WIDGET_BORDER_NONE);
    instructStep_BtnComplete->fn->setString(instructStep_BtnComplete, (leString*)&string_MAINTENANCE_FILTER_Complete);
    instructStep_BtnComplete->fn->setPressedEventCallback(instructStep_BtnComplete, event_instructStep_BtnComplete_OnPressed);
    instructStep_BtnComplete->fn->setReleasedEventCallback(instructStep_BtnComplete, event_instructStep_BtnComplete_OnReleased);
    root1->fn->addChild(root1, (leWidget*)instructStep_BtnComplete);

    instructStep_BtnContact = leButtonWidget_New();
    instructStep_BtnContact->fn->setPosition(instructStep_BtnContact, 10, 221);
    instructStep_BtnContact->fn->setSize(instructStep_BtnContact, 139, 42);
    instructStep_BtnContact->fn->setScheme(instructStep_BtnContact, &Label_FontWhite);
    instructStep_BtnContact->fn->setBackgroundType(instructStep_BtnContact, LE_WIDGET_BACKGROUND_NONE);
    instructStep_BtnContact->fn->setBorderType(instructStep_BtnContact, LE_WIDGET_BORDER_NONE);
    instructStep_BtnContact->fn->setString(instructStep_BtnContact, (leString*)&string_MAINTENANCE_SANITIZE_ContactService);
    instructStep_BtnContact->fn->setReleasedEventCallback(instructStep_BtnContact, event_instructStep_BtnContact_OnReleased);
    root1->fn->addChild(root1, (leWidget*)instructStep_BtnContact);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    instructStep_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_instructStep(void)
{
}

void screenHide_instructStep(void)
{
    instructStep_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    instructStep_Layer_0_FillPanel = NULL;
    instructStep_LblInstructions = NULL;
    instructStep_ImgSqn = NULL;
    instructStep_ImgContact = NULL;
    instructStep_ImgComplete = NULL;
    instructStep_ImgStep1OfX = NULL;
    instructStep_ImgStepCount = NULL;
    instructStep_LblStep1OfX = NULL;
    instructStep_LblStepCount = NULL;
    instructStep_BtnHome = NULL;
    instructStep_BtnPrev = NULL;
    instructStep_BtnNext = NULL;
    instructStep_BtnExit = NULL;
    instructStep_BtnComplete = NULL;
    instructStep_BtnContact = NULL;


    showing = LE_FALSE;
}

void screenDestroy_instructStep(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_instructStep(uint32_t lyrIdx)
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

