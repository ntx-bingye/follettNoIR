/*******************************************************************************
  XDMAC PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_xdmac.c

  Summary:
    XDMAC PLIB Implementation File

  Description:
    None

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

#include "device.h"
#include "plib_xdmac.h"
#include "interrupts.h"

/* Macro for limiting XDMAC objects to highest channel enabled */
#define XDMAC_ACTIVE_CHANNELS_MAX 16

typedef struct
{
    uint8_t                inUse;
    XDMAC_CHANNEL_CALLBACK callback;
    uintptr_t              context;
    uint8_t                busyStatus;

} XDMAC_CH_OBJECT ;

XDMAC_CH_OBJECT xdmacChannelObj[XDMAC_ACTIVE_CHANNELS_MAX];

// *****************************************************************************
// *****************************************************************************
// Section: XDMAC Implementation
// *****************************************************************************
// *****************************************************************************

void XDMAC_InterruptHandler( void )
{
    XDMAC_CH_OBJECT *xdmacChObj = (XDMAC_CH_OBJECT *)&xdmacChannelObj[0];
    uint8_t channel = 0;
    volatile uint32_t chanIntStatus = 0;

    /* Iterate all channels */
    for (channel = 0; channel < XDMAC_ACTIVE_CHANNELS_MAX; channel++)
    {
        /* Process events only on active channels */
        if (1 == xdmacChObj->inUse)
        {
            /* Read the interrupt status for the active DMA channel */
            chanIntStatus = XDMAC_REGS->XDMAC_CHID[channel].XDMAC_CIS;

            if (chanIntStatus & ( XDMAC_CIS_RBEIS_Msk | XDMAC_CIS_WBEIS_Msk | XDMAC_CIS_ROIS_Msk))
            {
                xdmacChObj->busyStatus = false;

                /* It's an error interrupt */
                if (NULL != xdmacChObj->callback)
                {
                    xdmacChObj->callback(XDMAC_TRANSFER_ERROR, xdmacChObj->context);
                }
            }
            else if (chanIntStatus & XDMAC_CIS_BIS_Msk)
            {
                xdmacChObj->busyStatus = false;

                /* It's a block transfer complete interrupt */
                if (NULL != xdmacChObj->callback)
                {
                    xdmacChObj->callback(XDMAC_TRANSFER_COMPLETE, xdmacChObj->context);
                }
            }
        }

        /* Point to next channel object */
        xdmacChObj += 1;
    }
}

void XDMAC_Initialize( void )
{
    XDMAC_CH_OBJECT *xdmacChObj = (XDMAC_CH_OBJECT *)&xdmacChannelObj[0];
    uint8_t channel = 0;

    /* Initialize channel objects */
    for(channel = 0; channel < XDMAC_ACTIVE_CHANNELS_MAX; channel++)
    {
        xdmacChObj->inUse = 0;
        xdmacChObj->callback = NULL;
        xdmacChObj->context = 0;
        xdmacChObj->busyStatus = false;

        /* Point to next channel object */
        xdmacChObj += 1;
    }

    /* Configure Channel 0 */
    XDMAC_REGS->XDMAC_CHID[0].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(28) | XDMAC_CC_DSYNC_MEM2PER | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_FIXED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF0 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[0].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 0);
    xdmacChannelObj[0].inUse = 1;

    /* Configure Channel 1 */
    XDMAC_REGS->XDMAC_CHID[1].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(27) | XDMAC_CC_DSYNC_PER2MEM | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_FIXED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF0 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[1].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 1);
    xdmacChannelObj[1].inUse = 1;

    /* Configure Channel 2 */
    XDMAC_REGS->XDMAC_CHID[2].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(26) | XDMAC_CC_DSYNC_MEM2PER | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_FIXED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF0 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[2].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 2);
    xdmacChannelObj[2].inUse = 1;

    /* Configure Channel 3 */
    XDMAC_REGS->XDMAC_CHID[3].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(29) | XDMAC_CC_DSYNC_PER2MEM | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_FIXED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF0 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[3].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 3);
    xdmacChannelObj[3].inUse = 1;

    /* Configure Channel 4 */
    XDMAC_REGS->XDMAC_CHID[4].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(1) | XDMAC_CC_DSYNC_PER2MEM | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_FIXED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF0 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[4].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 4);
    xdmacChannelObj[4].inUse = 1;

    /* Configure Channel 5 */
    XDMAC_REGS->XDMAC_CHID[5].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(0) | XDMAC_CC_DSYNC_MEM2PER | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_FIXED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF0 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[5].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 5);
    xdmacChannelObj[5].inUse = 1;

    /* Configure Channel 6 */
    XDMAC_REGS->XDMAC_CHID[6].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(9) | XDMAC_CC_DSYNC_PER2MEM | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_FIXED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF0 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[6].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 6);
    xdmacChannelObj[6].inUse = 1;

    /* Configure Channel 7 */
    XDMAC_REGS->XDMAC_CHID[7].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(8) | XDMAC_CC_DSYNC_MEM2PER | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_FIXED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF0 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[7].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 7);
    xdmacChannelObj[7].inUse = 1;

    /* Configure Channel 8 */
    XDMAC_REGS->XDMAC_CHID[8].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(17) | XDMAC_CC_DSYNC_PER2MEM | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_FIXED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF0 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[8].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 8);
    xdmacChannelObj[8].inUse = 1;

    /* Configure Channel 9 */
    XDMAC_REGS->XDMAC_CHID[9].XDMAC_CC= (XDMAC_CC_TYPE_PER_TRAN | XDMAC_CC_PERID(16) | XDMAC_CC_DSYNC_MEM2PER | XDMAC_CC_SWREQ_HWR_CONNECTED | XDMAC_CC_DAM_FIXED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF0 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_CSIZE_CHK_1 | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[9].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 9);
    xdmacChannelObj[9].inUse = 1;

    /* Configure Channel 10 */
    XDMAC_REGS->XDMAC_CHID[10].XDMAC_CC= (XDMAC_CC_TYPE_MEM_TRAN | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[10].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 10);
    xdmacChannelObj[10].inUse = 1;

    /* Configure Channel 11 */
    XDMAC_REGS->XDMAC_CHID[11].XDMAC_CC= (XDMAC_CC_TYPE_MEM_TRAN | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[11].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 11);
    xdmacChannelObj[11].inUse = 1;

    /* Configure Channel 12 */
    XDMAC_REGS->XDMAC_CHID[12].XDMAC_CC= (XDMAC_CC_TYPE_MEM_TRAN | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[12].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 12);
    xdmacChannelObj[12].inUse = 1;

    /* Configure Channel 13 */
    XDMAC_REGS->XDMAC_CHID[13].XDMAC_CC= (XDMAC_CC_TYPE_MEM_TRAN | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[13].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 13);
    xdmacChannelObj[13].inUse = 1;

    /* Configure Channel 14 */
    XDMAC_REGS->XDMAC_CHID[14].XDMAC_CC= (XDMAC_CC_TYPE_MEM_TRAN | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[14].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 14);
    xdmacChannelObj[14].inUse = 1;

    /* Configure Channel 15 */
    XDMAC_REGS->XDMAC_CHID[15].XDMAC_CC= (XDMAC_CC_TYPE_MEM_TRAN | XDMAC_CC_DAM_INCREMENTED_AM | XDMAC_CC_SAM_INCREMENTED_AM | XDMAC_CC_SIF_AHB_IF1 | XDMAC_CC_DIF_AHB_IF1 | XDMAC_CC_DWIDTH_BYTE | XDMAC_CC_MBSIZE_SINGLE);
    XDMAC_REGS->XDMAC_CHID[15].XDMAC_CIE= (XDMAC_CIE_BIE_Msk | XDMAC_CIE_RBIE_Msk | XDMAC_CIE_WBIE_Msk | XDMAC_CIE_ROIE_Msk);
    XDMAC_REGS->XDMAC_GIE= (XDMAC_GIE_IE0_Msk << 15);
    xdmacChannelObj[15].inUse = 1;

    return;
}

void XDMAC_ChannelCallbackRegister( XDMAC_CHANNEL channel, const XDMAC_CHANNEL_CALLBACK eventHandler, const uintptr_t contextHandle )
{
    xdmacChannelObj[channel].callback = eventHandler;
    xdmacChannelObj[channel].context = contextHandle;

    return;
}

bool XDMAC_ChannelTransfer( XDMAC_CHANNEL channel, const void *srcAddr, const void *destAddr, size_t blockSize )
{
    volatile uint32_t status = 0;
    bool returnStatus = false;

    if (xdmacChannelObj[channel].busyStatus == false)
    {
        /* Clear channel level status before adding transfer parameters */
        status = XDMAC_REGS->XDMAC_CHID[channel].XDMAC_CIS;
        (void)status;

        xdmacChannelObj[channel].busyStatus = true;

        /*Set source address */
        XDMAC_REGS->XDMAC_CHID[channel].XDMAC_CSA= (uint32_t)srcAddr;

        /* Set destination address */
        XDMAC_REGS->XDMAC_CHID[channel].XDMAC_CDA= (uint32_t)destAddr;

        /* Set block size */
        XDMAC_REGS->XDMAC_CHID[channel].XDMAC_CUBC= XDMAC_CUBC_UBLEN(blockSize);

        /* Enable the channel */
        XDMAC_REGS->XDMAC_GE= (XDMAC_GE_EN0_Msk << channel);

        returnStatus = true;
    }

    return returnStatus;
}

bool XDMAC_ChannelIsBusy (XDMAC_CHANNEL channel)
{
    return (bool)xdmacChannelObj[channel].busyStatus;
}

void XDMAC_ChannelDisable (XDMAC_CHANNEL channel)
{
    /* Disable the channel */
    XDMAC_REGS->XDMAC_GD = (XDMAC_GD_DI0_Msk << channel);
    xdmacChannelObj[channel].busyStatus = false;
    return;
}

XDMAC_CHANNEL_CONFIG XDMAC_ChannelSettingsGet (XDMAC_CHANNEL channel)
{
    return (XDMAC_CHANNEL_CONFIG)XDMAC_REGS->XDMAC_CHID[channel].XDMAC_CC;
}

bool XDMAC_ChannelSettingsSet (XDMAC_CHANNEL channel, XDMAC_CHANNEL_CONFIG setting)
{
    /* Disable the channel */
    XDMAC_REGS->XDMAC_GD= (XDMAC_GD_DI0_Msk << channel);

    /* Set the new settings */
    XDMAC_REGS->XDMAC_CHID[channel].XDMAC_CC= setting;

    return true;
}

void XDMAC_ChannelBlockLengthSet (XDMAC_CHANNEL channel, uint16_t length)
{
    /* Disable the channel */
    XDMAC_REGS->XDMAC_GD= (XDMAC_GD_DI0_Msk << channel);

    XDMAC_REGS->XDMAC_CHID[channel].XDMAC_CBC = length;
}

void XDMAC_ChannelSuspend (XDMAC_CHANNEL channel)
{
    /* Suspend the channel */
    XDMAC_REGS->XDMAC_GRWS = (XDMAC_GRWS_RWS0_Msk << channel);
}

void XDMAC_ChannelResume (XDMAC_CHANNEL channel)
{
    /* Resume the channel */
    XDMAC_REGS->XDMAC_GRWR = (XDMAC_GRWR_RWR0_Msk << channel);
}
