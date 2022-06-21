/*******************************************************************************
  Board Support Package Header File.

  Company:
    Microchip Technology Inc.

  File Name:
    bsp.h

  Summary:
    Board Support Package Header File 

  Description:
    This file contains constants, macros, type definitions and function
    declarations 
*******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END

#ifndef _BSP_H
#define _BSP_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "device.h"

// *****************************************************************************
// *****************************************************************************
// Section: BSP Macros
// *****************************************************************************
// *****************************************************************************
/*** LED Macros for TP_RESET ***/
#define TP_RESET_Toggle() (PIOB_REGS->PIO_ODSR ^= (1<<25))
#define TP_RESET_On() (PIOB_REGS->PIO_SODR = (1<<25))
#define TP_RESET_Off() (PIOB_REGS->PIO_CODR = (1<<25))
/*** LED Macros for LED_AL_PA8 ***/
#define LED_AL_PA8_Toggle() (PIOA_REGS->PIO_ODSR ^= (1<<8))
#define LED_AL_PA8_On() (PIOA_REGS->PIO_CODR = (1<<8))
#define LED_AL_PA8_Off() (PIOA_REGS->PIO_SODR = (1<<8))
/*** LED Macros for FLEXCOM0_CTS ***/
#define FLEXCOM0_CTS_Toggle() (PIOA_REGS->PIO_ODSR ^= (1<<3))
#define FLEXCOM0_CTS_On() (PIOA_REGS->PIO_SODR = (1<<3))
#define FLEXCOM0_CTS_Off() (PIOA_REGS->PIO_CODR = (1<<3))
/*** LED Macros for LED_AL_PA7 ***/
#define LED_AL_PA7_Toggle() (PIOA_REGS->PIO_ODSR ^= (1<<7))
#define LED_AL_PA7_On() (PIOA_REGS->PIO_CODR = (1<<7))
#define LED_AL_PA7_Off() (PIOA_REGS->PIO_SODR = (1<<7))
/*** LED Macros for FLEXCOM0_RE ***/
#define FLEXCOM0_RE_Toggle() (PIOA_REGS->PIO_ODSR ^= (1<<4))
#define FLEXCOM0_RE_On() (PIOA_REGS->PIO_SODR = (1<<4))
#define FLEXCOM0_RE_Off() (PIOA_REGS->PIO_CODR = (1<<4))
/*** LED Macros for LED_YELLOW ***/
#define LED_YELLOW_Toggle() (PIOC_REGS->PIO_ODSR ^= (1<<25))
#define LED_YELLOW_On() (PIOC_REGS->PIO_SODR = (1<<25))
#define LED_YELLOW_Off() (PIOC_REGS->PIO_CODR = (1<<25))
/*** LED Macros for FLEXCOM0_RTS ***/
#define FLEXCOM0_RTS_Toggle() (PIOA_REGS->PIO_ODSR ^= (1<<2))
#define FLEXCOM0_RTS_On() (PIOA_REGS->PIO_SODR = (1<<2))
#define FLEXCOM0_RTS_Off() (PIOA_REGS->PIO_CODR = (1<<2))
/*** LED Macros for LED_RED ***/
#define LED_RED_Toggle() (PIOC_REGS->PIO_ODSR ^= (1<<31))
#define LED_RED_On() (PIOC_REGS->PIO_SODR = (1<<31))
#define LED_RED_Off() (PIOC_REGS->PIO_CODR = (1<<31))
/*** VBUS Macros for VBUS_AH_PD15 ***/
#define VBUS_AH_PD15_PowerEnable() (PIOD_REGS->PIO_SODR = (1<<15))
#define VBUS_AH_PD15_PowerDisable() (PIOD_REGS->PIO_CODR = (1<<15))
/*** VBUS Macros for VBUS_AH_PD14 ***/
#define VBUS_AH_PD14_PowerEnable() (PIOD_REGS->PIO_SODR = (1<<14))
#define VBUS_AH_PD14_PowerDisable() (PIOD_REGS->PIO_CODR = (1<<14))
/*** VBUS Macros for VBUS_AH_PD21 ***/
#define VBUS_AH_PD21_PowerEnable() (PIOD_REGS->PIO_SODR = (1<<21))
#define VBUS_AH_PD21_PowerDisable() (PIOD_REGS->PIO_CODR = (1<<21))
/*** VBUS Macros for VBUS_AH_PD16 ***/
#define VBUS_AH_PD16_PowerEnable() (PIOD_REGS->PIO_SODR = (1<<16))
#define VBUS_AH_PD16_PowerDisable() (PIOD_REGS->PIO_CODR = (1<<16))




// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board

  Description:
    This function initializes the LED and Switch ports on the board.  This
    function must be called by the user before using any APIs present on this
    BSP.

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Example:
    <code>
    //Initialize the BSP
    BSP_Initialize();
    </code>

  Remarks:
    None
*/

void BSP_Initialize(void);

#endif // _BSP_H

/*******************************************************************************
 End of File
*/
