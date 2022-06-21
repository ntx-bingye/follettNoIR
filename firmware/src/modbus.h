#ifndef _MODBUS_H
#define _MODBUS_H

#include "comTaskDrv.h"
/* ============================================================================================= */
/* STRUCTURES                                                                                    */
/* ============================================================================================= */

// INPUT REGISTERS (Analog Input Registers, Read-Only)
#define SENSOR_REGISTER             30001
//#define PM_DUE_REGISTER             30002 // Maintenance Register in the new design spreadsheet
//#define FILTER_DUE_REGISTER         30003
#define GEAR_CURRENT_REGISTER       30004
#define GEAR_CURRENT_MAX_REGISTER   30005
#define GEAR_CURRENT_MIN_REGISTER   30006
#define IMCREVISION_REGISTER        30008
#define STATUS_REGISTER             30009
#define HOT_WATER_TEMP_REGISTER     30015

// OUTPUT REGISTERS (Analog Output Holding Registers, Read-Write)
#define SETTINGS_REGISTER       40001
#define DISPENSE_REGISTER       40002
#define SLEEP_TIME_REGISTER     40003
#define OUTPUT_REGISTER         40004
#define ICE_DISP_TIME_REGISTER  40005 // Awake Register
#define FLUSH_REGISTER          40006
#define HOT_WATER_SET_REGISTER  40007
#define PM_DUE_REGISTER         40008
#define FILTER_DUE_REGISTER     40009

#define UART_DIR_DELAY          800000 //1000000

#define MODBUS_SLAVE_ADDRESS             0x01  // modbus slave address
#define ANALOG_OUTPUT_HOLDING_REG_READ   0x03  // Analog Output Holding Registers (Read)
#define ANALOG_INPUT_REG_READ            0x04  // Analog Input Registers (Read-Only)
#define ANALOG_OUTPUT_HOLDING_REG_WRITE  0x06  // Analog Output Holding Registers (Write)

#define QUEUE_SIZE 20  // modbus queue size


typedef union
{
	uint16_t w;

	struct __attribute__((packed))
	{
		uint8_t b1;
		uint8_t b2;
	} b;

} BWRD;

typedef union
{
	uint16_t w; // used to return sensor status from the ice machine (read only)

	struct __attribute__((packed))
	{
		uint16_t RHW  : 1;  // reservoir high water sensor (0=no water, 1=indicates water)
		uint16_t RLW  : 1;  // reservoir low water sensor (0=no water, 1=indicates water)
		uint16_t DT   : 1;  // drip tray sensor (0=no water, 1=indicates water)
		uint16_t Leak : 1;  // chassis water sensor (leak sensor) (0=no water, 1=indicates water)
		uint16_t HHW  : 1;  // hot high water (hot water tank high water sensor) (0=no water, 1=indicates water)
		uint16_t HLW  : 1;  // hot low water (hot water tank low water sensor) (0=no water, 1=indicates water)
		uint16_t NU   : 10; // not used
	} b;

} SensorStatusStruct;

typedef union
{
	uint16_t w; // holds real-time ice machine status information (read/write)

	struct __attribute__((packed))
	{
		uint16_t AMPL : 1; // error low amps (range 0-1, 0=no error, 1=amps low)
		uint16_t AMPH : 1; // error high amps (range 0-1, 0=no error, 1=amps high)
		uint16_t LWTR : 1; // error low water (range 0-1, 0=no error, 1=low water)
		uint16_t CFW  : 1; // error call for water (range 0-1, 0=no error, 1=call for water)
		uint16_t Leak : 1; // error water leak (range 0-1, 0=no error, 1=water leak)
		uint16_t HP   : 1; // error high pressure (range 0-1, 0=no error, 1=drain clog)
		uint16_t CLG  : 1; // error drain clog (range 0-1, 0=no error, 1=drain clog)
		uint16_t IM   : 4; // ice machine operating mode (range 0-8, 0=standby, 1=water fill, 2=ice making, 3=time delay, 4=sleep, 5=time delay flush 6=self flush, 7= shuttle flush 8=clean maintenance
		uint16_t DT   : 1; // drip tray status (range 0-1, 0=drip tray dry, 1=drip tray wet)
		uint16_t PM   : 1; // preventative maintenance due (range 0-1, 0=not due, 1=due)
		uint16_t FILT : 1; // filter change due (range 0-1, 0=not due, 1=due)
		uint16_t BIN  : 1; // bin status (range 0-1, 0=low bin, 1=bin full)
		uint16_t ET   : 1; // error type (range 0-1, 0=soft error, 1=hard error)
	} b;

} MachineStatusStruct;

typedef union
{
	uint16_t w; // used to adjust various machine settings (read/write)

	struct __attribute__((packed))
	{
		uint16_t TDS  : 1; // TDS setting (default=0, 0=low TDS setting, 1=high TDS setting)
		uint16_t TD   : 1; // time delay (default=0, 0=short time delay, 1=long time delay)
		uint16_t SR   : 1; // software reset (default=0, writing this bit to a 1 will cause a software reset of the IMC)
		uint16_t UIDR : 1; // UI Download Request
        uint16_t DLA  : 1; 
        uint16_t DLS  : 1; // not used
        uint16_t WM   : 1; // not used
        uint16_t NU   : 1; // not used        
		uint16_t FR  : 4; // filter replacement interval (range 0-12 months, default=6)
		uint16_t PM  : 4; // preventative maintenance interval (range 0-12 months, default=6)
	} b;

} MachineSettingsStruct;

typedef union
{
	uint16_t w; // used to dispense ambient water, hot or carbonated water, and ice (read/write)

	struct __attribute__((packed))
	{
		uint16_t Ice   : 1;  // ice dispense (default=0, 0=no dispense, 1=dispense)
		uint16_t AMB   : 1;  // ambient water dispense (default=0, 0=no dispense, 1=dispense)
		uint16_t HoC   : 1;  // hot or carbonated water dispense (default=0, 0=no dispense, 1=dispense)
		uint16_t NU3   : 1; // not used
        uint16_t NU4   : 1; // not used
        uint16_t NU5   : 1; // not used
        uint16_t NU6   : 1; // not used
        uint16_t NU7   : 1; // not used
        uint16_t HaveDT   : 1; //  Moved from bit 12 because control board moved it
        uint16_t NU9   : 1; // not used
        uint16_t NU10  : 1; // not used
        uint16_t NU11  : 1; // not used
        uint16_t xHaveDT    : 1;
        uint16_t HaveACC0    : 1;
        uint16_t HaveAcc1    : 1;
		uint16_t CM    : 1;  // clean mode (default=0, 0=normal operation, 1=clean mode)
	} b;

} DispenseStruct;

typedef union
{
	uint16_t w; // used to turn on-off components in service mode (read/write)

	struct __attribute__((packed))
	{
		uint16_t Comp : 1; // toggle compressor (0=turn off, 1=turn on)
		uint16_t AUG  : 1; // toggle gear motor (auger) (0=turn off, 1=turn on)
		uint16_t Fan  : 1; // toggle fan (0=turn off, 1=turn on)
		uint16_t FS   : 1; // toggle fail-safe valve (0=turn off, 1=turn on)
		uint16_t AMB  : 1; // toggle ambient water dispense (0=turn off, 1=turn on)
		uint16_t HoC  : 1; // toggle hot or carbonated dispense (0=turn off, 1=turn on)
		uint16_t UV   : 1; // toggle UV light (0=turn off, 1=turn on)
		uint16_t Ice  : 1; // toggle ice dispense motor (0=turn off, 1=turn on)
		uint16_t PMP  : 1; // toggle hot water pump (0=turn off, 1=turn on)
		uint16_t LCD  : 1; // toggle LV Drain
        uint16_t HRLY : 1; // toggle Hot Relay
        uint16_t HTNK : 1; // toggle Hot Tank
        uint16_t VYV  : 1; // toggle Vyv
        uint16_t REM : 3; 
	} b;

} OutputStateStruct;

typedef union
{
	uint16_t w; // flush enable (read/write)

	struct __attribute__((packed))
	{
		uint16_t TDFE : 1;  // time delay flush enable (default=0, 0=disable, 1=enable)
		uint16_t SFE  : 1;  // self flush enable (default=0, 0=disable, 1=enable)
		uint16_t SHFE : 1;  // shuttle flush enable (default=0, 0=disable, 1=enable)
		uint16_t NU   : 13; // not used
	} b;

} FlushStruct;


SensorStatusStruct    sensorRegVal;  //SENSOR_REGISTER
DispenseStruct        dispenseRegVal; //DISPENSE_REGISTER
MachineSettingsStruct settingRegVal; //SETTINGS_REGISTER
MachineStatusStruct   statusRegVal; //
OutputStateStruct     outputRegVal;
DispenseStruct        drinkType; 
uint16_t              firmwareVal;
uint16_t              pmDueRegVal;
uint16_t              filterDueRegVal;
uint16_t              gearCurrentRegVal;
uint16_t              gearCurrentMaxRegVal;
uint16_t              gearCurrentMinRegVal;
uint16_t              hotWaterTempRegVal;


#define MODE_DISP ((dispenseRegVal.w)&(0xfff8))
#define ICE   ((0x01)| MODE_DISP)
#define AMB_WATER ((0x02)| MODE_DISP)
#define HOT_WATER ((0x04)| MODE_DISP)
#define STOP_SPLASH (MODE_DISP)

#define SET_CM ((dispenseRegVal.w) |(0x8000))
#define CLR_CM ((dispenseRegVal.w) &(0x7fff))

uint16_t CRC16 (const uint8_t *nData, uint16_t wLength);
//void check_modbus_queue(void);
void writeAO_Wr_H_RegCmd(uint16_t regAddr,uint16_t value,Rs485Com *modBus);
void sendDspnCmd(DispenseStruct drinkType, Rs485Com *modBus);
void readAO_Wr_H_RegCmd(uint16_t regAddr,uint8_t count,Rs485Com *modBus);
void readAI_Rd_RegCmd(uint16_t regAddr,uint8_t count,Rs485Com *modBus);

#endif
