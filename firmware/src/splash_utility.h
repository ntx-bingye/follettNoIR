
#ifndef SPLASH_UTILITY_H    /* Guard against multiple inclusion */
#define SPLASH_UTILITY_H

#include "app_touchless.h"
#include "gfx/legato/widget/imagesequence/legato_widget_imagesequence.h"


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

bool updateHotWaterReadyEnable;    
int16_t pwm2_3_LEDcnt;  
int16_t LCDcnt;
int16_t advanceUISecTimer;
int16_t otherUISecTimer;
typedef enum {HOLD_NONE = 0,HOLD_ICE,     HOLD_AMB_WATER,     HOLD_HOT_WATER,
                            OCCUR_ICE,    OCCUR_AMB_WATER,    OCCUR_HOT_WATER,
                            DISAPPEAR_ICE,DISAPPEAR_AMB_WATER,DISAPPEAR_HOT_WATER
              }INPUT_EVENT_T;

typedef enum {HOLD_CUP,HOLD_NO_CUP,OCCUR_CUP,DISAPPEAR_CUP } IR_EVENT;

typedef enum {HIDEN,SHOWN,PLAY} IMG_SQN_STATUS_T;

typedef struct {
    IR_EVENT      evtIR;
    INPUT_EVENT_T evtButton;
    INPUT_EVENT_T evtSensor;    
}Splash_input_t;

Splash_input_t splashInput;

typedef struct ImgSqn_t{
    bool installed ;
    leImageSequenceWidget* ImgSqnWgt;
    uint32_t firstIdx;
    uint32_t lastIdx;
    uint32_t curIdx;
    uint32_t holdIdx;
    IMG_SQN_STATUS_T status;
    void(*_ImgSqnPlay_)(struct ImgSqn_t*);
} ImgSqn_t;

ImgSqn_t ImgSqnIce;
ImgSqn_t ImgSqnAmbW;
ImgSqn_t ImgSqnIRinSp;
ImgSqn_t ImgSqnHotW;
ImgSqn_t ImgSqnIRinHot;

ImgSqn_t ImgSqnInstructStep;

void AssignTouchListeners(void);
void secScreenTimeOut(void);
void sensorStateMachine(void);
void ledFade(void);

void runImgSqn(void);


    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
