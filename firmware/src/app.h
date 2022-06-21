#ifndef _APP_H
#define _APP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <strings.h>
#include "configuration.h"
#include "leStringPrint.h"

#include "gfx/legato/generated/le_gen_init.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "ipcMessage.h"
#include "app_file.h"




// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END
    
typedef enum
{
    APP_MOUNT_WAIT =0,
    APP_INIT,
    APP_START_UI,
    APP_STANDBY
            
}APP_STATES;

// *****************************************************************************
#define DBG_P printf("%s(%d)-<%s>: \n",__FILE__,__LINE__,__FUNCTION__)

char UIVer[30]; 
bool splash_screen_active;
bool inLcdUpdate;

uint8_t errno_com;

APP_STATES appState;    

fileDevState_t usb;
fileDevState_t sst;   

bool usbDetected;

bool APPinitWithDefault(char ** memJsonFileP);
void APPinitWithJson(void);
void copyConfigJsonToSettingJson(void);
bool setSettingFileToDefault(void);
bool APPinitWithSettingFile(void);
void modBusPoll(void);

     

 
 

 

 


 











// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************
/* These routines are called by drivers when certain events occur.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
     MPLAB Harmony application initialization routine.

  Description:
    This function initializes the Harmony application.  It places the
    application in its initial state and prepares it to run so that its
    APP_Tasks function can be called.

  Precondition:
    All other system initialization routines should be called before calling
    this routine (in "SYS_Initialize").

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Initialize();
    </code>

  Remarks:
    This routine must be called from the SYS_Initialize function.
*/
void APP_Initialize ( void );

/*******************************************************************************
  Function:
    void APP_Tasks ( void )

  Summary:
    MPLAB Harmony Demo application tasks function

  Description:
    This routine is the Harmony Demo application's tasks function.  It
    defines the application's state machine and core logic.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Tasks();
    </code>

  Remarks:
    This routine must be called from SYS_Tasks() routine.
 */

void APP_Tasks( void );

#endif /* _APP_H */

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

/*******************************************************************************
 End of File
 */

