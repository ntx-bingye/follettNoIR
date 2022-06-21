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

void event_selfhelp_sparkling_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_selfhelp_sparkling_BtnNoSparklingWater_OnReleased(leButtonWidget* btn)
{
    
}
void event_selfhelp_sparkling_BtnWaterNotChilled_OnReleased(leButtonWidget* btn)
{
    
}
void event_selfhelp_sparkling_BtnWaterNotCarbonated_OnReleased(leButtonWidget* btn)
{
    
}
void event_selfhelp_sparkling_BntExit_OnReleased(leButtonWidget* btn)
{
    BACK
}


void selfhelp_sparkling_OnShow(void) // called when this screen is shown
{
    
}
void selfhelp_sparkling_OnHide(void) // called when this screen is hidden
{
    
}
