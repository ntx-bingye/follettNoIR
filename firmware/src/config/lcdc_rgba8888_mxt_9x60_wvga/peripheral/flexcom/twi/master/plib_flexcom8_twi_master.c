/*******************************************************************************
  FLEXCOM TWI Peripheral Library Source File

  Company
    Microchip Technology Inc.

  File Name
    plib_flexcom8_twi_master.c

  Summary
    FLEXCOM TWI Master peripheral library interface.

  Description
    This file defines the interface to the FLEXCOM TWI peripheral library. This
    library provides access to and control of the associated peripheral
    instance.

  Remarks:

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

// *****************************************************************************
// *****************************************************************************
// Included Files
// *****************************************************************************
// *****************************************************************************

#include "device.h"
#include "plib_flexcom8_twi_master.h"
#include "interrupts.h"
#include "driver/input/drv_goodix.h"

// *****************************************************************************
// *****************************************************************************
// Local Data Type Definitions
// *****************************************************************************
// *****************************************************************************

#define FLEXCOM_TWI_MASTER_MAX_BAUDRATE        (400000U)
#define FLEXCOM_TWI_LOW_LEVEL_TIME_LIMIT       (384000U)
#define FLEXCOM_TWI_CLK_DIVIDER                     (2U)
#define FLEXCOM_TWI_CLK_CALC_ARGU                   (3U)
#define FLEXCOM_TWI_CLK_DIV_MAX                  (0xFFU)
#define FLEXCOM_TWI_CLK_DIV_MIN                     (7U)

// *****************************************************************************
// *****************************************************************************
// Global Data
// *****************************************************************************
// *****************************************************************************

static FLEXCOM_TWI_OBJ flexcom8TwiObj;
static flexcom_registers_t *FLEXCOM8_TWI_Module = FLEXCOM8_REGS;

// *****************************************************************************
// *****************************************************************************
// FLEXCOM8 TWI PLib Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void FLEXCOM8_TWI_Initialize(void)

   Summary:
    Initializes given instance of the FLEXCOM TWI peripheral.

   Precondition:
    None.

   Parameters:
    None.

   Returns:
    None
*/

void FLEXCOM8_TWI_Initialize(void)
{
    /* Set FLEXCOM TWI operating mode */
    FLEXCOM8_REGS->FLEX_MR = FLEX_MR_OPMODE_TWI;

    // Reset the i2c Module
    FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_SWRST_Msk;

    // Disable the I2C Master/Slave Mode
    FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_MSDIS_Msk |
                                          FLEX_TWI_CR_SVDIS_Msk;

    // Set Baud rate
    FLEXCOM8_TWI_Module->FLEX_TWI_CWGR = ( FLEX_TWI_CWGR_HOLD_Msk & FLEXCOM8_TWI_Module->FLEX_TWI_CWGR) |
                                              FLEX_TWI_CWGR_BRSRCCLK_PERIPH_CLK |
                                            ( FLEX_TWI_CWGR_CLDIV(247) |
                                              FLEX_TWI_CWGR_CHDIV(247) |
                                              FLEX_TWI_CWGR_CKDIV(0) );

    // Starts the transfer by clearing the transmit hold register
    FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_THRCLR_Msk;

    // Enables interrupt on nack and arbitration lost
    FLEXCOM8_TWI_Module->FLEX_TWI_IER = FLEX_TWI_IER_NACK_Msk |
                                           FLEX_TWI_IER_ARBLST_Msk;

    // Enable Master Mode
    FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_MSEN_Msk;

    // Initialize the flexcom twi PLib Object
    flexcom8TwiObj.error   = FLEXCOM_TWI_ERROR_NONE;
    flexcom8TwiObj.state   = FLEXCOM_TWI_STATE_IDLE;
}


/******************************************************************************
Local Functions
******************************************************************************/

static void FLEXCOM8_TWI_InitiateRead(void)
{

    flexcom8TwiObj.state = FLEXCOM_TWI_STATE_TRANSFER_READ;

    FLEXCOM8_TWI_Module->FLEX_TWI_MMR |= FLEX_TWI_MMR_MREAD_Msk;

    /* When a single data byte read is performed,
    the START and STOP bits must be set at the same time */
    if(flexcom8TwiObj.readSize == 1)
    {
        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_START_Msk | FLEX_TWI_CR_STOP_Msk;
    }
    else
    {
        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_START_Msk;
    }

    __enable_irq();
    FLEXCOM8_TWI_Module->FLEX_TWI_IER = FLEX_TWI_IER_RXRDY_Msk | FLEX_TWI_IER_TXCOMP_Msk;
}




static void FLEXCOM8_TWI_InitiateTransfer(uint16_t address, bool type)
{
    uint32_t count;
    // 10-bit Slave Address
    if( address > 0x007F )
    {
        FLEXCOM8_TWI_Module->FLEX_TWI_MMR = FLEX_TWI_MMR_DADR((address & 0x00007F00) >> 8) |
                                               FLEX_TWI_MMR_IADRSZ(1);

        // Set internal address
        FLEXCOM8_TWI_Module->FLEX_TWI_IADR = FLEX_TWI_IADR_IADR(address & 0x000000FF );
    }
    // 7-bit Slave Address
    else
    {
        FLEXCOM8_TWI_Module->FLEX_TWI_MMR = FLEX_TWI_MMR_DADR(address) | FLEX_TWI_MMR_IADRSZ(0);
    }

    flexcom8TwiObj.writeCount= 0;
    flexcom8TwiObj.readCount= 0;

    // Write transfer
    if(type == false)
    {
        // Single Byte Write
        if( flexcom8TwiObj.writeSize == 1 )
        {
            // Single Byte write only
            if(  flexcom8TwiObj.readSize ==0  )
            {
                // Load last byte in transmit register, issue stop condition
                // Generate TXCOMP interrupt after STOP condition has been sent
                flexcom8TwiObj.state = FLEXCOM_TWI_STATE_WAIT_FOR_TXCOMP;

                FLEXCOM8_TWI_Module->FLEX_TWI_THR = FLEX_TWI_THR_TXDATA(flexcom8TwiObj.writeBuffer[flexcom8TwiObj.writeCount++]);
                FLEXCOM8_TWI_Module->FLEX_TWI_CR =  FLEX_TWI_CR_STOP_Msk;
                FLEXCOM8_TWI_Module->FLEX_TWI_IER = FLEX_TWI_IER_TXCOMP_Msk;
            }
            // Single Byte write and than read transfer
            else
            {
                // START bit must be set before the byte is shifted out. Hence disabled interrupt
                __disable_irq();
                FLEXCOM8_TWI_Module->FLEX_TWI_THR = FLEX_TWI_THR_TXDATA(flexcom8TwiObj.writeBuffer[flexcom8TwiObj.writeCount++]);
                // Wait for control byte to be transferred before initiating repeat start for read
                count = 10000 * (600000000/1000000)/6; //10ms
                while(((FLEXCOM8_TWI_Module->FLEX_TWI_SR & (FLEX_TWI_SR_TXCOMP_Msk | FLEX_TWI_SR_TXRDY_Msk)) != 0)
                        && (count > 0))
                    count--;
                
                count = 10000 * (600000000/1000000)/6; //10ms
                while(((FLEXCOM8_TWI_Module->FLEX_TWI_SR & (FLEX_TWI_SR_TXRDY_Msk)) ==0)
                        && (count > 0))
                    count--; 
                
                if(count > 0) type = true;
                else          
                {
                    flexcom8TwiObj.error = FLEXCOM_TWI_ERROR_NACK;
                    FLEXCOM8_TWI_Initialize();//NO_CUP_THRESHOLD = 0;}
                    type = false; 
                    touchState = TOUCH_INIT;
                    __enable_irq();
                }
            }
        }
        // Multi-Byte Write
        else
        {
            flexcom8TwiObj.state = FLEXCOM_TWI_STATE_TRANSFER_WRITE;

            FLEXCOM8_TWI_Module->FLEX_TWI_THR = FLEX_TWI_THR_TXDATA(flexcom8TwiObj.writeBuffer[flexcom8TwiObj.writeCount++]);
            FLEXCOM8_TWI_Module->FLEX_TWI_IER = FLEX_TWI_IDR_TXRDY_Msk | FLEX_TWI_IER_TXCOMP_Msk;
        }
    }
    // Read transfer
    if(type)
    {
        FLEXCOM8_TWI_InitiateRead();
    }
}

// *****************************************************************************
/* Function:
    void FLEXCOM8_TWI_CallbackRegister(FLEXCOM_TWI_CALLBACK callback, uintptr_t contextHandle)

   Summary:
    Sets the pointer to the function (and it's context) to be called when the
    given FLEXCOM TWI's transfer events occur.

   Precondition:
    FLEXCOM8_TWI_Initialize must have been called for the associated FLEXCOM TWI instance.

   Parameters:
    callback - A pointer to a function with a calling signature defined
    by the FLEXCOM_TWI_CALLBACK data type.

    context - A value (usually a pointer) passed (unused) into the function
    identified by the callback parameter.

   Returns:
    None.
*/

void FLEXCOM8_TWI_CallbackRegister(FLEXCOM_TWI_CALLBACK callback, uintptr_t contextHandle)
{
    if (callback == NULL)
    {
        return;
    }

    flexcom8TwiObj.callback = callback;
    flexcom8TwiObj.context = contextHandle;
}

// *****************************************************************************
/* Function:
    bool FLEXCOM8_TWI_IsBusy(void)

   Summary:
    Returns the Peripheral busy status.

   Precondition:
    FLEXCOM8_TWI_Initialize must have been called for the associated FLEXCOM TWI instance.

   Parameters:
    None.

   Returns:
    true - Busy.
    false - Not busy.
*/

bool FLEXCOM8_TWI_IsBusy(void)
{
    if( flexcom8TwiObj.state == FLEXCOM_TWI_STATE_IDLE )
    {
        return false;
    }
    else
    {
        return true;
    }
}



// *****************************************************************************
/* Function:
    bool FLEXCOM8_TWI_Read(uint16_t address, uint8_t *pdata, size_t length)

   Summary:
    Reads data from the slave.

   Precondition:
    FLEXCOM8_TWI_Initialize must have been called for the associated FLEXCOM TWI instance.

   Parameters:
    address - 7-bit / 10-bit slave address.
    pdata   - pointer to destination data buffer
    length  - length of data buffer in number of bytes.

   Returns:
    Request status.
    True - Request was successful.
    False - Request has failed.
*/

bool FLEXCOM8_TWI_Read(uint16_t address, uint8_t *pdata, size_t length)
{
    // Check for ongoing transfer
    if( flexcom8TwiObj.state != FLEXCOM_TWI_STATE_IDLE )
    {
        return false;
    }

    flexcom8TwiObj.address=address;
    flexcom8TwiObj.readBuffer=pdata;
    flexcom8TwiObj.readSize=length;
    flexcom8TwiObj.writeBuffer=NULL;
    flexcom8TwiObj.writeSize=0;
    flexcom8TwiObj.error = FLEXCOM_TWI_ERROR_NONE;

    FLEXCOM8_TWI_InitiateTransfer(address, true);

    return true;
}

// *****************************************************************************
/* Function:
    bool FLEXCOM8_TWI_Write(uint16_t address, uint8_t *pdata, size_t length)

   Summary:
    Writes data onto the slave.

   Precondition:
    FLEXCOM8_TWI_Initialize must have been called for the associated FLEXCOM TWI instance.

   Parameters:
    address - 7-bit / 10-bit slave address.
    pdata   - pointer to source data buffer
    length  - length of data buffer in number of bytes.

   Returns:
    Request status.
    True - Request was successful.
    False - Request has failed.
*/

bool FLEXCOM8_TWI_Write(uint16_t address, uint8_t *pdata, size_t length)
{
    // Check for ongoing transfer
    if( flexcom8TwiObj.state != FLEXCOM_TWI_STATE_IDLE )
    {
        return false;
    }

    flexcom8TwiObj.address=address;
    flexcom8TwiObj.readBuffer=NULL;
    flexcom8TwiObj.readSize=0;
    flexcom8TwiObj.writeBuffer=pdata;
    flexcom8TwiObj.writeSize=length;
    flexcom8TwiObj.error = FLEXCOM_TWI_ERROR_NONE;

    FLEXCOM8_TWI_InitiateTransfer(address, false);

    return true;
}

// *****************************************************************************
/* Function:
    bool FLEXCOM8_TWI_WriteRead(uint16_t address, uint8_t *wdata, size_t wlength, uint8_t *rdata, size_t rlength)

   Summary:
    Write and Read data from Slave.

   Precondition:
    FLEXCOM8_TWI_Initialize must have been called for the associated FLEXCOM TWI instance.

   Parameters:
    address - 7-bit / 10-bit slave address.
    wdata   - pointer to write data buffer
    wlength - write data length in bytes.
    rdata   - pointer to read data buffer.
    rlength - read data length in bytes.

   Returns:
    Request status.
    True - Request was successful.
    False - Request has failed.
*/

bool FLEXCOM8_TWI_WriteRead(uint16_t address, uint8_t *wdata, size_t wlength, uint8_t *rdata, size_t rlength)
{

    // Check for ongoing transfer
    if( flexcom8TwiObj.state != FLEXCOM_TWI_STATE_IDLE )
    {
        return false;
    }

    flexcom8TwiObj.address=address;
    flexcom8TwiObj.readBuffer=rdata;
    flexcom8TwiObj.readSize=rlength;
    flexcom8TwiObj.writeBuffer=wdata;
    flexcom8TwiObj.writeSize=wlength;
    flexcom8TwiObj.error = FLEXCOM_TWI_ERROR_NONE;

    FLEXCOM8_TWI_InitiateTransfer(address, false);

    return true;
}

// *****************************************************************************
/* Function:
    FLEXCOM_TWI_ERROR FLEXCOM8_TWI_ErrorGet(void)

   Summary:
    Returns the error during transfer.

   Precondition:
    FLEXCOM8_TWI_Initialize must have been called for the associated FLEXCOM TWI instance.

   Parameters:
    None.

   Returns:
    Error during transfer.
*/

FLEXCOM_TWI_ERROR FLEXCOM8_TWI_ErrorGet(void)
{
    FLEXCOM_TWI_ERROR error;

    error = flexcom8TwiObj.error;
    flexcom8TwiObj.error = FLEXCOM_TWI_ERROR_NONE;

    return error;
}

bool FLEXCOM8_TWI_TransferSetup(FLEXCOM_TWI_TRANSFER_SETUP* setup, uint32_t srcClkFreq )
{
    uint32_t i2cClkSpeed;
    uint32_t cldiv;
    uint8_t ckdiv = 0;

    if (setup == NULL)
    {
        return false;
    }

    i2cClkSpeed = setup->clkSpeed;

    /* Maximum I2C clock speed in Master mode cannot be greater than 400 KHz */
    if (i2cClkSpeed > 4000000)
    {
        return false;
    }

    if( srcClkFreq == 0)
    {
        srcClkFreq = 200000000;
    }

    /* Formula for calculating baud value involves two unknowns. Fix one unknown and calculate the other.
       Fix the CKDIV value and see if CLDIV (or CHDIV) fits into the 8-bit register. */

    /* Calculate CLDIV with CKDIV set to 0 */
    cldiv = (srcClkFreq /(2 * i2cClkSpeed)) - 3;

    /* CLDIV must fit within 8-bits and CKDIV must fit within 3-bits */
    while ((cldiv > 255) && (ckdiv < 7))
    {
        ckdiv++;
        cldiv /= 2;
    }

    if (cldiv > 255)
    {
        /* Could not generate CLDIV and CKDIV register values for the requested baud rate */
        return false;
    }

    // Set Baud rate
    FLEXCOM8_TWI_Module->FLEX_TWI_CWGR = ( FLEX_TWI_CWGR_HOLD_Msk & FLEXCOM8_TWI_Module->FLEX_TWI_CWGR) |
                                              FLEX_TWI_CWGR_BRSRCCLK_PERIPH_CLK |
                                            ( FLEX_TWI_CWGR_CLDIV(cldiv) |
                                              FLEX_TWI_CWGR_CHDIV(cldiv) |
                                              FLEX_TWI_CWGR_CKDIV(ckdiv) );

    return true;
}

// *****************************************************************************
/* Function:
    void FLEXCOM8_InterruptHandler(void)

   Summary:
    FLEXCOM8_TWI Peripheral Interrupt Handler.

   Description:
    This function is FLEXCOM8_TWI Peripheral Interrupt Handler and will
    called on every FLEXCOM8_TWI interrupt.

   Precondition:
    None.

   Parameters:
    None.

   Returns:
    None.

   Remarks:
    The function is called as peripheral instance's interrupt handler if the
    instance interrupt is enabled. If peripheral instance's interrupt is not
    enabled user need to call it from the main while loop of the application.
*/

void FLEXCOM8_InterruptHandler(void)
{
    uint32_t status;

    // Read the peripheral status
    status = FLEXCOM8_TWI_Module->FLEX_TWI_SR;

    /* checks if Slave has Nacked */
    if( status & FLEX_TWI_SR_NACK_Msk )
    {
        flexcom8TwiObj.state = FLEXCOM_TWI_STATE_ERROR;
        flexcom8TwiObj.error = FLEXCOM_TWI_ERROR_NACK;
    }

    if( status & FLEX_TWI_SR_TXCOMP_Msk )
    {
        /* Disable and Enable I2C Master */
        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_MSDIS_Msk;
        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_MSEN_Msk;

        /* Disable Interrupt */
        FLEXCOM8_TWI_Module->FLEX_TWI_IDR = FLEX_TWI_IDR_TXCOMP_Msk |
                                 FLEX_TWI_IDR_TXRDY_Msk  |
                                 FLEX_TWI_IDR_RXRDY_Msk;
    }

    /* checks if the arbitration is lost in multi-master scenario */
    if( status & FLEX_TWI_SR_ARBLST_Msk )
    {
        /* Re-initiate the transfer if arbitration is lost in
         * between of the transfer
         */
        flexcom8TwiObj.state = FLEXCOM_TWI_STATE_ADDR_SEND;
    }

    if( flexcom8TwiObj.error == FLEXCOM_TWI_ERROR_NONE )
    {
        switch( flexcom8TwiObj.state )
        {
            case FLEXCOM_TWI_STATE_ADDR_SEND:
            {
                if (flexcom8TwiObj.writeSize != 0 )
                {
                    // Initiate Write transfer
                    FLEXCOM8_TWI_InitiateTransfer(flexcom8TwiObj.address, false);
                }
                else
                {
                    // Initiate Read transfer
                    FLEXCOM8_TWI_InitiateTransfer(flexcom8TwiObj.address, true);
                }
            }
            break;

            case FLEXCOM_TWI_STATE_TRANSFER_WRITE:
            {
                /* checks if master is ready to transmit */
                if( status & FLEX_TWI_SR_TXRDY_Msk )
                {
                    // Write Last Byte and then initiate read transfer
                    if( ( flexcom8TwiObj.writeCount == (flexcom8TwiObj.writeSize -1) ) && ( flexcom8TwiObj.readSize != 0 ))
                    {
                        // START bit must be set before the last byte is shifted out to generate repeat start. Hence disabled interrupt
                        __disable_irq();
                        FLEXCOM8_TWI_Module->FLEX_TWI_IDR = FLEX_TWI_IDR_TXRDY_Msk;
                        FLEXCOM8_TWI_Module->FLEX_TWI_THR = FLEX_TWI_THR_TXDATA(flexcom8TwiObj.writeBuffer[flexcom8TwiObj.writeCount++]);
                        FLEXCOM8_TWI_InitiateRead();
                    }
                    // Write Last byte and then issue STOP condition
                    else if ( flexcom8TwiObj.writeCount == (flexcom8TwiObj.writeSize -1))
                    {
                        // Load last byte in transmit register, issue stop condition
                        // Generate TXCOMP interrupt after STOP condition has been sent
                        FLEXCOM8_TWI_Module->FLEX_TWI_THR = FLEX_TWI_THR_TXDATA(flexcom8TwiObj.writeBuffer[flexcom8TwiObj.writeCount++]);
                        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_STOP_Msk;
                        FLEXCOM8_TWI_Module->FLEX_TWI_IDR = FLEX_TWI_IDR_TXRDY_Msk;

                        /* Check TXCOMP to confirm if STOP condition has been sent, otherwise wait for TXCOMP interrupt */
                        status = FLEXCOM8_TWI_Module->FLEX_TWI_SR;
                        if( status & FLEX_TWI_SR_TXCOMP_Msk )
                        {
                            flexcom8TwiObj.state = FLEXCOM_TWI_STATE_TRANSFER_DONE;
                        }
                        else
                        {
                            flexcom8TwiObj.state = FLEXCOM_TWI_STATE_WAIT_FOR_TXCOMP;
                        }
                    }
                    // Write next byte
                    else
                    {
                        FLEXCOM8_TWI_Module->FLEX_TWI_THR = FLEX_TWI_THR_TXDATA(flexcom8TwiObj.writeBuffer[flexcom8TwiObj.writeCount++]);
                    }

                    // Dummy read to ensure that TXRDY bit is cleared
                    status = FLEXCOM8_TWI_Module->FLEX_TWI_SR;
                }

                break;
            }

            case FLEXCOM_TWI_STATE_TRANSFER_READ:
            {
                /* checks if master has received the data */
                if( status & FLEX_TWI_SR_RXRDY_Msk )
                {
                    // Set the STOP (or START) bit before reading the FLEX_TWI_RHR on the next-to-last access
                    if(  flexcom8TwiObj.readCount == (flexcom8TwiObj.readSize - 2) )
                    {
                        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_STOP_Msk;
                    }

                    /* read the received data */
                    flexcom8TwiObj.readBuffer[flexcom8TwiObj.readCount++] = (uint8_t)(FLEXCOM8_TWI_Module->FLEX_TWI_RHR & FLEX_TWI_RHR_RXDATA_Msk);

                    /* checks if transmission has reached at the end */
                    if( flexcom8TwiObj.readCount == flexcom8TwiObj.readSize )
                    {
                        /* Disable the RXRDY interrupt*/
                        FLEXCOM8_TWI_Module->FLEX_TWI_IDR = FLEX_TWI_IDR_RXRDY_Msk;

                        /* Check TXCOMP to confirm if STOP condition has been sent, otherwise wait for TXCOMP interrupt */
                        status = FLEXCOM8_TWI_Module->FLEX_TWI_SR;
                        if( status & FLEX_TWI_SR_TXCOMP_Msk )
                        {
                            flexcom8TwiObj.state = FLEXCOM_TWI_STATE_TRANSFER_DONE;
                        }
                        else
                        {
                            flexcom8TwiObj.state = FLEXCOM_TWI_STATE_WAIT_FOR_TXCOMP;
                        }
                    }
                }
                break;
            }

            case FLEXCOM_TWI_STATE_WAIT_FOR_TXCOMP:
            {
                if( status & FLEX_TWI_SR_TXCOMP_Msk )
                {
                    flexcom8TwiObj.state = FLEXCOM_TWI_STATE_TRANSFER_DONE;
                }
                break;
            }

            default:
            {
                break;
            }
        }
    }

    if (flexcom8TwiObj.state == FLEXCOM_TWI_STATE_ERROR)
    {
        // NACK is received,
        flexcom8TwiObj.state = FLEXCOM_TWI_STATE_IDLE;
        FLEXCOM8_TWI_Module->FLEX_TWI_IDR = FLEX_TWI_IDR_TXCOMP_Msk | FLEX_TWI_IDR_TXRDY_Msk | FLEX_TWI_IDR_RXRDY_Msk;

        // Disable and Enable I2C Master
        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_MSDIS_Msk;
        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_MSEN_Msk;

        if ( flexcom8TwiObj.callback != NULL )
        {
            flexcom8TwiObj.callback( flexcom8TwiObj.context );
        }
    }

    // check for completion of transfer
    if( flexcom8TwiObj.state == FLEXCOM_TWI_STATE_TRANSFER_DONE )
    {

        flexcom8TwiObj.error = FLEXCOM_TWI_ERROR_NONE;

        // Reset the PLib objects and Interrupts
        flexcom8TwiObj.state = FLEXCOM_TWI_STATE_IDLE;
        FLEXCOM8_TWI_Module->FLEX_TWI_IDR = FLEX_TWI_IDR_TXCOMP_Msk |
                                 FLEX_TWI_IDR_TXRDY_Msk  |
                                 FLEX_TWI_IDR_RXRDY_Msk;

        // Disable and Enable I2C Master
        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_MSDIS_Msk;
        FLEXCOM8_TWI_Module->FLEX_TWI_CR = FLEX_TWI_CR_MSEN_Msk;
        if ( flexcom8TwiObj.callback != NULL )
        {
            flexcom8TwiObj.callback( flexcom8TwiObj.context );
        }
    }

    return;
}

/*******************************************************************************
 End of File
*/
