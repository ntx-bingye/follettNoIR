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

void event_service_advancedsoftwarereset_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_service_advancedsoftwarereset_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_service_advancedsoftwarereset_BtnYes_OnReleased(leButtonWidget* btn)
{
    
}
void event_service_advancedsoftwarereset_BtnNo_OnReleased(leButtonWidget* btn)
{
    
}

void service_advancedsoftwarereset_OnShow(void) // called when this screen is shown
{
    
}
void service_advancedsoftwarereset_OnHide(void) // called when this screen is hidden
{
    
}
