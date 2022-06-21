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

//extern int MaxWattageSetting;

void ServiceAgentSettingsMaximumWattage_OnShow()
{
    
}

void event_ServiceAgentSettingsMaximumWattage_ButtonExit_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(popScreen());
}

void event_ServiceAgentSettingsMaximumWattage_ListWheelWattage_OnSelectionChanged(leListWheelWidget* wgt, int32_t idx)
{
    // Set the internal variable
    gCurVar0.ActualVoltage=idx;
}

int convertIdxToActualMaxWattage(int idx)
{
    if(idx == 0) return 1500;
    if(idx == 1) return 1800;
    if(idx == 2) return 2000;
    if(idx == 3) return 2500;
    if(idx == 4) return 3000;
    if(idx == 5) return 3500;     
    return 1500;
}
 




