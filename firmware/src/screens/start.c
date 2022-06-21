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
#include "screens/start.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screenStack.h"

char UIVer[30] = "2022.06.16L_NoIR";
leFixedString* leVer;
void startScreen(void);
int8_t start_UI_delay5s = -1;

void start_OnShow()
{
    newLblLeStr(&leVer,start_LabelVer,30);
    
    leVer->fn->setFromCStr(leVer,UIVer);
    start_LabelVer->fn->setString(start_LabelVer,(leString*)leVer);
    
    start_UI_delay5s = 0;
}

void start_OnHide(void)
{
    delLeStr(leVer);
}

