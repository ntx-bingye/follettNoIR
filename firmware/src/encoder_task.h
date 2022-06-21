/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.h

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

#include "app.h"

#ifndef _ENCODER_TASK_H    /* Guard against multiple inclusion */
#define _ENCODER_TASK_H


#ifdef __cplusplus
extern "C" {
#endif

    
#if(0)
//use micro define to declare the enconder press event function
#define EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(ScreenMode) \
extern void event_##ScreenMode##_Enconder_Pressed(void);    

//extern void event_screenID_Home_Enconder_Pressed(void); 
    
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_Home)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_SelectCookMode)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_PowerModeSingle)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_TemperatureModeSingle)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_TimerInit)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_Settings)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_Error)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_PerformanceData)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_ErrorLog)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_FirmwareVersions)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_ServicePassCode)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_ServiceAgentSettingsMaximumWattage)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_ServiceAgentSettingsVoltageCalibration)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_ServiceAgentSettingsLimitMaximumCurrent)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_TemperatureScale)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_ScreenBrightness1)    
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_ServiceMenu)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_DualPowerMode)
EVENT_ENCONDER_PRESSED_EXTERN_DECLARE(screenID_DualTempMode)
#endif 


enum ENCODE_STATUS  getEncodeStatus(void);

void adjustTemperature(enum ENCODE_STATUS encoderStatus,gComVar * gVarP);
void adjustPower(enum ENCODE_STATUS encoderStatus,gComVar * gVarP);
void encoder_Task(void);


void encoderPressProcess(void);




#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */


