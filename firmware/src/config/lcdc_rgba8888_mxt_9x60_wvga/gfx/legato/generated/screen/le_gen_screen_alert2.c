#include "gfx/legato/generated/screen/le_gen_screen_alert2.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* alert2_Layer_0_FillPanel;
leImageWidget* alert2_Img;
leLabelWidget* alert2_Lbl;
leButtonWidget* alert2_BtnContact;
leButtonWidget* alert2_BtnHelp;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_alert2(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_alert2(void)
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

    alert2_Layer_0_FillPanel = leWidget_New();
    alert2_Layer_0_FillPanel->fn->setPosition(alert2_Layer_0_FillPanel, 0, 0);
    alert2_Layer_0_FillPanel->fn->setSize(alert2_Layer_0_FillPanel, 480, 272);
    alert2_Layer_0_FillPanel->fn->setScheme(alert2_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)alert2_Layer_0_FillPanel);

    alert2_Img = leImageWidget_New();
    alert2_Img->fn->setPosition(alert2_Img, 0, 0);
    alert2_Img->fn->setSize(alert2_Img, 480, 272);
    alert2_Img->fn->setScheme(alert2_Img, &BlackBack);
    alert2_Img->fn->setBackgroundType(alert2_Img, LE_WIDGET_BACKGROUND_NONE);
    alert2_Img->fn->setBorderType(alert2_Img, LE_WIDGET_BORDER_NONE);
    alert2_Img->fn->setImage(alert2_Img, (leImage*)&Alerts_alert2);
    root1->fn->addChild(root1, (leWidget*)alert2_Img);

    alert2_Lbl = leLabelWidget_New();
    alert2_Lbl->fn->setPosition(alert2_Lbl, 60, 0);
    alert2_Lbl->fn->setSize(alert2_Lbl, 416, 51);
    alert2_Lbl->fn->setScheme(alert2_Lbl, &Label_FontWhite);
    alert2_Lbl->fn->setBackgroundType(alert2_Lbl, LE_WIDGET_BACKGROUND_NONE);
    alert2_Lbl->fn->setMargins(alert2_Lbl, 0, 0, 0, 0);
    alert2_Lbl->fn->setString(alert2_Lbl, (leString*)&string_ALERT_DripTrayFull);
    root1->fn->addChild(root1, (leWidget*)alert2_Lbl);

    alert2_BtnContact = leButtonWidget_New();
    alert2_BtnContact->fn->setPosition(alert2_BtnContact, 15, 208);
    alert2_BtnContact->fn->setSize(alert2_BtnContact, 140, 44);
    alert2_BtnContact->fn->setScheme(alert2_BtnContact, &Button_Gray1);
    alert2_BtnContact->fn->setBackgroundType(alert2_BtnContact, LE_WIDGET_BACKGROUND_NONE);
    alert2_BtnContact->fn->setBorderType(alert2_BtnContact, LE_WIDGET_BORDER_NONE);
    alert2_BtnContact->fn->setString(alert2_BtnContact, (leString*)&string_ALERT_ContactService);
    alert2_BtnContact->fn->setReleasedEventCallback(alert2_BtnContact, event_alert2_BtnContact_OnReleased);
    root1->fn->addChild(root1, (leWidget*)alert2_BtnContact);

    alert2_BtnHelp = leButtonWidget_New();
    alert2_BtnHelp->fn->setPosition(alert2_BtnHelp, 438, 229);
    alert2_BtnHelp->fn->setSize(alert2_BtnHelp, 36, 36);
    alert2_BtnHelp->fn->setScheme(alert2_BtnHelp, &Button_Gray1);
    alert2_BtnHelp->fn->setBackgroundType(alert2_BtnHelp, LE_WIDGET_BACKGROUND_NONE);
    alert2_BtnHelp->fn->setBorderType(alert2_BtnHelp, LE_WIDGET_BORDER_NONE);
    alert2_BtnHelp->fn->setReleasedEventCallback(alert2_BtnHelp, event_alert2_BtnHelp_OnReleased);
    root1->fn->addChild(root1, (leWidget*)alert2_BtnHelp);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    alert2_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_alert2(void)
{
}

void screenHide_alert2(void)
{
    alert2_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    alert2_Layer_0_FillPanel = NULL;
    alert2_Img = NULL;
    alert2_Lbl = NULL;
    alert2_BtnContact = NULL;
    alert2_BtnHelp = NULL;


    showing = LE_FALSE;
}

void screenDestroy_alert2(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_alert2(uint32_t lyrIdx)
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

