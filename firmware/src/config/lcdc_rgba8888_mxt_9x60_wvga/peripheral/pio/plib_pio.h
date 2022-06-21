/*******************************************************************************
  PIO PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_pio.h

  Summary:
    PIO PLIB Header File

  Description:
    This library provides an interface to control and interact with Parallel
    Input/Output controller (PIO) module.

*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

#ifndef PLIB_PIO_H
#define PLIB_PIO_H

#include "device.h"
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data types and constants
// *****************************************************************************
// *****************************************************************************


/*** Macros for GPIO_PB0 pin ***/
#define GPIO_PB0_Set()               (PIOB_REGS->PIO_SODR = (1<<0))
#define GPIO_PB0_Clear()             (PIOB_REGS->PIO_CODR = (1<<0))
#define GPIO_PB0_Toggle()            (PIOB_REGS->PIO_ODSR ^= (1<<0))
#define GPIO_PB0_OutputEnable()      (PIOB_REGS->PIO_OER = (1<<0))
#define GPIO_PB0_InputEnable()       (PIOB_REGS->PIO_ODR = (1<<0))
#define GPIO_PB0_Get()               ((PIOB_REGS->PIO_PDSR >> 0) & 0x1)
#define GPIO_PB0_PIN                  PIO_PIN_PB0

/*** Macros for GPIO_PB7 pin ***/
#define GPIO_PB7_Set()               (PIOB_REGS->PIO_SODR = (1<<7))
#define GPIO_PB7_Clear()             (PIOB_REGS->PIO_CODR = (1<<7))
#define GPIO_PB7_Toggle()            (PIOB_REGS->PIO_ODSR ^= (1<<7))
#define GPIO_PB7_OutputEnable()      (PIOB_REGS->PIO_OER = (1<<7))
#define GPIO_PB7_InputEnable()       (PIOB_REGS->PIO_ODR = (1<<7))
#define GPIO_PB7_Get()               ((PIOB_REGS->PIO_PDSR >> 7) & 0x1)
#define GPIO_PB7_PIN                  PIO_PIN_PB7

/*** Macros for GPIO_PB6 pin ***/
#define GPIO_PB6_Set()               (PIOB_REGS->PIO_SODR = (1<<6))
#define GPIO_PB6_Clear()             (PIOB_REGS->PIO_CODR = (1<<6))
#define GPIO_PB6_Toggle()            (PIOB_REGS->PIO_ODSR ^= (1<<6))
#define GPIO_PB6_OutputEnable()      (PIOB_REGS->PIO_OER = (1<<6))
#define GPIO_PB6_InputEnable()       (PIOB_REGS->PIO_ODR = (1<<6))
#define GPIO_PB6_Get()               ((PIOB_REGS->PIO_PDSR >> 6) & 0x1)
#define GPIO_PB6_PIN                  PIO_PIN_PB6

/*** Macros for GPIO_PB1 pin ***/
#define GPIO_PB1_Set()               (PIOB_REGS->PIO_SODR = (1<<1))
#define GPIO_PB1_Clear()             (PIOB_REGS->PIO_CODR = (1<<1))
#define GPIO_PB1_Toggle()            (PIOB_REGS->PIO_ODSR ^= (1<<1))
#define GPIO_PB1_OutputEnable()      (PIOB_REGS->PIO_OER = (1<<1))
#define GPIO_PB1_InputEnable()       (PIOB_REGS->PIO_ODR = (1<<1))
#define GPIO_PB1_Get()               ((PIOB_REGS->PIO_PDSR >> 1) & 0x1)
#define GPIO_PB1_PIN                  PIO_PIN_PB1

/*** Macros for FLEXCOM5_IO1 pin ***/
#define FLEXCOM5_IO1_Get()               ((PIOA_REGS->PIO_PDSR >> 21) & 0x1)
#define FLEXCOM5_IO1_PIN                  PIO_PIN_PA21

/*** Macros for LED1_PWM pin ***/
#define LED1_PWM_Get()               ((PIOB_REGS->PIO_PDSR >> 14) & 0x1)
#define LED1_PWM_PIN                  PIO_PIN_PB14

/*** Macros for PWM1 pin ***/
#define PWM1_Get()               ((PIOB_REGS->PIO_PDSR >> 12) & 0x1)
#define PWM1_PIN                  PIO_PIN_PB12

/*** Macros for GPIO_PB10 pin ***/
#define GPIO_PB10_Set()               (PIOB_REGS->PIO_SODR = (1<<10))
#define GPIO_PB10_Clear()             (PIOB_REGS->PIO_CODR = (1<<10))
#define GPIO_PB10_Toggle()            (PIOB_REGS->PIO_ODSR ^= (1<<10))
#define GPIO_PB10_OutputEnable()      (PIOB_REGS->PIO_OER = (1<<10))
#define GPIO_PB10_InputEnable()       (PIOB_REGS->PIO_ODR = (1<<10))
#define GPIO_PB10_Get()               ((PIOB_REGS->PIO_PDSR >> 10) & 0x1)
#define GPIO_PB10_PIN                  PIO_PIN_PB10

/*** Macros for LED3_PWM pin ***/
#define LED3_PWM_Get()               ((PIOB_REGS->PIO_PDSR >> 11) & 0x1)
#define LED3_PWM_PIN                  PIO_PIN_PB11

/*** Macros for TP_INT pin ***/
#define TP_INT_Set()               (PIOA_REGS->PIO_SODR = (1<<24))
#define TP_INT_Clear()             (PIOA_REGS->PIO_CODR = (1<<24))
#define TP_INT_Toggle()            (PIOA_REGS->PIO_ODSR ^= (1<<24))
#define TP_INT_OutputEnable()      (PIOA_REGS->PIO_OER = (1<<24))
#define TP_INT_InputEnable()       (PIOA_REGS->PIO_ODR = (1<<24))
#define TP_INT_Get()               ((PIOA_REGS->PIO_PDSR >> 24) & 0x1)
#define TP_INT_PIN                  PIO_PIN_PA24

/*** Macros for FLEXCOM5_IO0 pin ***/
#define FLEXCOM5_IO0_Get()               ((PIOA_REGS->PIO_PDSR >> 22) & 0x1)
#define FLEXCOM5_IO0_PIN                  PIO_PIN_PA22

/*** Macros for PROX_SENSOR pin ***/
#define PROX_SENSOR_Get()               ((PIOB_REGS->PIO_PDSR >> 8) & 0x1)
#define PROX_SENSOR_PIN                  PIO_PIN_PB8

/*** Macros for LED2_PWM pin ***/
#define LED2_PWM_Get()               ((PIOB_REGS->PIO_PDSR >> 13) & 0x1)
#define LED2_PWM_PIN                  PIO_PIN_PB13

/*** Macros for DET_HOB2_PA25 pin ***/
#define DET_HOB2_PA25_Set()               (PIOA_REGS->PIO_SODR = (1<<25))
#define DET_HOB2_PA25_Clear()             (PIOA_REGS->PIO_CODR = (1<<25))
#define DET_HOB2_PA25_Toggle()            (PIOA_REGS->PIO_ODSR ^= (1<<25))
#define DET_HOB2_PA25_OutputEnable()      (PIOA_REGS->PIO_OER = (1<<25))
#define DET_HOB2_PA25_InputEnable()       (PIOA_REGS->PIO_ODR = (1<<25))
#define DET_HOB2_PA25_Get()               ((PIOA_REGS->PIO_PDSR >> 25) & 0x1)
#define DET_HOB2_PA25_PIN                  PIO_PIN_PA25

/*** Macros for DBGU_DRXD pin ***/
#define DBGU_DRXD_Get()               ((PIOA_REGS->PIO_PDSR >> 9) & 0x1)
#define DBGU_DRXD_PIN                  PIO_PIN_PA9

/*** Macros for DBGU_DTXD pin ***/
#define DBGU_DTXD_Get()               ((PIOA_REGS->PIO_PDSR >> 10) & 0x1)
#define DBGU_DTXD_PIN                  PIO_PIN_PA10

/*** Macros for GPIO_PA23 pin ***/
#define GPIO_PA23_Set()               (PIOA_REGS->PIO_SODR = (1<<23))
#define GPIO_PA23_Clear()             (PIOA_REGS->PIO_CODR = (1<<23))
#define GPIO_PA23_Toggle()            (PIOA_REGS->PIO_ODSR ^= (1<<23))
#define GPIO_PA23_OutputEnable()      (PIOA_REGS->PIO_OER = (1<<23))
#define GPIO_PA23_InputEnable()       (PIOA_REGS->PIO_ODR = (1<<23))
#define GPIO_PA23_Get()               ((PIOA_REGS->PIO_PDSR >> 23) & 0x1)
#define GPIO_PA23_PIN                  PIO_PIN_PA23

/*** Macros for GPIO_PA13 pin ***/
#define GPIO_PA13_Set()               (PIOA_REGS->PIO_SODR = (1<<13))
#define GPIO_PA13_Clear()             (PIOA_REGS->PIO_CODR = (1<<13))
#define GPIO_PA13_Toggle()            (PIOA_REGS->PIO_ODSR ^= (1<<13))
#define GPIO_PA13_OutputEnable()      (PIOA_REGS->PIO_OER = (1<<13))
#define GPIO_PA13_InputEnable()       (PIOA_REGS->PIO_ODR = (1<<13))
#define GPIO_PA13_Get()               ((PIOA_REGS->PIO_PDSR >> 13) & 0x1)
#define GPIO_PA13_PIN                  PIO_PIN_PA13

/*** Macros for GPIO_PA26 pin ***/
#define GPIO_PA26_Set()               (PIOA_REGS->PIO_SODR = (1<<26))
#define GPIO_PA26_Clear()             (PIOA_REGS->PIO_CODR = (1<<26))
#define GPIO_PA26_Toggle()            (PIOA_REGS->PIO_ODSR ^= (1<<26))
#define GPIO_PA26_OutputEnable()      (PIOA_REGS->PIO_OER = (1<<26))
#define GPIO_PA26_InputEnable()       (PIOA_REGS->PIO_ODR = (1<<26))
#define GPIO_PA26_Get()               ((PIOA_REGS->PIO_PDSR >> 26) & 0x1)
#define GPIO_PA26_PIN                  PIO_PIN_PA26

/*** Macros for FLEXCOM1_IO1 pin ***/
#define FLEXCOM1_IO1_Get()               ((PIOA_REGS->PIO_PDSR >> 6) & 0x1)
#define FLEXCOM1_IO1_PIN                  PIO_PIN_PA6

/*** Macros for FLEXCOM0_IO1 pin ***/
#define FLEXCOM0_IO1_Get()               ((PIOA_REGS->PIO_PDSR >> 1) & 0x1)
#define FLEXCOM0_IO1_PIN                  PIO_PIN_PA1

/*** Macros for FLEXCOM1_IO0 pin ***/
#define FLEXCOM1_IO0_Get()               ((PIOA_REGS->PIO_PDSR >> 5) & 0x1)
#define FLEXCOM1_IO0_PIN                  PIO_PIN_PA5

/*** Macros for FLEXCOM0_IO0 pin ***/
#define FLEXCOM0_IO0_Get()               ((PIOA_REGS->PIO_PDSR >> 0) & 0x1)
#define FLEXCOM0_IO0_PIN                  PIO_PIN_PA0


// *****************************************************************************
/* PIO Port

  Summary:
    Identifies the available PIO Ports.

  Description:
    This enumeration identifies the available PIO Ports.

  Remarks:
    The caller should not rely on the specific numbers assigned to any of
    these values as they may change from one processor to the next.

    Not all ports are available on all devices.  Refer to the specific
    device data sheet to determine which ports are supported.
*/

typedef enum
{
    PIO_PORT_A = PIOA_BASE_ADDRESS,
    PIO_PORT_B = PIOB_BASE_ADDRESS,
    PIO_PORT_C = PIOC_BASE_ADDRESS,
    PIO_PORT_D = PIOD_BASE_ADDRESS,
} PIO_PORT;

// *****************************************************************************
/* PIO Port Pins

  Summary:
    Identifies the available PIO port pins.

  Description:
    This enumeration identifies the available PIO port pins.

  Remarks:
    The caller should not rely on the specific numbers assigned to any of
    these values as they may change from one processor to the next.

    Not all pins are available on all devices.  Refer to the specific
    device data sheet to determine which pins are supported.
*/

typedef enum
{
    PIO_PIN_PA0 = 0,
    PIO_PIN_PA1 = 1,
    PIO_PIN_PA2 = 2,
    PIO_PIN_PA3 = 3,
    PIO_PIN_PA4 = 4,
    PIO_PIN_PA5 = 5,
    PIO_PIN_PA6 = 6,
    PIO_PIN_PA7 = 7,
    PIO_PIN_PA8 = 8,
    PIO_PIN_PA9 = 9,
    PIO_PIN_PA10 = 10,
    PIO_PIN_PA11 = 11,
    PIO_PIN_PA12 = 12,
    PIO_PIN_PA13 = 13,
    PIO_PIN_PA14 = 14,
    PIO_PIN_PA15 = 15,
    PIO_PIN_PA16 = 16,
    PIO_PIN_PA17 = 17,
    PIO_PIN_PA18 = 18,
    PIO_PIN_PA19 = 19,
    PIO_PIN_PA20 = 20,
    PIO_PIN_PA21 = 21,
    PIO_PIN_PA22 = 22,
    PIO_PIN_PA23 = 23,
    PIO_PIN_PA24 = 24,
    PIO_PIN_PA25 = 25,
    PIO_PIN_PA26 = 26,
    PIO_PIN_PA27 = 27,
    PIO_PIN_PA28 = 28,
    PIO_PIN_PA29 = 29,
    PIO_PIN_PA30 = 30,
    PIO_PIN_PA31 = 31,
    PIO_PIN_PB0 = 32,
    PIO_PIN_PB1 = 33,
    PIO_PIN_PB2 = 34,
    PIO_PIN_PB3 = 35,
    PIO_PIN_PB4 = 36,
    PIO_PIN_PB5 = 37,
    PIO_PIN_PB6 = 38,
    PIO_PIN_PB7 = 39,
    PIO_PIN_PB8 = 40,
    PIO_PIN_PB9 = 41,
    PIO_PIN_PB10 = 42,
    PIO_PIN_PB11 = 43,
    PIO_PIN_PB12 = 44,
    PIO_PIN_PB13 = 45,
    PIO_PIN_PB14 = 46,
    PIO_PIN_PB15 = 47,
    PIO_PIN_PB16 = 48,
    PIO_PIN_PB17 = 49,
    PIO_PIN_PB18 = 50,
    PIO_PIN_PB19 = 51,
    PIO_PIN_PB20 = 52,
    PIO_PIN_PB21 = 53,
    PIO_PIN_PB22 = 54,
    PIO_PIN_PB23 = 55,
    PIO_PIN_PB24 = 56,
    PIO_PIN_PB25 = 57,
    PIO_PIN_PC0 = 64,
    PIO_PIN_PC1 = 65,
    PIO_PIN_PC2 = 66,
    PIO_PIN_PC3 = 67,
    PIO_PIN_PC4 = 68,
    PIO_PIN_PC5 = 69,
    PIO_PIN_PC6 = 70,
    PIO_PIN_PC7 = 71,
    PIO_PIN_PC8 = 72,
    PIO_PIN_PC9 = 73,
    PIO_PIN_PC10 = 74,
    PIO_PIN_PC11 = 75,
    PIO_PIN_PC12 = 76,
    PIO_PIN_PC13 = 77,
    PIO_PIN_PC14 = 78,
    PIO_PIN_PC15 = 79,
    PIO_PIN_PC16 = 80,
    PIO_PIN_PC17 = 81,
    PIO_PIN_PC18 = 82,
    PIO_PIN_PC19 = 83,
    PIO_PIN_PC20 = 84,
    PIO_PIN_PC21 = 85,
    PIO_PIN_PC22 = 86,
    PIO_PIN_PC23 = 87,
    PIO_PIN_PC24 = 88,
    PIO_PIN_PC25 = 89,
    PIO_PIN_PC26 = 90,
    PIO_PIN_PC27 = 91,
    PIO_PIN_PC28 = 92,
    PIO_PIN_PC29 = 93,
    PIO_PIN_PC30 = 94,
    PIO_PIN_PC31 = 95,
    PIO_PIN_PD0 = 96,
    PIO_PIN_PD1 = 97,
    PIO_PIN_PD2 = 98,
    PIO_PIN_PD3 = 99,
    PIO_PIN_PD4 = 100,
    PIO_PIN_PD5 = 101,
    PIO_PIN_PD6 = 102,
    PIO_PIN_PD7 = 103,
    PIO_PIN_PD8 = 104,
    PIO_PIN_PD9 = 105,
    PIO_PIN_PD10 = 106,
    PIO_PIN_PD11 = 107,
    PIO_PIN_PD12 = 108,
    PIO_PIN_PD13 = 109,
    PIO_PIN_PD14 = 110,
    PIO_PIN_PD15 = 111,
    PIO_PIN_PD16 = 112,
    PIO_PIN_PD17 = 113,
    PIO_PIN_PD18 = 114,
    PIO_PIN_PD19 = 115,
    PIO_PIN_PD20 = 116,
    PIO_PIN_PD21 = 117,

    /* This element should not be used in any of the PIO APIs.
       It will be used by other modules or application to denote that none of the PIO Pin is used */
    PIO_PIN_NONE = -1

} PIO_PIN;


void PIO_Initialize(void);

// *****************************************************************************
// *****************************************************************************
// Section: PIO Functions which operates on multiple pins of a port
// *****************************************************************************
// *****************************************************************************

uint32_t PIO_PortRead(PIO_PORT port);

void PIO_PortWrite(PIO_PORT port, uint32_t mask, uint32_t value);

uint32_t PIO_PortLatchRead ( PIO_PORT port );

void PIO_PortSet(PIO_PORT port, uint32_t mask);

void PIO_PortClear(PIO_PORT port, uint32_t mask);

void PIO_PortToggle(PIO_PORT port, uint32_t mask);

void PIO_PortInputEnable(PIO_PORT port, uint32_t mask);

void PIO_PortOutputEnable(PIO_PORT port, uint32_t mask);

// *****************************************************************************
// *****************************************************************************
// Section: PIO Functions which operates on one pin at a time
// *****************************************************************************
// *****************************************************************************

static inline void PIO_PinWrite(PIO_PIN pin, bool value)
{
    PIO_PortWrite((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200 * (pin>>5))), (uint32_t)(0x1) << (pin & 0x1f), (uint32_t)(value) << (pin & 0x1f));
}

static inline bool PIO_PinRead(PIO_PIN pin)
{
    return (bool)((PIO_PortRead((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200 * (pin>>5)))) >> (pin & 0x1F)) & 0x1);
}

static inline bool PIO_PinLatchRead(PIO_PIN pin)
{
    return (bool)((PIO_PortLatchRead((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200 * (pin>>5)))) >> (pin & 0x1F)) & 0x1);
}

static inline void PIO_PinToggle(PIO_PIN pin)
{
    PIO_PortToggle((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200 * (pin>>5))), 0x1 << (pin & 0x1F));
}

static inline void PIO_PinSet(PIO_PIN pin)
{
    PIO_PortSet((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200 * (pin>>5))), 0x1 << (pin & 0x1F));
}

static inline void PIO_PinClear(PIO_PIN pin)
{
    PIO_PortClear((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200 * (pin>>5))), 0x1 << (pin & 0x1F));
}

static inline void PIO_PinInputEnable(PIO_PIN pin)
{
    PIO_PortInputEnable((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200 * (pin>>5))), 0x1 << (pin & 0x1F));
}

static inline void PIO_PinOutputEnable(PIO_PIN pin)
{
    PIO_PortOutputEnable((PIO_PORT)(PIOA_BASE_ADDRESS + (0x200 * (pin>>5))), 0x1 << (pin & 0x1F));
}


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END
#endif // PLIB_PIO_H
