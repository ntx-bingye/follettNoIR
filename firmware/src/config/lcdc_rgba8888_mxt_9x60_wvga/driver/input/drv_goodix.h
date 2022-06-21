#ifndef _DRV_GOODIX_H
#define _DRV_GOODIX_H

#include "system/system_module.h"
#include "driver/driver.h"
#include "driver/driver_common.h"
#include "system/int/sys_int.h"

#ifdef __cplusplus
    extern "C" {
#endif

/* ============================================================================================= */
/* TYPEDEFS                                                                                      */
/* ============================================================================================= */

typedef enum
{
	TOUCH_INIT = 0,
	TOUCH_CONFIG,
	TOUCH_TASK0,
	TOUCH_TASK1
} TOUCH_STATES;      

TOUCH_STATES touchState;
        
typedef struct
{
    /* System module initialization */
    SYS_MODULE_INIT         moduleInit;

    /* ID */
    int                     touchId;

    /* initialize function for module (normally called statically */
    SYS_MODULE_OBJ          (*drvInitialize) (const SYS_MODULE_INDEX index,
                                              const SYS_MODULE_INIT* const init);

    /* open function for I2C driver */
    DRV_HANDLE              (*drvOpen) ( const SYS_MODULE_INDEX index, const DRV_IO_INTENT intent );
    
    /* interrupt source for driver instance */
    INT_SOURCE              interruptSource;
    
    /* */
    uint16_t	            orientation;          // Orientation of the display (given in degrees of 0,90,180,270)

    /* */
    uint16_t                horizontalResolution; // Horizontal Resolution of the displayed orientation in Pixels

    /* */
    uint16_t                verticalResolution;
             
} DRV_GOODIX_INIT;

/* ============================================================================================= */
/* GLOBAL FUNCTIONS                                                                              */
/* ============================================================================================= */

SYS_MODULE_OBJ DRV_GOODIX_Initialize(const SYS_MODULE_INDEX index, const SYS_MODULE_INIT * const init);
void DRV_GOODIX_Tasks(SYS_MODULE_OBJ object);

#ifdef __cplusplus
    }
#endif

#endif
 