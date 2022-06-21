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

void event_service_advanced_KeyPadServiceAdvaced_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    int32_t screen[4][2] = {
        {screenID_service_advancedcontact,screenID_service_advancedoutput},
        {screenID_service_advancedinput,  screenID_service_advanced_Reset_to_Factory},
        {screenID_service_advancedconfig, screenID_service_advanced_sleepmode},
        {screenID_service_advancedwakeonDispense,screenID_service_advanced_screentimeout}
    };
    
    PUSH_SHOW(screen[row][col])
}

void event_service_advanced_BntHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_service_advanced_BntExit_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = -1;
    BACK
}


void service_advanced_OnShow(void) // called when this screen is shown
{
    
}
void service_advanced_OnHide(void) // called when this screen is hidden
{
    
}
