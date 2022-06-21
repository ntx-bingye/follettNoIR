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
#include "screen_utility.h"

/* TODO:  Include other files here if needed. */


bool InvertBoolVar(bool lockStatus)
{
    if(lockStatus ==true ) return false;
    
    return true;
}

signed int temperatureFtoC(signed int tempF)
{
    return ((signed int)(((tempF-32)*5)/9));
}

signed int temperatureCtoF(signed int tempC)
{
    return ((signed int)(tempC*1.8+32));
}

void PrintStringToLabelWidget(leLabelWidget* LableWidgetName,char* strPointer,unsigned char fontExamplestringID)
{
    static char charStrBuffer[20];
    int i;
    for (i=0; i<20;i++)
    {
        charStrBuffer[i] = *strPointer;
        strPointer++;
    }
    static leChar legatoStringBuffer[20] = {0};
    static leFixedString legatoFixedString;
    leFixedString_Constructor(&legatoFixedString, legatoStringBuffer, 20);
    legatoFixedString.fn->setFont(&legatoFixedString, leStringTable_GetStringFont(leGetState()->stringTable,fontExamplestringID, 0));
    legatoFixedString.fn->setFromCStr(&legatoFixedString, charStrBuffer);
    LableWidgetName->fn->setString(LableWidgetName, (leString*)&legatoFixedString);
}


#if(0)

#define PRINT_STRING_TO_LABEL_WIDGET(LableWidgetName,charStrBuffer[20],fontExamplestringID) \
void PrintStringToLabelWidget(leLabelWidget* LableWidgetName, char charStrBuffer[20], unsigned char fontExamplestringID) \
{ \
    static leChar legatoStringBuffer[20] = {0}; \
    static leFixedString legatoFixedString; \
    leFixedString_Constructor(&legatoFixedString, legatoStringBuffer, 20); \
    legatoFixedString.fn->setFont(&legatoFixedString, leStringTable_GetStringFont(leGetState()->stringTable,fontExamplestringID, 0)); \
    legatoFixedString.fn->setFromCStr(&legatoFixedString, charStrBuffer); \
    LableWidgetName->fn->setString(LableWidgetName, (leString*)&legatoFixedString); \
}

#endif
/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */
/** Descriptive Data Item Name

  @Summary
    Brief one-line summary of the data item.
    
  @Description
    Full description, explaining the purpose and usage of data item.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.
    
  @Remarks
    Any additional remarks
 */


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */

/** 
  @Function
    int ExampleLocalFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Description
    Full description, explaining the purpose and usage of the function.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.

  @Precondition
    List and describe any required preconditions. If there are no preconditions,
    enter "None."

  @Parameters
    @param param1 Describe the first parameter to the function.
    
    @param param2 Describe the second parameter to the function.

  @Returns
    List (if feasible) and describe the return values of the function.
    <ul>
      <li>1   Indicates an error occurred
      <li>0   Indicates an error did not occur
    </ul>

  @Remarks
    Describe any special behavior not described above.
    <p>
    Any additional remarks.

  @Example
    @code
    if(ExampleFunctionName(1, 2) == 0)
    {
        return 3;
    }
 */




/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

// *****************************************************************************

/** 
  @Function
    int ExampleInterfaceFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Remarks
    Refer to the example_file.h interface header for function usage details.
 */


/* *****************************************************************************
 End of File
 */
