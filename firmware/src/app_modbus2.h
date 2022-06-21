#ifndef _MODBUS2_H
#define _MODBUS2_H

/* ============================================================================================= */
/* STRUCTURES                                                                                    */
/* ============================================================================================= */

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
}ModbusWriteStruct2;

/* ============================================================================================= */
/* GLOBAL FUNCTIONS                                                                              */
/* ============================================================================================= */

void ModbusSend2(void);
void ModbusInitSerialPort2(void);
void ModbusCtrl2(void);
void ModbusProcessRecieveData2(void);

void printRX2(void);

bool    modbusReceiveFlag2; // signals response received

#endif
