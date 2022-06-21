/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

#include <stdio.h>
#include "gfx/legato/generated/le_gen_init.h"
#include "system/time/sys_time.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "screenStack.h"

static int topLocation = 0;
static int Screen[100];

int pushScreen(int SaveScreen)
{
    Screen[topLocation] = SaveScreen;
    topLocation++;
    return topLocation;
}


int popScreen(void)
{
    if (topLocation==-1) return -1;
    
    topLocation = topLocation - 1;
    return Screen[topLocation];
}

int getPreScreen(void)
{
    return Screen[topLocation-1];
}

int getCurScreen(void)
{
    return(legato_getCurrentScreen());
}


