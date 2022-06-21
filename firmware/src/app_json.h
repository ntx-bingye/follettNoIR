#ifndef _JSON_H
#define _JSON_H

//#include "app.h"
#include "cJSON.h"
#include "app_file.h"
//#include "system/fs/sys_fs.h"


/* ============================================================================================= */
/* DEFINES                                                                                       */
/* ============================================================================================= */
#define CONFIG_FILE  "config.json"  // configuration data file name
#define SETTING_FILE "setting.json"
#define LOG_FILE     "log.txt"
#define LOGO_FILE    "logo.png"    // logo file name

#define READ 1
#define WRITE 0


#define MAX_JSON_SIZE 100 // maximum JSON string size

char* memJsonFile;  
char* memSettingFile;


/* ============================================================================================= */
/* GLOBAL FUNCTIONS                                                                              */
/* ============================================================================================= */


int StringICmp(const char *s1, const char *s2);

char default_json_data[9000];
char default_setting_data[600];

char* settingkey[18];

cJSON* root;
cJSON* settingRoot;

void jsonParse(char * memJsonFile,cJSON** rootP);
bool settingJsonParse(void);

bool readJsonFromDrvToMem(fileDevState_t* drvName,char* filename, char** memJsonFileP);
bool writeJsonFromMemtoDrv(fileDevState_t* drvName,char* filename, char* memJsonFileP);
bool copyFile(fileDevState_t* dest, fileDevState_t* src, char* filename);

bool readWriteValInJson(const bool isRead,const cJSON *root,int32_t* val,
                        char** str,uint8_t strLen,uint8_t n,...);
//bool readWriteValInJson(const bool isRead,const cJSON *root,int32_t* val,char** str,uint8_t n,...);

bool saveJsonChangeToDev(fileDevState_t* drvName,char* filename,cJSON *root);
bool saveSettingJsonToDev(fileDevState_t* drvName,char* filename,cJSON *root);


int32_t readSetValFromSettingJson(const char* key,int32_t defaultVal);

int32_t readSetValFromCfgJson(const char* key,int32_t defaultVal);
bool writeBinFromMemtoDrv(fileDevState_t* drv,char* filename, char* memBinFileP,uint32_t menLen);
bool readBinFromDrvToMem(fileDevState_t* drv,char* filename, char** memBinFileP,uint32_t* fileSize);


#endif
