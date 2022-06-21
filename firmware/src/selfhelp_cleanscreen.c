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
#include "timer.h"

#define ENABLE_BUTTON(btn,le_t_f) selfhelp_cleanscreen_Btn##btn->fn->setEnabled(selfhelp_cleanscreen_Btn##btn,le_t_f)

void event_selfhelp_cleanscreen_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_selfhelp_cleanscreen_BtnLock_OnReleased(leButtonWidget* btn)
{
    ENABLE_BUTTON(Home,LE_FALSE);
    ENABLE_BUTTON(Exit,LE_FALSE);
    ENABLE_BUTTON(Lock,LE_FALSE);
    ENABLE_BUTTON(Unlock,LE_TRUE);
    selfhelp_cleanscreen_BtnLock->fn->setScheme(selfhelp_cleanscreen_BtnLock,&Button_Gray2_down);
    lockFlag = 1;
}
void event_selfhelp_cleanscreen_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}
void event_selfhelp_cleanscreen_BtnUnlock_OnPressed(leButtonWidget* btn)
{
    if(lockFlag == 1) lockTimer = 0;
}
void event_selfhelp_cleanscreen_BtnUnlock_OnReleased(leButtonWidget* btn)
{
    lockTimer = -1;
}

void selfhelp_cleanscreen_OnShow(void)
{
    lockFlag = 0;
}
void selfhelp_cleanscreen_OnHide(void)
{
    
}