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


void TemperatureScale_OnShow()
{
    if(gCurVar0.tempUnits == 0)
    {
        //TemperatureScale_ButtonScaleFarenheit
        TemperatureScale_ButtonScaleFahrenheit->fn->setPressedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsActiveL);
        TemperatureScale_ButtonScaleFahrenheit->fn->setReleasedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsActiveL);
        TemperatureScale_ButtonScaleCentigrade->fn->setPressedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsActiveR);
        TemperatureScale_ButtonScaleCentigrade->fn->setReleasedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsInactiveR);
    }
    else
    {
        TemperatureScale_ButtonScaleFahrenheit->fn->setPressedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsActiveL);
        TemperatureScale_ButtonScaleFahrenheit->fn->setReleasedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsInactiveL);
        TemperatureScale_ButtonScaleCentigrade->fn->setPressedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsActiveR);
        TemperatureScale_ButtonScaleCentigrade->fn->setReleasedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsActiveR);
    }
}

void event_TemperatureScale_ButtonBack_OnPressed(leButtonWidget* btn)
{
}
void event_TemperatureScale_ButtonBack_OnReleased(leButtonWidget* btn)
{
    legato_showScreen(popScreen());
}
void event_TemperatureScale_ButtonScaleFahrenheit_OnPressed(leButtonWidget* btn)
{
//    if(gCurVar0.tempUnits != 0)
//    {
//        TemperatureScale_ButtonScaleFahrenheit->fn->setReleasedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsInactiveR);
//    }
}
void event_TemperatureScale_ButtonScaleFahrenheit_OnReleased(leButtonWidget* btn)
{
  // show next screen
  gCurVar0.tempUnits = 0;
  TemperatureScale_ButtonScaleFahrenheit->fn->setReleasedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsActiveL);
  TemperatureScale_ButtonScaleCentigrade->fn->setReleasedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsInactiveR);
  //TemperatureScale_ButtonScaleCentigrade->fn->invalidate(TemperatureScale_ButtonScaleCentigrade);
  //TemperatureScale_ButtonScaleCentigrade->fn->invalidate(TemperatureScale_ButtonScaleFahrenheit);
}
void event_TemperatureScale_ButtonScaleCentigrade_OnPressed(leButtonWidget* btn)
{
//    if(gCurVar0.tempUnits != 1)
//    {
//        TemperatureScale_ButtonScaleCentigrade->fn->setReleasedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsInactiveR);
//    }
}
void event_TemperatureScale_ButtonScaleCentigrade_OnReleased(leButtonWidget* btn)
{
  gCurVar0.tempUnits = 1;
  TemperatureScale_ButtonScaleFahrenheit->fn->setReleasedImage(TemperatureScale_ButtonScaleFahrenheit, (leImage*)&ICON_settingsInactiveL);
  TemperatureScale_ButtonScaleCentigrade->fn->setReleasedImage(TemperatureScale_ButtonScaleCentigrade, (leImage*)&ICON_settingsActiveR);
  //TemperatureScale_ButtonScaleCentigrade->fn->invalidate(TemperatureScale_ButtonScaleCentigrade);
  //TemperatureScale_ButtonScaleCentigrade->fn->invalidate(TemperatureScale_ButtonScaleFahrenheit);
}








