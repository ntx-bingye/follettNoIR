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
#include "app.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screen_line_current.h"
#include "screenStack.h"



void ServiceAgentSettingsLimitMaxCurrent_OnShow(void)
{

    if(gCurVar0.currentGov == 0)
    {
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, &offscheme );
     }
    else
    {
       ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, &ButtonScheme);
    }
    
}

void event_ServiceAgentSettingsLimitMaxCurrent_ButtonReset_OnPressed(leButtonWidget* btn)
{
    ServiceAgentSettingsLimitMaxCurrent_ButtonReset->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonReset, &ForegroundScheme);    
}

void event_ServiceAgentSettingsLimitMaxCurrent_ButtonReset_OnReleased(leButtonWidget* btn)
{
    ServiceAgentSettingsLimitMaxCurrent_ButtonReset->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonReset, &ButtonScheme);
}

void event_ServiceAgentSettingsLimitMaxCurrent_ButtonBack_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(popScreen());
}

void event_ServiceAgentSettingsLimitMaxCurrent_ButtonOn_OnPressed(leButtonWidget* btn)
{
     
}

void event_ServiceAgentSettingsLimitMaxCurrent_ButtonOn_OnReleased(leButtonWidget* btn)
{
    if(gCurVar0.currentGov == 0)
    {
        gCurVar0.currentGov = 10;
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setString(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, (leString*)&string_ON);
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, &ButtonScheme);
    }
    else
    {
        gCurVar0.currentGov = 0;
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setString(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, (leString*)&string_OFF);        
        ServiceAgentSettingsLimitMaxCurrent_ButtonOn->fn->setScheme(ServiceAgentSettingsLimitMaxCurrent_ButtonOn, &offscheme );        
    }
     
 }

