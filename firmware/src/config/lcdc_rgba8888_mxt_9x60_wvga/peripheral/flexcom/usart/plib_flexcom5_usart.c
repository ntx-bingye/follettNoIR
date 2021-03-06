/*******************************************************************************
  FLEXCOM5 USART PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_flexcom5_usart.c

  Summary:
    FLEXCOM5 USART PLIB Implementation File

  Description
    This file defines the interface to the FLEXCOM5 USART peripheral library. This
    library provides access to and control of the associated peripheral
    instance.

  Remarks:
    None.
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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/* This section lists the other files that are included in this file.
*/
#include "plib_flexcom5_usart.h"
#include "interrupts.h"

#define FLEXCOM5_USART_HW_RX_FIFO_THRES                 16
#define FLEXCOM5_USART_HW_TX_FIFO_THRES                 15

// *****************************************************************************
// *****************************************************************************
// Section: FLEXCOM5 USART Implementation
// *****************************************************************************
// *****************************************************************************
FLEXCOM_USART_OBJECT flexcom5UsartObj;

void static FLEXCOM5_USART_ErrorClear( void )
{
    uint16_t dummyData = 0;

    if (FLEXCOM5_REGS->FLEX_US_CSR & (FLEX_US_CSR_OVRE_Msk | FLEX_US_CSR_FRAME_Msk | FLEX_US_CSR_PARE_Msk))
    {
        /* Clear the error flags */
        FLEXCOM5_REGS->FLEX_US_CR = FLEX_US_CR_RSTSTA_Msk;

        /* Flush existing error bytes from the RX FIFO */
        while( FLEXCOM5_REGS->FLEX_US_CSR & FLEX_US_CSR_RXRDY_Msk )
        {
            if (FLEXCOM5_REGS->FLEX_US_MR & FLEX_US_MR_MODE9_Msk)
            {
                dummyData = *((uint16_t*)&FLEXCOM5_REGS->FLEX_US_RHR) & FLEX_US_RHR_RXCHR_Msk;
            }
            else
            {
                dummyData = *((uint8_t*)&FLEXCOM5_REGS->FLEX_US_RHR);
            }
        }
    }

    /* Ignore the warning */
    (void)dummyData;

    return;
}

void static FLEXCOM5_USART_ISR_RX_Handler( void )
{
    uint32_t rxPending = 0;
    uint32_t rxThreshold = 0;
    if(flexcom5UsartObj.rxBusyStatus == true)
    {
        while( (FLEXCOM5_REGS->FLEX_US_CSR & FLEX_US_CSR_RXRDY_Msk) && (flexcom5UsartObj.rxProcessedSize < flexcom5UsartObj.rxSize) )
        {
            if (FLEXCOM5_REGS->FLEX_US_MR & FLEX_US_MR_MODE9_Msk)
            {
                ((uint16_t*)flexcom5UsartObj.rxBuffer)[flexcom5UsartObj.rxProcessedSize++] = *((uint16_t*)&FLEXCOM5_REGS->FLEX_US_RHR) & FLEX_US_RHR_RXCHR_Msk;
            }
            else
            {
                flexcom5UsartObj.rxBuffer[flexcom5UsartObj.rxProcessedSize++] = *((uint8_t*)&FLEXCOM5_REGS->FLEX_US_RHR);
            }
        }

        rxPending = flexcom5UsartObj.rxSize - flexcom5UsartObj.rxProcessedSize;
        if (rxPending > 0)
        {
            rxThreshold = (FLEXCOM5_REGS->FLEX_US_FMR & FLEX_US_FMR_RXFTHRES_Msk) >> FLEX_US_FMR_RXFTHRES_Pos;
            if (rxPending < rxThreshold)
            {
                FLEXCOM5_REGS->FLEX_US_FMR = (FLEXCOM5_REGS->FLEX_US_FMR & ~FLEX_US_FMR_RXFTHRES_Msk) | FLEX_US_FMR_RXFTHRES(rxPending);
            }
        }

        /* Check if the buffer is done */
        if(flexcom5UsartObj.rxProcessedSize >= flexcom5UsartObj.rxSize)
        {
            flexcom5UsartObj.rxBusyStatus = false;

            /* Disable Read, Overrun, Parity and Framing error interrupts */
            FLEXCOM5_REGS->FLEX_US_FIDR = FLEX_US_FIDR_RXFTHF_Msk;
            FLEXCOM5_REGS->FLEX_US_IDR = (FLEX_US_IDR_FRAME_Msk | FLEX_US_IDR_PARE_Msk | FLEX_US_IDR_OVRE_Msk);

            if(flexcom5UsartObj.rxCallback != NULL)
            {
                flexcom5UsartObj.rxCallback(flexcom5UsartObj.rxContext);
            }
        }
    }
    else
    {
        /* Nothing to process */
        ;
    }

    return;
}

void static FLEXCOM5_USART_ISR_TX_Handler( void )
{
    if(flexcom5UsartObj.txBusyStatus == true)
    {
        while( (FLEXCOM5_REGS->FLEX_US_CSR & FLEX_US_CSR_TXRDY_Msk) && (flexcom5UsartObj.txProcessedSize < flexcom5UsartObj.txSize))
        {
            if (FLEXCOM5_REGS->FLEX_US_MR & FLEX_US_MR_MODE9_Msk)
            {
                *((uint16_t*)&FLEXCOM5_REGS->FLEX_US_THR) =  ((uint16_t*)flexcom5UsartObj.txBuffer)[flexcom5UsartObj.txProcessedSize++] & FLEX_US_THR_TXCHR_Msk;
            }
            else
            {
                *((uint8_t*)&FLEXCOM5_REGS->FLEX_US_THR) =  ((uint8_t*)flexcom5UsartObj.txBuffer)[flexcom5UsartObj.txProcessedSize++];
            }
        }

        /* Check if the buffer is done */
        if(flexcom5UsartObj.txProcessedSize >= flexcom5UsartObj.txSize)
        {
            if (FLEXCOM5_REGS->FLEX_US_CSR & FLEX_US_CSR_TXEMPTY_Msk)
            {
                flexcom5UsartObj.txBusyStatus = false;

                FLEXCOM5_REGS->FLEX_US_FIDR = FLEX_US_FIDR_TXFTHF_Msk;

                FLEXCOM5_REGS->FLEX_US_IDR = FLEX_US_IDR_TXEMPTY_Msk;

                if(flexcom5UsartObj.txCallback != NULL)
                {
                    flexcom5UsartObj.txCallback(flexcom5UsartObj.txContext);
                }
            }
            else
            {
                FLEXCOM5_REGS->FLEX_US_FIDR = FLEX_US_FIDR_TXFTHF_Msk;

                FLEXCOM5_REGS->FLEX_US_IER = FLEX_US_IER_TXEMPTY_Msk;
            }
        }
    }
    else
    {
        /* Nothing to process */
        ;
    }

    return;
}

void FLEXCOM5_InterruptHandler( void )
{
    /* Channel status */
    uint32_t channelStatus = FLEXCOM5_REGS->FLEX_US_CSR;
    uint32_t interruptMask = FLEXCOM5_REGS->FLEX_US_IMR;

    /* Error status */
    uint32_t errorStatus = (channelStatus & (FLEX_US_CSR_OVRE_Msk | FLEX_US_CSR_FRAME_Msk | FLEX_US_CSR_PARE_Msk));

    if((errorStatus != 0) && (interruptMask & (FLEX_US_IMR_RXRDY_Msk | FLEX_US_IMR_FRAME_Msk | FLEX_US_IMR_PARE_Msk | FLEX_US_IMR_OVRE_Msk)))
    {
        /* Save error to report it later */
        flexcom5UsartObj.errorStatus = (FLEXCOM_USART_ERROR)errorStatus;

        /* Clear error flags and flush the error data */
        FLEXCOM5_USART_ErrorClear();

        /* Transfer complete. Clear the busy flag. */
        flexcom5UsartObj.rxBusyStatus = false;

        FLEXCOM5_REGS->FLEX_US_FIDR = FLEX_US_FIDR_RXFTHF_Msk;

        /* Disable Read, Overrun, Parity and Framing error interrupts */
        FLEXCOM5_REGS->FLEX_US_IDR = (FLEX_US_IDR_RXRDY_Msk | FLEX_US_IDR_FRAME_Msk | FLEX_US_IDR_PARE_Msk | FLEX_US_IDR_OVRE_Msk);

        /* USART errors are normally associated with the receiver, hence calling receiver context */
        if( flexcom5UsartObj.rxCallback != NULL )
        {
            flexcom5UsartObj.rxCallback(flexcom5UsartObj.rxContext);
        }
    }


    /* Clear the FIFO related interrupt flags */
    FLEXCOM5_REGS->FLEX_US_CR = FLEX_US_CR_RSTSTA_Msk;

    FLEXCOM5_USART_ISR_RX_Handler();

    FLEXCOM5_USART_ISR_TX_Handler();

}


void FLEXCOM5_USART_Initialize( void )
{
    /* Set FLEXCOM USART operating mode */
    FLEXCOM5_REGS->FLEX_MR = FLEX_MR_OPMODE_USART;

    /* Reset FLEXCOM5 USART */
    FLEXCOM5_REGS->FLEX_US_CR = (FLEX_US_CR_RSTRX_Msk | FLEX_US_CR_RSTTX_Msk | FLEX_US_CR_RSTSTA_Msk  | FLEX_US_CR_FIFOEN_Msk );

    FLEXCOM5_REGS->FLEX_US_FMR = FLEX_US_FMR_TXFTHRES(FLEXCOM5_USART_HW_TX_FIFO_THRES) | FLEX_US_FMR_RXFTHRES(FLEXCOM5_USART_HW_RX_FIFO_THRES) ;

    /* Setup transmitter timeguard register */
    FLEXCOM5_REGS->FLEX_US_TTGR = 0;

    /* Configure FLEXCOM5 USART mode */
    FLEXCOM5_REGS->FLEX_US_MR = ( FLEX_US_MR_USART_MODE_RS485 | FLEX_US_MR_USCLKS_MCK | FLEX_US_MR_CHRL_8_BIT | FLEX_US_MR_PAR_NO | FLEX_US_MR_NBSTOP_1_BIT | (0 << FLEX_US_MR_OVER_Pos));

    /* Configure FLEXCOM5 USART Baud Rate */
    FLEXCOM5_REGS->FLEX_US_BRGR = FLEX_US_BRGR_CD(108);

    /* Enable FLEXCOM5 USART */
    FLEXCOM5_REGS->FLEX_US_CR = (FLEX_US_CR_TXEN_Msk | FLEX_US_CR_RXEN_Msk);


    /* Initialize instance object */
    flexcom5UsartObj.rxBuffer = NULL;
    flexcom5UsartObj.rxSize = 0;
    flexcom5UsartObj.rxProcessedSize = 0;
    flexcom5UsartObj.rxBusyStatus = false;
    flexcom5UsartObj.rxCallback = NULL;
    flexcom5UsartObj.errorStatus = FLEXCOM_USART_ERROR_NONE;
    flexcom5UsartObj.txBuffer = NULL;
    flexcom5UsartObj.txSize = 0;
    flexcom5UsartObj.txProcessedSize = 0;
    flexcom5UsartObj.txBusyStatus = false;
    flexcom5UsartObj.txCallback = NULL;

    return;
}

FLEXCOM_USART_ERROR FLEXCOM5_USART_ErrorGet( void )
{
    FLEXCOM_USART_ERROR errorStatus = flexcom5UsartObj.errorStatus;

    flexcom5UsartObj.errorStatus = FLEXCOM_USART_ERROR_NONE;

    /* All errors are cleared, but send the previous error state */
    return errorStatus;
}

bool FLEXCOM5_USART_SerialSetup( FLEXCOM_USART_SERIAL_SETUP *setup, uint32_t srcClkFreq )
{
    uint32_t baud = 0;
    uint32_t brgVal = 0;
    uint32_t overSampVal = 0;
    uint32_t usartMode;
    bool status = false;

    if((flexcom5UsartObj.rxBusyStatus == true) || (flexcom5UsartObj.txBusyStatus == true))
    {
        /* Transaction is in progress, so return without updating settings */
        return false;
    }

    if (setup != NULL)
    {
        baud = setup->baudRate;
        if(srcClkFreq == 0)
        {
            srcClkFreq = FLEXCOM5_USART_FrequencyGet();
        }

        /* Calculate BRG value */
        if (srcClkFreq >= (16 * baud))
        {
            brgVal = (srcClkFreq / (16 * baud));
        }
        else if (srcClkFreq >= (8 * baud))
        {
            brgVal = (srcClkFreq / (8 * baud));
            overSampVal = (1 << FLEX_US_MR_OVER_Pos) & FLEX_US_MR_OVER_Msk;
        }
        else
        {
            /* The input clock source - srcClkFreq, is too low to generate the desired baud */
            return status;
        }
        if (brgVal > 65535)
        {
            /* The requested baud is so low that the ratio of srcClkFreq to baud exceeds the 16-bit register value of CD register */
            return status;
        }

        /* Configure FLEXCOM5 USART mode */
        usartMode = FLEXCOM5_REGS->FLEX_US_MR;
        usartMode &= ~(FLEX_US_MR_CHRL_Msk | FLEX_US_MR_MODE9_Msk | FLEX_US_MR_PAR_Msk | FLEX_US_MR_NBSTOP_Msk | FLEX_US_MR_OVER_Msk);
        FLEXCOM5_REGS->FLEX_US_MR = usartMode | ((uint32_t)setup->dataWidth | (uint32_t)setup->parity | (uint32_t)setup->stopBits | overSampVal);

        /* Configure FLEXCOM5 USART Baud Rate */
        FLEXCOM5_REGS->FLEX_US_BRGR = FLEX_US_BRGR_CD(brgVal);
        status = true;
    }

    return status;
}

bool FLEXCOM5_USART_Read( void *buffer, const size_t size )
{
    bool status = false;
    uint8_t* pBuffer = (uint8_t *)buffer;

    if(pBuffer != NULL)
    {
        /* Check if receive request is in progress */
        if(flexcom5UsartObj.rxBusyStatus == false)
        {
            /* Clear errors that may have got generated when there was no active read request pending */
            FLEXCOM5_USART_ErrorClear();

            /* Clear the errors related to pervious read requests */
            flexcom5UsartObj.errorStatus = FLEXCOM_USART_ERROR_NONE;

            flexcom5UsartObj.rxBuffer = pBuffer;
            flexcom5UsartObj.rxSize = size;
            flexcom5UsartObj.rxProcessedSize = 0;
            flexcom5UsartObj.rxBusyStatus = true;
            status = true;


            /* Clear RX FIFO */
            FLEXCOM5_REGS->FLEX_US_CR = FLEX_US_CR_RXFCLR_Msk;

            if (flexcom5UsartObj.rxSize < FLEXCOM5_USART_HW_RX_FIFO_THRES)
            {
                FLEXCOM5_REGS->FLEX_US_FMR = (FLEXCOM5_REGS->FLEX_US_FMR & ~FLEX_US_FMR_RXFTHRES_Msk) | FLEX_US_FMR_RXFTHRES(flexcom5UsartObj.rxSize);
            }
            else
            {
                FLEXCOM5_REGS->FLEX_US_FMR = (FLEXCOM5_REGS->FLEX_US_FMR & ~FLEX_US_FMR_RXFTHRES_Msk) | FLEX_US_FMR_RXFTHRES(FLEXCOM5_USART_HW_RX_FIFO_THRES);
            }

            /* Enable Read, Overrun, Parity and Framing error interrupts */
            FLEXCOM5_REGS->FLEX_US_IER = (FLEX_US_IER_FRAME_Msk | FLEX_US_IER_PARE_Msk | FLEX_US_IER_OVRE_Msk);

            /* Enable RX FIFO Threshold interrupt */
            FLEXCOM5_REGS->FLEX_US_FIER = FLEX_US_FIER_RXFTHF_Msk;

        }
    }

    return status;
}

bool FLEXCOM5_USART_Write( void *buffer, const size_t size )
{
    bool status = false;
    uint8_t* pBuffer = (uint8_t *)buffer;

    if(pBuffer != NULL)
    {
        /* Check if transmit request is in progress */
        if(flexcom5UsartObj.txBusyStatus == false)
        {
            flexcom5UsartObj.txBuffer = (uint8_t*)pBuffer;
            flexcom5UsartObj.txSize = size;
            flexcom5UsartObj.txProcessedSize = 0;
            flexcom5UsartObj.txBusyStatus = true;
            status = true;

            /* Initiate the transfer by sending first byte */
            while( (FLEXCOM5_REGS->FLEX_US_CSR & FLEX_US_CSR_TXRDY_Msk) && (flexcom5UsartObj.txProcessedSize < flexcom5UsartObj.txSize) )
            {
                if (FLEXCOM5_REGS->FLEX_US_MR & FLEX_US_MR_MODE9_Msk)
                {
                    *((uint16_t*)&FLEXCOM5_REGS->FLEX_US_THR) =  ((uint16_t*)flexcom5UsartObj.txBuffer)[flexcom5UsartObj.txProcessedSize++] & FLEX_US_THR_TXCHR_Msk;
                }
                else
                {
                    *((uint8_t*)&FLEXCOM5_REGS->FLEX_US_THR) =  ((uint8_t*)flexcom5UsartObj.txBuffer)[flexcom5UsartObj.txProcessedSize++];
                }
            }

            if ( flexcom5UsartObj.txProcessedSize >= flexcom5UsartObj.txSize)
            {
                FLEXCOM5_REGS->FLEX_US_IER = FLEX_US_IER_TXEMPTY_Msk;
            }
            else
            {
                FLEXCOM5_REGS->FLEX_US_FIER = FLEX_US_FIER_TXFTHF_Msk;
            }
        }
    }

    return status;
}

void FLEXCOM5_USART_WriteCallbackRegister( FLEXCOM_USART_CALLBACK callback, uintptr_t context )
{
    flexcom5UsartObj.txCallback = callback;
    flexcom5UsartObj.txContext = context;
}

void FLEXCOM5_USART_ReadCallbackRegister( FLEXCOM_USART_CALLBACK callback, uintptr_t context )
{
    flexcom5UsartObj.rxCallback = callback;
    flexcom5UsartObj.rxContext = context;
}

bool FLEXCOM5_USART_WriteIsBusy( void )
{
    return flexcom5UsartObj.txBusyStatus;
}

bool FLEXCOM5_USART_ReadIsBusy( void )
{
    return flexcom5UsartObj.rxBusyStatus;
}

size_t FLEXCOM5_USART_WriteCountGet( void )
{
    return flexcom5UsartObj.txProcessedSize;
}

size_t FLEXCOM5_USART_ReadCountGet( void )
{
    return flexcom5UsartObj.rxProcessedSize;
}

bool FLEXCOM5_USART_ReadAbort(void)
{
    if (flexcom5UsartObj.rxBusyStatus == true)
    {
        /* Disable Read, Overrun, Parity and Framing error interrupts */
        FLEXCOM5_REGS->FLEX_US_IDR = (FLEX_US_IDR_RXRDY_Msk | FLEX_US_IDR_FRAME_Msk | FLEX_US_IDR_PARE_Msk | FLEX_US_IDR_OVRE_Msk);

        flexcom5UsartObj.rxBusyStatus = false;

        /* If required application should read the num bytes processed prior to calling the read abort API */
        flexcom5UsartObj.rxSize = flexcom5UsartObj.rxProcessedSize = 0;
    }

    return true;
}


