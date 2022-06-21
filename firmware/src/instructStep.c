#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "gfx/legato/generated/le_gen_init.h"
#include "system/time/sys_time.h"
#include "gfx/legato/legato.h"
#include "gfx/legato/widget/legato_widget.h"
#include "gfx/legato/widget/button/legato_widget_button.h"
#include "bsp/bsp.h"
#include "configuration.h"
#include "app.h"
#include "peripheral/pwm/plib_pwm.h"
#include "screenStack.h"
#include "splash_utility.h"

#include "modbus.h"
//#include "app_modbus.h"
#include "app_json.h"

leFixedString* leStepCount;
leFixedString* leStep1OfX;
leFixedString* leBtnComplete;
leFixedString* leInstructions;

static uint8_t stepNo;
static uint8_t maxStepNo;

void showStep(uint8_t sanitizeOrReplaceFilter,uint8_t step);

void event_instructStep_BtnHome_OnReleased(leButtonWidget* btn)
{
    HOME
}

void event_instructStep_BtnExit_OnReleased(leButtonWidget* btn)
{
    main_menu_btnNo = -1;
    BACK
}

void event_instructStep_BtnContact_OnReleased(leButtonWidget* btn)
{
    PUSH_SHOW(screenID_contact)
}

void event_instructStep_BtnComplete_OnPressed(leButtonWidget* btn)
{
    //DispenseStruct drinkType;
    if(0 == sanitizeOrReplaceFilter)
    {
      if(stepNo == 0)
      {
          DBG_P;
          outputRegVal.w = outputRegVal.w |(0x80); //set Toggle Ice
                    DBG_P;
          writeAO_Wr_H_RegCmd(OUTPUT_REGISTER,outputRegVal.w,modBus);
                    DBG_P;
      }
      else if(stepNo == 6)
      {
          outputRegVal.w = outputRegVal.w |(0x18); //set AMB,FS
          writeAO_Wr_H_RegCmd(OUTPUT_REGISTER,outputRegVal.w,modBus);
      }
      else if(stepNo == 7)
          {writeAO_Wr_H_RegCmd(PM_DUE_REGISTER,0,modBus);}
      else;
    }
}
void event_instructStep_BtnComplete_OnReleased(leButtonWidget* btn)
{
   //DispenseStruct drinkType;
    if(0 == sanitizeOrReplaceFilter)
    {
      if(stepNo == 0)
      {
                    DBG_P;
          outputRegVal.w = outputRegVal.w &(0xff7f); //clear Toggle Ice
                    DBG_P;
          writeAO_Wr_H_RegCmd(OUTPUT_REGISTER,outputRegVal.w,modBus);
                    DBG_P;
      }
      else if(stepNo == 6)
      {
          outputRegVal.w = outputRegVal.w &(0xffe7); //Clear AMB,FS
          writeAO_Wr_H_RegCmd(OUTPUT_REGISTER,outputRegVal.w,modBus);//outputRegVal.w
      }
      else if(stepNo == 7) 
      {
//          drinkType.w = CLR_CM;    will do in OnHide()
//          sendDspnCmd(drinkType,modBus);
          BACK
      }
      else ;
    }
    else
    {
        if(stepNo == 6) 
        {
            writeAO_Wr_H_RegCmd(FILTER_DUE_REGISTER,0,modBus);
            BACK
        } //reset filter need to do 4009 =0;
    }
}

#define READ_STEP_STRING_FOR_SANITIZE \
readWriteValInJson(1,root,&val,&charInstructions[0][0],119,6,"languages","english","instructions","Clean and sanitize","step1","text");\
readWriteValInJson(1,root,&val,&charInstructions[0][1],119,6,"languages","english","instructions","Clean and sanitize","step2","text");\
readWriteValInJson(1,root,&val,&charInstructions[0][2],119,6,"languages","english","instructions","Clean and sanitize","step3","text");\
readWriteValInJson(1,root,&val,&charInstructions[0][3],119,6,"languages","english","instructions","Clean and sanitize","step4","text");\
readWriteValInJson(1,root,&val,&charInstructions[0][4],119,6,"languages","english","instructions","Clean and sanitize","step5","text");\
readWriteValInJson(1,root,&val,&charInstructions[0][5],119,6,"languages","english","instructions","Clean and sanitize","step6","text");\
readWriteValInJson(1,root,&val,&charInstructions[0][6],119,6,"languages","english","instructions","Clean and sanitize","step7","text");\
strcpy(charInstructions[0][7]," \0")

#define READ_STEP_STRING_FOR_FILTER \
readWriteValInJson(1,root,&val,&charInstructions[1][0],119,6,"languages","english","instructions","Replace filter","step1","text");\
readWriteValInJson(1,root,&val,&charInstructions[1][1],119,6,"languages","english","instructions","Replace filter","step2","text");\
readWriteValInJson(1,root,&val,&charInstructions[1][2],119,6,"languages","english","instructions","Replace filter","step3","text");\
readWriteValInJson(1,root,&val,&charInstructions[1][3],119,6,"languages","english","instructions","Replace filter","step4","text");\
readWriteValInJson(1,root,&val,&charInstructions[1][4],119,6,"languages","english","instructions","Replace filter","step5","text");\
readWriteValInJson(1,root,&val,&charInstructions[1][5],119,6,"languages","english","instructions","Replace filter","step6","text");\
readWriteValInJson(1,root,&val,&charInstructions[1][6],119,6,"languages","english","instructions","Replace filter","step7","text");\
strcpy(charInstructions[1][7]," \0")

#define SET_LBL_STR(lbl,leStr,charStr) leStr->fn->setFromCStr(leStr,charStr);\
                               instructStep_##lbl ->fn->setString(instructStep_##lbl,(leString*)(leStr))
void showLbl(uint8_t sanitizeOrReplaceFilter,uint8_t step)
{
    //[2][8] 2: sanitizeOrReplaceFilter; 8: page number;
    char* charStepCount[2][8] = {{"1","2","3","4","5","6","7","8"},{"1","2","3","4","5","6","7","8"}};
    char* charStep1OfX[2][8]={{"1/8","2/8","3/8","4/8","5/8","6/8","7/8","8/8"},{"1/7","2/7","3/7","4/7","5/7","6/7","7/7","7/7"}};
    char* charBtnComplete[2][8] ={{"Dispense ice"," "," "," "," "," ","Dispense water","Complete?"},
                                  {" "," "," "," "," "," ","Complete?"," "}};
    char* charInstructions[2][8];
    int32_t val;
    int8_t i,j;
    for(i = 0; i < 2 ; ++i)
    {
        for(j = 0; j < 8; ++j)
        {
            charInstructions[i][j] = calloc(1,120);
            assert(charInstructions[i][j]);
        }
    }
    
    READ_STEP_STRING_FOR_SANITIZE;
    READ_STEP_STRING_FOR_FILTER;
    
    SET_LBL_STR(LblStepCount,leStepCount,charStepCount[sanitizeOrReplaceFilter][step]);
    SET_LBL_STR(LblStep1OfX,leStep1OfX,charStep1OfX[sanitizeOrReplaceFilter][step]);
    SET_LBL_STR(LblInstructions,leInstructions,charInstructions[sanitizeOrReplaceFilter][step]);
    SET_LBL_STR(BtnComplete,leBtnComplete,charBtnComplete[sanitizeOrReplaceFilter][step]);
 
    for(i = 0; i < 2 ; ++i)
    {
        for(j = 0; j < 8; ++j)
            free(charInstructions[i][j]);
    }
}
#undef SET_LBL_STR
#undef READ_STEP_STRING_FOR_SANITIZE
#undef READ_STEP_STRING_FOR_FILTER

//instructStep_ImgSqn->fn->setPosition(instructStep_ImgSqn, 115, 35);

#define RELOCATE_WGT(wgt,x,y) instructStep_##wgt ->fn->setPosition(instructStep_##wgt, x, y)


#define SHOW_IMG(idx) instructStep_ImgSqn->fn->showImage(instructStep_ImgSqn,idx);\
                      instructStep_ImgSqn->fn->setVisible(instructStep_ImgSqn,LE_TRUE)

#define HIDE_IMG      instructStep_ImgSqn->fn->setVisible(instructStep_ImgSqn,LE_FALSE)

void relocateFilter5(uint8_t sanitizeOrReplaceFilter,uint8_t step)
{
    if((sanitizeOrReplaceFilter == 1)&&(step == 4))
    {
        RELOCATE_WGT(ImgSqn,140,80);
        RELOCATE_WGT(ImgStepCount,88,100);
        RELOCATE_WGT(LblStepCount,88,100);
        RELOCATE_WGT(LblInstructions,45,4);
    }
    else if((sanitizeOrReplaceFilter == 1)&&(step == 5))
    {
        RELOCATE_WGT(ImgSqn,140,80);
        RELOCATE_WGT(ImgStepCount,88,100);
        RELOCATE_WGT(LblStepCount,88,100); 
        RELOCATE_WGT(LblInstructions,45,6);
    }
    else 
    {
        RELOCATE_WGT(ImgSqn,119,35);
        RELOCATE_WGT(ImgStepCount,88,52);
        RELOCATE_WGT(LblStepCount,88,52);
        RELOCATE_WGT(LblInstructions,45,10);
    }
}
void showImg(uint8_t sanitizeOrReplaceFilter,uint8_t step)
{
    int8_t imgIdx;
    int8_t idx[2][8] ={{-1,0,1,2,3,6,-1,-1},{0,1,2,3,4,5,-1,-1}};
    imgIdx = idx[sanitizeOrReplaceFilter][step];
    if(imgIdx ==-1) HIDE_IMG;
    else            {SHOW_IMG(imgIdx);}    
}
#undef SHOW_IMG
#undef HIDE_IMG


#define SHOW_ENABLE_BTN(btn,le_bool) instructStep_##btn ->fn->setVisible(instructStep_##btn,le_bool);\
                                     instructStep_##btn ->fn->setEnabled(instructStep_##btn,le_bool)
void showBtn(uint8_t sanitizeOrReplaceFilter,uint8_t step)
{
    bool showBtnPrev[2][8] =     {{0,1,1,1,1,1,1,1},{0,1,1,1,1,1,1,1}};
    bool showBtnNext[2][8] =     {{1,1,1,1,1,1,1,0},{1,1,1,1,1,1,0,1}};
    bool showBtnComplete[2][8] = {{1,0,0,0,0,0,1,1},{0,0,0,0,0,0,1,0}};
    SHOW_ENABLE_BTN(BtnPrev,showBtnPrev[sanitizeOrReplaceFilter][step]);
    SHOW_ENABLE_BTN(BtnNext,showBtnNext[sanitizeOrReplaceFilter][step]);
    SHOW_ENABLE_BTN(BtnComplete,showBtnComplete[sanitizeOrReplaceFilter][step]);
    SHOW_ENABLE_BTN(ImgComplete,showBtnComplete[sanitizeOrReplaceFilter][step]);
}
#undef SHOW_ENABLE_BTN



void showStep(uint8_t sanitizeOrReplaceFilter,uint8_t step)
{
    showLbl(sanitizeOrReplaceFilter,step);
    showBtn(sanitizeOrReplaceFilter,step);    
    showImg(sanitizeOrReplaceFilter,step);
    relocateFilter5(sanitizeOrReplaceFilter,step);
}

void event_instructStep_BtnNext_OnReleased(leButtonWidget* btn)
{
    if(stepNo < maxStepNo ) stepNo ++;
    
    showStep(sanitizeOrReplaceFilter,stepNo);
}
void event_instructStep_BtnPrev_OnReleased(leButtonWidget* btn)
{
    if(stepNo > 0 ) stepNo --;
    showStep(sanitizeOrReplaceFilter,stepNo);
}

void doSanitize(void)
{
    sanitizeOrReplaceFilter = 0;// do sanitize
    maxStepNo = 7;
    drinkType.w =SET_CM;
    sendDspnCmd(drinkType,modBus);
    instructStep_LblInstructions->fn->setString(instructStep_LblInstructions,(leString*)&string_MAINTENANCE_SANITIZE_Instructions);
    showStep(sanitizeOrReplaceFilter,0);
}

void doReplaceFilter(void)
{
    sanitizeOrReplaceFilter = 1;// do replace filter
    maxStepNo = 7;
    showStep(sanitizeOrReplaceFilter,0);    
}

extern uint32_t amInstalled; 
extern uint32_t hotInstalled;    
extern uint32_t waterFilterInstalled;

void sanitizeOrReplaceFilterFn(void)
{
    int32_t preScreen = getPreScreen();
    if(preScreen == screenID_selfhelp)
    {
        if((hotInstalled == 1)&&(selfhelp_BtnNum == 3)) 
            {doReplaceFilter();return;}
        if((hotInstalled == 1)&&(selfhelp_BtnNum == 1))
            {doSanitize(); return;}
        if((amInstalled == 1)&&(selfhelp_BtnNum == 2)) 
            {doReplaceFilter();return;}
        if((amInstalled == 1)&&(selfhelp_BtnNum == 0))
            {doSanitize(); return;} 
        if(selfhelp_BtnNum == 1)
            {doReplaceFilter();return;}
        if(selfhelp_BtnNum == 3)
            {doSanitize(); return;}         
        
    }
    
    if(preScreen == screenID_main_menu)
    {
        if(main_menu_btnNo == 1) {doSanitize();     return;}
        if(main_menu_btnNo == 3) {doReplaceFilter();return;}
    }
}

void instructStep_OnShow(void)
{
    // do clean and sanitize
    splash_screen_active = true;
    newLblLeStr(&leStepCount,instructStep_LblStepCount,10);
    newLblLeStr(&leStep1OfX,instructStep_LblStep1OfX,10);
    newLblLeStr(&leInstructions,instructStep_LblInstructions,120);    
    newBtnLeStr(&leBtnComplete,instructStep_BtnComplete,20); 

    stepNo = 0;
    sanitizeOrReplaceFilterFn();
}

void instructStep_OnHide(void)
{
    delLeStr(leStepCount);
    delLeStr(leStep1OfX);
    delLeStr(leInstructions);    
    delLeStr(leBtnComplete); 
    drinkType.w = STOP_SPLASH | CLR_CM;
    sendDspnCmd(drinkType,modBus);
}