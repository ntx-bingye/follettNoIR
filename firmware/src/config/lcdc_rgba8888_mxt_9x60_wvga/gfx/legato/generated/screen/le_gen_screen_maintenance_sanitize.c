#include "gfx/legato/generated/screen/le_gen_screen_maintenance_sanitize.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* maintenance_sanitize_Layer_0_FillPanel;
leImageWidget* maintenance_sanitize_ImgSanitize;
leImageWidget* maintenance_sanitize_ImgContact;
leImageWidget* maintenance_sanitize_ImgComplete;
leImageWidget* maintenance_sanitize_ImgStep1OfX;
leImageWidget* maintenance_sanitize_ImgStepCount;
leLabelWidget* maintenance_sanitize_LblInstructions;
leLabelWidget* maintenance_sanitize_LblStep1OfX;
leLabelWidget* maintenance_sanitize_LblStepCount;
leButtonWidget* maintenance_sanitize_BtnHome;
leButtonWidget* maintenance_sanitize_BtnPrev;
leButtonWidget* maintenance_sanitize_BtnNext;
leButtonWidget* maintenance_sanitize_BtnExit;
leButtonWidget* maintenance_sanitize_BtnComplete;
leButtonWidget* maintenance_sanitize_BtnContact;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_maintenance_sanitize(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_maintenance_sanitize(void)
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

    maintenance_sanitize_Layer_0_FillPanel = leWidget_New();
    maintenance_sanitize_Layer_0_FillPanel->fn->setPosition(maintenance_sanitize_Layer_0_FillPanel, 0, 0);
    maintenance_sanitize_Layer_0_FillPanel->fn->setSize(maintenance_sanitize_Layer_0_FillPanel, 480, 272);
    maintenance_sanitize_Layer_0_FillPanel->fn->setScheme(maintenance_sanitize_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_Layer_0_FillPanel);

    maintenance_sanitize_ImgSanitize = leImageWidget_New();
    maintenance_sanitize_ImgSanitize->fn->setPosition(maintenance_sanitize_ImgSanitize, 115, 35);
    maintenance_sanitize_ImgSanitize->fn->setSize(maintenance_sanitize_ImgSanitize, 250, 180);
    maintenance_sanitize_ImgSanitize->fn->setScheme(maintenance_sanitize_ImgSanitize, &BlackBack);
    maintenance_sanitize_ImgSanitize->fn->setBorderType(maintenance_sanitize_ImgSanitize, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_ImgSanitize->fn->setImage(maintenance_sanitize_ImgSanitize, (leImage*)&Maintenance_sanitize1);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_ImgSanitize);

    maintenance_sanitize_ImgContact = leImageWidget_New();
    maintenance_sanitize_ImgContact->fn->setPosition(maintenance_sanitize_ImgContact, 10, 225);
    maintenance_sanitize_ImgContact->fn->setSize(maintenance_sanitize_ImgContact, 140, 40);
    maintenance_sanitize_ImgContact->fn->setScheme(maintenance_sanitize_ImgContact, &BlackBack);
    maintenance_sanitize_ImgContact->fn->setBackgroundType(maintenance_sanitize_ImgContact, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_ImgContact->fn->setBorderType(maintenance_sanitize_ImgContact, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_ImgContact->fn->setImage(maintenance_sanitize_ImgContact, (leImage*)&Contact_service_gray2_border);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_ImgContact);

    maintenance_sanitize_ImgComplete = leImageWidget_New();
    maintenance_sanitize_ImgComplete->fn->setPosition(maintenance_sanitize_ImgComplete, 175, 116);
    maintenance_sanitize_ImgComplete->fn->setSize(maintenance_sanitize_ImgComplete, 140, 40);
    maintenance_sanitize_ImgComplete->fn->setScheme(maintenance_sanitize_ImgComplete, &BlackBack);
    maintenance_sanitize_ImgComplete->fn->setBackgroundType(maintenance_sanitize_ImgComplete, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_ImgComplete->fn->setBorderType(maintenance_sanitize_ImgComplete, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_ImgComplete->fn->setImage(maintenance_sanitize_ImgComplete, (leImage*)&Contact_service_gray2_border);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_ImgComplete);

    maintenance_sanitize_ImgStep1OfX = leImageWidget_New();
    maintenance_sanitize_ImgStep1OfX->fn->setPosition(maintenance_sanitize_ImgStep1OfX, 415, 55);
    maintenance_sanitize_ImgStep1OfX->fn->setSize(maintenance_sanitize_ImgStep1OfX, 55, 35);
    maintenance_sanitize_ImgStep1OfX->fn->setScheme(maintenance_sanitize_ImgStep1OfX, &BlackBack);
    maintenance_sanitize_ImgStep1OfX->fn->setBackgroundType(maintenance_sanitize_ImgStep1OfX, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_ImgStep1OfX->fn->setBorderType(maintenance_sanitize_ImgStep1OfX, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_ImgStep1OfX->fn->setImage(maintenance_sanitize_ImgStep1OfX, (leImage*)&Menu_step_number);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_ImgStep1OfX);

    maintenance_sanitize_ImgStepCount = leImageWidget_New();
    maintenance_sanitize_ImgStepCount->fn->setPosition(maintenance_sanitize_ImgStepCount, 88, 52);
    maintenance_sanitize_ImgStepCount->fn->setSize(maintenance_sanitize_ImgStepCount, 30, 30);
    maintenance_sanitize_ImgStepCount->fn->setScheme(maintenance_sanitize_ImgStepCount, &BlackBack);
    maintenance_sanitize_ImgStepCount->fn->setBackgroundType(maintenance_sanitize_ImgStepCount, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_ImgStepCount->fn->setBorderType(maintenance_sanitize_ImgStepCount, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_ImgStepCount->fn->setImage(maintenance_sanitize_ImgStepCount, (leImage*)&Menu_step_count);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_ImgStepCount);

    maintenance_sanitize_LblInstructions = leLabelWidget_New();
    maintenance_sanitize_LblInstructions->fn->setPosition(maintenance_sanitize_LblInstructions, 45, 5);
    maintenance_sanitize_LblInstructions->fn->setSize(maintenance_sanitize_LblInstructions, 390, 30);
    maintenance_sanitize_LblInstructions->fn->setScheme(maintenance_sanitize_LblInstructions, &Label_FontBlack);
    maintenance_sanitize_LblInstructions->fn->setBackgroundType(maintenance_sanitize_LblInstructions, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_LblInstructions->fn->setHAlignment(maintenance_sanitize_LblInstructions, LE_HALIGN_CENTER);
    maintenance_sanitize_LblInstructions->fn->setString(maintenance_sanitize_LblInstructions, (leString*)&string_MAINTENANCE_SANITIZE_Instructions);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_LblInstructions);

    maintenance_sanitize_LblStep1OfX = leLabelWidget_New();
    maintenance_sanitize_LblStep1OfX->fn->setPosition(maintenance_sanitize_LblStep1OfX, 415, 55);
    maintenance_sanitize_LblStep1OfX->fn->setSize(maintenance_sanitize_LblStep1OfX, 55, 35);
    maintenance_sanitize_LblStep1OfX->fn->setScheme(maintenance_sanitize_LblStep1OfX, &Label_FontWhite);
    maintenance_sanitize_LblStep1OfX->fn->setBackgroundType(maintenance_sanitize_LblStep1OfX, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_LblStep1OfX->fn->setHAlignment(maintenance_sanitize_LblStep1OfX, LE_HALIGN_CENTER);
    maintenance_sanitize_LblStep1OfX->fn->setString(maintenance_sanitize_LblStep1OfX, (leString*)&string_MAINTENANCE_SANITIZE_Step1OfX);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_LblStep1OfX);

    maintenance_sanitize_LblStepCount = leLabelWidget_New();
    maintenance_sanitize_LblStepCount->fn->setPosition(maintenance_sanitize_LblStepCount, 88, 52);
    maintenance_sanitize_LblStepCount->fn->setSize(maintenance_sanitize_LblStepCount, 30, 30);
    maintenance_sanitize_LblStepCount->fn->setScheme(maintenance_sanitize_LblStepCount, &Label_FontWhite);
    maintenance_sanitize_LblStepCount->fn->setBackgroundType(maintenance_sanitize_LblStepCount, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_LblStepCount->fn->setHAlignment(maintenance_sanitize_LblStepCount, LE_HALIGN_CENTER);
    maintenance_sanitize_LblStepCount->fn->setString(maintenance_sanitize_LblStepCount, (leString*)&string_MAINTENANCE_SANITIZE_StepCount);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_LblStepCount);

    maintenance_sanitize_BtnHome = leButtonWidget_New();
    maintenance_sanitize_BtnHome->fn->setPosition(maintenance_sanitize_BtnHome, 435, 225);
    maintenance_sanitize_BtnHome->fn->setSize(maintenance_sanitize_BtnHome, 40, 40);
    maintenance_sanitize_BtnHome->fn->setScheme(maintenance_sanitize_BtnHome, &BlackBack);
    maintenance_sanitize_BtnHome->fn->setBackgroundType(maintenance_sanitize_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_BtnHome->fn->setBorderType(maintenance_sanitize_BtnHome, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_BtnHome->fn->setPressedImage(maintenance_sanitize_BtnHome, (leImage*)&Menu_home);
    maintenance_sanitize_BtnHome->fn->setReleasedImage(maintenance_sanitize_BtnHome, (leImage*)&Menu_home);
    maintenance_sanitize_BtnHome->fn->setReleasedEventCallback(maintenance_sanitize_BtnHome, event_maintenance_sanitize_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_BtnHome);

    maintenance_sanitize_BtnPrev = leButtonWidget_New();
    maintenance_sanitize_BtnPrev->fn->setPosition(maintenance_sanitize_BtnPrev, 10, 100);
    maintenance_sanitize_BtnPrev->fn->setSize(maintenance_sanitize_BtnPrev, 55, 55);
    maintenance_sanitize_BtnPrev->fn->setScheme(maintenance_sanitize_BtnPrev, &Layer_Gray3);
    maintenance_sanitize_BtnPrev->fn->setBackgroundType(maintenance_sanitize_BtnPrev, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_BtnPrev->fn->setBorderType(maintenance_sanitize_BtnPrev, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_BtnPrev->fn->setPressedImage(maintenance_sanitize_BtnPrev, (leImage*)&Menu_prev);
    maintenance_sanitize_BtnPrev->fn->setReleasedImage(maintenance_sanitize_BtnPrev, (leImage*)&Menu_prev);
    maintenance_sanitize_BtnPrev->fn->setReleasedEventCallback(maintenance_sanitize_BtnPrev, event_maintenance_sanitize_BtnPrev_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_BtnPrev);

    maintenance_sanitize_BtnNext = leButtonWidget_New();
    maintenance_sanitize_BtnNext->fn->setPosition(maintenance_sanitize_BtnNext, 415, 100);
    maintenance_sanitize_BtnNext->fn->setSize(maintenance_sanitize_BtnNext, 55, 55);
    maintenance_sanitize_BtnNext->fn->setScheme(maintenance_sanitize_BtnNext, &Layer_Gray3);
    maintenance_sanitize_BtnNext->fn->setBackgroundType(maintenance_sanitize_BtnNext, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_BtnNext->fn->setBorderType(maintenance_sanitize_BtnNext, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_BtnNext->fn->setPressedImage(maintenance_sanitize_BtnNext, (leImage*)&Menu_next);
    maintenance_sanitize_BtnNext->fn->setReleasedImage(maintenance_sanitize_BtnNext, (leImage*)&Menu_next);
    maintenance_sanitize_BtnNext->fn->setReleasedEventCallback(maintenance_sanitize_BtnNext, event_maintenance_sanitize_BtnNext_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_BtnNext);

    maintenance_sanitize_BtnExit = leButtonWidget_New();
    maintenance_sanitize_BtnExit->fn->setPosition(maintenance_sanitize_BtnExit, 415, 2);
    maintenance_sanitize_BtnExit->fn->setSize(maintenance_sanitize_BtnExit, 60, 60);
    maintenance_sanitize_BtnExit->fn->setScheme(maintenance_sanitize_BtnExit, &BlackBack);
    maintenance_sanitize_BtnExit->fn->setBackgroundType(maintenance_sanitize_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_BtnExit->fn->setBorderType(maintenance_sanitize_BtnExit, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_BtnExit->fn->setHAlignment(maintenance_sanitize_BtnExit, LE_HALIGN_RIGHT);
    maintenance_sanitize_BtnExit->fn->setVAlignment(maintenance_sanitize_BtnExit, LE_VALIGN_TOP);
    maintenance_sanitize_BtnExit->fn->setMargins(maintenance_sanitize_BtnExit, 4, 10, 10, 4);
    maintenance_sanitize_BtnExit->fn->setPressedImage(maintenance_sanitize_BtnExit, (leImage*)&Menu_exit_black);
    maintenance_sanitize_BtnExit->fn->setReleasedImage(maintenance_sanitize_BtnExit, (leImage*)&Menu_exit_black);
    maintenance_sanitize_BtnExit->fn->setReleasedEventCallback(maintenance_sanitize_BtnExit, event_maintenance_sanitize_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_BtnExit);

    maintenance_sanitize_BtnComplete = leButtonWidget_New();
    maintenance_sanitize_BtnComplete->fn->setPosition(maintenance_sanitize_BtnComplete, 175, 112);
    maintenance_sanitize_BtnComplete->fn->setSize(maintenance_sanitize_BtnComplete, 139, 42);
    maintenance_sanitize_BtnComplete->fn->setScheme(maintenance_sanitize_BtnComplete, &Label_FontWhite);
    maintenance_sanitize_BtnComplete->fn->setBackgroundType(maintenance_sanitize_BtnComplete, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_BtnComplete->fn->setBorderType(maintenance_sanitize_BtnComplete, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_BtnComplete->fn->setString(maintenance_sanitize_BtnComplete, (leString*)&string_MAINTENANCE_SANITIZE_Complete);
    maintenance_sanitize_BtnComplete->fn->setPressedEventCallback(maintenance_sanitize_BtnComplete, event_maintenance_sanitize_BtnComplete_OnPressed);
    maintenance_sanitize_BtnComplete->fn->setReleasedEventCallback(maintenance_sanitize_BtnComplete, event_maintenance_sanitize_BtnComplete_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_BtnComplete);

    maintenance_sanitize_BtnContact = leButtonWidget_New();
    maintenance_sanitize_BtnContact->fn->setPosition(maintenance_sanitize_BtnContact, 10, 221);
    maintenance_sanitize_BtnContact->fn->setSize(maintenance_sanitize_BtnContact, 139, 42);
    maintenance_sanitize_BtnContact->fn->setScheme(maintenance_sanitize_BtnContact, &Label_FontWhite);
    maintenance_sanitize_BtnContact->fn->setBackgroundType(maintenance_sanitize_BtnContact, LE_WIDGET_BACKGROUND_NONE);
    maintenance_sanitize_BtnContact->fn->setBorderType(maintenance_sanitize_BtnContact, LE_WIDGET_BORDER_NONE);
    maintenance_sanitize_BtnContact->fn->setString(maintenance_sanitize_BtnContact, (leString*)&string_MAINTENANCE_SANITIZE_ContactService);
    maintenance_sanitize_BtnContact->fn->setReleasedEventCallback(maintenance_sanitize_BtnContact, event_maintenance_sanitize_BtnContact_OnReleased);
    root1->fn->addChild(root1, (leWidget*)maintenance_sanitize_BtnContact);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    maintenance_sanitize_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_maintenance_sanitize(void)
{
}

void screenHide_maintenance_sanitize(void)
{
    maintenance_sanitize_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    maintenance_sanitize_Layer_0_FillPanel = NULL;
    maintenance_sanitize_ImgSanitize = NULL;
    maintenance_sanitize_ImgContact = NULL;
    maintenance_sanitize_ImgComplete = NULL;
    maintenance_sanitize_ImgStep1OfX = NULL;
    maintenance_sanitize_ImgStepCount = NULL;
    maintenance_sanitize_LblInstructions = NULL;
    maintenance_sanitize_LblStep1OfX = NULL;
    maintenance_sanitize_LblStepCount = NULL;
    maintenance_sanitize_BtnHome = NULL;
    maintenance_sanitize_BtnPrev = NULL;
    maintenance_sanitize_BtnNext = NULL;
    maintenance_sanitize_BtnExit = NULL;
    maintenance_sanitize_BtnComplete = NULL;
    maintenance_sanitize_BtnContact = NULL;


    showing = LE_FALSE;
}

void screenDestroy_maintenance_sanitize(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_maintenance_sanitize(uint32_t lyrIdx)
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

