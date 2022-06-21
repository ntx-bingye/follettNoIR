#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "gfx/legato/generated/le_gen_init.h"
#include "system/time/sys_time.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "bsp/bsp.h"
#include "configuration.h"
#include "app.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screenStack.h"
extern leLabelWidget* contact_LblTechTitle;
static int8_t page = 0;

//extern leLabelWidget* contact_LblEmergencyTitle;
//extern leLabelWidget* contact_LblEmergencyHours2;
//extern leLabelWidget* contact_LblEmergencyHours1;
//extern leLabelWidget* contact_LblWarrantyTitle;
//extern leImageWidget* contact_ImgWarrantyQRCode;
//extern leLabelWidget* contact_LblWarrantyQRCode;
#define SHOW_WIGET(wgt,t_f) wgt ->fn->setVisible(wgt,t_f)
#define SHOW_PAGE1(t_f) { \
      SHOW_WIGET(contact_LblTechPhone,t_f); \
      SHOW_WIGET(contact_LblTechQRCode,t_f); \
      SHOW_WIGET(contact_LblTechHours,t_f); \
      SHOW_WIGET(contact_LblTechEmail,t_f); \
      SHOW_WIGET(contact_LblTechTitle,t_f); \
      SHOW_WIGET(contact_ImgTechQRCode,t_f);}
      
#define SHOW_PAGE2(t_f) { \
      SHOW_WIGET(contact_LblEmergencyTitle,t_f); \
      SHOW_WIGET(contact_LblEmergencyHours2,t_f); \
      SHOW_WIGET(contact_LblEmergencyHours1,t_f); \
      SHOW_WIGET(contact_LblWarrantyTitle,t_f); \
      SHOW_WIGET(contact_ImgWarrantyQRCode,t_f); \
      SHOW_WIGET(contact_LblWarrantyQRCode,t_f); }      

//extern leLabelWidget* contact_LblTechPhone;
//extern leLabelWidget* contact_LblTechQRCode;
//extern leLabelWidget* contact_LblTechHours;
//extern leLabelWidget* contact_LblTechEmail;
//extern leImageWidget* contact_ImgTechQRCode;

void event_contact_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_contact_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}

void event_contact_BtnNext_OnReleased(leButtonWidget* btn)
{
    if(page == 0)
    {
        page = 1;
        {SHOW_PAGE1(LE_FALSE) SHOW_PAGE2(LE_TRUE)}
        contact_BtnNext->fn->setReleasedImage(contact_BtnNext,(leImage*)&menu_wup1);
    }
    else
    {
        page = 0;
        {SHOW_PAGE1(LE_TRUE) SHOW_PAGE2(LE_FALSE)}
        contact_BtnNext->fn->setReleasedImage(contact_BtnNext,(leImage*)&menu_wdown1);
    }
}

void contact_OnShow(void) // called when this screen is shown
{
    page = 0;
    {SHOW_PAGE1(LE_TRUE) SHOW_PAGE2(LE_FALSE)}
    contact_BtnNext->fn->setReleasedImage(contact_BtnNext,&menu_wdown1);    
}
void contact_OnHide(void) // called when this screen is hidden
{
    
}
