#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "gfx/legato/generated/le_gen_init.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"

#ifndef _LE_STRING_PRINT_H    /* Guard against multiple inclusion */
#define _LE_STRING_PRINT_H


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

 
#define SET_LE_FONT(leString,font) gLeStrVar.leString.leStr.fn->setFont(&(gLeStrVar.leString.leStr), (leFont*)(&font))
#define SET_CHAR_TO_LESTRING(lLeStrVar,charStr) gLeStrVar.lLeStrVar.leStr.fn->setFromCStr(&(gLeStrVar.lLeStrVar.leStr),charStr)
#define SET_LESTRING_TO_LABEL(labelVar,lLeStrVar) labelVar->fn->setString(labelVar,(leString*)&(gLeStrVar.lLeStrVar.leStr))   

#define LE_STR_SIZE 48 
#if 0   
typedef struct{
    leChar leCharBuf[LE_STR_SIZE];
    leFixedString leStr;
} leStr_t;

typedef struct{
    
    leStr_t leGetTemp0;
    leStr_t leSetTemp0;
    
    leStr_t leGetTemp1;
    leStr_t leSetTemp1;   
    
    leStr_t leSetPwr0;    
    leStr_t leSetPwr1;    
    
    leStr_t leEggTime;
    
    //for the time remaining display.
    leStr_t lePwr0Time;
    leStr_t lePwr1Time;    
    leStr_t leTmp0Time;
    leStr_t leTmp1Time;
    
    leStr_t lePasscode;
#if 0
    leStr_t leLineVolt;
    leStr_t leLineFreq;    
    leStr_t leGlassTemp;
    leStr_t leWat;
#endif
    
}LabelString;
#endif
//LabelString gLeStrVar;


//void leStrInit(void);

//create a leString, allocation lechar and set font from leLable.
void newLblLeStr(leFixedString** leStrP,leLabelWidget* leLabelP,uint8_t leSize);
void newBtnLeStr(leFixedString** leStrP,leButtonWidget* leLabelP,uint8_t leSize);
//release the lechar memory.
void delLeStr(leFixedString* leStrP);

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
