#include "leStringPrint.h"

void newLblLeStr(leFixedString** leStrP,leLabelWidget* leLabelP,uint8_t leSize);
void newBtnLeStr(leFixedString** leStrP,leButtonWidget* leLabelP,uint8_t leSize);

void newLblLeStr(leFixedString** leStrP,leLabelWidget* leLabelP,uint8_t leSize)
{
    //get UI font for new string
    leTableString* leTabStrVarP;
    leFont *leFontVarP;
    leTabStrVarP =(leTableString*)(leLabelP->fn->getString(leLabelP));
    leFontVarP = leTabStrVarP->fn->getFont(leTabStrVarP);

    leChar* leCharP =(leChar*)malloc(sizeof(leChar)*leSize);  
    if(leCharP == NULL)
    {
        printf("no memory for malloc\n");
        return;
    }
    
    *leStrP = leFixedString_New(leCharP,leSize);
    
//    if(leFontVarP == NULL ) 
//        leFontVarP = (leFont*)&Roboto_Regular_16;
    
    (*leStrP)->fn->setFont(*leStrP, leFontVarP);
}

void newBtnLeStr(leFixedString** leStrP,leButtonWidget* leLabelP,uint8_t leSize)
{
    //get UI font for new string
    leTableString* leTabStrVarP;
    leFont *leFontVarP;
    leTabStrVarP =(leTableString*)(leLabelP->fn->getString(leLabelP));
    leFontVarP = leTabStrVarP->fn->getFont(leTabStrVarP);
    
    leChar* leCharP =(leChar*)malloc(sizeof(leChar)*leSize);  
    if(leCharP == NULL)
    {
        printf("no memory for malloc\n");
        return;
    }
    
    *leStrP = leFixedString_New(leCharP,leSize);
 
    if(leFontVarP == NULL ) 
        leFontVarP = (leFont*)&Roboto_Regular_16;
    
    (*leStrP)->fn->setFont(*leStrP, leFontVarP);
}

void delLeStr(leFixedString* leStrP)
{
    free(leStrP -> data);
    leStrP -> data = NULL;
    leFree(leStrP);
    leStrP = NULL;
}

/* *****************************************************************************
 End of File
 */
