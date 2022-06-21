#include "ipcMessage.h"
#include "comTaskDrv.h"
#include "app.h"
#include "screens/start.h"
#include "modbus.h"
//#include "cmd_fifo.h"
#include "timer.h"

static void    comInit(Rs485Com * modBus);
static void    startRS485Poll(Rs485Com * modBus);
static void    ComWriteCallback(uintptr_t context);
static void    ComReadCallback(uintptr_t context);
static uint8_t ProcessRecieveData(Rs485Com * modBus);
uint8_t rx_buf[12];
uint8_t tx_buf[12];

Rs485Com ModBus = {
    .cmdID    = 0,
    .txBuf    = tx_buf,
    .rxBuf    = rx_buf,
    .comState = COM_IDLE,
    ._com_Init_= comInit,
    ._StartRs485Poll_ = startRS485Poll,
    ._ComWriteCallback_ = ComWriteCallback,   
    ._ComReadCallback_ = ComReadCallback,
    ._ProcessRecieveData_= ProcessRecieveData
};

Rs485Com* modBus = &ModBus;
uint8_t errno_com = 0;

static void comInit(Rs485Com * modBus)
{
    FLEXCOM0_USART_WriteCallbackRegister(ComWriteCallback, (uintptr_t)modBus);
    FLEXCOM0_USART_ReadCallbackRegister(ComReadCallback, (uintptr_t)modBus);

    modBus->comState = COM_IDLE;
}

void initModBus(void)
{
    modBus->rxLen = 0;
    modBus->txLen = 0;
    modBus->cmdID = 0;
    modBus->comState = COM_IDLE;
    cmdTimeout_timer = -1;
}

static void startRS485Poll(Rs485Com * modBus)
{
    cmdTimeout_timer = -1;
   
    FLEXCOM0_RE_On();
    
    modBus->comState = COM_TX_DOING;    
    if(modBus->rxLen != 0) cmdTimeout_timer = 0; //start command timeout timer
    
    FLEXCOM0_USART_Write(modBus->txBuf, modBus->txLen); 
}

void ComWriteCallback(uintptr_t context)
{
    if(FLEXCOM0_USART_ErrorGet() == FLEXCOM_USART_ERROR_NONE) //&&(FLEXCOM0_USART_WriteCountGet() == modBus->txLen))
    {
        FLEXCOM0_RE_Off();
        modBus->comState  = COM_RX_DOING;  

        if(0 == modBus->rxLen) modBus->comState = COM_IDLE;
        else                   FLEXCOM0_USART_Read(modBus->rxBuf, modBus->rxLen);
    }
    else //tx error
    {
        initModBus();        
        FLEXCOM0_USART_Initialize();
        modBus->_com_Init_(modBus);
    }
}

     
void ComReadCallback(uintptr_t context)  
{
    if((FLEXCOM0_USART_ErrorGet() == FLEXCOM_USART_ERROR_NONE)&&
            (FLEXCOM0_USART_ReadCountGet() == modBus->rxLen))
    {
        FLEXCOM0_RE_On();
        cmdTimeout_timer = -1;
        errno_com = ProcessRecieveData(modBus);
    }
    else //rx error
    {
        initModBus();        
        FLEXCOM0_USART_Initialize();
        modBus->_com_Init_(modBus);
    }
}

void CmdQuePro(uint16_t cmdId, uint16_t val)
{
  switch(cmdId)
  {
     case OUTPUT_REGISTER:          outputRegVal.w = (0x1fff)&val;      break;
     case PM_DUE_REGISTER:          pmDueRegVal = (0x1ff)&val;          break;
     case FILTER_DUE_REGISTER:      filterDueRegVal = (0x1ff)&val;      break;
     case SENSOR_REGISTER:          sensorRegVal.w = (0x3f)&val;        break;
     case GEAR_CURRENT_REGISTER:    gearCurrentRegVal = (0x1ff)&val;    break;
     case GEAR_CURRENT_MAX_REGISTER:gearCurrentMaxRegVal = (0x1ff)&val; break;
     case GEAR_CURRENT_MIN_REGISTER:gearCurrentMinRegVal = (0x1ff)&val; break;
     case IMCREVISION_REGISTER:     firmwareVal = (0x1ff)&val;          break;
     case STATUS_REGISTER:          statusRegVal.w = (0x7fff)&val;      break;
     case HOT_WATER_TEMP_REGISTER:  hotWaterTempRegVal = (0xff)&val;    break;
     default: printf("default\n");                                      break;
  }
}

uint8_t ProcessRecieveData(Rs485Com * modBus)
{
    #define GET_CRC (((uint16_t)(modBus->rxBuf[(modBus->rxLen)-1])<<8) |(modBus->rxBuf[(modBus->rxLen)-2]))
    #define CAL_CRC CRC16(modBus->rxBuf, (modBus->rxLen)-2)

    if(GET_CRC != CAL_CRC) {initModBus();return 1;}

    uint16_t val = ((modBus->rxBuf[3])<<8) | (modBus->rxBuf[4]);
    
    CmdQuePro(modBus->cmdID,val);
    
    initModBus();
    return 2;

    #undef GET_CRC
    #undef CAL_CRC   
 }

/* *****************************************************************************
 End of File
 */
