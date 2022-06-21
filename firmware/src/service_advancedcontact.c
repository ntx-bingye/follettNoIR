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
#include "leStringPrint.h"
#include "app_json.h"

leFixedString* leFixStrContact[6];

#define B(id) &service_advancedcontact_Btn##id
leButtonWidget** leBtnWgtP[6] = 
{
    B(Name),B(Street),B(CityState),B(Phone1),B(Phone2),B(Website)
};
#undef B

//leButtonWidget* service_advancedcontact_BtnHome;
uint8_t service_advancedcontact_BtnNo = 0;

void event_service_advancedcontact_BtnName_OnReleased(leButtonWidget* btn)
{
    service_advancedcontact_BtnNo = 0;
    PUSH_SHOW(screenID_service_keyboard)
}
void event_service_advancedcontact_BtnStreet_OnReleased(leButtonWidget* btn)
{
    service_advancedcontact_BtnNo = 1;
    PUSH_SHOW(screenID_service_keyboard)
}
void event_service_advancedcontact_BtnCityState_OnReleased(leButtonWidget* btn)
{
    service_advancedcontact_BtnNo = 2;
    PUSH_SHOW(screenID_service_keyboard)   
}
void event_service_advancedcontact_BtnPhone1_OnReleased(leButtonWidget* btn)
{
    service_advancedcontact_BtnNo = 3;
    PUSH_SHOW(screenID_service_keyboard)   
}
void event_service_advancedcontact_BtnPhone2_OnReleased(leButtonWidget* btn)
{
    service_advancedcontact_BtnNo = 4;
    PUSH_SHOW(screenID_service_keyboard)    
}

void event_service_advancedcontact_BtnWebsite_OnReleased(leButtonWidget* btn)
{
    service_advancedcontact_BtnNo = 5;
    PUSH_SHOW(screenID_service_keyboard)   
}


void event_service_advancedcontact_BtnExit_OnReleased(leButtonWidget* btn)
{
    service_advancedcontact_BtnNo = 0;
    BACK
}

void event_service_advancedcontact_BtnHome_OnReleased(leButtonWidget* btn)
{
    service_advancedcontact_BtnNo = 0;
    HOME
}


void service_advancedcontact_OnShow(void)
{
    char* contact[6] = {"name","street","citystate",
                        "phone1","phone2","Website URL"};

    char contactContent[150] = {"\0"};
    int32_t val;
    char* str;
    str = calloc(150,1);

    for(uint8_t i = 0; i< 6; i++)
    {
        newBtnLeStr(&leFixStrContact[i], *leBtnWgtP[i], 150);
        readWriteValInJson(1,settingRoot,&val,&str,149,1,contact[i]);
        if(str == NULL) contactContent[0] = '0';
        else strcpy(contactContent,str);
     
        leFixStrContact[i]->fn->setFromCStr(leFixStrContact[i],contactContent);
        (*leBtnWgtP[i])->fn->setString((*leBtnWgtP[i]),(leString*)leFixStrContact[i]);
    }
    
    free(str);
    
}
void service_advancedcontact_OnHide(void)
{
    for(uint8_t i = 0; i< 6; i++) 
    {
        delLeStr(leFixStrContact[i]);
    }
}
