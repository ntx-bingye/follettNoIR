/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes
#include <string.h>
#include "system/time/sys_time.h"
#include "timer.h"
//#include "peripheral/flexcom/usart/plib_flexcom2_usart.h"
// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
unsigned int totalTime;
/*
#define RX_BUFFER_SIZE 10

//#define LED_Toggle()                       LED_GREEN_Toggle()

//char messageStart[] = "**** FLEXCOM USART echo interrupt demo ****\r\n\
//**** Type a buffer of 10 characters and observe it echo back ****\r\n\
//**** LED toggles on each time the buffer is echoed ****\r\n";
//char receiveBuffer[RX_BUFFER_SIZE];
//char echoBuffer[2*RX_BUFFER_SIZE];
//char messageError[] = "**** FLEXCOM USART error occurred ****\r\n";
//char sendbuffer20[20] = "Hello world20!\r\n\r\n";
//bool errorStatus = false;
//bool writeStatus = false;
//bool readStatus = false;
//
//void APP_WriteCallback22(uintptr_t context)
//{
//    writeStatus = true;
//}
//
//void APP_ReadCallback22(uintptr_t context)
//{
//    if(FLEXCOM0_USART_ErrorGet() != FLEXCOM_USART_ERROR_NONE)
//    {
//        
//        errorStatus = true;
//    }
//    else
//    {
//        readStatus = true;
//    }
//}
//static void delayMSs(uint32_t ms)
//{
//	SYS_TIME_HANDLE tmr;
//
//	if (SYS_TIME_DelayMS(ms, &tmr) != SYS_TIME_SUCCESS)
//	{
//		#if DEBUG_PRINT
//		printf("\r\nMS delay failed ...");
//		#endif
//	}
//	else if(SYS_TIME_DelayIsComplete(tmr) != true)
//	{
//		while (SYS_TIME_DelayIsComplete(tmr) == false); // wait till the delay has expired
//	}
//}
//*/
int main ( void )
{
    WDT_Clear();
    /* Initialize all modules */
    SYS_Initialize ( NULL );
   // printf("main\n");
    WDT_Clear();
    WDT_Disable();
    while ( true )
    {
        SYS_Tasks ( );
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

