#ifndef EVENT_LOG_H    /* Guard against multiple inclusion */
#define EVENT_LOG_H

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif
    
typedef struct EVE_LOG {
    char name[15];
    int32_t startTime;
    int32_t endTime;
}eveLog_t;    

int16_t filterDue;
int16_t PM_Due;

eveLog_t memLogFile[25];

void initLogEvent(void);
void updateEveLog(void);
    
/* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
