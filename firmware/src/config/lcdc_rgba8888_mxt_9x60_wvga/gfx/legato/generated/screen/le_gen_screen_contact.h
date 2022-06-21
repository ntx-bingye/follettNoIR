#ifndef LE_GEN_SCREEN_CONTACT_H
#define LE_GEN_SCREEN_CONTACT_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* contact_Layer_0_FillPanel;
extern leWidget* contact_PanelContactService;
extern leButtonWidget* contact_BtnHome;
extern leButtonWidget* contact_BtnExit;
extern leButtonWidget* contact_BtnNext;
extern leLabelWidget* contact_LblTitle;
extern leLabelWidget* contact_LblTechTitle;
extern leLabelWidget* contact_LblTechPhone;
extern leLabelWidget* contact_LblTechQRCode;
extern leLabelWidget* contact_LblTechHours;
extern leLabelWidget* contact_LblTechEmail;
extern leImageWidget* contact_ImgTechQRCode;
extern leLabelWidget* contact_LblEmergencyTitle;
extern leLabelWidget* contact_LblEmergencyHours2;
extern leLabelWidget* contact_LblEmergencyHours1;
extern leLabelWidget* contact_LblWarrantyTitle;
extern leImageWidget* contact_ImgWarrantyQRCode;
extern leLabelWidget* contact_LblWarrantyQRCode;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_contact_BtnHome_OnReleased(leButtonWidget* btn);
void event_contact_BtnExit_OnReleased(leButtonWidget* btn);
void event_contact_BtnNext_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_contact(void); // called when Legato is initialized
leResult screenShow_contact(void); // called when screen is shown
void screenHide_contact(void); // called when screen is hidden
void screenDestroy_contact(void); // called when Legato is destroyed
void screenUpdate_contact(void); // called when Legato is updating

leWidget* screenGetRoot_contact(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void contact_OnShow(void); // called when this screen is shown
void contact_OnHide(void); // called when this screen is hidden

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_CONTACT_H
