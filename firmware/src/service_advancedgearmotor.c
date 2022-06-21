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

void event_service_advancedgearmotor_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}
void event_service_advancedgearmotor_BtnExit_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = -1;
    BACK
}

void updateGearMotor(void)
{
    uint32_t idx = 0;
    static uint32_t motor[60];
    
    for(idx = 59; idx > 0; idx--)
        motor[idx] = motor[idx-1];
    motor[0] = gearCurrentRegVal*10;
    if(IN_UI(screenID_service_advancedgearmotor) == false) return;
    for(idx = 0; idx < 60; idx++)
        service_advancedgearmotor_Line->fn->setDataInSeries(service_advancedgearmotor_Line, 0, idx, motor[idx] );
}
void service_advancedgearmotor_OnShow(void)
{
    for(uint8_t i = 0; i < 60; i++)
    {
        service_advancedgearmotor_Line->fn->addCategory(service_advancedgearmotor_Line);
        service_advancedgearmotor_Line->fn->addDataToSeries(service_advancedgearmotor_Line, 0, 0);
    }
}

void service_advancedgearmotor_OnHide(void)
{
    
}