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

void event_alert2_BtnContact_OnReleased(leButtonWidget* btn)
{
    PUSH_SHOW(screenID_contact)
}
void event_alert2_BtnHelp_OnReleased(leButtonWidget* btn)
{
    selfhelp_pageNum = 0;
    PUSH_SHOW(screenID_selfhelp)
}

void alert2_OnShow(void)
{
    
}

void alert2_OnHide(void)
{
    
}