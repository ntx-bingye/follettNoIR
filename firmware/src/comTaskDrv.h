/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.h

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

#ifndef _COM_TASK_DRV_H    /* Guard against multiple inclusion */
#define _COM_TASK_DRV_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */
#include <stdint.h>
#include "ipcMessage.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "system/time/sys_time.h"
#include "peripheral/flexcom/usart/plib_flexcom0_usart.h"
#include "peripheral/flexcom/usart/plib_flexcom5_usart.h"
#include "peripheral/pio/plib_pio.h"
#include "bsp/bsp.h"
#include "configuration.h"
#include "app.h"


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif
    
    
    // All the global varible for project.
enum comStates{COM_IDLE,COM_TX_INIT,COM_TX_ERR,COM_TX_DOING,COM_TX_DONE,
               COM_RX_DOING,COM_RX_ERR,COM_RX_DONE,COM_ERR};

//enum CMD_ID {NO_CMD=0,START_DSPN_ICE,START_DSPN_HOT_WTR,START_DSPN_AMB_WTR,
//             STOP_DSPN_ICE,STOP_DSPN_HOT_WTR,STOP_DSPN_AMB_WTR};


typedef struct Rs485 {
    uint16_t cmdID;
    uint8_t* txBuf;
    uint8_t  txLen;
    uint8_t* rxBuf;
    uint8_t  rxLen;

    enum  comStates comState;
    void (*_com_Init_)(struct Rs485 *);
    void (*_StartRs485Poll_)(struct Rs485 *);
    void (*_ComWriteCallback_)(uintptr_t gVarP);   
    void (*_ComReadCallback_)(uintptr_t gVarP);
    uint8_t (*_ProcessRecieveData_)(struct Rs485 *);
    
}Rs485Com;


Rs485Com *modBus;

void initModBus(void);

#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
