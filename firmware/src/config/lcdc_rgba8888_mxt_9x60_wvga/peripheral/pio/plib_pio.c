/*******************************************************************************
  SYS PORTS Static Functions for PORTS System Service

  Company:
    Microchip Technology Inc.

  File Name:
    plib_pio.c

  Summary:
    PIO function implementations for the PIO PLIB.

  Description:
    The PIO PLIB provides a simple interface to manage peripheral
    input-output controller.

*******************************************************************************/

//DOM-IGNORE-BEGIN
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
//DOM-IGNORE-END

#include "plib_pio.h"
#include "interrupts.h"



/******************************************************************************
  Function:
    PIO_Initialize ( void )

  Summary:
    Initialize the PIO library.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_Initialize ( void )
{

    /************************ PIO A Initialization ************************/
    /* PORTA Peripheral Function Selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_ABCDSR[0]= 0x600000;
    ((pio_registers_t*)PIO_PORT_A)->PIO_ABCDSR[1]= 0x0;
    /* PORTA PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_A)->PIO_PDR = 0x601e63;
    ((pio_registers_t*)PIO_PORT_A)->PIO_PER = ~0x601e63;
    /* PORTA Multi Drive or Open Drain Enable */
    ((pio_registers_t*)PIO_PORT_A)->PIO_MDER = 0x1800;
    ((pio_registers_t*)PIO_PORT_A)->PIO_MDDR = ~0x1800;
    /* PORTA Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_PUDR = ~0x803e63;
    ((pio_registers_t*)PIO_PORT_A)->PIO_PUER = 0x803e63;
    /* PORTA Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_A)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTA Output Write Enable */
    ((pio_registers_t*)PIO_PORT_A)->PIO_OWER = PIO_OWER_Msk;
    /* PORTA Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_A)->PIO_OER = 0x21bc;
    ((pio_registers_t*)PIO_PORT_A)->PIO_ODR = ~0x21bc;
    /* PORTA Initial state High */
    ((pio_registers_t*)PIO_PORT_A)->PIO_ODSR = 0x2000;
    /* PORTA Glitch/Debounce Filter Enable */
    ((pio_registers_t*)PIO_PORT_A)->PIO_IFER = 0x6801803;
    ((pio_registers_t*)PIO_PORT_A)->PIO_IFSCER = 0x4800000;
    /* PORTA Slew rate control */
    ((pio_registers_t*)PIO_PORT_A)->PIO_SLEWR = 0x6001803;
    /* PORTA drive control */
    ((pio_registers_t*)PIO_PORT_A)->PIO_DRIVER = 0x3800;

    /************************ PIO B Initialization ************************/
    /* PORTB Peripheral Function Selection */
    ((pio_registers_t*)PIO_PORT_B)->PIO_ABCDSR[0]= 0x7830;
    ((pio_registers_t*)PIO_PORT_B)->PIO_ABCDSR[1]= 0x0;
    /* PORTB PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_B)->PIO_PDR = 0x1f87830;
    ((pio_registers_t*)PIO_PORT_B)->PIO_PER = ~0x1f87830;
    /* PORTB Multi Drive or Open Drain Enable */
    ((pio_registers_t*)PIO_PORT_B)->PIO_MDER = 0x30;
    ((pio_registers_t*)PIO_PORT_B)->PIO_MDDR = ~0x30;
    /* PORTB Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_B)->PIO_PUDR = ~0x30;
    ((pio_registers_t*)PIO_PORT_B)->PIO_PUER = 0x30;
    /* PORTB Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_B)->PIO_PPDDR = ~0x100;
    ((pio_registers_t*)PIO_PORT_B)->PIO_PPDER = 0x100;
    /* PORTB Output Write Enable */
    ((pio_registers_t*)PIO_PORT_B)->PIO_OWER = PIO_OWER_Msk;
    /* PORTB Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_B)->PIO_OER = 0x2003000;
    ((pio_registers_t*)PIO_PORT_B)->PIO_ODR = ~0x2003000;
    /* PORTB Initial state High */
    ((pio_registers_t*)PIO_PORT_B)->PIO_ODSR = 0x800;
    /* PORTB Glitch/Debounce Filter Enable */
    ((pio_registers_t*)PIO_PORT_B)->PIO_IFER = 0x1f1;
    ((pio_registers_t*)PIO_PORT_B)->PIO_IFSCER = 0xc1;
    /* PORTB Slew rate control */
    ((pio_registers_t*)PIO_PORT_B)->PIO_SLEWR = 0x131;
    /* PORTB drive control */
    ((pio_registers_t*)PIO_PORT_B)->PIO_DRIVER = 0x30;

    /************************ PIO C Initialization ************************/
    /* PORTC PIO Disable and Peripheral Enable*/
    ((pio_registers_t*)PIO_PORT_C)->PIO_PDR = 0x7dffffff;
    ((pio_registers_t*)PIO_PORT_C)->PIO_PER = ~0x7dffffff;
    ((pio_registers_t*)PIO_PORT_C)->PIO_MDDR = 0xFFFFFFFF;
    /* PORTC Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_C)->PIO_PUDR = 0xFFFFFFFF;
    /* PORTC Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_C)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTC Output Write Enable */
    ((pio_registers_t*)PIO_PORT_C)->PIO_OWER = PIO_OWER_Msk;
    /* PORTC Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_C)->PIO_OER = 0x83008000;
    ((pio_registers_t*)PIO_PORT_C)->PIO_ODR = ~0x83008000;
    /* PORTC Initial state High */
    ((pio_registers_t*)PIO_PORT_C)->PIO_ODSR = 0x0;
    /* PORTC Slew rate control */
    ((pio_registers_t*)PIO_PORT_C)->PIO_SLEWR = 0x0;
    /* PORTC drive control */
    ((pio_registers_t*)PIO_PORT_C)->PIO_DRIVER = 0x0;

    /************************ PIO D Initialization ************************/
    ((pio_registers_t*)PIO_PORT_D)->PIO_PER = 0xFFFFFFFF;
    ((pio_registers_t*)PIO_PORT_D)->PIO_MDDR = 0xFFFFFFFF;
    /* PORTD Pull Up Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_D)->PIO_PUDR = ~0x40000;
    ((pio_registers_t*)PIO_PORT_D)->PIO_PUER = 0x40000;
    /* PORTD Pull Down Enable/Disable as per MHC selection */
    ((pio_registers_t*)PIO_PORT_D)->PIO_PPDDR = 0xFFFFFFFF;
    /* PORTD Output Write Enable */
    ((pio_registers_t*)PIO_PORT_D)->PIO_OWER = PIO_OWER_Msk;
    /* PORTD Output Direction Enable */
    ((pio_registers_t*)PIO_PORT_D)->PIO_OER = 0x21c000;
    ((pio_registers_t*)PIO_PORT_D)->PIO_ODR = ~0x21c000;
    /* PORTD Initial state High */
    ((pio_registers_t*)PIO_PORT_D)->PIO_ODSR = 0x0;
    /* PORTD Slew rate control */
    ((pio_registers_t*)PIO_PORT_D)->PIO_SLEWR = 0x0;
    /* PORTD drive control */
    ((pio_registers_t*)PIO_PORT_D)->PIO_DRIVER = 0x0;

}

// *****************************************************************************
// *****************************************************************************
// Section: PIO APIs which operates on multiple pins of a port
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    uint32_t PIO_PortRead ( PIO_PORT port )

  Summary:
    Read all the I/O lines of the selected port.

  Description:
    This function reads the live data values on all the I/O lines of the
    selected port.  Bit values returned in each position indicate corresponding
    pin levels.
    1 = Pin is high.
    0 = Pin is low.

    This function reads the value regardless of pin configuration, whether it is
    set as as an input, driven by the PIO Controller, or driven by a peripheral.

  Remarks:
    If the port has less than 32-bits, unimplemented pins will read as
    low (0).
    Implemented pins are Right aligned in the 32-bit return value.
*/
uint32_t PIO_PortRead(PIO_PORT port)
{
    return ((pio_registers_t*)port)->PIO_PDSR;
}

// *****************************************************************************
/* Function:
    void PIO_PortWrite (PIO_PORT port, uint32_t mask, uint32_t value);

  Summary:
    Write the value on the masked I/O lines of the selected port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortWrite(PIO_PORT port, uint32_t mask, uint32_t value)
{
    ((pio_registers_t*)port)->PIO_ODSR = (((pio_registers_t*)port)->PIO_ODSR & (~mask)) | (mask & value);
}

// *****************************************************************************
/* Function:
    uint32_t PIO_PortLatchRead ( PIO_PORT port )

  Summary:
    Read the latched value on all the I/O lines of the selected port.

  Remarks:
    See plib_pio.h for more details.
*/
uint32_t PIO_PortLatchRead(PIO_PORT port)
{
    return ((pio_registers_t*)port)->PIO_ODSR;
}

// *****************************************************************************
/* Function:
    void PIO_PortSet ( PIO_PORT port, uint32_t mask )

  Summary:
    Set the selected IO pins of a port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortSet(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_SODR = mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortClear ( PIO_PORT port, uint32_t mask )

  Summary:
    Clear the selected IO pins of a port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortClear(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_CODR = mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortToggle ( PIO_PORT port, uint32_t mask )

  Summary:
    Toggles the selected IO pins of a port.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortToggle(PIO_PORT port, uint32_t mask)
{
    /* Write into Clr and Set registers */
    ((pio_registers_t*)port)->PIO_ODSR^= mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortInputEnable ( PIO_PORT port, uint32_t mask )

  Summary:
    Enables selected IO pins of a port as input.

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortInputEnable(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_ODR = mask;
}

// *****************************************************************************
/* Function:
    void PIO_PortOutputEnable ( PIO_PORT port, uint32_t mask )

  Summary:
    Enables selected IO pins of a port as output(s).

  Remarks:
    See plib_pio.h for more details.
*/
void PIO_PortOutputEnable(PIO_PORT port, uint32_t mask)
{
    ((pio_registers_t*)port)->PIO_OER = mask;
}








/*******************************************************************************
 End of File
*/
