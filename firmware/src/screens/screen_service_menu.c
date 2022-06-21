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
#include "screenStack.h"


void event_ServiceMenu_ButtonLineVoltage_OnPressed(leButtonWidget* btn)
{
    
}
void event_ServiceMenu_ButtonLineVoltage_OnReleased(leButtonWidget* btn)
{
    pushScreen(legato_getCurrentScreen());
    legato_showScreen(screenID_ServiceAgentSettingsVoltageCalibration);
    
}
void event_ServiceMenu_ButtonOtherSettings_OnPressed(leButtonWidget* btn)
{
    
}
void event_ServiceMenu_ButtonOtherSettings_OnReleased(leButtonWidget* btn)
{ 
    pushScreen(legato_getCurrentScreen());
    legato_showScreen(screenID_ServiceAgentSettingsLimitMaxCurrent);
}



void event_ServiceMenu_ButtonBack_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(popScreen());
}




void event_ServiceMenu_BurronWattageSelection_OnPressed(leButtonWidget* btn)
{
    
}
void event_ServiceMenu_BurronWattageSelection_OnReleased(leButtonWidget* btn)
{
    pushScreen(legato_getCurrentScreen());
    legato_showScreen(screenID_ServiceAgentSettingsMaximumWattage);   
}


