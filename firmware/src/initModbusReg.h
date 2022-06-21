#ifndef INIT_MODBUS_REG_H
#define INIT_MODBUS_REG_H

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif
/* ============================================================================================= */
/* GLOBAL FUNCTIONS                                                                              */
/* ============================================================================================= */
    
void initControlReg(void);
void initSettingReg(void);
void initSleepReg(void); 
void initAwake(void);
void initHotTemp(void);
void sendInitToMachine(void);
void blockDelay(uint8_t ms);
//void(*initModbusReg[6])(void);

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

