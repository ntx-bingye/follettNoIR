// ****************************************************************************
// Company:
//   CookTek
// File Name:
//   ipcMessage.h
// Summary:
//   This header file provides the structures for the Messages
//   exchanged between the Master and Slave processors.
// *****************************************************************************
#ifndef _IPC_MESSAGE
#define _IPC_MESSAGE

#define IPC_MSG_PREAMBLE     0xa5a55a5a // 1010 0101 1010 0101 0101 1010 0101 101
#define IPC_MSG_POSTAMBLE    0xc3c33c3c // 1100 0011 1100 0011 0011 1100 0011 110
#define IPC_MSG_SIZE         2048
#define IPC_VERSION_SIZE     64
#define ERR1_MASK            0x0001
#define ERR2_MASK            0x0002
#define ERR3_MASK            0x0004
#define ERR4_MASK            0x0008
#define ERR5_MASK            0x0010
#define ERR6_MASK            0x0020
#define ERR7_MASK            0x0040
#define ERR8_MASK            0x0080
#define ERR9_MASK            0x0100
#define ERR10_MASK           0x0200
#define ERR11_MASK           0x0400
#define ERR12_MASK           0x0800
#define ERR13_MASK           0x1001
#define ERR14_MASK           0x2000
#define ERR15_MASK           0x4000
#define ERR16_MASK           0x8000

// --- preamble + msgToken + msgType + fwUpdateMsgToken + fwUpdateMsgValidByteCnt + message CRC + postamble
//       sizeof() returns size_t(unsigned long)
// *** doug ***  ENUMs on this architecture(SAM) are reported to be 1 byte... On the PIC32, 4 bytes...
#define IPC_MSG_FW_UPDATE_SIZE IPC_MSG_SIZE-((sizeof(uint32_t))+\
                                             (sizeof(uint32_t))+\
                                             (sizeof(uint32_t))+\
                                             (sizeof(uint32_t))+\
                                             (sizeof(uint32_t))+\
                                             (sizeof(uint32_t))+\
                                             (sizeof(uint32_t)))

// Message type enumeration (3)
typedef enum{IPC_MSG_TYPE_SET_GET_STATE = 0,  // Mstr -> Slve Command
             IPC_MSG_TYPE_ACK,                // Slve -> Mstr Acknowledge
             IPC_MSG_TYPE_UPGRDE              // Mstr -> Slve Firmware Upgrade
            }ipcMsgType_e;

// Mstr command enumeration
typedef enum{RESET_NF = 0,        // No Flags
             RESET_UPGRDE,        // setup for firmware upgrade
             REVERT,              // revert to KWS
             SETTINGS,
            }masterCMD_e;

// SLVE state enumeration
typedef enum{IDLE = 0,
             ERR,
             RESET,
             UPGRADE,
             POWER_COOK,
             TEMP_COOK,
            }slaveState_e;

typedef union // active eRRORs
{
  uint16_t errSummary;  // active error summary(16 bits)
  struct                // active error bit field
  {
    uint16_t err1  :1;  // RTD failure(SHORTED)
    uint16_t err2  :1;  // RTD failure(OPEN)
    uint16_t err3  :1;  // current > 19.5A
    uint16_t err4  :1;  // over heat
    uint16_t err5  :1;  // NA
    uint16_t err6  :1;  // MAX line voltage exceeded
    uint16_t err7  :1;  // current > 1A in IDLE
    uint16_t err8  :1;  // zero cross frequency out-of-range
    uint16_t err9  :1;  // RTC failure
    uint16_t err10 :1;  // pan TEMP out-of-range
    uint16_t err11 :1;  // RFID tag comm failure
    uint16_t err12 :1;  // RFID initialization failure
    uint16_t err13 :1;  // touch screen failure
    uint16_t err14 :1;  // LCD screen failure
    uint16_t err15 :1;  // NA
    uint16_t err16 :1;  // CPU failure(? if CPU fails, this is probably useless ?)
  }bitfield;
}systemError_t;

typedef struct
{                                               //  MSTR / SLVE
  char         versionString[IPC_VERSION_SIZE]; //   RO     RW  char[] = "CT-00.00.01_202012312359"
  // *** doug ***  ENUMs on this architecture(SAM) are reported to be 1 byte... On the PIC32, 4 bytes... 
  uint32_t     state;                           //   RO     RW  enum --- slaveState_e
  uint32_t     fwUpdateFileCRC;                 //   RW     RO  CRC for pending upgrade file download
  uint16_t     fwUpdateTotalMsgCnt;             //   RW     RO  total message count for pending upgrade file download
  uint16_t     maxWattage;                      //   RW     RW  Maximum allowed Wattage (0-5000)
  uint16_t     voltage;                         //   RW     RW  calibrated voltage(0 - 600)
  uint16_t     temp;                            //   RW     RW  0 - 500
  uint16_t     timer;                           //   RW     RW  timer in seconds, 0=disabled (0-65535)
  uint16_t     avgWattage;                      //   RO     RW  0 - 25
  uint16_t     avgVoltage;                      //   RO     RW  0 - 600
  uint16_t     panCouplingCapability;           //   RO     RW  measured in watts
  uint16_t     spkrChirpLength;                 //   RW     RO  SPKR config 0 - 32767  TBD
  uint16_t     spkrChirpGap;                    //   RW     RO  SPKR config 0 - 32767  TBD
  uint8_t      spkrChirpCount;                  //   RW     RO  SPKR config 0 - 127    TBD
  uint8_t      spkrBusyStatus;                  //   RO     RW  SPKR config number of chirps queued
  uint8_t      currentGov;                      //   RW     RW  Maxcurrent = GOV disabled)
  uint8_t      panDetect;                       //   RO     RW  true/false
  uint8_t      power;                           //   RO     RW  0 - 100%
  uint8_t      avgCurrent;                      //   RO     RW  0 - 25
  uint8_t      avgDuty;                         //   RO     RW  0 - 100%
  uint8_t      dirtyFlag;                       //   RW     RW  true/false(true if slave modified data)
}slaveSettings_t;

typedef struct
{
  systemError_t   errState; // 2 bytes
  // *** doug ***  ENUMs on this architecture(SAM) are reported to be 1 byte... On the PIC32, 4 bytes...
  uint32_t        cmd;      // 4 bytes --- masterCMD_e
  //masterCMD_e cmd;
  slaveSettings_t settings; // ?? bytes
}cmdAckPayload_t;

typedef struct // Firmeare Upgrade message
{ // member of union, for firmware upgrade support
  uint32_t fwUpdateMsgToken;                           // upgrade message counter
  uint32_t fwUpdateMsgValidByteCnt;                    // number of valid bytes in uspgradeMsgData
  uint8_t  fwUpdateMsg[IPC_MSG_FW_UPDATE_SIZE];        // upgrage message payload
}fwUpdatePayload_t;

typedef union
{
  cmdAckPayload_t   cmdACKFrame;
  fwUpdatePayload_t fwUpdateFrame;
}ipcMsgPayload_t;

typedef struct
{
  uint32_t        preamble;              // first 32 bits of every message
  uint32_t        msgToken;              // running count for each message(wraps at 32 bits)
  // *** doug ***  ENUMs on this architecture(SAM) are reported to be 1 byte... On the PIC32, 4 bytes...
  ipcMsgType_e        msgType;               // ipcMsgType_e --- SET_GET_STATE, ACK, UPGRDE(32 bits)
  ipcMsgPayload_t data;                  // upgradeFrame or command/ACK
  uint32_t        messageCRC;            // 32 bit CRC
  uint32_t        postamble;             // last 32 bits of every message
}ipcMsg_t;
#endif // _IPC_MESSAGE




#if 0
=======================================================
 RS-485 inter-processor message exchange
=======================================================
MASTER/SLAVE relationship between the UI and
                             induction board
Every Message received from the MASTER will be ACKed
                             by the SLAVE

Message Type
============
  Firmware Upgrade
    Push Firmware to SLAVE
  Poll
    Periodic Poll for ACK data
  Command
    RESET SLAVE
      with FLAGS: Upgrade: Firmware,
                  REVERT:  to KWS version of stored Firmware
                           Note: For any RESET, SLAVE will
                                 RESET after a delay to
                                 insure delivery of ACK
                           Note: If RESET Upgrade Firmware flag,
                                 SLAVE will prepare for receipt
                                 of upgrade frames, frame count,
                                 CRC, etc..., and ACK accordingly.
                                 Most ACK fields will be N/A.
                                 Each upgrade frame will be
                                 ACKed.
                                 On receipt of CRC, SLAVE will
                                 validate the upgrade and ACK
                                 accordingly.
                                 If CRC is good, SLAVE will ACK
                                 accordingly, and RESET into the
                                 upgraded firmware.
                                 If CRC validation fails, SLAVE
                                 will ACK accordingly, and REVERT
                                 into KWS.
    Set Power
    Set TempF              Note: all temperatures in the SLAVE
                                 will be treated as Farenheit
    Set Timer
    Set MaxWattage
    Set Current Governor
  Acknowledge
    Return all Data Fields
      Version
      State
        RESET
        UPGRADE
        Sleep
        Load Detect
        Power Cook
        TempF Cook
        Timer Cook
        Error
        etc...
      Power
      TempF
      Errors
      Timer
      MaxWattage
      Avg Volts
      Avg Amps
      Avg Duty
      Avg Watts
      Pan Performance
      etc...
#endif


