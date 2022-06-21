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

void event_selfhelp_hotwater_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_selfhelp_hotwater_BtnNoWater_OnPressed(leButtonWidget* btn)
{
    
}
void event_selfhelp_hotwater_BtnNoWater_OnReleased(leButtonWidget* btn)
{
    
}
void event_selfhelp_hotwater_BtnNoHotWater_OnPressed(leButtonWidget* btn)
{
    
}
void event_selfhelp_hotwater_BtnNoHotWater_OnReleased(leButtonWidget* btn)
{
    
}
void event_selfhelp_hotwater_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}

void selfhelp_hotwater_OnShow(void) // called when this screen is shown
{
    
}
void selfhelp_hotwater_OnHide(void) // called when this screen is hidden
{
    
}

