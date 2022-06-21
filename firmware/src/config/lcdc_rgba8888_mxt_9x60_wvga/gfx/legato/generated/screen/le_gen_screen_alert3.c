#include "gfx/legato/generated/screen/le_gen_screen_alert3.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* alert3_Layer_0_FillPanel;
leLabelWidget* alert3_LblTitle;
leLabelWidget* alert3_LblLine1;
leLabelWidget* alert3_LblLine2;
leLabelWidget* alert3_LblLine3;
leButtonWidget* alert3_BtnContact;
leImageWidget* alert3_ImgError;
leImageWidget* alert3_ImgLogo;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_alert3(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_alert3(void)
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

    alert3_Layer_0_FillPanel = leWidget_New();
    alert3_Layer_0_FillPanel->fn->setPosition(alert3_Layer_0_FillPanel, 0, 0);
    alert3_Layer_0_FillPanel->fn->setSize(alert3_Layer_0_FillPanel, 480, 272);
    alert3_Layer_0_FillPanel->fn->setScheme(alert3_Layer_0_FillPanel, &BlackBack);
    root1->fn->addChild(root1, (leWidget*)alert3_Layer_0_FillPanel);

    alert3_ImgError = leImageWidget_New();
    alert3_ImgError->fn->setPosition(alert3_ImgError, 0, 0);
    alert3_ImgError->fn->setSize(alert3_ImgError, 480, 205);
    alert3_ImgError->fn->setScheme(alert3_ImgError, &BlackBack);
    alert3_ImgError->fn->setBackgroundType(alert3_ImgError, LE_WIDGET_BACKGROUND_NONE);
    alert3_ImgError->fn->setBorderType(alert3_ImgError, LE_WIDGET_BORDER_NONE);
    alert3_ImgError->fn->setHAlignment(alert3_ImgError, LE_HALIGN_LEFT);
    alert3_ImgError->fn->setVAlignment(alert3_ImgError, LE_VALIGN_TOP);
    alert3_ImgError->fn->setMargins(alert3_ImgError, 0, 0, 0, 0);
    alert3_ImgError->fn->setImage(alert3_ImgError, (leImage*)&Alert3);
    alert3_Layer_0_FillPanel->fn->addChild(alert3_Layer_0_FillPanel, (leWidget*)alert3_ImgError);

    alert3_ImgLogo = leImageWidget_New();
    alert3_ImgLogo->fn->setPosition(alert3_ImgLogo, 133, 224);
    alert3_ImgLogo->fn->setSize(alert3_ImgLogo, 200, 40);
    alert3_ImgLogo->fn->setScheme(alert3_ImgLogo, &BlackBack);
    alert3_ImgLogo->fn->setBackgroundType(alert3_ImgLogo, LE_WIDGET_BACKGROUND_NONE);
    alert3_ImgLogo->fn->setBorderType(alert3_ImgLogo, LE_WIDGET_BORDER_NONE);
    alert3_ImgLogo->fn->setImage(alert3_ImgLogo, (leImage*)&Splash_logo);
    alert3_Layer_0_FillPanel->fn->addChild(alert3_Layer_0_FillPanel, (leWidget*)alert3_ImgLogo);

    alert3_LblTitle = leLabelWidget_New();
    alert3_LblTitle->fn->setPosition(alert3_LblTitle, 57, 18);
    alert3_LblTitle->fn->setSize(alert3_LblTitle, 408, 25);
    alert3_LblTitle->fn->setScheme(alert3_LblTitle, &Label_FontWhite);
    alert3_LblTitle->fn->setBackgroundType(alert3_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    alert3_LblTitle->fn->setMargins(alert3_LblTitle, 0, 0, 0, 0);
    alert3_LblTitle->fn->setString(alert3_LblTitle, (leString*)&string_ALERT_Alert3_Title);
    root1->fn->addChild(root1, (leWidget*)alert3_LblTitle);

    alert3_LblLine1 = leLabelWidget_New();
    alert3_LblLine1->fn->setPosition(alert3_LblLine1, 20, 69);
    alert3_LblLine1->fn->setSize(alert3_LblLine1, 450, 25);
    alert3_LblLine1->fn->setScheme(alert3_LblLine1, &Button_LightBlue_WhiteBorder);
    alert3_LblLine1->fn->setBackgroundType(alert3_LblLine1, LE_WIDGET_BACKGROUND_NONE);
    alert3_LblLine1->fn->setVAlignment(alert3_LblLine1, LE_VALIGN_TOP);
    alert3_LblLine1->fn->setString(alert3_LblLine1, (leString*)&string_ALERT_Alert3_Line1);
    root1->fn->addChild(root1, (leWidget*)alert3_LblLine1);

    alert3_LblLine2 = leLabelWidget_New();
    alert3_LblLine2->fn->setPosition(alert3_LblLine2, 20, 94);
    alert3_LblLine2->fn->setSize(alert3_LblLine2, 450, 25);
    alert3_LblLine2->fn->setScheme(alert3_LblLine2, &Button_LightBlue_WhiteBorder);
    alert3_LblLine2->fn->setBackgroundType(alert3_LblLine2, LE_WIDGET_BACKGROUND_NONE);
    alert3_LblLine2->fn->setVAlignment(alert3_LblLine2, LE_VALIGN_TOP);
    alert3_LblLine2->fn->setString(alert3_LblLine2, (leString*)&string_ALERT_Alert3_Line2);
    root1->fn->addChild(root1, (leWidget*)alert3_LblLine2);

    alert3_LblLine3 = leLabelWidget_New();
    alert3_LblLine3->fn->setPosition(alert3_LblLine3, 20, 119);
    alert3_LblLine3->fn->setSize(alert3_LblLine3, 450, 25);
    alert3_LblLine3->fn->setScheme(alert3_LblLine3, &Button_LightBlue_WhiteBorder);
    alert3_LblLine3->fn->setBackgroundType(alert3_LblLine3, LE_WIDGET_BACKGROUND_NONE);
    alert3_LblLine3->fn->setVAlignment(alert3_LblLine3, LE_VALIGN_TOP);
    alert3_LblLine3->fn->setString(alert3_LblLine3, (leString*)&string_ALERT_Alert3_Line3);
    root1->fn->addChild(root1, (leWidget*)alert3_LblLine3);

    alert3_BtnContact = leButtonWidget_New();
    alert3_BtnContact->fn->setPosition(alert3_BtnContact, 16, 151);
    alert3_BtnContact->fn->setSize(alert3_BtnContact, 139, 44);
    alert3_BtnContact->fn->setScheme(alert3_BtnContact, &Label_FontWhite);
    alert3_BtnContact->fn->setBackgroundType(alert3_BtnContact, LE_WIDGET_BACKGROUND_NONE);
    alert3_BtnContact->fn->setBorderType(alert3_BtnContact, LE_WIDGET_BORDER_NONE);
    alert3_BtnContact->fn->setString(alert3_BtnContact, (leString*)&string_ALERT_ContactService);
    alert3_BtnContact->fn->setReleasedEventCallback(alert3_BtnContact, event_alert3_BtnContact_OnReleased);
    root1->fn->addChild(root1, (leWidget*)alert3_BtnContact);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    alert3_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_alert3(void)
{
}

void screenHide_alert3(void)
{
    alert3_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    alert3_Layer_0_FillPanel = NULL;
    alert3_LblTitle = NULL;
    alert3_LblLine1 = NULL;
    alert3_LblLine2 = NULL;
    alert3_LblLine3 = NULL;
    alert3_BtnContact = NULL;
    alert3_ImgError = NULL;
    alert3_ImgLogo = NULL;


    showing = LE_FALSE;
}

void screenDestroy_alert3(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_alert3(uint32_t lyrIdx)
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

