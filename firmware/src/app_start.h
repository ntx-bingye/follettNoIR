#ifndef _START_H
#define _START_H

#include "app.h"
#include "modbus.h"

/* ============================================================================================= */
/* DEFINES                                                                                       */
/* ============================================================================================= */

#define	SYSMODE_STANDBY      0  // standby
#define	SYSMODE_WATERFILL    1  // water fill
#define	SYSMODE_MAKINGICE    2  // making ice
#define	SYSMODE_TIMEDELAY    3  // time delay
#define	SYSMODE_SLEEP        4  // sleep mode
#define	SYSMODE_FLUSH_TD     5  // time delay flush
#define	SYSMODE_FLUSH_SELF   6  // self flush
#define	SYSMODE_FLUSH_SHTL   7  // shuttle flush
#define	SYSMODE_CLEAN        8  // clean and maintenance

/* ============================================================================================= */
/* STRUCTURES                                                                                    */
/* ============================================================================================= */

//typedef struct
//{
//	int  legkit;          // leg-kit installed
//	int  water_filter;    // water filter installed
//	int  drain;           // drain installed
//	int  ambient_water;   // ambient water installed
//	int  sparkling_water; // sparkling water installed
//	int  hot_water;       // hot water installed
//	int  base_stand;      // base stand installed
//	int  hardware_mode;   // hardware mode
//
//} SystemConfigStruct;

/* --------------------------------------------------------------------------------------------- */

//typedef struct
//{
//	// operation settings
//
//	int  language_value; // language selection (default=0, 0=English, 1=Spanish, 2=French)
//	int  brightness_value; // LCD brightness (default=80, range 10-100)
//	int  units_value; // Centigrade or Fahrenheit (default=0, 0=Centigrade, 1=Fahrenheit)
//	int  screen_timeout; // screen timeout value (default=30, range 30-300)
//
//	// modbus status (read only)
//
//	SensorStatusStruct sensor_status; // used to return sensor status from the ice machine (read only)
//
//	uint16_t gear_motor_current;     // gear motor current (range 0-4A, 10ma units, i.e 50=500ma, read only)
//	uint16_t gear_motor_max_current; // gear motor max current (range 0-4A, 10ma units, i.e 50=500ma, read only)
//	uint16_t gear_motor_min_current; // gear motor min current (range 0-4A, 10ma units, i.e 50=500ma, read only)
//
//	uint16_t revision; // IMC software revision (range 0-511, read only)
//
//	uint16_t hotwater_value; // current hot water temperature (range 0-100C, read only)
//
//	// modbus programmable settings (read/write)
//
//	MachineSettingsStruct machine_setting; // used to adjust various machine settings (read/write)
//
//	DispenseStruct dispense_setting; // used to dispense ice, ambient water, hot or carbonated water (read/write)
//
//	uint16_t sleep_time_setting; // sleep time (range 0-1440 minutes, default=720, read/write)
//
//	OutputStateStruct output_setting; // output current state (read/write)
//
//	MachineStatusStruct machine_status; // holds real-time ice machine status information (read/write)
//
//	FlushStruct flush_setting; // used the adjust flush settings (read/write)
//
//	uint16_t hotwater_setting; // hot water setting (range 0-100C, default=85C, read/write)
//
//	uint16_t pm_interval_count; // preventative maintenance due counter (range 0-365 days, default=180, read/write)
//
//	uint16_t filter_interval_count; // filter change due counter (range 0-365 days, default=180, read/write)
//
//	uint16_t ice_dispense_time; // seconds of ice dispense required for wake from sleep (range 0-256, default=30, read/write)
//
//	uint16_t make_ice_delay; // make ice delay setting
//
//} SystemDataStruct;

/* ============================================================================================= */

//typedef struct
//{
//	uint32_t sleep_setting; // sleep mode setting
//	uint32_t language; // current language
//	uint32_t brightness; // LCD brightness
//	uint32_t hot_water_temp; // hot water temperature
//	uint32_t temp_units; // temperature units
//
//} OpDataStruct;

/* ============================================================================================= */

//typedef struct
//{
//	uint32_t water_quality; // water quality setting
//	uint32_t pm_interval; // PM interval
//	uint32_t filter_interval; // filter interval
//	uint32_t time_delay; // time delay setting
//	uint32_t wake_on_sleep; // wake on sleep setting
//	uint32_t flush_setting; // flush enable settings
//	uint32_t make_ice_delay; // make ice delay setting
//	uint32_t screen_timeout; // screen timeout setting
//
//} ServiceDataStruct;

/* ============================================================================================= */
/* EVENT FUNCTIONS                                                                               */
/* ============================================================================================= */

//void ScreenStart_ShowEventUpdate(void);
//void ScreenStart_HideEventUpdate(void);

#endif
