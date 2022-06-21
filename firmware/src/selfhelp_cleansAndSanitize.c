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

static uint8_t cleanAndSanitizePage = 0;
uint8_t maxPageNo;

void event_selfhelp_cleansAndSanitize_BtnExit_OnReleased(leButtonWidget* btn)
{
    BACK
}

void event_selfhelp_cleansAndSanitize_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}

void event_selfhelp_cleansAndSanitize_BtnPre_OnReleased(leButtonWidget* btn)
{
    if(cleanAndSanitizePage > 0) cleanAndSanitizePage--;
}
void event_selfhelp_cleansAndSanitize_ButtonWidget1_OnReleased(leButtonWidget* btn)
{
    
}
void event_selfhelp_cleansAndSanitize_BtnNext_OnReleased(leButtonWidget* btn)
{
    if(cleanAndSanitizePage < maxPageNo) cleanAndSanitizePage++;
}
void event_selfhelp_cleansAndSanitize_BtnRst_OnReleased(leButtonWidget* btn)
{
    
}

void selfhelp_cleansAndSanitize_OnShow(void)
{
    maxPageNo = 8;
    cleanAndSanitizePage = 0;
}

void selfhelp_cleansAndSanitize_OnHide(void)
{
    
}

