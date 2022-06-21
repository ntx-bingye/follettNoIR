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
#include "modbus.h"
#include "timer.h"
#include "splash_utility.h"
#include "main_menu.h"
#include "splash_hotwater.h"

void event_splash_hotwater_BtnHotWater_OnPressed(leButtonWidget* btn)
{
    splashInput.evtButton = OCCUR_HOT_WATER;
}
void event_splash_hotwater_BtnHotWater_OnReleased(leButtonWidget* btn)
{
    splashInput.evtButton = DISAPPEAR_HOT_WATER;
}

void updateHotWaterStatus(void)
{
    
    if(outputRegVal.b.HTNK == 0)
    {
        splash_hotwater_LblStatus->fn->setString(splash_hotwater_LblStatus, (leString*)&string_Ready);
    }
    else
    {
        splash_hotwater_LblStatus->fn->setString(splash_hotwater_LblStatus, (leString*)&string_Heat);
    }
}
    
void splash_hotwater_OnShow(void) // called when this screen is show
{
    ImgSqnHotW.ImgSqnWgt = splash_hotwater_ImgHotWaterSqn ;
    ImgSqnHotW.status = SHOWN;
    ImgSqnIRinHot.ImgSqnWgt = splash_hotwater_ImgTouchlessSqn;
    ImgSqnIRinHot.status = SHOWN;
    splash_screen_active = true;
    splashInput.evtSensor = HOLD_NONE;
    hotWaterUISecTimer = 0;
}
void splash_hotwater_OnHide(void) // called when this screen is hidden
{
    splash_screen_active = false;
    drinkType.w = STOP_SPLASH;
    sendDspnCmd(drinkType,modBus); 
    hotWaterUISecTimer = -1;   

    splashInput.evtButton = HOLD_NONE;
    splashInput.evtSensor = HOLD_NONE;
}
