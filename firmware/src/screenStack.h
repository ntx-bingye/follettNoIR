/* ************************************************************************** */
/** Descriptive File Name
 * create the stack for push current screen and pop previous screen .*/

/* ************************************************************************** */

#ifndef SCREEN_STACK_H    /* Guard against multiple inclusion */
#define SCREEN_STACK_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif

int8_t main_menu_pageNo;
int8_t main_menu_btnNo;
uint8_t selfhelp_pageNum;    //for selfhelp UI,total 3 pages
uint8_t selfhelp_BtnNum;// for selfhelp splash UI page,
uint8_t selfhelp_splash_BtnNo;//ice,water,sparking,hotwater have their page
uint8_t service_advancedcontact_BtnNo; //record which btn pressed in service_advancedcontact
char    service_advanceKeyBoardStr[150];
bool    service_advanceKeyEnter;

uint8_t sanitizeOrReplaceFilter; //for different step .


#define IN_UI(screen) (legato_getCurrentScreen() == screen)
#define PUSH_SHOW(showScreen) \
{\
    pushScreen(legato_getCurrentScreen());\
    legato_showScreen(showScreen);\
}

#define HOME do \
    {while (popScreen() != screenID_splash);\
     selfhelp_pageNum = 0;\
     main_menu_pageNo = 0;\
     legato_showScreen(screenID_splash);\
    }while(0);
    
#define SHOW(showScreen) legato_showScreen(showScreen);
#define BACK legato_showScreen(popScreen());

int pushScreen(int SaveScreen);
int popScreen(void);
int getPreScreen(void);
int getCurScreen(void);


    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
