/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "system/time/sys_time.h"
#include "peripheral/flexcom/usart/plib_flexcom0_usart.h"
#include "peripheral/pio/plib_pio.h"
#include "bsp/bsp.h"
#include "configuration.h"
#include "app.h"
#include "ipcMessage.h"
#include "comTask.h"
#include "screen_max_watage.h"

extern uint8_t CookMode;
extern bool frontWarmerOn;
extern bool rearWarmerOn;

comStates_e comState;

SYS_TIME_HANDLE tmr;

static void delayUUS(uint32_t us);
//static void delayMMS(uint32_t ms);

static union
{
  uint8_t buffer[sizeof(ipcMsg_t)]; //by bing
  ipcMsg_t message;
} tx;

static union
{
  uint8_t  buffer[sizeof(ipcMsg_t)];  //by bing
  ipcMsg_t message;
} rx;

void printfIpcMsg_tBuffer(ipcMsg_t* pBuffer);

void Com_Initialize(void)
{
    FLEXCOM0_USART_WriteCallbackRegister(ComWriteCallback, 0);
    FLEXCOM0_USART_ReadCallbackRegister(ComReadCallback, 0);
    FLEXCOM0_RE_Off();
    comState = COM_STATE_IDLE;
}

void StartRs485Poll(void)  //call in second callback;
{
    FLEXCOM0_RE_On();
    if((comState !=  COM_STATE_IDLE) ||( FLEXCOM0_USART_ErrorGet() != FLEXCOM_USART_ERROR_NONE))
    {
        FLEXCOM0_USART_Initialize();
        Com_Initialize();
    }
    comState = COM_STATE_TX_INITIATE;
}

void ComStateMachine(void) //call by appTask;
{
    if(comState == COM_STATE_TX_INITIATE) 
    {
        FLEXCOM0_RE_On();
        PrepareSendBuffer();
        FLEXCOM0_USART_Write(tx.buffer, 2048);
        comState = COM_STATE_TX_IN_PROGRESS;
    }
    else if(comState == COM_STATE_TX_COMPLETE)
    {
        delayUUS(200);       //For the RS485 tx to rx  control line, need onebyte delay. 120us
        FLEXCOM0_RE_Off();
        FLEXCOM0_USART_Read(rx.buffer, 2048);
        comState = COM_STATE_RX_IN_PROGRESS;
    }
    else if(comState == COM_STATE_RX_COMPLETE)
    {
        FLEXCOM0_RE_On();
        ProcessRecieveData();
        comState = COM_STATE_IDLE;
    }
}
    
void ComWriteCallback(uintptr_t context)   
{   
    if((FLEXCOM0_USART_ErrorGet() == FLEXCOM_USART_ERROR_NONE)&&(FLEXCOM0_USART_WriteCountGet() >= 2048))
        comState = COM_STATE_TX_COMPLETE;    
}

void ComReadCallback(uintptr_t context) 
{    
    if((FLEXCOM0_USART_ErrorGet() == FLEXCOM_USART_ERROR_NONE)&& (FLEXCOM0_USART_ReadCountGet() >= 2048))
        comState = COM_STATE_RX_COMPLETE; 
}

void PrepareSendBuffer(void)
{
    //static char version[IPC_VERSION_SIZE];
    static uint32_t  MsgToken = 0;   
    
    //Clear TX, RX Buffer
    memset((uint8_t*)(tx.buffer), 0x00, sizeof(ipcMsg_t));  //Clear TX Buffer
    
    ipcMsg_t* pTxbuffer;
    pTxbuffer=(ipcMsg_t*)(tx.buffer);
    uint16_t ii; 
    for(ii=0; ii<IPC_VERSION_SIZE; ii++)
    {
      pTxbuffer->data.cmdACKFrame.settings.versionString[ii]    = 0x3b+ii;
    }
    
    pTxbuffer->msgToken                                         = MsgToken++;
    pTxbuffer->msgType                                          = IPC_MSG_TYPE_SET_GET_STATE;
    pTxbuffer->preamble                                         = IPC_MSG_PREAMBLE;
    pTxbuffer->postamble                                        = IPC_MSG_POSTAMBLE;
    pTxbuffer->messageCRC                                       = 0x11111111;
    pTxbuffer->data.cmdACKFrame.errState.errSummary             = 0;
    pTxbuffer->data.cmdACKFrame.cmd                             = SETTINGS;
   
    if(CookMode == COOK_MODE_TEMP)
    {
        pTxbuffer->data.cmdACKFrame.settings.state               = TEMP_COOK;
        pTxbuffer->data.cmdACKFrame.settings.temp                = gCurVar0.setTempValue;   
        pTxbuffer->data.cmdACKFrame.settings.power = 0;
    }
    else
    {
        pTxbuffer->data.cmdACKFrame.settings.state               = POWER_COOK;
        pTxbuffer->data.cmdACKFrame.settings.power               = gCurVar0.setPowerValue; // 10; // 99
        pTxbuffer->data.cmdACKFrame.settings.temp = 0;
    }
    
    pTxbuffer->data.cmdACKFrame.settings.maxWattage              = convertIdxToActualMaxWattage(gCurVar0.ActualVoltage);
    //pTxbuffer->data.cmdACKFrame.settings.panDetect               = ?
    pTxbuffer->data.cmdACKFrame.settings.spkrChirpLength         = 0;
    pTxbuffer->data.cmdACKFrame.settings.spkrChirpGap            = 0;
    pTxbuffer->data.cmdACKFrame.settings.spkrChirpCount          = 0;
    pTxbuffer->data.cmdACKFrame.settings.spkrBusyStatus          = 0xee;
    pTxbuffer->data.cmdACKFrame.settings.dirtyFlag               = true;

    //added by Bing for new verion.
    // pingEnable:UI will enable(1) or disable(0) the ping to test the pan wattage. 
    pTxbuffer->data.cmdACKFrame.settings.pingEnable              = gCurVar0.pingEnable;
    
    //ICBM will send the current voltage frequency to display.
    pTxbuffer->data.cmdACKFrame.settings.voltagefreq             = 60;
    
    //UI will send the voltage calibration offset to the ICBM
    pTxbuffer->data.cmdACKFrame.settings.calvoltoffset           = gCurVar0.TxOffsetVoltage;
    pTxbuffer->data.cmdACKFrame.settings.currentGov              = gCurVar0.currentGov;
   
    printf("Send to ICBM!\r\n");
    // printfIpcMsg_tBuffer(pTxbuffer);   
    
}

void printfIpcMsg_tBuffer(ipcMsg_t* pBuffer)
{
    printf("\r\n***************ipcMsg_t Data Start ***********************************************\r\n");
        
    printf("preamble         :%08lx\r\n", pBuffer->preamble); 
    printf("postamble        :%08lx\r\n", pBuffer->postamble);
    printf("Signed postamble        :%08lx\r\n", pBuffer->postamble);        
    printf("msgToken         :%08lx\r\n", pBuffer->msgToken);
    printf("msgType          :%08lx\r\n", pBuffer->msgType);
    printf("messageCRC       :%08lx\r\n", pBuffer->messageCRC);
    printf("err1             :%d\r\n", pBuffer->data.cmdACKFrame.errState.bitfield.err1);
    printf("err2            :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err2);
    printf("err3            :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err3);
    printf("err4            :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err4);
    printf("err5            :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err5);
    printf("err6            :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err6);
    printf("err7            :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err7);
    printf("err8            :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err8);
    printf("err9            :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err9);
    printf("err10           :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err10);
    printf("err11           :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err11);
    printf("err12           :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err12);
    printf("err13           :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err13);
    printf("err14           :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err14);
    printf("err15           :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err15);
    printf("err16           :%d\r\n",     pBuffer->data.cmdACKFrame.errState.bitfield.err16);
    printf("errSummary      :%04x\r\n",   pBuffer->data.cmdACKFrame.errState.errSummary);
    printf("cmd             :%08lx\r\n",   pBuffer->data.cmdACKFrame.cmd);
    printf("state           :%08lx\r\n",   pBuffer->data.cmdACKFrame.settings.state);
    printf("voltage         :%04x\r\n",   pBuffer->data.cmdACKFrame.settings.voltage);
    printf("panDetect       :%02x\r\n",   pBuffer->data.cmdACKFrame.settings.panDetect);
    printf("power           :%02u\r\n",   pBuffer->data.cmdACKFrame.settings.power);
    printf("temp            :%04u\r\n",   pBuffer->data.cmdACKFrame.settings.temp);
    printf("timer           :%04x\r\n",   pBuffer->data.cmdACKFrame.settings.timer);
    printf("maxWattage      :%04x\r\n",   pBuffer->data.cmdACKFrame.settings.maxWattage);
    printf("current         :%02x\r\n",   pBuffer->data.cmdACKFrame.settings.avgCurrent);
    printf("duty            :%02x\r\n",   pBuffer->data.cmdACKFrame.settings.avgDuty);
    printf("avAvgWattage      :%04x\r\n",   pBuffer->data.cmdACKFrame.settings.avgWattage);
    printf("avgVoltage      :%04x\r\n",   pBuffer->data.cmdACKFrame.settings.avgVoltage);
    printf("currentGov      :%02x\r\n",   pBuffer->data.cmdACKFrame.settings.currentGov);
    printf("panCoupling     :%04x\r\n",   pBuffer->data.cmdACKFrame.settings.panCouplingCapability);
    printf("spkrChirpLength :%04u\r\n",   pBuffer->data.cmdACKFrame.settings.spkrChirpLength);
    printf("spkrChirpGap    :%04u\r\n",   pBuffer->data.cmdACKFrame.settings.spkrChirpGap);
    printf("spkrChirpCount  :%02u\r\n",   pBuffer->data.cmdACKFrame.settings.spkrChirpCount);
    printf("spkrBusyStatus  :%02u\r\n",   pBuffer->data.cmdACKFrame.settings.spkrBusyStatus);
    printf("fwUpdateMsgCnt  :%04x\r\n",   pBuffer->data.cmdACKFrame.settings.fwUpdateTotalMsgCnt);
    printf("fwUpdateCRC     :%08x\r\n",   (unsigned int)pBuffer->data.cmdACKFrame.settings.fwUpdateFileCRC);
    printf("dirtyFlag       :%02x\r\n",   pBuffer->data.cmdACKFrame.settings.dirtyFlag);
    printf("version         :%s\r\n",     pBuffer->data.cmdACKFrame.settings.versionString);
    printf("\r\n************************* Data End  ***********************************************\r\n");
}

void ProcessRecieveData(void)
{
    ipcMsg_t* pRxBuffer;
    pRxBuffer = (ipcMsg_t*)(rx.buffer);
  
    printf("Get from ICBM!\r\n");
    //printfIpcMsg_tBuffer(pRxBuffer);   

    gCurVar0.Rxtemperature     = pRxBuffer->data.cmdACKFrame.settings.temp;
    gCurVar0.LineFrequency = pRxBuffer->data.cmdACKFrame.settings.voltagefreq;
    gCurVar0.AvgWattage       = pRxBuffer->data.cmdACKFrame.settings.avgWattage;
    gCurVar0.avgVoltage     = pRxBuffer->data.cmdACKFrame.settings.avgVoltage;
    gCurVar0.ActualVoltage  = pRxBuffer->data.cmdACKFrame.settings.voltage;
    gCurVar0.RxOffsetVoltage = pRxBuffer->data.cmdACKFrame.settings.calvoltoffset;
    gCurVar0.tempValue      = (int)(pRxBuffer->data.cmdACKFrame.settings.temp);   
    gCurVar0.PanDetect     = pRxBuffer->data.cmdACKFrame.settings.panDetect;                       //   RO     RW  true/false

}

 #if 0
// millisecond delay
static void delayMMS(uint32_t ms)
{
	SYS_TIME_HANDLE tmr;
    if (SYS_TIME_DelayMS(ms, &tmr) != SYS_TIME_SUCCESS) 
	{
		#if DEBUG_PRINT
		printf("\r\nMS delay failed ...");
		#endif
        return;
    }
    while (SYS_TIME_DelayIsComplete(tmr) == false);
}
#endif

#if 1
// microsecond delay
static void delayUUS(uint32_t us)
{
	SYS_TIME_HANDLE ustmr;
    if (SYS_TIME_DelayUS(us, &ustmr) != SYS_TIME_SUCCESS) 
	{
		#if DEBUG_PRINT
		printf("\r\nMS delay failed ...");
		#endif
        return;
    }
    while (SYS_TIME_DelayIsComplete(ustmr) == false);
}
#endif
