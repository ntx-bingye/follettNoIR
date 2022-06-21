

#ifndef _EGG_TIMER_H    /* Guard against multiple inclusion */
#define _EGG_TIMER_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

#include "gfx/legato/legato.h"
#include "gfx\legato\string\legato_fixedstring.h"

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

    
uint8_t count256;
uint32_t count32;
int16_t cmdTimeout_timer;
int8_t  hotWaterUISecTimer;
int8_t lockTimer;
int8_t lockFlag;
int8_t startUI_timer;  
int8_t start_UI_delay5s;
int8_t goodix_cfg_timeout;
#define GOODIX_CFG_TIMEOUT 20
bool TP_pressed;

int SecPeriodic_Initialize(void);
int Ms100Periodic_Initialize(void);
int Ms1Periodic_Initialize(void);
int Us1Periodic_initialize(void);
void SecPeriodicCallback(uintptr_t context);
void Ms100PeriodicCallback(uintptr_t context);
void updateUI_task(void);
void initTimerLeStr(void);
void lockTimerFnInApp(void);
    

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
