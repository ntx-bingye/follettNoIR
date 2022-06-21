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

void event_selfhelp_ice_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_selfhelp_ice_BtnNoIce_OnPressed(leButtonWidget* btn)
{
    
}
void event_selfhelp_ice_BtnNoIce_OnReleased(leButtonWidget* btn)
{
    
}
void event_selfhelp_ice_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_selfhelp_ice_BtnSoftIce_OnPressed(leButtonWidget* btn)
{
    
}
void event_selfhelp_ice_BtnSoftIce_OnReleased(leButtonWidget* btn)
{
    
}
void event_selfhelp_ice_BtnOffLooking_OnPressed(leButtonWidget* btn)
{
    
}
void event_selfhelp_ice_BtnOffLooking_OnReleased(leButtonWidget* btn)
{
    
}

void selfhelp_ice_OnShow(void)
{
    
}
void selfhelp_ice_OnHide(void)
{
    
}