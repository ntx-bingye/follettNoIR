#include "gfx/legato/generated/screen/le_gen_screen_selfhelp_docs.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* selfhelp_docs_Layer_0_FillPanel;
leWidget* selfhelp_docs_PanelSelhHelpDocs;
leLabelWidget* selfhelp_docs_LblTitle;
leLabelWidget* selfhelp_docs_LabelWidget3;
leLabelWidget* selfhelp_docs_LabelWidget2;
leImageWidget* selfhelp_docs_ImgQRCode;
leButtonWidget* selfhelp_docs_BtnHome;
leButtonWidget* selfhelp_docs_BtnExit;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_selfhelp_docs(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_selfhelp_docs(void)
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

    selfhelp_docs_Layer_0_FillPanel = leWidget_New();
    selfhelp_docs_Layer_0_FillPanel->fn->setPosition(selfhelp_docs_Layer_0_FillPanel, 0, 0);
    selfhelp_docs_Layer_0_FillPanel->fn->setSize(selfhelp_docs_Layer_0_FillPanel, 480, 272);
    selfhelp_docs_Layer_0_FillPanel->fn->setScheme(selfhelp_docs_Layer_0_FillPanel, &AriaImport_LayerFillScheme);
    root1->fn->addChild(root1, (leWidget*)selfhelp_docs_Layer_0_FillPanel);

    selfhelp_docs_PanelSelhHelpDocs = leWidget_New();
    selfhelp_docs_PanelSelhHelpDocs->fn->setPosition(selfhelp_docs_PanelSelhHelpDocs, 10, 45);
    selfhelp_docs_PanelSelhHelpDocs->fn->setSize(selfhelp_docs_PanelSelhHelpDocs, 405, 206);
    selfhelp_docs_PanelSelhHelpDocs->fn->setScheme(selfhelp_docs_PanelSelhHelpDocs, &Panel_Gray4);
    selfhelp_docs_PanelSelhHelpDocs->fn->setHAlignment(selfhelp_docs_PanelSelhHelpDocs, LE_HALIGN_RIGHT);
    selfhelp_docs_PanelSelhHelpDocs->fn->setVAlignment(selfhelp_docs_PanelSelhHelpDocs, LE_VALIGN_BOTTOM);
    root1->fn->addChild(root1, (leWidget*)selfhelp_docs_PanelSelhHelpDocs);

    selfhelp_docs_LblTitle = leLabelWidget_New();
    selfhelp_docs_LblTitle->fn->setPosition(selfhelp_docs_LblTitle, 10, 5);
    selfhelp_docs_LblTitle->fn->setSize(selfhelp_docs_LblTitle, 380, 30);
    selfhelp_docs_LblTitle->fn->setScheme(selfhelp_docs_LblTitle, &Label_FontBlack);
    selfhelp_docs_LblTitle->fn->setBackgroundType(selfhelp_docs_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_docs_LblTitle->fn->setString(selfhelp_docs_LblTitle, (leString*)&string_SELFHELP8_OnLineDocs);
    root1->fn->addChild(root1, (leWidget*)selfhelp_docs_LblTitle);

    selfhelp_docs_LabelWidget3 = leLabelWidget_New();
    selfhelp_docs_LabelWidget3->fn->setPosition(selfhelp_docs_LabelWidget3, 25, 84);
    selfhelp_docs_LabelWidget3->fn->setSize(selfhelp_docs_LabelWidget3, 360, 25);
    selfhelp_docs_LabelWidget3->fn->setScheme(selfhelp_docs_LabelWidget3, &BlackBack);
    selfhelp_docs_LabelWidget3->fn->setBackgroundType(selfhelp_docs_LabelWidget3, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_docs_LabelWidget3->fn->setString(selfhelp_docs_LabelWidget3, (leString*)&string_SELFHELP8_QRCode);
    root1->fn->addChild(root1, (leWidget*)selfhelp_docs_LabelWidget3);

    selfhelp_docs_LabelWidget2 = leLabelWidget_New();
    selfhelp_docs_LabelWidget2->fn->setPosition(selfhelp_docs_LabelWidget2, 25, 50);
    selfhelp_docs_LabelWidget2->fn->setSize(selfhelp_docs_LabelWidget2, 360, 25);
    selfhelp_docs_LabelWidget2->fn->setScheme(selfhelp_docs_LabelWidget2, &BlackBack);
    selfhelp_docs_LabelWidget2->fn->setBackgroundType(selfhelp_docs_LabelWidget2, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_docs_LabelWidget2->fn->setString(selfhelp_docs_LabelWidget2, (leString*)&string_SELFHELP8_Email);
    root1->fn->addChild(root1, (leWidget*)selfhelp_docs_LabelWidget2);

    selfhelp_docs_ImgQRCode = leImageWidget_New();
    selfhelp_docs_ImgQRCode->fn->setPosition(selfhelp_docs_ImgQRCode, 25, 118);
    selfhelp_docs_ImgQRCode->fn->setSize(selfhelp_docs_ImgQRCode, 120, 120);
    selfhelp_docs_ImgQRCode->fn->setScheme(selfhelp_docs_ImgQRCode, &BlackBack);
    selfhelp_docs_ImgQRCode->fn->setBackgroundType(selfhelp_docs_ImgQRCode, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_docs_ImgQRCode->fn->setBorderType(selfhelp_docs_ImgQRCode, LE_WIDGET_BORDER_NONE);
    selfhelp_docs_ImgQRCode->fn->setImage(selfhelp_docs_ImgQRCode, (leImage*)&QRCode_manual);
    root1->fn->addChild(root1, (leWidget*)selfhelp_docs_ImgQRCode);

    selfhelp_docs_BtnHome = leButtonWidget_New();
    selfhelp_docs_BtnHome->fn->setPosition(selfhelp_docs_BtnHome, 435, 225);
    selfhelp_docs_BtnHome->fn->setSize(selfhelp_docs_BtnHome, 40, 40);
    selfhelp_docs_BtnHome->fn->setScheme(selfhelp_docs_BtnHome, &BlackBack);
    selfhelp_docs_BtnHome->fn->setBackgroundType(selfhelp_docs_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_docs_BtnHome->fn->setBorderType(selfhelp_docs_BtnHome, LE_WIDGET_BORDER_NONE);
    selfhelp_docs_BtnHome->fn->setPressedImage(selfhelp_docs_BtnHome, (leImage*)&Menu_home);
    selfhelp_docs_BtnHome->fn->setReleasedImage(selfhelp_docs_BtnHome, (leImage*)&Menu_home);
    selfhelp_docs_BtnHome->fn->setReleasedEventCallback(selfhelp_docs_BtnHome, event_selfhelp_docs_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_docs_BtnHome);

    selfhelp_docs_BtnExit = leButtonWidget_New();
    selfhelp_docs_BtnExit->fn->setPosition(selfhelp_docs_BtnExit, 415, 2);
    selfhelp_docs_BtnExit->fn->setSize(selfhelp_docs_BtnExit, 60, 80);
    selfhelp_docs_BtnExit->fn->setScheme(selfhelp_docs_BtnExit, &BlackBack);
    selfhelp_docs_BtnExit->fn->setBackgroundType(selfhelp_docs_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    selfhelp_docs_BtnExit->fn->setBorderType(selfhelp_docs_BtnExit, LE_WIDGET_BORDER_NONE);
    selfhelp_docs_BtnExit->fn->setHAlignment(selfhelp_docs_BtnExit, LE_HALIGN_RIGHT);
    selfhelp_docs_BtnExit->fn->setVAlignment(selfhelp_docs_BtnExit, LE_VALIGN_TOP);
    selfhelp_docs_BtnExit->fn->setMargins(selfhelp_docs_BtnExit, 4, 10, 10, 4);
    selfhelp_docs_BtnExit->fn->setPressedImage(selfhelp_docs_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_docs_BtnExit->fn->setReleasedImage(selfhelp_docs_BtnExit, (leImage*)&Menu_exit_black);
    selfhelp_docs_BtnExit->fn->setReleasedEventCallback(selfhelp_docs_BtnExit, event_selfhelp_docs_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)selfhelp_docs_BtnExit);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    selfhelp_docs_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_selfhelp_docs(void)
{
}

void screenHide_selfhelp_docs(void)
{
    selfhelp_docs_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    selfhelp_docs_Layer_0_FillPanel = NULL;
    selfhelp_docs_PanelSelhHelpDocs = NULL;
    selfhelp_docs_LblTitle = NULL;
    selfhelp_docs_LabelWidget3 = NULL;
    selfhelp_docs_LabelWidget2 = NULL;
    selfhelp_docs_ImgQRCode = NULL;
    selfhelp_docs_BtnHome = NULL;
    selfhelp_docs_BtnExit = NULL;


    showing = LE_FALSE;
}

void screenDestroy_selfhelp_docs(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_selfhelp_docs(uint32_t lyrIdx)
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

