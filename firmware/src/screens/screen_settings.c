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



void event_Settings_ButtonBack_OnReleased(leButtonWidget* btn)
{
  legato_showScreen(popScreen());
}


uint8_t getKeyValue(uint32_t row, uint32_t col)
{
    return(row * 2 + col);
} 
void event_Settings_KeyPad_OnKeyClick(leKeyPadWidget* wgt, leButtonWidget* cell, uint32_t row, uint32_t col)
{
    uint8_t screenArray[6] ={
    screenID_TemperatureScale,
    screenID_ErrorLog,
    screenID_ScreenBrightness1,
    screenID_FirmwareVersions,
    screenID_PerformanceData,
    screenID_ServicePassCode
};
    pushScreen(screenID_Settings);
    legato_showScreen(screenArray[getKeyValue(row,col)]);
}
