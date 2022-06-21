/*******************************************************************************
  FLEXCOM2 USART PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_flexcom2_usart.c

  Summary:
    FLEXCOM2 USART PLIB Implementation File

  Description
    This file defines the interface to the FLEXCOM2 USART peripheral library. This
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
#include "plib_flexcom2_usart.h"
#include "interrupts.h"

#define FLEXCOM2_USART_HW_RX_FIFO_THRES                 16
#define FLEXCOM2_USART_HW_TX_FIFO_THRES                 15

// *****************************************************************************
// *****************************************************************************
// Section: FLEXCOM2 USART Implementation
// *****************************************************************************
// *****************************************************************************
FLEXCOM_USART_OBJECT flexcom2UsartObj;

void static FLEXCOM2_USART_ErrorClear( void )
{
    uint16_t dummyData = 0;

    if (FLEXCOM2_REGS->FLEX_US_CSR & (FLEX_US_CSR_OVRE_Msk | FLEX_US_CSR_FRAME_Msk | FLEX_US_CSR_PARE_Msk))
    {
        /* Clear the error flags */
        FLEXCOM2_REGS->FLEX_US_CR = FLEX_US_CR_RSTSTA_Msk;

        /* Flush existing error bytes from the RX FIFO */
        while( FLEXCOM2_REGS->FLEX_US_CSR & FLEX_US_CSR_RXRDY_Msk )
        {
            if (FLEXCOM2_REGS->FLEX_US_MR & FLEX_US_MR_MODE9_Msk)
            {
                dummyData = *((uint16_t*)&FLEXCOM2_REGS->FLEX_US_RHR) & FLEX_US_RHR_RXCHR_Msk;
            }
            else
            {
                dummyData = *((uint8_t*)&FLEXCOM2_REGS->FLEX_US_RHR);
            }
        }
    }

    /* Ignore the warning */
    (void)dummyData;

    return;
}

void static FLEXCOM2_USART_ISR_RX_Handler( void )
{
    uint32_t rxPending = 0;
    uint32_t rxThreshold = 0;
    if(flexcom2UsartObj.rxBusyStatus == true)
    {
        while( (FLEXCOM2_REGS->FLEX_US_CSR & FLEX_US_CSR_RXRDY_Msk) && (flexcom2UsartObj.rxProcessedSize < flexcom2UsartObj.rxSize) )
        {
            if (FLEXCOM2_REGS->FLEX_US_MR & FLEX_US_MR_MODE9_Msk)
            {
                ((uint16_t*)flexcom2UsartObj.rxBuffer)[flexcom2UsartObj.rxProcessedSize++] = *((uint16_t*)&FLEXCOM2_REGS->FLEX_US_RHR) & FLEX_US_RHR_RXCHR_Msk;
            }
            else
            {
                flexcom2UsartObj.rxBuffer[flexcom2UsartObj.rxProcessedSize++] = *((uint8_t*)&FLEXCOM2_REGS->FLEX_US_RHR);
            }
        }

        rxPending = flexcom2UsartObj.rxSize - flexcom2UsartObj.rxProcessedSize;
        if (rxPending > 0)
        {
            rxThreshold = (FLEXCOM2_REGS->FLEX_US_FMR & FLEX_US_FMR_RXFTHRES_Msk) >> FLEX_US_FMR_RXFTHRES_Pos;
            if (rxPending < rxThreshold)
            {
                FLEXCOM2_REGS->FLEX_US_FMR = (FLEXCOM2_REGS->FLEX_US_FMR & ~FLEX_US_FMR_RXFTHRES_Msk) | FLEX_US_FMR_RXFTHRES(rxPending);
            }
        }

        /* Check if the buffer is done */
        if(flexcom2UsartObj.rxProcessedSize >= flexcom2UsartObj.rxSize)
        {
            flexcom2UsartObj.rxBusyStatus = false;

            /* Disable Read, Overrun, Parity and Framing error interrupts */
            FLEXCOM2_REGS->FLEX_US_FIDR = FLEX_US_FIDR_RXFTHF_Msk;
            FLEXCOM2_REGS->FLEX_US_IDR = (FLEX_US_IDR_FRAME_Msk | FLEX_US_IDR_PARE_Msk | FLEX_US_IDR_OVRE_Msk);

            if(flexcom2UsartObj.rxCallback != NULL)
            {
                flexcom2UsartObj.rxCallback(flexcom2UsartObj.rxContext);
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

void static FLEXCOM2_USART_ISR_TX_Handler( void )
{
    if(flexcom2UsartObj.txBusyStatus == true)
    {
        while( (FLEXCOM2_REGS->FLEX_US_CSR & FLEX_US_CSR_TXRDY_Msk) && (flexcom2UsartObj.txProcessedSize < flexcom2UsartObj.txSize))
        {
            if (FLEXCOM2_REGS->FLEX_US_MR & FLEX_US_MR_MODE9_Msk)
            {
                *((uint16_t*)&FLEXCOM2_REGS->FLEX_US_THR) =  ((uint16_t*)flexcom2UsartObj.txBuffer)[flexcom2UsartObj.txProcessedSize++] & FLEX_US_THR_TXCHR_Msk;
            }
            else
            {
                *((uint8_t*)&FLEXCOM2_REGS->FLEX_US_THR) =  ((uint8_t*)flexcom2UsartObj.txBuffer)[flexcom2UsartObj.txProcessedSize++];
            }
        }

        /* Check if the buffer is done */
        if(flexcom2UsartObj.txProcessedSize >= flexcom2UsartObj.txSize)
        {
            if (FLEXCOM2_REGS->FLEX_US_CSR & FLEX_US_CSR_TXEMPTY_Msk)
            {
                flexcom2UsartObj.txBusyStatus = false;

                FLEXCOM2_REGS->FLEX_US_FIDR = FLEX_US_FIDR_TXFTHF_Msk;

                FLEXCOM2_REGS->FLEX_US_IDR = FLEX_US_IDR_TXEMPTY_Msk;

                if(flexcom2UsartObj.txCallback != NULL)
                {
                    flexcom2UsartObj.txCallback(flexcom2UsartObj.txContext);
                }
            }
            else
            {
                FLEXCOM2_REGS->FLEX_US_FIDR = FLEX_US_FIDR_TXFTHF_Msk;

                FLEXCOM2_REGS->FLEX_US_IER = FLEX_US_IER_TXEMPTY_Msk;
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

void FLEXCOM2_InterruptHandler( void )
{
    /* Channel status */
    uint32_t channelStatus = FLEXCOM2_REGS->FLEX_US_CSR;
    uint32_t interruptMask = FLEXCOM2_REGS->FLEX_US_IMR;

    /* Error status */
    uint32_t errorStatus = (channelStatus & (FLEX_US_CSR_OVRE_Msk | FLEX_US_CSR_FRAME_Msk | FLEX_US_CSR_PARE_Msk));

    if((errorStatus != 0) && (interruptMask & (FLEX_US_IMR_RXRDY_Msk | FLEX_US_IMR_FRAME_Msk | FLEX_US_IMR_PARE_Msk | FLEX_US_IMR_OVRE_Msk)))
    {
        /* Save error to report it later */
        flexcom2UsartObj.errorStatus = (FLEXCOM_USART_ERROR)errorStatus;

        /* Clear error flags and flush the error data */
        FLEXCOM2_USART_ErrorClear();

        /* Transfer complete. Clear the busy flag. */
        flexcom2UsartObj.rxBusyStatus = false;

        FLEXCOM2_REGS->FLEX_US_FIDR = FLEX_US_FIDR_RXFTHF_Msk;

        /* Disable Read, Overrun, Parity and Framing error interrupts */
        FLEXCOM2_REGS->FLEX_US_IDR = (FLEX_US_IDR_RXRDY_Msk | FLEX_US_IDR_FRAME_Msk | FLEX_US_IDR_PARE_Msk | FLEX_US_IDR_OVRE_Msk);

        /* USART errors are normally associated with the receiver, hence calling receiver context */
        if( flexcom2UsartObj.rxCallback != NULL )
        {
            flexcom2UsartObj.rxCallback(flexcom2UsartObj.rxContext);
        }
    }


    /* Clear the FIFO related interrupt flags */
    FLEXCOM2_REGS->FLEX_US_CR = FLEX_US_CR_RSTSTA_Msk;

    FLEXCOM2_USART_ISR_RX_Handler();

    FLEXCOM2_USART_ISR_TX_Handler();

}


void FLEXCOM2_USART_Initialize( void )
{
    /* Set FLEXCOM USART operating mode */
    FLEXCOM2_REGS->FLEX_MR = FLEX_MR_OPMODE_USART;

    /* Reset FLEXCOM2 USART */
    FLEXCOM2_REGS->FLEX_US_CR = (FLEX_US_CR_RSTRX_Msk | FLEX_US_CR_RSTTX_Msk | FLEX_US_CR_RSTSTA_Msk  | FLEX_US_CR_FIFOEN_Msk );

    FLEXCOM2_REGS->FLEX_US_FMR = FLEX_US_FMR_TXFTHRES(FLEXCOM2_USART_HW_TX_FIFO_THRES) | FLEX_US_FMR_RXFTHRES(FLEXCOM2_USART_HW_RX_FIFO_THRES) ;

    /* Setup transmitter timeguard register */
    FLEXCOM2_REGS->FLEX_US_TTGR = 0;

    /* Configure FLEXCOM2 USART mode */
    FLEXCOM2_REGS->FLEX_US_MR = ( FLEX_US_MR_USART_MODE_NORMAL | FLEX_US_MR_USCLKS_MCK | FLEX_US_MR_CHRL_8_BIT | FLEX_US_MR_PAR_NO | FLEX_US_MR_NBSTOP_1_BIT | (0 << FLEX_US_MR_OVER_Pos));

    /* Configure FLEXCOM2 USART Baud Rate */
    FLEXCOM2_REGS->FLEX_US_BRGR = FLEX_US_BRGR_CD(108);

    /* Enable FLEXCOM2 USART */
    FLEXCOM2_REGS->FLEX_US_CR = (FLEX_US_CR_TXEN_Msk | FLEX_US_CR_RXEN_Msk);


    /* Initialize instance object */
    flexcom2UsartObj.rxBuffer = NULL;
    flexcom2UsartObj.rxSize = 0;
    flexcom2UsartObj.rxProcessedSize = 0;
    flexcom2UsartObj.rxBusyStatus = false;
    flexcom2UsartObj.rxCallback = NULL;
    flexcom2UsartObj.errorStatus = FLEXCOM_USART_ERROR_NONE;
    flexcom2UsartObj.txBuffer = NULL;
    flexcom2UsartObj.txSize = 0;
    flexcom2UsartObj.txProcessedSize = 0;
    flexcom2UsartObj.txBusyStatus = false;
    flexcom2UsartObj.txCallback = NULL;

    return;
}

FLEXCOM_USART_ERROR FLEXCOM2_USART_ErrorGet( void )
{
    FLEXCOM_USART_ERROR errorStatus = flexcom2UsartObj.errorStatus;

    flexcom2UsartObj.errorStatus = FLEXCOM_USART_ERROR_NONE;

    /* All errors are cleared, but send the previous error state */
    return errorStatus;
}

bool FLEXCOM2_USART_SerialSetup( FLEXCOM_USART_SERIAL_SETUP *setup, uint32_t srcClkFreq )
{
    uint32_t baud = 0;
    uint32_t brgVal = 0;
    uint32_t overSampVal = 0;
    uint32_t usartMode;
    bool status = false;

    if((flexcom2UsartObj.rxBusyStatus == true) || (flexcom2UsartObj.txBusyStatus == true))
    {
        /* Transaction is in progress, so return without updating settings */
        return false;
    }

    if (setup != NULL)
    {
        baud = setup->baudRate;
        if(srcClkFreq == 0)
        {
            srcClkFreq = FLEXCOM2_USART_FrequencyGet();
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

        /* Configure FLEXCOM2 USART mode */
        usartMode = FLEXCOM2_REGS->FLEX_US_MR;
        usartMode &= ~(FLEX_US_MR_CHRL_Msk | FLEX_US_MR_MODE9_Msk | FLEX_US_MR_PAR_Msk | FLEX_US_MR_NBSTOP_Msk | FLEX_US_MR_OVER_Msk);
        FLEXCOM2_REGS->FLEX_US_MR = usartMode | ((uint32_t)setup->dataWidth | (uint32_t)setup->parity | (uint32_t)setup->stopBits | overSampVal);

        /* Configure FLEXCOM2 USART Baud Rate */
        FLEXCOM2_REGS->FLEX_US_BRGR = FLEX_US_BRGR_CD(brgVal);
        status = true;
    }

    return status;
}

bool FLEXCOM2_USART_Read( void *buffer, const size_t size )
{
    bool status = false;
    uint8_t* pBuffer = (uint8_t *)buffer;

    if(pBuffer != NULL)
    {
        /* Check if receive request is in progress */
        if(flexcom2UsartObj.rxBusyStatus == false)
        {
            /* Clear errors that may have got generated when there was no active read request pending */
            FLEXCOM2_USART_ErrorClear();

            /* Clear the errors related to pervious read requests */
            flexcom2UsartObj.errorStatus = FLEXCOM_USART_ERROR_NONE;

            flexcom2UsartObj.rxBuffer = pBuffer;
            flexcom2UsartObj.rxSize = size;
            flexcom2UsartObj.rxProcessedSize = 0;
            flexcom2UsartObj.rxBusyStatus = true;
            status = true;


            /* Clear RX FIFO */
            FLEXCOM2_REGS->FLEX_US_CR = FLEX_US_CR_RXFCLR_Msk;

            if (flexcom2UsartObj.rxSize < FLEXCOM2_USART_HW_RX_FIFO_THRES)
            {
                FLEXCOM2_REGS->FLEX_US_FMR = (FLEXCOM2_REGS->FLEX_US_FMR & ~FLEX_US_FMR_RXFTHRES_Msk) | FLEX_US_FMR_RXFTHRES(flexcom2UsartObj.rxSize);
            }
            else
            {
                FLEXCOM2_REGS->FLEX_US_FMR = (FLEXCOM2_REGS->FLEX_US_FMR & ~FLEX_US_FMR_RXFTHRES_Msk) | FLEX_US_FMR_RXFTHRES(FLEXCOM2_USART_HW_RX_FIFO_THRES);
            }

            /* Enable Read, Overrun, Parity and Framing error interrupts */
            FLEXCOM2_REGS->FLEX_US_IER = (FLEX_US_IER_FRAME_Msk | FLEX_US_IER_PARE_Msk | FLEX_US_IER_OVRE_Msk);

            /* Enable RX FIFO Threshold interrupt */
            FLEXCOM2_REGS->FLEX_US_FIER = FLEX_US_FIER_RXFTHF_Msk;

        }
    }

    return status;
}

bool FLEXCOM2_USART_Write( void *buffer, const size_t size )
{
    bool status = false;
    uint8_t* pBuffer = (uint8_t *)buffer;

    if(pBuffer != NULL)
    {
        /* Check if transmit request is in progress */
        if(flexcom2UsartObj.txBusyStatus == false)
        {
            flexcom2UsartObj.txBuffer = (uint8_t*)pBuffer;
            flexcom2UsartObj.txSize = size;
            flexcom2UsartObj.txProcessedSize = 0;
            flexcom2UsartObj.txBusyStatus = true;
            status = true;

            /* Initiate the transfer by sending first byte */
            while( (FLEXCOM2_REGS->FLEX_US_CSR & FLEX_US_CSR_TXRDY_Msk) && (flexcom2UsartObj.txProcessedSize < flexcom2UsartObj.txSize) )
            {
                if (FLEXCOM2_REGS->FLEX_US_MR & FLEX_US_MR_MODE9_Msk)
                {
                    *((uint16_t*)&FLEXCOM2_REGS->FLEX_US_THR) =  ((uint16_t*)flexcom2UsartObj.txBuffer)[flexcom2UsartObj.txProcessedSize++] & FLEX_US_THR_TXCHR_Msk;
                }
                else
                {
                    *((uint8_t*)&FLEXCOM2_REGS->FLEX_US_THR) =  ((uint8_t*)flexcom2UsartObj.txBuffer)[flexcom2UsartObj.txProcessedSize++];
                }
            }

            if ( flexcom2UsartObj.txProcessedSize >= flexcom2UsartObj.txSize)
            {
                FLEXCOM2_REGS->FLEX_US_IER = FLEX_US_IER_TXEMPTY_Msk;
            }
            else
            {
                FLEXCOM2_REGS->FLEX_US_FIER = FLEX_US_FIER_TXFTHF_Msk;
            }
        }
    }

    return status;
}

void FLEXCOM2_USART_WriteCallbackRegister( FLEXCOM_USART_CALLBACK callback, uintptr_t context )
{
    flexcom2UsartObj.txCallback = callback;
    flexcom2UsartObj.txContext = context;
}

void FLEXCOM2_USART_ReadCallbackRegister( FLEXCOM_USART_CALLBACK callback, uintptr_t context )
{
    flexcom2UsartObj.rxCallback = callback;
    flexcom2UsartObj.rxContext = context;
}

bool FLEXCOM2_USART_WriteIsBusy( void )
{
    return flexcom2UsartObj.txBusyStatus;
}

bool FLEXCOM2_USART_ReadIsBusy( void )
{
    return flexcom2UsartObj.rxBusyStatus;
}

size_t FLEXCOM2_USART_WriteCountGet( void )
{
    return flexcom2UsartObj.txProcessedSize;
}

size_t FLEXCOM2_USART_ReadCountGet( void )
{
    return flexcom2UsartObj.rxProcessedSize;
}

bool FLEXCOM2_USART_ReadAbort(void)
{
    if (flexcom2UsartObj.rxBusyStatus == true)
    {
        /* Disable Read, Overrun, Parity and Framing error interrupts */
        FLEXCOM2_REGS->FLEX_US_IDR = (FLEX_US_IDR_RXRDY_Msk | FLEX_US_IDR_FRAME_Msk | FLEX_US_IDR_PARE_Msk | FLEX_US_IDR_OVRE_Msk);

        flexcom2UsartObj.rxBusyStatus = false;

        /* If required application should read the num bytes processed prior to calling the read abort API */
        flexcom2UsartObj.rxSize = flexcom2UsartObj.rxProcessedSize = 0;
    }

    return true;
}


