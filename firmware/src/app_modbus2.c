#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "system/time/sys_time.h"
#include "peripheral/flexcom/usart/plib_flexcom2_usart.h"
#include "peripheral/pio/plib_pio.h"
#include "bsp/bsp.h"
#include "configuration.h"
#include "app.h"
#include "app_modbus2.h"
#include "ipcMessage.h"

// =============================================================================================
// DEFINES
// =============================================================================================
//#define UART_DIR_DELAY 2000000    // 4000000

// =============================================================================================
// STRUCTURES
// =============================================================================================

// =============================================================================================
// EXTERNAL DATA
// =============================================================================================
extern uint8_t CookMode;
extern int powerLevelValue;
extern int setTempValue;
extern bool frontWarmerOn;
extern bool rearWarmerOn;
// =============================================================================================
// LOCAL DATA
// =============================================================================================
static bool    modbusReceiveTimeout2 = true;  // signals no response within allotted time

static uint8_t rcvByteCntError2      = false;
static bool    write_busy2           = false;
static int     serial_receive_count2 = 0;
static int     ModbusErrorCounter2   = 0;
static SYS_TIME_HANDLE serial_timer2 = SYS_TIME_HANDLE_INVALID;

static union
{
  int8_t buffer[sizeof(ipcMsg_t)];
  ipcMsg_t message;
} tx2;

static union
{
  int8_t buffer[sizeof(ipcMsg_t)];
  ipcMsg_t message;
} rx2;
static uint8_t receive_data2; // received byte

// =============================================================================================
// LOCAL FUNCTION PROTOTYPES
// =============================================================================================

static void ModbusWrite2(int8_t *txdata);
static void receiveCallback2(uintptr_t context);
static void writeCallback2(uintptr_t context);
static void serial_timer_Callback2(uintptr_t context);

// ============================================================================================= 
// GLOBAL FUNCTIONS
// =============================================================================================
void ModbusInitSerialPort2(void)
{
printf("%d %d\r\n", IPC_MSG_SIZE, sizeof(ipcMsg_t)); 
printf("%d\r\n", sizeof(ipcMsgType_e));

  FLEXCOM2_RE_On();  // select receive direction

  // assign UART receive callback
  FLEXCOM2_USART_ReadCallbackRegister(&receiveCallback2, 0);
  FLEXCOM2_USART_WriteCallbackRegister(&writeCallback2, 0);

  // check if serial timer valid
  if (serial_timer2 != SYS_TIME_HANDLE_INVALID)
  {
    SYS_TIME_TimerStop(serial_timer2);       // stop serial timer
    SYS_TIME_TimerDestroy(serial_timer2);    // delete serial timer
    serial_timer2 = SYS_TIME_HANDLE_INVALID; // invalidate serial timer
  }

  // assign serial timer callback (50 millisecond timeout)
  serial_timer2 = SYS_TIME_CallbackRegisterMS(serial_timer_Callback2, 0, 500, SYS_TIME_PERIODIC);

  SYS_TIME_TimerStop(serial_timer2); // stop serial timer
  // request_busy = false;             // clear modbus request busy
  write_busy2   = false;             // clear modbus write busy
  serial_receive_count2 = 0;         // reset serial receive count

  // start interrupt callback(kick-off of communications process)
  modbusReceiveTimeout2 = true;           // signals no response to poll within allotted time
  modbusReceiveFlag2    = false;          // signals response received
  }


void ModbusCtrl2(void)
{
  //uint16_t jj,kk;
  uint16_t ii;
  static int IterationCount;

  if(IterationCount++ > 25000)
  {
    // printf("ModbusCtrl\r\n");
    IterationCount = 0;

    if(rcvByteCntError2)
    {
      printf("?serial_receive_count: %d\r\n", serial_receive_count2);
      // printf(" ");
      rcvByteCntError2 = false;
    }
  }

  if(modbusReceiveFlag2 == true)
  { // frame received from ICBM
  //  SYS_TIME_TimerStop(serial_timer);  // stop the timer
    SYS_TIME_TimerStart(serial_timer2); // re-start the timer
    ModbusProcessRecieveData2(); // process received frame
  }

  if(modbusReceiveTimeout2 == true)
  { // timer expired without receiving a response from the ICBM

    // not used when testing with PC USB
    memset((int8_t*)tx2.buffer, 0x00, sizeof(ipcMsg_t));
    for(ii=0; ii<IPC_VERSION_SIZE; ii++)
    {
      ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.versionString[ii]    = 0x3b+ii;
    }
    ((ipcMsg_t*)tx2.buffer)->msgType                                          = IPC_MSG_TYPE_SET_GET_STATE;
    ((ipcMsg_t*)tx2.buffer)->preamble                                         = 0xa5a55a5a;
    ((ipcMsg_t*)tx2.buffer)->postamble                                        = 0xc3c33c3c;
    ((ipcMsg_t*)tx2.buffer)->messageCRC                                       = 0xcccccccc;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.errSummary             = 0;
    // ((ipcMsg_t*)tx.buffer)->data.cmdACKFrame.settings.state                  = 0x00000000;
    if(frontWarmerOn)
    {
        if(CookMode == COOK_MODE_POWER)
        {
            ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.state                  = POWER_COOK;
            ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.power                  = powerLevelValue;
        }
        else
        {
            ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.state                  = TEMP_COOK;
            ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.temp                   = setTempValue;            
        }
        // ((ipcMsg_t*)tx.buffer)->data.cmdACKFrame.settings.timer                  = 900; // 15 minutes
    }
    else
    {
        ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.power                  = 0;
        ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.temp                   = 0;
    }
    
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpLength        = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpGap           = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpCount         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrBusyStatus         = 0xee;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.dirtyFlag              = true;
    /*kk = 0;
    for (ii=0; ii<10; ii++)
    {
      printf("%03x  ",ii*jj);
      for (jj=0; jj<16; jj++)
      {
        printf("%02x ", *(((uint8_t*)tx.buffer) + kk));
      kk++;
      }
      printf("\r\n");
    }
    printf("   .\r\n   .\r\n   .\r\n");
    kk = 2015;
    for (ii=126; ii<128; ii++)
    {
      printf("%03x  ",ii*jj);
      for (jj=0; jj<16; jj++)
      {
        printf("%02x ", *(((uint8_t*)tx.buffer) + kk));
      kk++;
      }
      printf("\r\n");
    }*/
    ModbusWrite2((int8_t*)tx2.buffer);
  }
}

void printRX2(void)
{
    uint16_t jj,kk;
  uint16_t ii;
  
    kk = 0;
    for (ii=0; ii<10; ii++)
    {
      printf("%03x  ",ii*jj);
      for (jj=0; jj<16; jj++)
      {
        printf("%02x ", *(((uint8_t*)rx2.buffer) + kk));
      kk++;
      }
      printf("\r\n");
    }
    printf("   .\r\n   .\r\n   .\r\n");
    kk = 2015;
    for (ii=126; ii<128; ii++)
    {
      printf("%03x  ",ii*jj);
      for (jj=0; jj<16; jj++)
      {
        printf("%02x ", *(((uint8_t*)rx2.buffer) + kk));
      kk++;
      }
      printf("\r\n");
    }
}

void ModbusSend2(void)
{
  //uint16_t jj,kk;
  //uint16_t ii;

  if(write_busy2 == false) // check if modbus write busy
  {
    // not used when testing with PC USB
    memset((int8_t*)tx2.buffer, 0x00, sizeof(ipcMsg_t));
    
    ((ipcMsg_t*)tx2.buffer)->preamble                                         = 0x41424344;
    ((ipcMsg_t*)tx2.buffer)->postamble                                        = 0x45464748;
    ((ipcMsg_t*)tx2.buffer)->messageCRC                                       = 0x494A4B4C;   
    
    /*  HF
    for(ii=0; ii<IPC_VERSION_SIZE; ii++)
    {
      ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.versionString[ii]    = 0x3b+ii;
    }
    ((ipcMsg_t*)tx2.buffer)->msgType                                          = IPC_MSG_TYPE_SET_GET_STATE;
    ((ipcMsg_t*)tx2.buffer)->preamble                                         = 0xa5a55a5a;
    ((ipcMsg_t*)tx2.buffer)->postamble                                        = 0xc3c33c3c;
    ((ipcMsg_t*)tx2.buffer)->messageCRC                                       = 0xcccccccc;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.errSummary             = 0;
    if(CookMode == COOK_MODE_TEMP)
    {
        ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.state                  = TEMP_COOK;
        ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.temp                   = 0;        
    }
    else
    {
        ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.state                  = POWER_COOK;
        ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.power                  = powerLevelValue; // 10; // 99
       // ((ipcMsg_t*)tx.buffer)->data.cmdACKFrame.settings.temp                   = 300;
    }
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpLength        = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpGap           = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpCount         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrBusyStatus         = 0xee;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.dirtyFlag              = true;
    
    */
    /*kk = 0;
    for (ii=0; ii<10; ii++)
    {
      printf("%03x  ",ii*jj);
      for (jj=0; jj<16; jj++)
      {
        printf("%02x ", *(((uint8_t*)tx.buffer) + kk));
        kk++;
      }
      printf("\r\n");
    }
    printf("   .\r\n   .\r\n   .\r\n");
    kk = 2015;
    for (ii=126; ii<128; ii++)
    {
      printf("%03x  ",ii*jj);
      for (jj=0; jj<16; jj++)
      {
        printf("%02x ", *(((uint8_t*)tx.buffer) + kk));
      kk++;
      }
      printf("\r\n");
    }*/
    
    ModbusWrite2((int8_t*)tx2.buffer);
  }
}

// ============================================================================================= 
// LOCAL FUNCTIONS
// =============================================================================================
static void ModbusWrite2(int8_t *buffer)
{
  //uint32_t msTickCnt = 0;

  if(write_busy2 == false) // check if modbus write busy
  {
    //SYS_TIME_TimerStop(serial_timer);  // stop the timer
    
    write_busy2 = true; // set modbus write busy	
    FLEXCOM2_RE_On();  // half duplex, setup for TX state)

    // delay, allow time for setup to complete switch to TX state
    //msTickCnt = SYS_TIME_CountToMS(SYS_TIME_CounterGet());
    //while((SYS_TIME_CountToMS(SYS_TIME_CounterGet()) - msTickCnt) < 500);
/*
    printf("%d\r\n",sizeof(ipcMsg_t));
    printf("\r\nbuffer = %c%c%c%c\r\n",buffer[0],buffer[1],buffer[2],buffer[3]);
    
    printf("\r\nbuffer = %c%c%c%c\r\n",buffer[2040],buffer[2041],buffer[2042],buffer[2043]);
 
    printf("\r\nbuffer = %c%c%c%c\r\n",buffer[2044],buffer[2045],buffer[2046],buffer[2047]);
    
    printf("buffer length %d\r\n",sizeof(buffer));
 
    FLEXCOM2_USART_Write(buffer, 2046); // send to serial port +8  
*/
    char sendbuffer22[20] = "Hello world22!";
    FLEXCOM2_USART_Write(sendbuffer22, strlen(sendbuffer22)); // send to serial port +8   
    
    printf("\r\nsendbuffer = %s\r\n",sendbuffer22);
    
    printf("sendbuffer length %d\r\n",strlen(sendbuffer22));        

    //FLEXCOM2_USART_Write(buffer, sizeof(ipcMsg_t)+8); // send to serial port

    // delay, allow time for UART to flush its write buffer
    //msTickCnt = SYS_TIME_CountToMS(SYS_TIME_CounterGet());
    //while((SYS_TIME_CountToMS(SYS_TIME_CounterGet()) - msTickCnt) < 500);
    //FLEXCOM2_RE_Off(); // half duplex, setup for RX state)

    // delay, allow time for setup to complete switch to RX state
   // msTickCnt = SYS_TIME_CountToMS(SYS_TIME_CounterGet());
   // while((SYS_TIME_CountToMS(SYS_TIME_CounterGet()) - msTickCnt) < 500);

    write_busy2 = false; 
    modbusReceiveTimeout2 = false;
    
    //SYS_TIME_TimerStart(serial_timer); // start/re-start serial timer (packet timeout)
    
    //FLEXCOM2_RE_Off(); 
    //FLEXCOM2_USART_Read(&receive_data, 1);
  }
}

#if 0
// =============================================================================================
// Receive frame notification  
static void receiveCallback(uintptr_t context)
{

  // check if no UART ERRORs
  if((FLEXCOM2_USART_ErrorGet() != FLEXCOM_USART_ERROR_NONE)
     (serial_receive_count > sizeof(ipcMsg_t)))
  { // ERROR condition on UART
    FLEXCOM2_RE_Off();
    FLEXCOM2_USART_ErrorGet();
    serial_receive_count = 0;     // clear serial receive count
    write_busy           = false; // clear modbus write busy      
    ModbusErrorCounter   = 0;            
    FLEXCOM2_USART_ReadAbort();            
  }
  else
  { // no UART ERRORs
    LED_YELLOW_Toggle();
    if(serial_receive_count != sizeof(ipcMsg_t))
    {
      rx.buffer[serial_receive_count] = receive_data; // store the byte
      serial_receive_count++; // increment serial receive count
      if(serial_receive_count == sizeof(ipcMsg_t)) // check serial receive count
      { // last byte of the RCV message
        LED_RED_Toggle();
        serial_receive_count = 0;          // clear serial receive count
        write_busy           = false;
        modbusReceiveFlag    = true;
        modbusReceiveTimeout = false;
      }
    }
  }
}
#endif

static void writeCallback2(uintptr_t context)
{
    //printf("%c",receive_data);
    //printf("w");
    //FLEXCOM2_RE_Off(); 
    //FLEXCOM2_USART_Read(&receive_data2, 1);
}

// =============================================================================================
// Receive frame notification  
static void receiveCallback2(uintptr_t context)
{
  //uint32_t msTickCnt = 0;

  //msTickCnt = SYS_TIME_CountToMS(SYS_TIME_CounterGet());
  //while((SYS_TIME_CountToMS(SYS_TIME_CounterGet()) - msTickCnt) < 250);
   //printf("rc ");

  // check if no serial error
  if(FLEXCOM2_USART_ErrorGet() == FLEXCOM_USART_ERROR_NONE)
  {
  //LED_YELLOW_Toggle();
    if(serial_receive_count2 < sizeof(ipcMsg_t))
      rx2.buffer[serial_receive_count2] = receive_data2; // store the byte
    serial_receive_count2++; // increment serial receive count

//  if(serial_receive_count >= sizeof(ipcMsg_t)) // check serial receive count
    if(serial_receive_count2 == sizeof(ipcMsg_t)) // check serial receive count
    {
      //printf("r/r/n");
      serial_receive_count2 = 0;          // clear serial receive count
      write_busy2           = false;
      modbusReceiveFlag2    = true;
      modbusReceiveTimeout2 = false;
    }
    else
    {
      FLEXCOM2_USART_Read(&receive_data2, 1);
    }
    // else if(serial_receive_count > sizeof(ipcMsg_t))
    // {
    //   rcvByteCntError = true;
    // }
  }
  else
  { // ERROR condition on UART
      printf("r error/r/n");
    FLEXCOM2_RE_On();
    FLEXCOM2_USART_ErrorGet();
    FLEXCOM2_USART_ReadAbort();            
    serial_receive_count2 = 0; // clear serial receive count
    write_busy2           = false;       // clear modbus write busy      
    ModbusErrorCounter2   = 0;            
    modbusReceiveFlag2    = false;
    modbusReceiveTimeout2 = true;
    LED_RED_On();
    //SYS_TIME_TimerStart(serial_timer); 
  }
  // read next byte from HW receive buffer
}


// =============================================================================================
static void serial_timer_Callback2(uintptr_t context)
{
  // if Timer expires, time to send message to ICBM
  serial_receive_count2 = 0;
  write_busy2           = false;
  modbusReceiveFlag2    = false;
  modbusReceiveTimeout2 = true;
}

// =============================================================================================
void ModbusProcessRecieveData2(void)
{
  static char version[IPC_VERSION_SIZE];

    // access all ipcMessage data
    //
    //
  
        printf("preamble         :%08x\r\n", (unsigned int)((ipcMsg_t*)rx2.buffer)->preamble);
        printf("postamble        :%08x\r\n", (unsigned int)((ipcMsg_t*)rx2.buffer)->postamble);
        printf("msgToken         :%08x\r\n", (unsigned int)((ipcMsg_t*)rx2.buffer)->msgToken);
        printf("msgType          :%08x\r\n", (unsigned int)((ipcMsg_t*)rx2.buffer)->msgType);
        printf("messageCRC       :%08x\r\n",(unsigned int)((ipcMsg_t*)rx2.buffer)->messageCRC);
        printf("err1             :%d\r\n", ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err1);
        printf("err2            :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err2);
        printf("err3            :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err3);
        printf("err4            :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err4);
        printf("err5            :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err5);
        printf("err6            :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err6);
        printf("err7            :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err7);
        printf("err8            :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err8);
        printf("err9            :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err9);
        printf("err10           :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err10);
        printf("err11           :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err11);
        printf("err12           :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err12);
        printf("err13           :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err13);
        printf("err14           :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err14);
        printf("err15           :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err15);
        printf("err16           :%d\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.bitfield.err16);
        printf("errSummary      :%04x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.errState.errSummary);
        printf("cmd             :%08x\r\n",   (unsigned int)((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.cmd);
        printf("state           :%08x\r\n",   (unsigned int)((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.state);
        printf("voltage         :%04x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.voltage);
        printf("panDetect       :%02x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.panDetect);
        printf("power           :%02u\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.power);
        printf("temp            :%04u\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.temp);
        printf("timer           :%04x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.timer);
        printf("maxWattage      :%04x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.maxWattage);
        printf("current         :%02x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.avgCurrent);
        printf("duty            :%02x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.avgDuty);
        printf("avgWattage      :%04x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.avgWattage);
        printf("avgVoltage      :%04x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.avgVoltage);
        printf("currentGov      :%02x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.currentGov);
        printf("panCoupling     :%04x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.panCouplingCapability);
        printf("spkrChirpLength :%04u\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.spkrChirpLength);
        printf("spkrChirpGap    :%04u\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.spkrChirpGap);
        printf("spkrChirpCount  :%02u\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.spkrChirpCount);
        printf("spkrBusyStatus  :%02u\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.spkrBusyStatus);
        printf("fwUpdateMsgCnt  :%04x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.fwUpdateTotalMsgCnt);
        printf("fwUpdateCRC     :%08x\r\n",   (unsigned int)((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.fwUpdateFileCRC);
        printf("dirtyFlag       :%02x\r\n",   ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.dirtyFlag);
        printf("version         :%s\r\n",     ((ipcMsg_t*)rx2.buffer)->data.cmdACKFrame.settings.versionString);
  
    ((ipcMsg_t*)tx2.buffer)->postamble                                        = IPC_MSG_POSTAMBLE;
    ((ipcMsg_t*)tx2.buffer)->msgToken                                         = 0x00000001;
    ((ipcMsg_t*)tx2.buffer)->msgType                                          = IPC_MSG_TYPE_SET_GET_STATE;
    ((ipcMsg_t*)tx2.buffer)->messageCRC                                       = 0xcccccccc;
    ((ipcMsg_t*)tx2.buffer)->messageCRC                                       = IPC_MSG_POSTAMBLE;
    
    // construct TX buffer
    ((ipcMsg_t*)tx2.buffer)->preamble                                         = IPC_MSG_PREAMBLE;
    ((ipcMsg_t*)tx2.buffer)->postamble                                        = IPC_MSG_POSTAMBLE;
    ((ipcMsg_t*)tx2.buffer)->msgToken                                         = 0x00000001;
    ((ipcMsg_t*)tx2.buffer)->msgType                                          = IPC_MSG_TYPE_SET_GET_STATE;
    ((ipcMsg_t*)tx2.buffer)->messageCRC                                       = 0xcccccccc;
    ((ipcMsg_t*)tx2.buffer)->messageCRC                                       = IPC_MSG_POSTAMBLE;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err1          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err2          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err3          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err4          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err5          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err6          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err7          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err8          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err9          = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err10         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err11         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err12         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err13         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err14         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err15         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.errState.bitfield.err16         = 0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.cmd                             = 0x00000000;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.voltage                = 0xf012;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.panDetect              = 0x34;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.state                  = 0x00000000;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.power                  = 0x56;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.temp                   = 0x789a;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.timer                  = 0xbcde;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.fwUpdateFileCRC        = 0x567891bc;
    ((ipcMsg_t*)tx2.buffer)->messageCRC                                       = IPC_MSG_POSTAMBLE;
    // for testing
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.state                  = POWER_COOK;
    // ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.state                  = TEMP_COOK;
    // ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.state                  = 0x00000000;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.power                  = 90;
    // ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.temp                   = 300;
    // ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.timer                  = 900; // 15 minutes
    // for testing
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.maxWattage             = 0xf012;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.avgCurrent             = 0x78;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.avgDuty                = 0x9a;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.avgWattage             = 0xbcde;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.avgVoltage             = 0xf012;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.currentGov             = 0x34;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.panCouplingCapability  = 0x1234;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpLength        = 0x5678;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpGap           = 0x9abc;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrChirpCount         = 0xde;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.spkrBusyStatus         = 0xf0;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.fwUpdateTotalMsgCnt    = 0x1234;
    ((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.dirtyFlag              = 0xde;
    sprintf(version, "12.34.56_789a-bc-de-fg:hi");
    memcpy((char*)(((ipcMsg_t*)tx2.buffer)->data.cmdACKFrame.settings.versionString), version, IPC_VERSION_SIZE);
    modbusReceiveFlag2 = false;
    printf("Received\r\n");
}


