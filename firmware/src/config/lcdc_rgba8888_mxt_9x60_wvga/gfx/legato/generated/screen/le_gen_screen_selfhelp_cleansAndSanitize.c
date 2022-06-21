#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_cleansAndSanitize.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_cleansAndSanitize_PanelWidget0;
leImageWidget* selfhelp_cleansAndSanitize_ImgStep1OfX;
leLabelWidget* selfhelp_cleansAndSanitize_LblStep1OX;
leImageWidget* selfhelp_cleansAndSanitize_ImgStepCount;
leLabelWidget* selfhelp_cleansAndSanitize_LblSteptCount;
leButtonWidget* selfhelp_cleansAndSanitize_BtnHome;
leButtonWidget* selfhelp_cleansAndSanitize_BtnExit;
leButtonWidget* selfhelp_cleansAndSanitize_BtnPre;
leButtonWidget* selfhelp_cleansAndSanitize_ButtonWidget1;
leButtonWidget* selfhelp_cleansAndSanitize_BtnNext;
leLabelWidget* selfhelp_cleansAndSanitize_LblInstructions;
leImageWidget* selfhelp_cleansAndSanitize_Img;
leButtonWidget* selfhelp_cleansAndSanitize_BtnRst;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_cleansAndSanitize(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_cleansAndSanitize(void)
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

    selfhelp_cleansAndSanitize_PanelWidget0 = leWidget_New();
    selfhelp_cleansAndSanitize_PanelWidget0->fn->setPosition(selfhelp_cleansAndSanitize_PanelWidget0, 0, 0);
    selfhelp_cleansAndSanitize_PanelWidget0->fn->setSize(selfhelp_cleansAndSanitize_PanelWidget0, 480, 272);
    selfhelp_cleansAndSanitize_PanelWidget0->fn->setScheme(selfhelp_cleansAndSanitize_PanelWidget0, &whiteground);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_PanelWidget0);

    selfhelp_cleansAndSanitize_ImgStep1OfX = leImageWidget_New();
    selfhelp_cleansAndSanitize_ImgStep1OfX->fn->setPosition(selfhelp_cleansAndSanitize_ImgStep1OfX, 415, 55);
    selfhelp_cleansAndSanitize_ImgStep1OfX->fn->setSize(selfhelp_cleansAndSanitize_ImgStep1OfX, 55, 35);
    selfhelp_cleansAndSanitize_ImgStep1OfX->fn->setScheme(selfhelp_cleansAndSanitize_ImgStep1OfX, &BlackBack);
    selfhelp_cleansAndSanitize_ImgStep1OfX->fn->setBackgroundType(selfhelp_cleansAndSanitize_ImgStep1OfX, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_ImgStep1OfX->fn->setBorderType(selfhelp_cleansAndSanitize_ImgStep1OfX, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_ImgStep1OfX->fn->setImage(selfhelp_cleansAndSanitize_ImgStep1OfX, (leImage*)&Menu_step_number);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_ImgStep1OfX);

    selfhelp_cleansAndSanitize_LblStep1OX = leLabelWidget_New();
    selfhelp_cleansAndSanitize_LblStep1OX->fn->setPosition(selfhelp_cleansAndSanitize_LblStep1OX, 415, 55);
    selfhelp_cleansAndSanitize_LblStep1OX->fn->setSize(selfhelp_cleansAndSanitize_LblStep1OX, 53, 35);
    selfhelp_cleansAndSanitize_LblStep1OX->fn->setScheme(selfhelp_cleansAndSanitize_LblStep1OX, &Label_FontWhite);
    selfhelp_cleansAndSanitize_LblStep1OX->fn->setBackgroundType(selfhelp_cleansAndSanitize_LblStep1OX, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_LblStep1OX->fn->setHAlignment(selfhelp_cleansAndSanitize_LblStep1OX, LE_HALIGN_CENTER);
    selfhelp_cleansAndSanitize_LblStep1OX->fn->setString(selfhelp_cleansAndSanitize_LblStep1OX, (leString*)&string_MAINTENANCE_FILTER_Step1OfX);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_LblStep1OX);

    selfhelp_cleansAndSanitize_ImgStepCount = leImageWidget_New();
    selfhelp_cleansAndSanitize_ImgStepCount->fn->setPosition(selfhelp_cleansAndSanitize_ImgStepCount, 88, 52);
    selfhelp_cleansAndSanitize_ImgStepCount->fn->setSize(selfhelp_cleansAndSanitize_ImgStepCount, 30, 30);
    selfhelp_cleansAndSanitize_ImgStepCount->fn->setScheme(selfhelp_cleansAndSanitize_ImgStepCount, &BlackBack);
    selfhelp_cleansAndSanitize_ImgStepCount->fn->setBackgroundType(selfhelp_cleansAndSanitize_ImgStepCount, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_ImgStepCount->fn->setBorderType(selfhelp_cleansAndSanitize_ImgStepCount, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_ImgStepCount->fn->setImage(selfhelp_cleansAndSanitize_ImgStepCount, (leImage*)&Menu_step_count);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_ImgStepCount);

    selfhelp_cleansAndSanitize_LblSteptCount = leLabelWidget_New();
    selfhelp_cleansAndSanitize_LblSteptCount->fn->setPosition(selfhelp_cleansAndSanitize_LblSteptCount, 88, 52);
    selfhelp_cleansAndSanitize_LblSteptCount->fn->setSize(selfhelp_cleansAndSanitize_LblSteptCount, 30, 30);
    selfhelp_cleansAndSanitize_LblSteptCount->fn->setScheme(selfhelp_cleansAndSanitize_LblSteptCount, &Label_FontWhite);
    selfhelp_cleansAndSanitize_LblSteptCount->fn->setBackgroundType(selfhelp_cleansAndSanitize_LblSteptCount, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_LblSteptCount->fn->setHAlignment(selfhelp_cleansAndSanitize_LblSteptCount, LE_HALIGN_CENTER);
    selfhelp_cleansAndSanitize_LblSteptCount->fn->setString(selfhelp_cleansAndSanitize_LblSteptCount, (leString*)&string_MAINTENANCE_FILTER_StepCount);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_LblSteptCount);

    selfhelp_cleansAndSanitize_BtnHome = leButtonWidget_New();
    selfhelp_cleansAndSanitize_BtnHome->fn->setPosition(selfhelp_cleansAndSanitize_BtnHome, 414, 220);
    selfhelp_cleansAndSanitize_BtnHome->fn->setSize(selfhelp_cleansAndSanitize_BtnHome, 65, 50);
    selfhelp_cleansAndSanitize_BtnHome->fn->setScheme(selfhelp_cleansAndSanitize_BtnHome, &BlackBack);
    selfhelp_cleansAndSanitize_BtnHome->fn->setBackgroundType(selfhelp_cleansAndSanitize_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_BtnHome->fn->setBorderType(selfhelp_cleansAndSanitize_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_BtnHome->fn->setPressedImage(selfhelp_cleansAndSanitize_BtnHome, (leImage*)&Menu_home);
    selfhelp_cleansAndSanitize_BtnHome->fn->setReleasedImage(selfhelp_cleansAndSanitize_BtnHome, (leImage*)&Menu_home);
    selfhelp_cleansAndSanitize_BtnHome->fn->setReleasedEventCallback(selfhelp_cleansAndSanitize_BtnHome, event_selfhelp_cleansAndSanitize_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_BtnHome);

    selfhelp_cleansAndSanitize_BtnExit = leButtonWidget_New();
    selfhelp_cleansAndSanitize_BtnExit->fn->setPosition(selfhelp_cleansAndSanitize_BtnExit, 429, 3);
    selfhelp_cleansAndSanitize_BtnExit->fn->setSize(selfhelp_cleansAndSanitize_BtnExit, 50, 50);
    selfhelp_cleansAndSanitize_BtnExit->fn->setScheme(selfhelp_cleansAndSanitize_BtnExit, &BlackBack);
    selfhelp_cleansAndSanitize_BtnExit->fn->setBackgroundType(selfhelp_cleansAndSanitize_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_BtnExit->fn->setBorderType(selfhelp_cleansAndSanitize_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_BtnExit->fn->setPressedImage(selfhelp_cleansAndSanitize_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_cleansAndSanitize_BtnExit->fn->setReleasedImage(selfhelp_cleansAndSanitize_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_cleansAndSanitize_BtnExit->fn->setReleasedEventCallback(selfhelp_cleansAndSanitize_BtnExit, event_selfhelp_cleansAndSanitize_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_BtnExit);

    selfhelp_cleansAndSanitize_BtnPre = leButtonWidget_New();
    selfhelp_cleansAndSanitize_BtnPre->fn->setPosition(selfhelp_cleansAndSanitize_BtnPre, 10, 100);
    selfhelp_cleansAndSanitize_BtnPre->fn->setSize(selfhelp_cleansAndSanitize_BtnPre, 55, 55);
    selfhelp_cleansAndSanitize_BtnPre->fn->setScheme(selfhelp_cleansAndSanitize_BtnPre, &BlackBack);
    selfhelp_cleansAndSanitize_BtnPre->fn->setBackgroundType(selfhelp_cleansAndSanitize_BtnPre, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_BtnPre->fn->setBorderType(selfhelp_cleansAndSanitize_BtnPre, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_BtnPre->fn->setPressedImage(selfhelp_cleansAndSanitize_BtnPre, (leImage*)&Menu_prev);
    selfhelp_cleansAndSanitize_BtnPre->fn->setReleasedImage(selfhelp_cleansAndSanitize_BtnPre, (leImage*)&Menu_prev);
    selfhelp_cleansAndSanitize_BtnPre->fn->setReleasedEventCallback(selfhelp_cleansAndSanitize_BtnPre, event_selfhelp_cleansAndSanitize_BtnPre_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_BtnPre);

    selfhelp_cleansAndSanitize_ButtonWidget1 = leButtonWidget_New();
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setPosition(selfhelp_cleansAndSanitize_ButtonWidget1, 10, 225);
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setSize(selfhelp_cleansAndSanitize_ButtonWidget1, 139, 42);
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setScheme(selfhelp_cleansAndSanitize_ButtonWidget1, &Label_FontWhite);
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setBackgroundType(selfhelp_cleansAndSanitize_ButtonWidget1, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setBorderType(selfhelp_cleansAndSanitize_ButtonWidget1, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setString(selfhelp_cleansAndSanitize_ButtonWidget1, (leString*)&string_MAINTENANCE_FILTER_ContactService);
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setReleasedImage(selfhelp_cleansAndSanitize_ButtonWidget1, (leImage*)&Contact_service_gray2_border);
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setImagePosition(selfhelp_cleansAndSanitize_ButtonWidget1, LE_RELATIVE_POSITION_BEHIND);
    selfhelp_cleansAndSanitize_ButtonWidget1->fn->setReleasedEventCallback(selfhelp_cleansAndSanitize_ButtonWidget1, event_selfhelp_cleansAndSanitize_ButtonWidget1_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_ButtonWidget1);

    selfhelp_cleansAndSanitize_BtnNext = leButtonWidget_New();
    selfhelp_cleansAndSanitize_BtnNext->fn->setPosition(selfhelp_cleansAndSanitize_BtnNext, 415, 100);
    selfhelp_cleansAndSanitize_BtnNext->fn->setSize(selfhelp_cleansAndSanitize_BtnNext, 55, 55);
    selfhelp_cleansAndSanitize_BtnNext->fn->setScheme(selfhelp_cleansAndSanitize_BtnNext, &BlackBack);
    selfhelp_cleansAndSanitize_BtnNext->fn->setBackgroundType(selfhelp_cleansAndSanitize_BtnNext, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_BtnNext->fn->setBorderType(selfhelp_cleansAndSanitize_BtnNext, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_BtnNext->fn->setPressedImage(selfhelp_cleansAndSanitize_BtnNext, (leImage*)&Menu_next);
    selfhelp_cleansAndSanitize_BtnNext->fn->setReleasedImage(selfhelp_cleansAndSanitize_BtnNext, (leImage*)&Menu_next);
    selfhelp_cleansAndSanitize_BtnNext->fn->setReleasedEventCallback(selfhelp_cleansAndSanitize_BtnNext, event_selfhelp_cleansAndSanitize_BtnNext_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_BtnNext);

    selfhelp_cleansAndSanitize_LblInstructions = leLabelWidget_New();
    selfhelp_cleansAndSanitize_LblInstructions->fn->setPosition(selfhelp_cleansAndSanitize_LblInstructions, 45, 5);
    selfhelp_cleansAndSanitize_LblInstructions->fn->setSize(selfhelp_cleansAndSanitize_LblInstructions, 390, 30);
    selfhelp_cleansAndSanitize_LblInstructions->fn->setScheme(selfhelp_cleansAndSanitize_LblInstructions, &Label_FontBlack);
    selfhelp_cleansAndSanitize_LblInstructions->fn->setBackgroundType(selfhelp_cleansAndSanitize_LblInstructions, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_LblInstructions->fn->setHAlignment(selfhelp_cleansAndSanitize_LblInstructions, LE_HALIGN_CENTER);
    selfhelp_cleansAndSanitize_LblInstructions->fn->setString(selfhelp_cleansAndSanitize_LblInstructions, (leString*)&string_MAINTENANCE_SANITIZE_Instructions);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_LblInstructions);

    selfhelp_cleansAndSanitize_Img = leImageWidget_New();
    selfhelp_cleansAndSanitize_Img->fn->setPosition(selfhelp_cleansAndSanitize_Img, 115, 35);
    selfhelp_cleansAndSanitize_Img->fn->setSize(selfhelp_cleansAndSanitize_Img, 250, 180);
    selfhelp_cleansAndSanitize_Img->fn->setVisible(selfhelp_cleansAndSanitize_Img, LE_FALSE);
    selfhelp_cleansAndSanitize_Img->fn->setScheme(selfhelp_cleansAndSanitize_Img, &BlackBack);
    selfhelp_cleansAndSanitize_Img->fn->setBackgroundType(selfhelp_cleansAndSanitize_Img, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_Img->fn->setBorderType(selfhelp_cleansAndSanitize_Img, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_Img->fn->setImage(selfhelp_cleansAndSanitize_Img, (leImage*)&sanitize1);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_Img);

    selfhelp_cleansAndSanitize_BtnRst = leButtonWidget_New();
    selfhelp_cleansAndSanitize_BtnRst->fn->setPosition(selfhelp_cleansAndSanitize_BtnRst, 175, 112);
    selfhelp_cleansAndSanitize_BtnRst->fn->setSize(selfhelp_cleansAndSanitize_BtnRst, 139, 42);
    selfhelp_cleansAndSanitize_BtnRst->fn->setScheme(selfhelp_cleansAndSanitize_BtnRst, &Label_FontWhite);
    selfhelp_cleansAndSanitize_BtnRst->fn->setBackgroundType(selfhelp_cleansAndSanitize_BtnRst, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_cleansAndSanitize_BtnRst->fn->setBorderType(selfhelp_cleansAndSanitize_BtnRst, LE_WIDGET_BORDER_NONE);
    selfhelp_cleansAndSanitize_BtnRst->fn->setMargins(selfhelp_cleansAndSanitize_BtnRst, 0, 0, 0, 0);
    selfhelp_cleansAndSanitize_BtnRst->fn->setString(selfhelp_cleansAndSanitize_BtnRst, (leString*)&string_MAINTENANCE_FILTER_Complete);
    selfhelp_cleansAndSanitize_BtnRst->fn->setPressedImage(selfhelp_cleansAndSanitize_BtnRst, (leImage*)&Maintenance_button_on);
    selfhelp_cleansAndSanitize_BtnRst->fn->setReleasedImage(selfhelp_cleansAndSanitize_BtnRst, (leImage*)&Contact_service_gray2_border);
    selfhelp_cleansAndSanitize_BtnRst->fn->setImagePosition(selfhelp_cleansAndSanitize_BtnRst, LE_RELATIVE_POSITION_BEHIND);
    selfhelp_cleansAndSanitize_BtnRst->fn->setImageMargin(selfhelp_cleansAndSanitize_BtnRst, 0);
    selfhelp_cleansAndSanitize_BtnRst->fn->setPressedOffset(selfhelp_cleansAndSanitize_BtnRst, 0);
    selfhelp_cleansAndSanitize_BtnRst->fn->setReleasedEventCallback(selfhelp_cleansAndSanitize_BtnRst, event_selfhelp_cleansAndSanitize_BtnRst_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_cleansAndSanitize_BtnRst);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_cleansAndSanitize_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_cleansAndSanitize(void)
{
}

void screenHide_selfhelp_cleansAndSanitize(void)
{
    selfhelp_cleansAndSanitize_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_cleansAndSanitize_PanelWidget0 = NULL;
    selfhelp_cleansAndSanitize_ImgStep1OfX = NULL;
    selfhelp_cleansAndSanitize_LblStep1OX = NULL;
    selfhelp_cleansAndSanitize_ImgStepCount = NULL;
    selfhelp_cleansAndSanitize_LblSteptCount = NULL;
    selfhelp_cleansAndSanitize_BtnHome = NULL;
    selfhelp_cleansAndSanitize_BtnExit = NULL;
    selfhelp_cleansAndSanitize_BtnPre = NULL;
    selfhelp_cleansAndSanitize_ButtonWidget1 = NULL;
    selfhelp_cleansAndSanitize_BtnNext = NULL;
    selfhelp_cleansAndSanitize_LblInstructions = NULL;
    selfhelp_cleansAndSanitize_Img = NULL;
    selfhelp_cleansAndSanitize_BtnRst = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_cleansAndSanitize(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_cleansAndSanitize(uint32_t lyrIdx)
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

