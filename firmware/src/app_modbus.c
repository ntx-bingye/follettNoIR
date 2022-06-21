#include "gfx/libaria/libaria_events.h"
#include "system/time/sys_time.h"

#include "peripheral/flexcom/usart/plib_flexcom0_usart.h"
#include "peripheral/pio/plib_pio.h"

#include "app_start.h"
#include "app_modbus.h"

/* ============================================================================================= */
/* DEFINES                                                                                       */
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

#define QUEUE_SIZE 10  // modbus queue size

/* ============================================================================================= */
/* STRUCTURES                                                                                    */
/* ============================================================================================= */

typedef union
{
	uint8_t b[8];

	struct __attribute__((packed))
	{
		uint8_t addr;      // slave address
		uint8_t code;      // function code
		uint8_t reg_pad;   // alway zero
		uint8_t reg;       // register address
		uint8_t count_pad; // alway zero
		uint8_t count;     // number of registers to read
		uint8_t crc_lo;    // CRC low byte
		uint8_t crc_hi;    // CRC high byte
	} s;

} ModbusRequestStruct;

/* --------------------------------------------------------------------------------------------- */

typedef union
{
	uint8_t b[8];

	struct __attribute__((packed))
	{
		uint8_t addr;    // slave address
		uint8_t code;    // function code
		uint8_t count;   // number of data bytes to follow
		uint8_t data_lo; // data low byte
		uint8_t data_hi; // data high byte
		uint8_t crc_lo;  // CRC low byte
		uint8_t crc_hi;  // CRC high byte
		uint8_t NU;      // not used
	} s;

} ModbusResponseStruct;

/* --------------------------------------------------------------------------------------------- */

typedef union
{
	uint8_t b[8];

	struct __attribute__((packed))
	{
		uint8_t addr;     // slave address
		uint8_t code;     // function code
		uint8_t reg_pad;  // alway zero
		uint8_t reg;      // register address
		uint8_t value_lo; // value low byte
		uint8_t value_hi; // value high byte
		uint8_t crc_lo;   // CRC low byte
		uint8_t crc_hi;   // CRC high byte
	} s;

} ModbusWriteStruct;


/* --------------------------------------------------------------------------------------------- */

typedef struct
{
	uint8_t code;
	uint16_t reg;
	uint8_t count;
	uint16_t value;

} ModbusQueue;

/* --------------------------------------------------------------------------------------------- */

typedef union
{
	uint16_t w;

	struct __attribute__((packed))
	{
		uint8_t b1;
		uint8_t b2;
	} b;

} BWRD;

/* ============================================================================================= */
/* EXTERNAL DATA                                                                                 */
/* ============================================================================================= */

extern SystemConfigStruct system_config;
extern SystemDataStruct system_data;
extern bool isLEDOn;

/* ============================================================================================= */
/* LOCAL DATA                                                                                    */
/* ============================================================================================= */

static bool request_busy;
static bool write_busy;

static uint8_t receive_data;
static uint8_t receive_buffer[50];

static int modbus_register_number = -1;
static int serial_receive_count = 0;
static int modbus_queue_position=0;
static ModbusRequestStruct req;
static ModbusResponseStruct rsp;
static ModbusWriteStruct wrt;
static int ModbusErrorCounter =0;

static ModbusQueue modbus_queue[QUEUE_SIZE];

/* ============================================================================================= */
/* LOCAL FUNCTION PROTOTYPES                                                                     */
/* ============================================================================================= */

static void ModbusRequest(uint8_t code, uint16_t reg, uint8_t count);
static void ModbusResponse(void);
static void ModbusWrite(uint8_t code, uint16_t reg, uint16_t value);

static uint16_t ModRTU_CRC(const uint8_t *buf, int len);
//static void check_modbus_queue(void);

static void receiveCallback(uintptr_t context);
static void ModbusEnqueue(uint8_t code, uint16_t reg, uint16_t value);
static void ModbusDispEnqueue(uint8_t code, uint16_t reg, uint16_t value);

/* ============================================================================================= */
/* GLOBAL FUNCTIONS                                                                              */
/* ============================================================================================= */

void ModbusInitSerialPort(void)
{
	int i;

    FLEXCOM0_RE_On();

	FLEXCOM0_USART_ReadCallbackRegister(&receiveCallback, 0); // assign UART receive callback

	request_busy = false; // clear modbus request busy
	write_busy = false; // clear modbus write busy

	serial_receive_count = 0; // reset serial receive count

	for (i=0; i<QUEUE_SIZE; i++) // clear all modbus queue
	{
		modbus_queue[i].code  = 0;
		modbus_queue[i].reg   = 0;
		modbus_queue[i].count = 0;
		modbus_queue[i].value = 0;
	}

	FLEXCOM0_USART_Read(&receive_data, 1); // start interrupt callback
}

/* ============================================================================================= */

void ModbusReadSensorStatusRegister(void)
{
	ModbusEnqueue(ANALOG_INPUT_REG_READ, SENSOR_REGISTER, 1); // read sensor status register
}

/* ============================================================================================= */

void ModbusReadGearCurrentRegisters(void)
{
	ModbusEnqueue(ANALOG_INPUT_REG_READ, GEAR_CURRENT_REGISTER, 1); // read gear motor current register
}

/* ============================================================================================= */

void ModbusReadGearCurrentMaxRegister(void)
{
	ModbusEnqueue(ANALOG_INPUT_REG_READ, GEAR_CURRENT_MAX_REGISTER, 1); // read gear motor current max register
}

/* ============================================================================================= */

void ModbusReadGearCurrentMinRegister(void)
{
	ModbusEnqueue(ANALOG_INPUT_REG_READ, GEAR_CURRENT_MIN_REGISTER, 1); // read gear motor current min register
}

/* ============================================================================================= */

void ModbusReadAllGearCurrentRegisters(void)
{
	static int register_number = 0;

	if (register_number == 0) // loop through all register_numbers
	{
		ModbusEnqueue(ANALOG_INPUT_REG_READ, GEAR_CURRENT_REGISTER, 1); // read gear motor current register
		register_number++; // increment register
	}
	else if (register_number == 1)
	{
		ModbusEnqueue(ANALOG_INPUT_REG_READ, GEAR_CURRENT_MAX_REGISTER, 1); // read gear motor max current register
		register_number++; // increment register
	}
	else
	{
		ModbusEnqueue(ANALOG_INPUT_REG_READ, GEAR_CURRENT_MIN_REGISTER, 1); // read gear motor min current register
		register_number = 0; // reset register
	}
}

/* ============================================================================================= */

void ModbusReadIMCRevisionRegister(void)
{
	ModbusEnqueue(ANALOG_INPUT_REG_READ, IMCREVISION_REGISTER, 1); // read IMC revision register
}

/* ============================================================================================= */

void ModbusReadHotWaterTempRegister(void)
{
	ModbusEnqueue(ANALOG_INPUT_REG_READ, HOT_WATER_TEMP_REGISTER, 1); // read hot water temperature register
}

/* ============================================================================================= */

void ModbusReadMachineSettingsRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_READ, SETTINGS_REGISTER, 1); // read machine settings register 40001
}

/* ============================================================================================= */

void ModbusWriteMachineSettingsRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, SETTINGS_REGISTER, system_data.machine_setting.w); // write machine settings register
}

/* ============================================================================================= */

void ModbusReadDispenseRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_READ, DISPENSE_REGISTER, 1); // read dispense register
}

/* ============================================================================================= */

void ModbusWriteDispenseRegister(void)
{
    // Special enqueue to make sure we get a fast response    
	ModbusDispEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, DISPENSE_REGISTER, system_data.dispense_setting.w); // write dispense settings register
}

/* ============================================================================================= */

void ModbusReadSleepTimeRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_READ, SLEEP_TIME_REGISTER, 1); // read sleep mode register 40003
}

/* ============================================================================================= */

void ModbusWriteSleepTimeRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, SLEEP_TIME_REGISTER, system_data.sleep_time_setting); // write sleep time settings register
}

/* ============================================================================================= */

void ModbusReadOutputStateRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_READ, OUTPUT_REGISTER, 1); // read output state register
}

/* ============================================================================================= */

void ModbusWriteOutputStateRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, OUTPUT_REGISTER, system_data.output_setting.w); // write output state settings register
}

/* ============================================================================================= */

void ModbusReadPMDueRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_READ, PM_DUE_REGISTER, 1); // read PM due register
}

/* ============================================================================================= */

void ModbusWritePMDueRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, PM_DUE_REGISTER, system_data.pm_interval_count); // write PM due settings register
}

/* ============================================================================================= */

void ModbusReadFilterDueRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_READ, FILTER_DUE_REGISTER, 1); // read filter due register
}

/* ============================================================================================= */

void ModbusWriteFilterDueRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, FILTER_DUE_REGISTER, system_data.filter_interval_count); // write filter due settings register
}

/* ============================================================================================= */

void ModbusReadMachineStatusRegister(void)
{
	ModbusEnqueue(ANALOG_INPUT_REG_READ, STATUS_REGISTER, 1); // read machine status register
}

/* ============================================================================================= */

void ModbusWriteMachineStatusRegister(void)
{
	//ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, STATUS_REGISTER, system_data.machine_status.w); // write machine status register
}

/* ============================================================================================= */

void ModbusReadIceDispenseTimeRegister(void)
{
	ModbusEnqueue(ANALOG_INPUT_REG_READ, ICE_DISP_TIME_REGISTER, 1); // read ice dispense time register
}

/* ============================================================================================= */

void ModbusWriteIceDispenseTimeRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, ICE_DISP_TIME_REGISTER, system_data.ice_dispense_time); // write ice dispense time settings register
}

/* ============================================================================================= */

void ModbusReadFlushRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_READ, FLUSH_REGISTER, 2); // read flush register
}

/* ============================================================================================= */

void ModbusWriteFlushRegister(void)
{
    //system_data.flush_setting.b.NU=0;
    //system_data.flush_setting.b.SFE=0;
    //system_data.flush_setting.b.SHFE=0;
    //system_data.flush_setting.b.TDFE=0;
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, FLUSH_REGISTER, system_data.flush_setting.w); // write flush enable register
}

/* ============================================================================================= */

void ModbusReadHotWaterSetRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_READ, HOT_WATER_SET_REGISTER, 1); // read hot water set register
}


/* ============================================================================================= */

void ModbusWriteHotWaterSetRegister(void)
{
	ModbusEnqueue(ANALOG_OUTPUT_HOLDING_REG_WRITE, HOT_WATER_SET_REGISTER, system_data.hotwater_setting); // write hot water settings register    
}

/* ============================================================================================= */
/* LOCAL FUNCTIONS                                                                               */
/* ============================================================================================= */

/* ============================================================================================= */

static void ModbusWriteResponse(void)
{
	BWRD crc;
        
	wrt.s.addr     = receive_buffer[0]; // assign slave address
	wrt.s.code     = receive_buffer[1]; // assign function code	
    wrt.s.reg_pad  = receive_buffer[2];
    wrt.s.reg      = receive_buffer[3];
	wrt.s.value_lo = receive_buffer[4]; // assign data low byte
	wrt.s.value_hi = receive_buffer[5]; // assign data high byte
	wrt.s.crc_lo   = receive_buffer[6]; // assign CRC low byte
	wrt.s.crc_hi   = receive_buffer[7]; // assign CRC high byte

	crc.w = ModRTU_CRC(&wrt.b[0], 6); // calculate CRC
        
    //printf("Response wrt %d - %d, %d - %d \r\n", wrt.s.crc_lo, crc.b.b1, wrt.s.crc_hi, crc.b.b2); 
    
	if ((wrt.s.crc_lo == crc.b.b1) && (wrt.s.crc_hi == crc.b.b2)) // verify CRC
	{
		//data.b.b1 = wrt.s.reg_pad; // assign data low byte
		//data.b.b2 = wrt.s.reg; // assign data high byte
        //printf("Response write %d \r\n", modbus_register_number);  
        write_busy = false; // clear write request busy        
	}
    else
    {
        //printf("WRITE CRC FAIL \r\n"); 
        //printf("Response wrt %d, %d, %d, %d, %d, %d, %d, %d\r\n", receive_buffer[0], receive_buffer[1], receive_buffer[2], receive_buffer[3], receive_buffer[4], receive_buffer[5], receive_buffer[6], receive_buffer[7]); 
        
        serial_receive_count = 0; // clear serial receive count
		write_busy = false; // clear write request busy
    }

	modbus_register_number = -1; // invalidate modbus register number
}

static void ModbusResponse(void)
{
	BWRD data, crc;

	rsp.s.addr    = receive_buffer[0]; // assign slave address
	rsp.s.code    = receive_buffer[1]; // assign function code
	rsp.s.count   = receive_buffer[2]; // assign number of data bytes to follow
	rsp.s.data_lo = receive_buffer[3]; // assign data low byte
	rsp.s.data_hi = receive_buffer[4]; // assign data high byte
	rsp.s.crc_lo  = receive_buffer[5]; // assign CRC low byte
	rsp.s.crc_hi  = receive_buffer[6]; // assign CRC high byte

	crc.w = ModRTU_CRC(&rsp.b[0], 5); // calculate CRC
            
	if ((rsp.s.crc_lo == crc.b.b1) && (rsp.s.crc_hi == crc.b.b2)) // verify CRC
	{
		data.b.b2 = rsp.s.data_lo; // assign data low byte
		data.b.b1 = rsp.s.data_hi; // assign data high byte

        //printf("Response %d, %d\r\n", modbus_register_number, data.w); 
        
		switch (modbus_register_number) // select modbus register number
		{
			case SENSOR_REGISTER:
			{
				system_data.sensor_status.w = data.w; // assign sensor status register
			} 
            break;

			case GEAR_CURRENT_REGISTER:
			{
				system_data.gear_motor_current = data.w; // assign gear motor current register
			} 
            break;

			case GEAR_CURRENT_MAX_REGISTER:
			{
				system_data.gear_motor_max_current = data.w; // assign gear motor current max register
			} 
            break;

			case GEAR_CURRENT_MIN_REGISTER:
			{
				system_data.gear_motor_min_current = data.w; // assign gear motor current min register
			} break;

			case IMCREVISION_REGISTER:
			{
				system_data.revision = data.w; // assign IMC revision register
			} break;

			case HOT_WATER_TEMP_REGISTER:
			{
				system_data.hotwater_value = data.w; // assign hot water value register
			} break;

			case SETTINGS_REGISTER:
			{
                // Don't read all the data from this register, only read the bits we are not in charge of 
                // so we can keep them around and not disturb their settings                
				// system_data.machine_setting.w = data.w; // assign machine settings register
                MachineSettingsStruct machine_setting_temp;
                machine_setting_temp.w = data.w;
                system_data.machine_setting.b.UIDR = machine_setting_temp.b.UIDR;
                system_data.machine_setting.b.DLA = machine_setting_temp.b.DLA;
                system_data.machine_setting.b.DLS = machine_setting_temp.b.DLS;
                system_data.machine_setting.b.WM = machine_setting_temp.b.WM;
                //printf("r wm:%d",system_data.machine_setting.b.WM);
                system_data.machine_setting.b.NU = machine_setting_temp.b.NU;
                
			} break;

			case DISPENSE_REGISTER:
			{
				system_data.dispense_setting.w = data.w; // assign dispense settings register
                //system_data.dispense_setting.b.CM
			} break;

			case SLEEP_TIME_REGISTER:
			{
				system_data.sleep_time_setting = data.w; // assign sleep time settings register
			} break;

			case OUTPUT_REGISTER:
			{
				system_data.output_setting.w = data.w; // assign output state settings register
			} break;

			case PM_DUE_REGISTER:
			{                
                //system_data.pm_interval_count = data.b.b1 << 8 | data.b.b2;				
                system_data.pm_interval_count = data.b.b1;				
			} break;

			case FILTER_DUE_REGISTER:
			{
				//system_data.filter_interval_count = data.b.b1 << 8 | data.b.b2; // assign filter due register
                system_data.filter_interval_count = data.b.b1; // assign filter due register
			} break;

			case STATUS_REGISTER:
			{
				system_data.machine_status.w = data.w; // assign machine status register
                // TODO Error testing
                //system_data.machine_status.b.AMPH = 1;
                //system_data.machine_status.b.AMPL = 1;
                //system_data.machine_status.b.CFW = 1;
                //system_data.machine_status.b.CLG = 1;
                //system_data.machine_status.b.HP = 1;
                //system_data.machine_status.b.LWTR = 1;
                //system_data.machine_status.b.Leak = 1;
			} break;

			case ICE_DISP_TIME_REGISTER:
			{
				//system_data.ice_dispense_time = data.w; // assign ice dispense time register
                system_data.make_ice_delay = data.w;
			} break;

			case FLUSH_REGISTER:
			{
				system_data.flush_setting.w = data.w; // assign flush enable settings register
			} break;

			case HOT_WATER_SET_REGISTER:
			{
				system_data.hotwater_setting = data.w; // assign hot water settings register
			} break;
            
            default:
                //printf("REG FAIL \r\n"); 
                serial_receive_count = 0; // clear serial receive count
                request_busy = false; // clear modbus request busy
                break;
		}        
	}
    else
    {
        //printf("CRC FAIL \r\n"); 
        
        serial_receive_count = 0; // clear serial receive count
		request_busy = false; // clear modbus request busy
    }

	modbus_register_number = -1; // invalidate modbus register number
}

static void ModbusDispEnqueue(uint8_t code, uint16_t reg, uint16_t value)
{       
    // Always put it at position 0
    modbus_queue[0].code  = code; // save reuest data
    modbus_queue[0].reg   = reg;
    modbus_queue[0].value = value;
    modbus_queue_position=0;  // Cause position 0 to be checked first on dequeue      
}

/* ============================================================================================= */
static void ModbusEnqueue(uint8_t code, uint16_t reg, uint16_t value)
{
    int i=0;
    
    for (i=0; i<QUEUE_SIZE; i++) // check modbus queue for dupes
    {
        //if (modbus_queue[i].code > 0)
        //{
            if (modbus_queue[i].code == code && modbus_queue[i].reg == reg && modbus_queue[i].value != value)
            {
                //printf("\r\nEnqueue Update %d \r\n", reg); 
                // Update the data because the old data is out of date         
                modbus_queue[i].reg   = reg;           
                modbus_queue[i].value = value;
                return;
            }
            else if (modbus_queue[i].code == code && modbus_queue[i].reg == reg && modbus_queue[i].value == value)
            {  
                //printf("\r\nDupe %d \r\n", reg); 
                return;
            }
        //}
    }
    
    for (i=0; i<QUEUE_SIZE; i++) // save request to modbus queue
    {
        if (modbus_queue[i].code == 0) // find empty queue location
        {
            //printf("\r\nEnqueue %d \r\n", reg); 
            modbus_queue[i].code  = code; // save reuest data
            modbus_queue[i].reg   = reg;
            modbus_queue[i].value = value;
            return;
        }
    }
    
    return;
}

static void ModbusWrite(uint8_t code, uint16_t reg, uint16_t value)
{	
	BWRD val, crc;
    int i;

	if (write_busy == true)// || FLEXCOM0_USART_ReadIsBusy()) // check if modbus write busy
	{
		return;
	}

	write_busy = true; // set modbus write busy	
    
	val.w = value; // assign value

	wrt.s.addr      = MODBUS_SLAVE_ADDRESS; // assign slave address
	wrt.s.code      = code; // assign function code
	wrt.s.reg       = (uint8_t)(reg & 0xFF); // This implementation of MODBUS for Follett uses the actual register address instead of the offset
    wrt.s.reg_pad   = (uint8_t)((reg >> 8) & 0xFF);    // Using the address is not standard MODBUS protocol but was required by the customer    
	wrt.s.value_lo  = (uint8_t)val.b.b2;  // assign value low byte
	wrt.s.value_hi  = (uint8_t)val.b.b1;  // assign value high byte

	crc.w           = ModRTU_CRC(&wrt.b[0], 6); // calculate CRC

	wrt.s.crc_lo    = crc.b.b1; // assign CRC low byte
	wrt.s.crc_hi    = crc.b.b2; // assign CRC high byte        

	//modbus_register_number = -1; // invalidate modbus register number
    modbus_register_number = reg; // assign modbus register number
	
    FLEXCOM0_RE_On();    
    
	FLEXCOM0_USART_Write(&wrt.b[0], 8); // send to serial port          
    
    // Are we expecting a response?
    
    for(i=0;i<UART_DIR_DELAY;i++)
    {
        ModRTU_CRC(&req.b[0], 6); // calculate CRC
    }
	
    FLEXCOM0_RE_Off();
	
}

static void ModbusRequest(uint8_t code, uint16_t reg, uint8_t count)
{	
	int i;
	BWRD crc;

	if (request_busy == true)// || FLEXCOM0_USART_ReadIsBusy()) // check if modbus request busy
	{
		return;
	}

	request_busy = true; // set modbus request busy

	req.s.addr      = MODBUS_SLAVE_ADDRESS; // assign slave address
	req.s.code      = code; // assign function code
    req.s.reg       = (uint8_t)(reg & 0xFF); // This implementation of MODBUS for Follett uses the actual register address instead of the offset
    req.s.reg_pad   = (uint8_t)((reg >> 8) & 0xFF);    // Using the address is not standard MODBUS protocol but was required by the customer    
    
	req.s.count_pad = 0;
	req.s.count     = count; // assign number of registers to read

	crc.w = ModRTU_CRC(&req.b[0], 6); // calculate CRC

	req.s.crc_lo = crc.b.b1; // assign CRC low byte
	req.s.crc_hi = crc.b.b2; // assign CRC high byte

	modbus_register_number = reg; // assign modbus register number

	FLEXCOM0_RE_On();
    
    /*for(i=0;i<UART_DIR_DELAY;i++)
    {
        ModRTU_CRC(&req.b[0], 6); // calculate CRC
    }*/
        
	FLEXCOM0_USART_Write(&req.b[0], 8); // send to serial port    
    
    for(i=0;i<UART_DIR_DELAY;i++)
    {
        ModRTU_CRC(&req.b[0], 6); // calculate CRC
    }
    	
	FLEXCOM0_RE_Off();	
}

/* ============================================================================================= */

static uint16_t ModRTU_CRC(const uint8_t *buf, int len)
{
	int i, j;
	uint16_t crc = 0xFFFF;

	for (i=0; i<len; i++)
	{
		crc ^= (uint16_t)buf[i]; // XOR byte into least significant byte of CRC

		for (j=8; (j != 0); j--) // loop over each bit
		{
			if ((crc & 0x0001) != 0) // if the LSB is set
			{
				crc >>= 1; // shift right and XOR 0xA001
				crc ^= 0xA001;
			}
			else
				crc >>= 1; // just shift right
		}
	}

	return(crc); // return CRC
}

/* ============================================================================================= */

void check_modbus_queue(void)
{
    int counter=0;
	int i = modbus_queue_position;    

    if (request_busy == false && write_busy == false)
    {    
        ModbusErrorCounter=0; // Clear the error counter so that it takes a bit more effort to go into the error code.
        
        // Check for dispense register first and send right now
        /*for(counter=0; counter<QUEUE_SIZE; counter++)        
        {
            if (modbus_queue[i].code != 0) // check if request available
            {
                if (modbus_queue[i].reg == DISPENSE_REGISTER) // check if write
                {
                    ModbusWrite(modbus_queue[i].code, modbus_queue[i].reg, modbus_queue[i].value); // process modbus write
                    
                    modbus_queue[i].code  = 0; // clear current modbus queue
                    modbus_queue[i].reg   = 0;
                    modbus_queue[i].count = 0;
                    modbus_queue[i].value = 0;

                    modbus_queue_position = i;

                    if(isLEDOn)
                    {
                        LED_YELLOW_On();
                        isLEDOn = false;
                    }
                    else
                    {                                              
                        LED_YELLOW_Off();
                        isLEDOn = true;
                    }
                    
                    return;
                }
            }
        }*/
        
        
        // Handle the queue in order.
        for(counter=0; counter<QUEUE_SIZE; counter++)        
        {                           
            if (modbus_queue[i].code != 0) // check if request available
            {
                //printf("Dequeue %d \r\n", modbus_queue[i].reg); 
                if (modbus_queue[i].code == ANALOG_OUTPUT_HOLDING_REG_WRITE) // check if write
                {
                    ModbusWrite(modbus_queue[i].code, modbus_queue[i].reg, modbus_queue[i].value); // process modbus write
                }
                else
                {
                    ModbusRequest(modbus_queue[i].code, modbus_queue[i].reg, 1); // process modbus read request
                }

                modbus_queue[i].code  = 0; // clear current modbus queue
                modbus_queue[i].reg   = 0;
                modbus_queue[i].count = 0;
                modbus_queue[i].value = 0;
                
                modbus_queue_position = i;
                
                return;
            }
            i++;
            if(i==QUEUE_SIZE)
                i=0;
        }
    }
    else
    {
        //int suartError = FLEXCOM0_USART_ErrorGet();
        //printf("MODBUS ERROR %d\r\n",suartError); 
            
        ModbusErrorCounter++;
        if(ModbusErrorCounter>7)
        {
            FLEXCOM0_RE_On();
            //printf("MODBUS ERROR \r\n"); 
            //FLEXCOM0_USART_ErrorGet();
            serial_receive_count = 0; // clear serial receive count
            request_busy = false; // clear modbus request busy      
            write_busy = false; // clear modbus request busy      
            //FLEXCOM0_USART_ReadAbort();
            FLEXCOM0_USART_Read(&receive_data, 1); // start interrupt callback
            ModbusErrorCounter=0;
        }
        /*else
        {
            FLEXCOM0_RE_On();
            printf("MODBUS ERROR WAIT \r\n"); 
            FLEXCOM0_USART_Read(&receive_data, 1); // start interrupt callback
        }*/
    }
}

/* ============================================================================================= */

static void receiveCallback(uintptr_t context)
{    
    int numValues = 7;
    
    if (write_busy)
    {
        numValues=8;
    }
    
	if (FLEXCOM0_USART_ErrorGet() == FLEXCOM_USART_ERROR_NONE) // check if no serial error
	{
		if (serial_receive_count < sizeof(receive_buffer)) // check buffer size
			receive_buffer[serial_receive_count] = receive_data; // store the byte

        //printf("%d", serial_receive_count); 
		serial_receive_count++; // increment serial receive count

		if (serial_receive_count == numValues) // check serial receive count
		{
            FLEXCOM0_RE_Off();
			if (request_busy)
            {                
                ModbusResponse(); // process the serial receive data
                request_busy = false; // clear modbus request busy  
            }
            else
            {
                ModbusWriteResponse();
                write_busy = false;
            }
                           
			serial_receive_count = 0; // clear serial receive count			              
		}
	}
	else
	{	                 
        FLEXCOM0_RE_Off();
        //printf("SERIAL ERROR \r\n"); 
        FLEXCOM0_USART_ErrorGet();
        serial_receive_count = 0; // clear serial receive count
        request_busy = false; // clear modbus request busy      
        write_busy = false; // clear modbus request busy      
        FLEXCOM0_USART_ReadAbort();            
        ModbusErrorCounter=0;            
	}

	FLEXCOM0_USART_Read(&receive_data, 1); // start interrupt callback    
}

