#include "gfx/legato/generated/screen/le_gen_screen_contact.h"

// screen member widget declarations
leWidget* root0;
leWidget* root1;

leWidget* contact_Layer_0_FillPanel;
leWidget* contact_PanelContactService;
leButtonWidget* contact_BtnHome;
leButtonWidget* contact_BtnExit;
leButtonWidget* contact_BtnNext;
leLabelWidget* contact_LblTitle;
leLabelWidget* contact_LblTechTitle;
leLabelWidget* contact_LblTechPhone;
leLabelWidget* contact_LblTechQRCode;
leLabelWidget* contact_LblTechHours;
leLabelWidget* contact_LblTechEmail;
leImageWidget* contact_ImgTechQRCode;
leLabelWidget* contact_LblEmergencyTitle;
leLabelWidget* contact_LblEmergencyHours2;
leLabelWidget* contact_LblEmergencyHours1;
leLabelWidget* contact_LblWarrantyTitle;
leImageWidget* contact_ImgWarrantyQRCode;
leLabelWidget* contact_LblWarrantyQRCode;

static leBool initialized = LE_FALSE;
static leBool showing = LE_FALSE;

leResult screenInit_contact(void)
{
    if(initialized == LE_TRUE)
        return LE_FAILURE;

    initialized = LE_TRUE;

    return LE_SUCCESS;
}

leResult screenShow_contact(void)
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

    contact_Layer_0_FillPanel = leWidget_New();
    contact_Layer_0_FillPanel->fn->setPosition(contact_Layer_0_FillPanel, -1, 0);
    contact_Layer_0_FillPanel->fn->setSize(contact_Layer_0_FillPanel, 480, 272);
    contact_Layer_0_FillPanel->fn->setScheme(contact_Layer_0_FillPanel, &whiteground);
    root1->fn->addChild(root1, (leWidget*)contact_Layer_0_FillPanel);

    contact_LblTitle = leLabelWidget_New();
    contact_LblTitle->fn->setPosition(contact_LblTitle, 6, 1);
    contact_LblTitle->fn->setSize(contact_LblTitle, 350, 31);
    contact_LblTitle->fn->setScheme(contact_LblTitle, &Label_FontBlack);
    contact_LblTitle->fn->setBackgroundType(contact_LblTitle, LE_WIDGET_BACKGROUND_NONE);
    contact_LblTitle->fn->setString(contact_LblTitle, (leString*)&string_CONTACT_ContactService);
    contact_Layer_0_FillPanel->fn->addChild(contact_Layer_0_FillPanel, (leWidget*)contact_LblTitle);

    contact_PanelContactService = leWidget_New();
    contact_PanelContactService->fn->setPosition(contact_PanelContactService, 10, 37);
    contact_PanelContactService->fn->setSize(contact_PanelContactService, 406, 230);
    contact_PanelContactService->fn->setScheme(contact_PanelContactService, &Panel_Gray4);
    contact_PanelContactService->fn->setHAlignment(contact_PanelContactService, LE_HALIGN_RIGHT);
    contact_PanelContactService->fn->setVAlignment(contact_PanelContactService, LE_VALIGN_BOTTOM);
    root1->fn->addChild(root1, (leWidget*)contact_PanelContactService);

    contact_LblTechTitle = leLabelWidget_New();
    contact_LblTechTitle->fn->setPosition(contact_LblTechTitle, 2, 4);
    contact_LblTechTitle->fn->setSize(contact_LblTechTitle, 360, 28);
    contact_LblTechTitle->fn->setScheme(contact_LblTechTitle, &BlackBack);
    contact_LblTechTitle->fn->setBackgroundType(contact_LblTechTitle, LE_WIDGET_BACKGROUND_NONE);
    contact_LblTechTitle->fn->setVAlignment(contact_LblTechTitle, LE_VALIGN_TOP);
    contact_LblTechTitle->fn->setString(contact_LblTechTitle, (leString*)&string_CONTACT_TechSupport);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblTechTitle);

    contact_LblTechPhone = leLabelWidget_New();
    contact_LblTechPhone->fn->setPosition(contact_LblTechPhone, 13, 36);
    contact_LblTechPhone->fn->setSize(contact_LblTechPhone, 167, 25);
    contact_LblTechPhone->fn->setScheme(contact_LblTechPhone, &BlackBack);
    contact_LblTechPhone->fn->setBackgroundType(contact_LblTechPhone, LE_WIDGET_BACKGROUND_NONE);
    contact_LblTechPhone->fn->setString(contact_LblTechPhone, (leString*)&string_CONTACT_TechPhone);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblTechPhone);

    contact_LblTechQRCode = leLabelWidget_New();
    contact_LblTechQRCode->fn->setPosition(contact_LblTechQRCode, 36, 172);
    contact_LblTechQRCode->fn->setSize(contact_LblTechQRCode, 154, 25);
    contact_LblTechQRCode->fn->setScheme(contact_LblTechQRCode, &BlackBack);
    contact_LblTechQRCode->fn->setBackgroundType(contact_LblTechQRCode, LE_WIDGET_BACKGROUND_NONE);
    contact_LblTechQRCode->fn->setString(contact_LblTechQRCode, (leString*)&string_CONTACT_TechQRCode);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblTechQRCode);

    contact_LblTechHours = leLabelWidget_New();
    contact_LblTechHours->fn->setPosition(contact_LblTechHours, 10, 65);
    contact_LblTechHours->fn->setSize(contact_LblTechHours, 268, 58);
    contact_LblTechHours->fn->setScheme(contact_LblTechHours, &BlackBack);
    contact_LblTechHours->fn->setBackgroundType(contact_LblTechHours, LE_WIDGET_BACKGROUND_NONE);
    contact_LblTechHours->fn->setString(contact_LblTechHours, (leString*)&string_CONTACT_TechHours);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblTechHours);

    contact_LblTechEmail = leLabelWidget_New();
    contact_LblTechEmail->fn->setPosition(contact_LblTechEmail, 12, 116);
    contact_LblTechEmail->fn->setSize(contact_LblTechEmail, 249, 59);
    contact_LblTechEmail->fn->setScheme(contact_LblTechEmail, &BlackBack);
    contact_LblTechEmail->fn->setBackgroundType(contact_LblTechEmail, LE_WIDGET_BACKGROUND_NONE);
    contact_LblTechEmail->fn->setString(contact_LblTechEmail, (leString*)&string_CONTACT_TechEmail);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblTechEmail);

    contact_ImgTechQRCode = leImageWidget_New();
    contact_ImgTechQRCode->fn->setPosition(contact_ImgTechQRCode, 289, 133);
    contact_ImgTechQRCode->fn->setSize(contact_ImgTechQRCode, 99, 96);
    contact_ImgTechQRCode->fn->setScheme(contact_ImgTechQRCode, &BlackBack);
    contact_ImgTechQRCode->fn->setBackgroundType(contact_ImgTechQRCode, LE_WIDGET_BACKGROUND_NONE);
    contact_ImgTechQRCode->fn->setBorderType(contact_ImgTechQRCode, LE_WIDGET_BORDER_NONE);
    contact_ImgTechQRCode->fn->setImage(contact_ImgTechQRCode, (leImage*)&QRCode_email);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_ImgTechQRCode);

    contact_LblEmergencyTitle = leLabelWidget_New();
    contact_LblEmergencyTitle->fn->setPosition(contact_LblEmergencyTitle, -3, 9);
    contact_LblEmergencyTitle->fn->setSize(contact_LblEmergencyTitle, 378, 25);
    contact_LblEmergencyTitle->fn->setVisible(contact_LblEmergencyTitle, LE_FALSE);
    contact_LblEmergencyTitle->fn->setScheme(contact_LblEmergencyTitle, &BlackBack);
    contact_LblEmergencyTitle->fn->setBackgroundType(contact_LblEmergencyTitle, LE_WIDGET_BACKGROUND_NONE);
    contact_LblEmergencyTitle->fn->setVAlignment(contact_LblEmergencyTitle, LE_VALIGN_TOP);
    contact_LblEmergencyTitle->fn->setString(contact_LblEmergencyTitle, (leString*)&string_CONTACT_EmergencySupport);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblEmergencyTitle);

    contact_LblEmergencyHours2 = leLabelWidget_New();
    contact_LblEmergencyHours2->fn->setPosition(contact_LblEmergencyHours2, 10, 89);
    contact_LblEmergencyHours2->fn->setSize(contact_LblEmergencyHours2, 268, 49);
    contact_LblEmergencyHours2->fn->setVisible(contact_LblEmergencyHours2, LE_FALSE);
    contact_LblEmergencyHours2->fn->setScheme(contact_LblEmergencyHours2, &BlackBack);
    contact_LblEmergencyHours2->fn->setBackgroundType(contact_LblEmergencyHours2, LE_WIDGET_BACKGROUND_NONE);
    contact_LblEmergencyHours2->fn->setString(contact_LblEmergencyHours2, (leString*)&string_CONTACT_EmergencyHours2);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblEmergencyHours2);

    contact_LblEmergencyHours1 = leLabelWidget_New();
    contact_LblEmergencyHours1->fn->setPosition(contact_LblEmergencyHours1, 10, 48);
    contact_LblEmergencyHours1->fn->setSize(contact_LblEmergencyHours1, 260, 35);
    contact_LblEmergencyHours1->fn->setVisible(contact_LblEmergencyHours1, LE_FALSE);
    contact_LblEmergencyHours1->fn->setScheme(contact_LblEmergencyHours1, &BlackBack);
    contact_LblEmergencyHours1->fn->setBackgroundType(contact_LblEmergencyHours1, LE_WIDGET_BACKGROUND_NONE);
    contact_LblEmergencyHours1->fn->setString(contact_LblEmergencyHours1, (leString*)&string_CONTACT_EmergencyHours1);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblEmergencyHours1);

    contact_LblWarrantyTitle = leLabelWidget_New();
    contact_LblWarrantyTitle->fn->setPosition(contact_LblWarrantyTitle, 9, 147);
    contact_LblWarrantyTitle->fn->setSize(contact_LblWarrantyTitle, 276, 25);
    contact_LblWarrantyTitle->fn->setVisible(contact_LblWarrantyTitle, LE_FALSE);
    contact_LblWarrantyTitle->fn->setScheme(contact_LblWarrantyTitle, &BlackBack);
    contact_LblWarrantyTitle->fn->setBackgroundType(contact_LblWarrantyTitle, LE_WIDGET_BACKGROUND_NONE);
    contact_LblWarrantyTitle->fn->setString(contact_LblWarrantyTitle, (leString*)&string_CONTACT_WarrantySubmit);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblWarrantyTitle);

    contact_ImgWarrantyQRCode = leImageWidget_New();
    contact_ImgWarrantyQRCode->fn->setPosition(contact_ImgWarrantyQRCode, 302, 131);
    contact_ImgWarrantyQRCode->fn->setSize(contact_ImgWarrantyQRCode, 97, 99);
    contact_ImgWarrantyQRCode->fn->setVisible(contact_ImgWarrantyQRCode, LE_FALSE);
    contact_ImgWarrantyQRCode->fn->setScheme(contact_ImgWarrantyQRCode, &BlackBack);
    contact_ImgWarrantyQRCode->fn->setBackgroundType(contact_ImgWarrantyQRCode, LE_WIDGET_BACKGROUND_NONE);
    contact_ImgWarrantyQRCode->fn->setBorderType(contact_ImgWarrantyQRCode, LE_WIDGET_BORDER_NONE);
    contact_ImgWarrantyQRCode->fn->setImage(contact_ImgWarrantyQRCode, (leImage*)&QRCode_warranty);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_ImgWarrantyQRCode);

    contact_LblWarrantyQRCode = leLabelWidget_New();
    contact_LblWarrantyQRCode->fn->setPosition(contact_LblWarrantyQRCode, 39, 168);
    contact_LblWarrantyQRCode->fn->setSize(contact_LblWarrantyQRCode, 185, 55);
    contact_LblWarrantyQRCode->fn->setVisible(contact_LblWarrantyQRCode, LE_FALSE);
    contact_LblWarrantyQRCode->fn->setScheme(contact_LblWarrantyQRCode, &BlackBack);
    contact_LblWarrantyQRCode->fn->setBackgroundType(contact_LblWarrantyQRCode, LE_WIDGET_BACKGROUND_NONE);
    contact_LblWarrantyQRCode->fn->setString(contact_LblWarrantyQRCode, (leString*)&string_CONTACT_WarrantyQRCode);
    contact_PanelContactService->fn->addChild(contact_PanelContactService, (leWidget*)contact_LblWarrantyQRCode);

    contact_BtnHome = leButtonWidget_New();
    contact_BtnHome->fn->setPosition(contact_BtnHome, 435, 225);
    contact_BtnHome->fn->setSize(contact_BtnHome, 40, 40);
    contact_BtnHome->fn->setScheme(contact_BtnHome, &BlackBack);
    contact_BtnHome->fn->setBackgroundType(contact_BtnHome, LE_WIDGET_BACKGROUND_NONE);
    contact_BtnHome->fn->setBorderType(contact_BtnHome, LE_WIDGET_BORDER_NONE);
    contact_BtnHome->fn->setPressedImage(contact_BtnHome, (leImage*)&Menu_home);
    contact_BtnHome->fn->setReleasedImage(contact_BtnHome, (leImage*)&Menu_home);
    contact_BtnHome->fn->setReleasedEventCallback(contact_BtnHome, event_contact_BtnHome_OnReleased);
    root1->fn->addChild(root1, (leWidget*)contact_BtnHome);

    contact_BtnExit = leButtonWidget_New();
    contact_BtnExit->fn->setPosition(contact_BtnExit, 415, 2);
    contact_BtnExit->fn->setSize(contact_BtnExit, 60, 45);
    contact_BtnExit->fn->setScheme(contact_BtnExit, &BlackBack);
    contact_BtnExit->fn->setBackgroundType(contact_BtnExit, LE_WIDGET_BACKGROUND_NONE);
    contact_BtnExit->fn->setBorderType(contact_BtnExit, LE_WIDGET_BORDER_NONE);
    contact_BtnExit->fn->setHAlignment(contact_BtnExit, LE_HALIGN_RIGHT);
    contact_BtnExit->fn->setVAlignment(contact_BtnExit, LE_VALIGN_TOP);
    contact_BtnExit->fn->setMargins(contact_BtnExit, 4, 10, 10, 4);
    contact_BtnExit->fn->setPressedImage(contact_BtnExit, (leImage*)&Menu_exit_black);
    contact_BtnExit->fn->setReleasedImage(contact_BtnExit, (leImage*)&Menu_exit_black);
    contact_BtnExit->fn->setReleasedEventCallback(contact_BtnExit, event_contact_BtnExit_OnReleased);
    root1->fn->addChild(root1, (leWidget*)contact_BtnExit);

    contact_BtnNext = leButtonWidget_New();
    contact_BtnNext->fn->setPosition(contact_BtnNext, 425, 116);
    contact_BtnNext->fn->setSize(contact_BtnNext, 50, 50);
    contact_BtnNext->fn->setScheme(contact_BtnNext, &Panel_Gray2A);
    contact_BtnNext->fn->setBackgroundType(contact_BtnNext, LE_WIDGET_BACKGROUND_NONE);
    contact_BtnNext->fn->setBorderType(contact_BtnNext, LE_WIDGET_BORDER_NONE);
    contact_BtnNext->fn->setPressedImage(contact_BtnNext, (leImage*)&menu_wdown1);
    contact_BtnNext->fn->setReleasedImage(contact_BtnNext, (leImage*)&menu_wdown1);
    contact_BtnNext->fn->setImagePosition(contact_BtnNext, LE_RELATIVE_POSITION_RIGHTOF);
    contact_BtnNext->fn->setReleasedEventCallback(contact_BtnNext, event_contact_BtnNext_OnReleased);
    root1->fn->addChild(root1, (leWidget*)contact_BtnNext);

    leAddRootWidget(root1, 1);
    leSetLayerColorMode(1, LE_COLOR_MODE_RGBA_8888);

    contact_OnShow(); // raise event

    showing = LE_TRUE;

    return LE_SUCCESS;
}

void screenUpdate_contact(void)
{
}

void screenHide_contact(void)
{
    contact_OnHide(); // raise event


    leRemoveRootWidget(root0, 0);
    leWidget_Delete(root0);
    root0 = NULL;

    leRemoveRootWidget(root1, 1);
    leWidget_Delete(root1);
    root1 = NULL;

    contact_Layer_0_FillPanel = NULL;
    contact_PanelContactService = NULL;
    contact_BtnHome = NULL;
    contact_BtnExit = NULL;
    contact_BtnNext = NULL;
    contact_LblTitle = NULL;
    contact_LblTechTitle = NULL;
    contact_LblTechPhone = NULL;
    contact_LblTechQRCode = NULL;
    contact_LblTechHours = NULL;
    contact_LblTechEmail = NULL;
    contact_ImgTechQRCode = NULL;
    contact_LblEmergencyTitle = NULL;
    contact_LblEmergencyHours2 = NULL;
    contact_LblEmergencyHours1 = NULL;
    contact_LblWarrantyTitle = NULL;
    contact_ImgWarrantyQRCode = NULL;
    contact_LblWarrantyQRCode = NULL;


    showing = LE_FALSE;
}

void screenDestroy_contact(void)
{
    if(initialized == LE_FALSE)
        return;

    initialized = LE_FALSE;
}

leWidget* screenGetRoot_contact(uint32_t lyrIdx)
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

