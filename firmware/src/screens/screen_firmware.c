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

static char cVer1Buffer[20];
static leChar legatoVer1Buffer[20] = {0};
static leFixedString ver1String;

static char cVer2Buffer[20];
static leChar legatoVer2Buffer[20] = {0};
static leFixedString ver2String;

void FirmwareVersions_OnShow(void)
{
    // Get the version strings from the data structure and display
    // HOB1
    leFixedString_Constructor(&ver1String, legatoVer1Buffer, 20);
    ver1String.fn->setFont(&ver1String, leStringTable_GetStringFont(leGetState()->stringTable,stringID_LineVoltage240, 0));    
    sprintf(cVer1Buffer,"%d%%", gCurVar0.Ver1);
    ver1String.fn->setFromCStr(&ver1String, cVer1Buffer);
//    PowerModeSingle_LabelSetPoint->fn->setString(aaa, (leString*)&ver1String); 
    
    // HOB2
    leFixedString_Constructor(&ver2String, legatoVer2Buffer, 20);
    ver1String.fn->setFont(&ver2String, leStringTable_GetStringFont(leGetState()->stringTable,stringID_LineVoltage240, 0));    
    sprintf(cVer2Buffer,"%d%%", gCurVar0.Ver2);
    ver1String.fn->setFromCStr(&ver2String, cVer2Buffer);
//    PowerModeSingle_LabelSetPoint->fn->setString(bbb, (leString*)&ver2String); 
}

void event_FirmwareVersions_ButtonBack_OnPressed(leButtonWidget* btn)
{
  //printf("pressed Back\r\n");
}
void event_FirmwareVersions_ButtonBack_OnReleased(leButtonWidget* btn)
{
  //printf("released Back\r\n");
  legato_showScreen(popScreen());
}






