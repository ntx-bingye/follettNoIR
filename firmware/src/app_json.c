#include<string.h>
#include <stdarg.h>
#include <ctype.h>
#include "system/fs/sys_fs.h"
#include "app.h"
#include "cJSON.h"
#include "app_file.h"
#include "app_json.h"

cJSON* root = NULL;
cJSON* settingRoot = NULL;

char default_json_data[9000] = 
{0x7b,0x22,0x66,0x69,0x6c,0x65,0x5f,0x69,0x6e,0x66,0x6f,0x22,0x3a,0x7b,0x22,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x22,0x3a,0x22,0x30,0x2e,0x30,0x2e,0x30,0x2e,0x33,0x22,0x2c,0x22,0x64,0x65,0x73,0x63,0x72,0x69,0x70,0x74,0x69,0x6f,0x6e,0x22,0x3a,0x22,0x4a,0x53,0x4f,0x4e,0x20,0x73,0x74,0x72,0x75,0x63,0x74,0x75,0x72,0x65,0x20,0x66,0x6f,0x72,0x20,0x46,0x6f,0x6c,0x6c,0x65,0x74,0x74,0x20,0x49,0x63,0x65,0x2f,0x57,0x61,0x74,0x65,0x72,0x20,0x55,0x6e,0x69,0x74,0x73,0x22,0x2c,0x22,0x63,0x72,0x65,0x61,0x74,0x65,0x64,0x5f,0x62,0x79,0x22,0x3a,0x22,0x4e,0x54,0x58,0x20,0x45,0x6d,0x62,0x65,0x64,0x64,0x65,0x64,0x22,0x2c,0x22,0x63,0x72,0x65,0x61,0x74,0x65,0x64,0x5f,0x64,0x61,0x74,0x65,0x22,0x3a,0x22,0x32,0x30,0x32,0x30,0x2e,0x30,0x33,0x2e,0x32,0x33,0x22,0x2c,0x22,0x63,0x6f,0x6e,0x66,0x69,0x64,0x65,0x6e,0x74,0x69,0x61,0x6c,0x22,0x3a,0x22,0x4e,0x54,0x58,0x20,0x45,0x6d,0x62,0x65,0x64,0x64,0x65,0x64,0x20,0x32,0x30,0x32,0x30,0x22,0x7d,0x2c,0x22,0x73,0x65,0x74,0x74,0x69,0x6e,0x67,0x73,0x22,0x3a,0x7b,0x22,0x6d,0x6f,0x64,0x65,0x6c,0x22,0x3a,0x22,0x37,0x43,0x49,0x31,0x30,0x30,0x42,0x42,0x22,0x2c,0x22,0x73,0x65,0x72,0x69,0x61,0x6c,0x22,0x3a,0x22,0x61,0x30,0x30,0x30,0x30,0x30,0x31,0x22,0x2c,0x22,0x6c,0x65,0x67,0x5f,0x6b,0x69,0x74,0x5f,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x3a,0x31,0x2c,0x22,0x77,0x61,0x74,0x65,0x72,0x5f,0x66,0x69,0x6c,0x74,0x65,0x72,0x5f,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x3a,0x31,0x2c,0x22,0x64,0x72,0x61,0x69,0x6e,0x5f,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x3a,0x30,0x2c,0x22,0x61,0x6d,0x62,0x69,0x65,0x6e,0x74,0x5f,0x77,0x61,0x74,0x65,0x72,0x5f,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x3a,0x31,0x2c,0x22,0x73,0x70,0x61,0x72,0x6b,0x6c,0x69,0x6e,0x67,0x5f,0x77,0x61,0x74,0x65,0x72,0x5f,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x3a,0x30,0x2c,0x22,0x68,0x6f,0x74,0x5f,0x77,0x61,0x74,0x65,0x72,0x5f,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x3a,0x31,0x2c,0x22,0x62,0x61,0x73,0x65,0x5f,0x73,0x74,0x61,0x6e,0x64,0x5f,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x3a,0x30,0x2c,0x22,0x66,0x69,0x6c,0x74,0x65,0x72,0x5f,0x72,0x65,0x70,0x6c,0x61,0x63,0x65,0x5f,0x69,0x6e,0x74,0x65,0x72,0x76,0x61,0x6c,0x22,0x3a,0x36,0x2c,0x22,0x70,0x6d,0x5f,0x63,0x6c,0x65,0x61,0x6e,0x69,0x6e,0x67,0x5f,0x69,0x6e,0x74,0x65,0x72,0x76,0x61,0x6c,0x22,0x3a,0x36,0x2c,0x22,0x77,0x61,0x74,0x65,0x72,0x5f,0x71,0x75,0x61,0x6c,0x69,0x74,0x79,0x22,0x3a,0x30,0x2c,0x22,0x73,0x6c,0x65,0x65,0x70,0x5f,0x6d,0x6f,0x64,0x65,0x22,0x3a,0x31,0x32,0x2c,0x22,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,0x5f,0x62,0x72,0x69,0x67,0x68,0x74,0x6e,0x65,0x73,0x73,0x22,0x3a,0x38,0x30,0x2c,0x22,0x64,0x65,0x66,0x61,0x75,0x6c,0x74,0x5f,0x6c,0x61,0x6e,0x67,0x75,0x61,0x67,0x65,0x22,0x3a,0x22,0x45,0x6e,0x67,0x6c,0x69,0x73,0x68,0x22,0x2c,0x22,0x73,0x70,0x6c,0x61,0x73,0x68,0x5f,0x6c,0x6f,0x67,0x6f,0x5f,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x2c,0x22,0x73,0x63,0x72,0x65,0x65,0x6e,0x5f,0x74,0x69,0x6d,0x6f,0x75,0x74,0x22,0x3a,0x31,0x32,0x30,0x2c,0x22,0x68,0x6f,0x74,0x5f,0x77,0x61,0x74,0x65,0x72,0x5f,0x73,0x65,0x74,0x74,0x69,0x6e,0x67,0x22,0x3a,0x31,0x38,0x30,0x2c,0x22,0x77,0x61,0x6b,0x65,0x5f,0x6f,0x6e,0x5f,0x64,0x69,0x73,0x70,0x65,0x6e,0x73,0x65,0x22,0x3a,0x33,0x35,0x7d,0x2c,0x22,0x6c,0x61,0x6e,0x67,0x75,0x61,0x67,0x65,0x73,0x22,0x3a,0x7b,0x22,0x65,0x6e,0x67,0x6c,0x69,0x73,0x68,0x22,0x3a,0x7b,0x22,0x73,0x65,0x72,0x76,0x69,0x63,0x65,0x22,0x3a,0x7b,0x22,0x6e,0x61,0x6d,0x65,0x22,0x3a,0x22,0x46,0x6f,0x6c,0x6c,0x65,0x74,0x74,0x20,0x74,0x65,0x63,0x68,0x6e,0x69,0x63,0x61,0x6c,0x20,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x22,0x2c,0x22,0x70,0x68,0x6f,0x6e,0x65,0x22,0x3a,0x22,0x28,0x38,0x37,0x37,0x29,0x20,0x36,0x31,0x32,0x2d,0x35,0x30,0x38,0x36,0x22,0x2c,0x22,0x68,0x6f,0x75,0x72,0x73,0x22,0x3a,0x22,0x4d,0x6f,0x6e,0x64,0x61,0x79,0x20,0x2d,0x20,0x46,0x72,0x69,0x64,0x61,0x79,0x20,0x38,0x20,0x41,0x4d,0x20,0x74,0x6f,0x20,0x35,0x20,0x50,0x4d,0x20,0x45,0x53,0x54,0x22,0x2c,0x22,0x65,0x6d,0x61,0x69,0x6c,0x22,0x3a,0x22,0x45,0x6d,0x61,0x69,0x6c,0x3a,0x74,0x65,0x63,0x68,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x40,0x66,0x6f,0x6c,0x6c,0x65,0x74,0x74,0x69,0x63,0x65,0x2e,0x63,0x6f,0x6d,0x22,0x2c,0x22,0x71,0x72,0x63,0x6f,0x64,0x65,0x65,0x6d,0x61,0x69,0x6c,0x22,0x3a,0x22,0x71,0x72,0x5f,0x65,0x6d,0x61,0x69,0x6c,0x2e,0x70,0x6e,0x67,0x22,0x2c,0x22,0x65,0x6d,0x65,0x72,0x67,0x65,0x6e,0x63,0x79,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x45,0x6d,0x65,0x72,0x67,0x65,0x6e,0x63,0x79,0x20,0x61,0x66,0x74,0x65,0x72,0x2d,0x68,0x6f,0x75,0x72,0x73,0x20,0x74,0x65,0x63,0x68,0x6e,0x69,0x63,0x61,0x6c,0x20,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x22,0x2c,0x22,0x65,0x6d,0x65,0x72,0x67,0x65,0x6e,0x63,0x79,0x68,0x6f,0x75,0x72,0x73,0x31,0x22,0x3a,0x22,0x4d,0x6f,0x6e,0x64,0x61,0x79,0x2d,0x46,0x72,0x69,0x64,0x61,0x79,0x3a,0x20,0x35,0x20,0x50,0x4d,0x20,0x74,0x6f,0x20,0x38,0x20,0x50,0x4d,0x20,0x45,0x53,0x54,0x22,0x2c,0x22,0x65,0x6d,0x65,0x72,0x67,0x65,0x6e,0x63,0x79,0x68,0x6f,0x75,0x72,0x73,0x32,0x22,0x3a,0x22,0x53,0x61,0x74,0x75,0x72,0x64,0x61,0x79,0x2c,0x20,0x53,0x75,0x6e,0x64,0x61,0x79,0x2c,0x20,0x61,0x6e,0x64,0x20,0x68,0x6f,0x6c,0x69,0x64,0x61,0x79,0x73,0x3a,0x20,0x38,0x20,0x41,0x4d,0x20,0x74,0x6f,0x20,0x38,0x20,0x50,0x4d,0x20,0x45,0x53,0x54,0x22,0x2c,0x22,0x71,0x72,0x63,0x6f,0x64,0x65,0x66,0x6f,0x72,0x6d,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x63,0x6f,0x6e,0x74,0x61,0x63,0x74,0x22,0x3a,0x7b,0x22,0x6e,0x61,0x6d,0x65,0x22,0x3a,0x22,0x63,0x6f,0x6e,0x74,0x61,0x63,0x74,0x20,0x6e,0x61,0x6d,0x65,0x20,0x61,0x22,0x2c,0x22,0x73,0x74,0x72,0x65,0x65,0x74,0x22,0x3a,0x22,0x63,0x6f,0x6e,0x74,0x61,0x63,0x74,0x20,0x73,0x74,0x72,0x65,0x65,0x74,0x20,0x61,0x22,0x2c,0x22,0x63,0x69,0x74,0x79,0x73,0x74,0x61,0x74,0x65,0x22,0x3a,0x22,0x63,0x69,0x74,0x79,0x2c,0x20,0x73,0x74,0x61,0x74,0x65,0x20,0x61,0x22,0x2c,0x22,0x70,0x68,0x6f,0x6e,0x65,0x31,0x22,0x3a,0x22,0x70,0x68,0x6f,0x6e,0x65,0x20,0x31,0x20,0x61,0x22,0x2c,0x22,0x70,0x68,0x6f,0x6e,0x65,0x32,0x22,0x3a,0x22,0x70,0x68,0x6f,0x6e,0x65,0x20,0x32,0x20,0x61,0x22,0x7d,0x2c,0x22,0x73,0x65,0x6c,0x66,0x5f,0x68,0x65,0x6c,0x70,0x22,0x3a,0x7b,0x22,0x48,0x6f,0x77,0x20,0x63,0x61,0x6e,0x20,0x77,0x65,0x20,0x68,0x65,0x6c,0x70,0x3f,0x22,0x3a,0x22,0x48,0x6f,0x77,0x20,0x63,0x61,0x6e,0x20,0x77,0x65,0x20,0x68,0x65,0x6c,0x70,0x3f,0x22,0x2c,0x22,0x54,0x69,0x6d,0x65,0x20,0x44,0x65,0x6c,0x61,0x79,0x22,0x3a,0x22,0x54,0x69,0x6d,0x65,0x5c,0x6e,0x44,0x65,0x6c,0x61,0x79,0x22,0x2c,0x22,0x4c,0x6f,0x77,0x20,0x57,0x61,0x74,0x65,0x72,0x22,0x3a,0x22,0x4c,0x6f,0x77,0x5c,0x6e,0x57,0x61,0x74,0x65,0x72,0x22,0x2c,0x22,0x4c,0x6f,0x77,0x20,0x42,0x69,0x6e,0x22,0x3a,0x22,0x4c,0x6f,0x77,0x5c,0x6e,0x42,0x69,0x6e,0x22,0x2c,0x22,0x42,0x74,0x6e,0x4e,0x61,0x6d,0x65,0x22,0x3a,0x7b,0x22,0x49,0x63,0x65,0x22,0x3a,0x22,0x49,0x63,0x65,0x22,0x2c,0x22,0x57,0x61,0x74,0x65,0x72,0x22,0x3a,0x22,0x57,0x61,0x74,0x65,0x72,0x22,0x2c,0x22,0x53,0x70,0x61,0x72,0x6b,0x6c,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x22,0x53,0x70,0x61,0x72,0x6b,0x6c,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x2c,0x22,0x48,0x6f,0x74,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x22,0x48,0x6f,0x74,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x2c,0x22,0x49,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x20,0x6f,0x72,0x20,0x72,0x65,0x70,0x61,0x69,0x72,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x22,0x3a,0x22,0x49,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x20,0x6f,0x72,0x20,0x72,0x65,0x70,0x61,0x69,0x72,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x22,0x2c,0x22,0x43,0x6c,0x65,0x61,0x6e,0x20,0x73,0x63,0x72,0x65,0x65,0x6e,0x22,0x3a,0x22,0x43,0x6c,0x65,0x61,0x6e,0x20,0x73,0x63,0x72,0x65,0x65,0x6e,0x22,0x2c,0x22,0x43,0x6c,0x65,0x61,0x6e,0x20,0x61,0x6e,0x64,0x20,0x73,0x61,0x6e,0x69,0x74,0x69,0x7a,0x65,0x22,0x3a,0x22,0x43,0x6c,0x65,0x61,0x6e,0x20,0x61,0x6e,0x64,0x20,0x73,0x61,0x6e,0x69,0x74,0x69,0x7a,0x65,0x22,0x2c,0x22,0x43,0x6f,0x6e,0x74,0x61,0x63,0x74,0x20,0x73,0x65,0x72,0x76,0x69,0x63,0x65,0x22,0x3a,0x22,0x43,0x6f,0x6e,0x74,0x61,0x63,0x74,0x20,0x73,0x65,0x72,0x76,0x69,0x63,0x65,0x22,0x7d,0x2c,0x22,0x57,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x4e,0x6f,0x20,0x57,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x69,0x6e,0x63,0x6f,0x6d,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x6c,0x69,0x6e,0x65,0x20,0x69,0x73,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x69,0x6e,0x63,0x6f,0x6d,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x76,0x61,0x6c,0x76,0x65,0x20,0x69,0x73,0x20,0x74,0x75,0x72,0x6e,0x65,0x64,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x4f,0x70,0x74,0x69,0x6f,0x6e,0x61,0x6c,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x66,0x61,0x63,0x74,0x6f,0x72,0x79,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x22,0x49,0x66,0x20,0x65,0x71,0x75,0x69,0x70,0x70,0x65,0x64,0x2c,0x20,0x76,0x65,0x72,0x69,0x66,0x79,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x68,0x61,0x73,0x20,0x62,0x65,0x65,0x6e,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x4c,0x6f,0x77,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x66,0x6c,0x6f,0x77,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x52,0x65,0x70,0x6c,0x61,0x63,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x69,0x66,0x20,0x65,0x71,0x75,0x69,0x70,0x70,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x52,0x65,0x70,0x6c,0x61,0x63,0x65,0x20,0x69,0x6e,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x69,0x66,0x20,0x65,0x71,0x75,0x69,0x70,0x70,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x70,0x72,0x65,0x73,0x73,0x75,0x72,0x65,0x20,0x69,0x73,0x20,0x31,0x30,0x20,0x74,0x6f,0x20,0x37,0x30,0x20,0x50,0x53,0x49,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x57,0x61,0x72,0x6d,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x44,0x69,0x73,0x70,0x65,0x6e,0x73,0x65,0x20,0x61,0x6e,0x64,0x20,0x64,0x69,0x73,0x63,0x61,0x72,0x64,0x20,0x61,0x20,0x63,0x75,0x70,0x20,0x6f,0x66,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x43,0x68,0x65,0x63,0x6b,0x20,0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x74,0x65,0x6d,0x70,0x65,0x72,0x61,0x74,0x75,0x72,0x65,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x55,0x6e,0x69,0x74,0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6f,0x6c,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x4f,0x66,0x66,0x2d,0x6c,0x6f,0x6f,0x6b,0x69,0x6e,0x67,0x20,0x6f,0x72,0x20,0x6f,0x66,0x66,0x2d,0x74,0x61,0x73,0x74,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x46,0x6c,0x75,0x73,0x68,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x69,0x66,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6c,0x75,0x73,0x68,0x65,0x64,0x20,0x64,0x75,0x72,0x69,0x6e,0x67,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x61,0x74,0x69,0x6f,0x6e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x50,0x65,0x72,0x66,0x6f,0x72,0x6d,0x20,0x50,0x72,0x65,0x76,0x65,0x6e,0x74,0x69,0x76,0x65,0x20,0x6d,0x61,0x69,0x6e,0x74,0x65,0x6e,0x61,0x6e,0x63,0x65,0x20,0x61,0x73,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x7d,0x2c,0x22,0x49,0x63,0x65,0x22,0x3a,0x7b,0x22,0x4e,0x6f,0x20,0x69,0x63,0x65,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x69,0x6e,0x63,0x6f,0x6d,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x6c,0x69,0x6e,0x65,0x20,0x69,0x73,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x69,0x6e,0x63,0x6f,0x6d,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x76,0x61,0x6c,0x76,0x65,0x20,0x69,0x73,0x20,0x74,0x75,0x72,0x6e,0x65,0x64,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x49,0x66,0x20,0x65,0x71,0x75,0x69,0x70,0x70,0x65,0x64,0x2c,0x20,0x76,0x65,0x72,0x69,0x66,0x79,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x68,0x61,0x73,0x20,0x62,0x65,0x65,0x6e,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x22,0x48,0x6f,0x6c,0x64,0x20,0x64,0x69,0x73,0x70,0x65,0x6e,0x73,0x65,0x20,0x62,0x75,0x74,0x74,0x6f,0x6e,0x20,0x6c,0x6f,0x6e,0x67,0x65,0x72,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x22,0x57,0x61,0x69,0x74,0x20,0x66,0x6f,0x72,0x20,0x6e,0x65,0x77,0x20,0x69,0x63,0x65,0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x6d,0x61,0x64,0x65,0x22,0x7d,0x2c,0x22,0x4f,0x66,0x66,0x2d,0x6c,0x6f,0x6f,0x6b,0x69,0x6e,0x67,0x20,0x6f,0x72,0x20,0x6f,0x66,0x66,0x2d,0x74,0x61,0x73,0x74,0x69,0x6e,0x67,0x20,0x69,0x63,0x65,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x50,0x65,0x72,0x66,0x6f,0x72,0x6d,0x20,0x50,0x72,0x65,0x76,0x65,0x6e,0x74,0x69,0x76,0x65,0x20,0x6d,0x61,0x69,0x6e,0x74,0x65,0x6e,0x61,0x6e,0x63,0x65,0x20,0x61,0x73,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x46,0x6c,0x75,0x73,0x68,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x69,0x66,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6c,0x75,0x73,0x68,0x65,0x64,0x20,0x64,0x75,0x72,0x69,0x6e,0x67,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x61,0x74,0x69,0x6f,0x6e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x53,0x6f,0x66,0x74,0x20,0x69,0x63,0x65,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x50,0x65,0x72,0x66,0x6f,0x72,0x6d,0x20,0x50,0x72,0x65,0x76,0x65,0x6e,0x74,0x69,0x76,0x65,0x20,0x6d,0x61,0x69,0x6e,0x74,0x65,0x6e,0x61,0x6e,0x63,0x65,0x20,0x61,0x73,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x70,0x72,0x6f,0x70,0x65,0x72,0x20,0x63,0x6c,0x65,0x61,0x72,0x61,0x6e,0x63,0x65,0x20,0x61,0x6e,0x64,0x20,0x76,0x65,0x6e,0x74,0x69,0x6c,0x61,0x74,0x69,0x6f,0x6e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x7d,0x2c,0x22,0x53,0x70,0x61,0x72,0x6b,0x6c,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x4e,0x6f,0x20,0x73,0x70,0x61,0x72,0x6b,0x6c,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x69,0x6e,0x63,0x6f,0x6d,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x6c,0x69,0x6e,0x65,0x20,0x69,0x73,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x69,0x6e,0x63,0x6f,0x6d,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x76,0x61,0x6c,0x76,0x65,0x20,0x69,0x73,0x20,0x74,0x75,0x72,0x6e,0x65,0x64,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x63,0x61,0x72,0x62,0x6f,0x6e,0x61,0x74,0x6f,0x72,0x20,0x70,0x6f,0x77,0x65,0x72,0x20,0x73,0x77,0x69,0x74,0x63,0x68,0x20,0x69,0x73,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x63,0x61,0x72,0x62,0x6f,0x6e,0x61,0x74,0x6f,0x72,0x20,0x74,0x61,0x6e,0x6b,0x20,0x77,0x61,0x73,0x20,0x70,0x75,0x72,0x67,0x65,0x64,0x20,0x64,0x75,0x72,0x69,0x6e,0x67,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x61,0x74,0x69,0x6f,0x6e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x57,0x61,0x74,0x65,0x72,0x20,0x6e,0x6f,0x74,0x20,0x63,0x68,0x69,0x6c,0x6c,0x65,0x64,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x63,0x61,0x72,0x62,0x6f,0x6e,0x61,0x74,0x6f,0x72,0x20,0x70,0x6f,0x77,0x65,0x72,0x20,0x73,0x77,0x69,0x74,0x63,0x68,0x20,0x69,0x73,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x6c,0x69,0x6e,0x65,0x20,0x69,0x73,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x65,0x64,0x20,0x74,0x6f,0x20,0x63,0x68,0x69,0x6c,0x6c,0x65,0x64,0x20,0x6f,0x75,0x74,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x6e,0x20,0x63,0x61,0x72,0x62,0x6f,0x6e,0x61,0x74,0x6f,0x72,0x20,0x75,0x6e,0x69,0x74,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x57,0x61,0x74,0x65,0x72,0x20,0x6e,0x6f,0x74,0x20,0x63,0x61,0x72,0x62,0x6f,0x6e,0x61,0x74,0x65,0x64,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x43,0x4f,0x32,0x20,0x74,0x61,0x6e,0x6b,0x20,0x76,0x61,0x6c,0x76,0x65,0x20,0x69,0x73,0x20,0x74,0x75,0x72,0x6e,0x65,0x64,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x43,0x4f,0x32,0x20,0x74,0x61,0x6e,0x6b,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x65,0x6d,0x70,0x74,0x79,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x63,0x61,0x72,0x62,0x6f,0x6e,0x61,0x74,0x6f,0x72,0x20,0x70,0x6f,0x77,0x65,0x72,0x20,0x73,0x77,0x69,0x74,0x63,0x68,0x20,0x69,0x73,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x7d,0x2c,0x22,0x48,0x6f,0x74,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x4e,0x6f,0x20,0x57,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x69,0x6e,0x63,0x6f,0x6d,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x6c,0x69,0x6e,0x65,0x20,0x69,0x73,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x69,0x6e,0x63,0x6f,0x6d,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x76,0x61,0x6c,0x76,0x65,0x20,0x69,0x73,0x20,0x74,0x75,0x72,0x6e,0x65,0x64,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x4f,0x70,0x74,0x69,0x6f,0x6e,0x61,0x6c,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x66,0x61,0x63,0x74,0x6f,0x72,0x79,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x22,0x49,0x66,0x20,0x65,0x71,0x75,0x69,0x70,0x70,0x65,0x64,0x2c,0x20,0x76,0x65,0x72,0x69,0x66,0x79,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x68,0x61,0x73,0x20,0x62,0x65,0x65,0x6e,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x4e,0x6f,0x20,0x68,0x6f,0x74,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x68,0x6f,0x74,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x73,0x77,0x69,0x74,0x63,0x68,0x20,0x69,0x73,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x35,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x7d,0x7d,0x2c,0x22,0x61,0x6c,0x65,0x72,0x74,0x73,0x22,0x3a,0x7b,0x22,0x46,0x69,0x6c,0x74,0x65,0x72,0x20,0x72,0x65,0x70,0x6c,0x61,0x63,0x65,0x6d,0x65,0x6e,0x74,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x22,0x3a,0x7b,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x2c,0x22,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x73,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x44,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x20,0x66,0x75,0x6c,0x6c,0x22,0x3a,0x7b,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x2c,0x22,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x73,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x2c,0x22,0x57,0x61,0x74,0x65,0x72,0x20,0x6c,0x65,0x61,0x6b,0x22,0x3a,0x7b,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x2c,0x22,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x73,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x2d,0x20,0x43,0x68,0x65,0x63,0x6b,0x20,0x66,0x6f,0x72,0x20,0x6c,0x65,0x61,0x6b,0x73,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x2d,0x20,0x49,0x66,0x20,0x65,0x71,0x75,0x69,0x70,0x70,0x65,0x64,0x2c,0x20,0x63,0x68,0x65,0x63,0x6b,0x20,0x69,0x66,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x69,0x73,0x20,0x73,0x63,0x72,0x65,0x77,0x65,0x64,0x20,0x69,0x6e,0x20,0x61,0x6c,0x6c,0x20,0x74,0x68,0x65,0x20,0x77,0x61,0x79,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x6e,0x75,0x6c,0x6c,0x7d,0x7d,0x7d,0x2c,0x22,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x73,0x22,0x3a,0x7b,0x22,0x45,0x6d,0x70,0x74,0x79,0x20,0x64,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x22,0x3a,0x7b,0x22,0x73,0x74,0x65,0x70,0x31,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x6d,0x6f,0x76,0x65,0x20,0x64,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x7d,0x2c,0x22,0x52,0x65,0x70,0x6c,0x61,0x63,0x65,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x73,0x74,0x65,0x70,0x31,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x6d,0x6f,0x76,0x65,0x20,0x64,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x32,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x55,0x6e,0x73,0x63,0x72,0x65,0x77,0x20,0x63,0x68,0x75,0x74,0x65,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x33,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x6d,0x6f,0x76,0x65,0x20,0x73,0x63,0x72,0x65,0x77,0x73,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x34,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x6d,0x6f,0x76,0x65,0x20,0x63,0x6f,0x76,0x65,0x72,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x35,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x55,0x6e,0x73,0x63,0x72,0x65,0x77,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x2f,0x6f,0x72,0x20,0x73,0x63,0x72,0x65,0x77,0x20,0x69,0x6e,0x20,0x6e,0x65,0x77,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x36,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x70,0x6c,0x61,0x63,0x65,0x20,0x63,0x6f,0x76,0x65,0x72,0x2c,0x20,0x63,0x68,0x75,0x74,0x65,0x20,0x61,0x6e,0x64,0x20,0x64,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x7d,0x2c,0x22,0x43,0x6c,0x65,0x61,0x6e,0x20,0x61,0x6e,0x64,0x20,0x73,0x61,0x6e,0x69,0x74,0x69,0x7a,0x65,0x22,0x3a,0x7b,0x22,0x73,0x74,0x65,0x70,0x31,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x50,0x72,0x65,0x73,0x73,0x20,0x61,0x6e,0x64,0x20,0x68,0x6f,0x6c,0x64,0x20,0x74,0x6f,0x20,0x64,0x69,0x73,0x70,0x65,0x6e,0x73,0x65,0x20,0x61,0x6c,0x6c,0x20,0x69,0x63,0x65,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x32,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x6d,0x6f,0x76,0x65,0x20,0x64,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x33,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x55,0x6e,0x73,0x63,0x72,0x65,0x77,0x20,0x63,0x68,0x75,0x74,0x65,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x34,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x6d,0x6f,0x76,0x65,0x20,0x73,0x63,0x72,0x65,0x77,0x73,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x35,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x6d,0x6f,0x76,0x65,0x20,0x63,0x6f,0x76,0x65,0x72,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x36,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x4c,0x69,0x66,0x74,0x20,0x6c,0x69,0x64,0x2e,0x20,0x46,0x6f,0x6c,0x6c,0x6f,0x77,0x20,0x66,0x75,0x6c,0x6c,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x73,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x2c,0x22,0x73,0x74,0x65,0x70,0x37,0x22,0x3a,0x7b,0x22,0x74,0x65,0x78,0x74,0x22,0x3a,0x22,0x52,0x65,0x70,0x6c,0x61,0x63,0x65,0x20,0x6c,0x69,0x64,0x2c,0x20,0x63,0x6f,0x76,0x65,0x72,0x2c,0x20,0x63,0x68,0x75,0x74,0x65,0x20,0x61,0x6e,0x64,0x20,0x64,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x22,0x2c,0x22,0x69,0x6d,0x61,0x67,0x65,0x22,0x3a,0x22,0x22,0x7d,0x7d,0x7d,0x2c,0x22,0x74,0x72,0x6f,0x75,0x62,0x6c,0x65,0x73,0x68,0x6f,0x6f,0x74,0x22,0x3a,0x7b,0x22,0x44,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x20,0x66,0x75,0x6c,0x6c,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x45,0x6d,0x70,0x74,0x79,0x20,0x64,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x20,0x61,0x6e,0x64,0x20,0x72,0x65,0x2d,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x44,0x72,0x79,0x20,0x74,0x65,0x72,0x6d,0x69,0x6e,0x61,0x6c,0x73,0x20,0x6f,0x6e,0x20,0x64,0x72,0x69,0x70,0x20,0x74,0x72,0x61,0x79,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x50,0x75,0x6c,0x6c,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x6f,0x72,0x20,0x50,0x31,0x37,0x20,0x6f,0x6e,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x20,0x62,0x6f,0x61,0x72,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x22,0x52,0x65,0x70,0x6c,0x61,0x63,0x65,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x6f,0x72,0x20,0x50,0x31,0x37,0x20,0x61,0x6e,0x64,0x20,0x64,0x69,0x73,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x20,0x77,0x69,0x72,0x65,0x73,0x20,0x74,0x6f,0x20,0x74,0x65,0x72,0x6d,0x69,0x6e,0x61,0x6c,0x73,0x22,0x7d,0x2c,0x22,0x4c,0x6f,0x77,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x56,0x65,0x72,0x69,0x66,0x79,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x76,0x61,0x6c,0x76,0x65,0x20,0x69,0x73,0x20,0x74,0x75,0x72,0x6e,0x65,0x64,0x20,0x4f,0x4e,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x49,0x66,0x20,0x75,0x6e,0x69,0x74,0x20,0x68,0x61,0x73,0x20,0x69,0x6e,0x74,0x65,0x72,0x76,0x61,0x6c,0x20,0x66,0x69,0x6c,0x74,0x65,0x72,0x20,0x6d,0x61,0x6b,0x65,0x20,0x73,0x75,0x72,0x65,0x20,0x69,0x74,0x20,0x69,0x73,0x20,0x69,0x6e,0x73,0x74,0x61,0x6c,0x6c,0x65,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x49,0x66,0x20,0x75,0x6e,0x69,0x74,0x20,0x68,0x61,0x73,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x64,0x69,0x73,0x70,0x65,0x6e,0x73,0x65,0x72,0x2c,0x20,0x74,0x72,0x79,0x20,0x64,0x69,0x73,0x70,0x65,0x6e,0x73,0x69,0x6e,0x67,0x20,0x77,0x61,0x74,0x65,0x72,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x22,0x52,0x65,0x6d,0x6f,0x76,0x65,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x6f,0x72,0x20,0x50,0x31,0x37,0x20,0x66,0x72,0x6f,0x6d,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x20,0x62,0x6f,0x61,0x72,0x64,0x22,0x7d,0x2c,0x22,0x57,0x61,0x74,0x65,0x72,0x20,0x6c,0x65,0x61,0x6b,0x22,0x3a,0x7b,0x22,0x6c,0x69,0x6e,0x65,0x31,0x22,0x3a,0x22,0x49,0x66,0x20,0x63,0x68,0x61,0x73,0x73,0x69,0x73,0x20,0x68,0x61,0x73,0x20,0x77,0x61,0x74,0x65,0x72,0x2c,0x20,0x72,0x65,0x6d,0x6f,0x76,0x65,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x64,0x72,0x79,0x20,0x6f,0x75,0x74,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x32,0x22,0x3a,0x22,0x50,0x75,0x6c,0x6c,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x6f,0x72,0x20,0x50,0x31,0x37,0x20,0x66,0x72,0x6f,0x6d,0x20,0x63,0x6f,0x6e,0x74,0x72,0x6f,0x6c,0x20,0x62,0x6f,0x61,0x72,0x64,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x33,0x22,0x3a,0x22,0x52,0x65,0x70,0x6c,0x61,0x63,0x65,0x20,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x6f,0x72,0x20,0x50,0x31,0x37,0x20,0x61,0x6e,0x64,0x20,0x64,0x69,0x73,0x63,0x6f,0x6e,0x6e,0x65,0x63,0x74,0x20,0x77,0x69,0x72,0x65,0x73,0x20,0x66,0x72,0x6f,0x6d,0x20,0x74,0x65,0x72,0x6d,0x69,0x6e,0x61,0x6c,0x22,0x2c,0x22,0x6c,0x69,0x6e,0x65,0x34,0x22,0x3a,0x22,0x46,0x69,0x6c,0x6c,0x20,0x69,0x63,0x65,0x20,0x62,0x69,0x6e,0x20,0x77,0x69,0x74,0x68,0x20,0x77,0x61,0x72,0x6d,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6c,0x6f,0x63,0x61,0x74,0x65,0x20,0x77,0x61,0x74,0x65,0x72,0x20,0x6c,0x65,0x61,0x6b,0x22,0x7d,0x7d,0x7d,0x2c,0x22,0x73,0x70,0x61,0x6e,0x69,0x73,0x68,0x22,0x3a,0x7b,0x7d,0x2c,0x22,0x66,0x72,0x65,0x6e,0x63,0x68,0x22,0x3a,0x7b,0x7d,0x7d,0x7d,0x00};

char default_setting_data[600] = 
{"{\"language\":0,\"filter_replace_interval\":6,\"pm_cleaning_interval\":6,\"water_quality\":0,\"sleep_mode\":12,\"display_brightness\":80,\"screen_timout\":120,\"hot_water_setting\":185,\"wake_on_dispense\":35,\"temperature unit\":0,\"Time delay\":1,\"Cup sense\":641,\"name\":\"xxx\",\"street\":\"xxx\",\"citystate\":\"xxx\",\"phone1\":\"800-123-4567\",\"phone2\":\"800-123-4789\",\"Website URL\":\"www.ice.com\",\"sensor1\":32,\"sensor2\":50,\"sensor3\":32}\0"};

void jsonParse(char * memJsonFile,cJSON** rootP)
{
    *rootP = cJSON_Parse(memJsonFile); 
    if(NULL == (*rootP)) printf("parse json fail\n");
}
char* settingkey[18] = 
    {"filter_replace_interval","pm_cleaning_interval","water_quality",
    "sleep_mode","display_brightness","screen_timout","hot_water_setting",
    "wake_on_dispense","name","street","citystate","phone1",
    "phone2","Website URL","Time delay","Cup sense","language","temperature unit"};

bool settingJsonParse(void)
{
    settingRoot = cJSON_Parse(memSettingFile);
    if(NULL == settingRoot) {printf("settingRoot null\n");return false;}
  
    for(int8_t i = 0; i < 18; i++)
    {
       cJSON* item = cJSON_GetObjectItem(settingRoot,settingkey[i]);
       if(NULL == item) {printf("item i%d null\n",i);return false;}
       if((!cJSON_IsString(item)) && (!cJSON_IsNumber(item)))
       {
           cJSON_Delete(settingRoot);
           printf("setting json file format or key error\n");
           return false;
       }
    }
    return true;
}

int StringICmp(const char *s1, const char *s2)
{
	int i, len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len1 != len2)
		return(1); // return string different

	for (i=0; i<len1; i++) // loop for all chars
	{
		if (toupper(s1[i]) != toupper(s2[i])) // compare upper case string
			return(1); // return string different
	}

	return(0); // return string same
}

///* ============================================================================================= */
//
//static bool verify_logo_data(void)
//{
//	if ((logo_buffer[0] == 0xFF) && (logo_buffer[0] == 0xD8)) // check JPEG header
//	{
//		return(true); // valid JPEG file
//	}
//
//	return(false); // invalid JPEG file
//}
//
///* ============================================================================================= */
//
//static bool process_logo_data(int filesize)
//{
//	int i, width, height;
//
//	if ((logo_buffer[0] == 0xFF) && (logo_buffer[0] == 0xD8)) // check JPEG header
//	{
//		for (i=2; i<(filesize-1); i++) // loop for all JPEG data
//		{
//			if ((logo_buffer[i] == 0xFF) && (logo_buffer[i+1] == 0xC0)) // check JPEG info header
//			{
//				height = ((logo_buffer[i+5] * 256) + logo_buffer[i+6]); // get the image height
//				width = ((logo_buffer[i+7] * 256) + logo_buffer[i+8]); // get the image width
//
//				Splash_logo.header.dataAddress = (uint8_t*)&logo_buffer[0]; // point new logo data to old logo location
//				Splash_logo.header.dataSize = sizeof(logo_buffer);
//				Splash_logo.width = width;
//				Splash_logo.height = height;
//				Splash_logo.bufferWidth = width;
//				Splash_logo.bufferHeight = height;
//			}
//		}
//
//		return(true); // valid JPEG file
//	}
//
//	return(false); // invalid JPEG file
//}


bool static guardOpenFile(fileDevState_t *            dev,
                          char*                       filename,
                          SYS_FS_FILE_OPEN_ATTRIBUTES rw)
{
	//printf("name: %s\n",dev->deviceType);
    if (dev->Event != SYS_FS_EVENT_MOUNT)
    {
        //printf("didn't mount,can't open\n"); DBG_P;
        return false;
    }  

	if (SYS_FS_CurrentDriveSet(dev->mountType) != SYS_FS_RES_SUCCESS)
    {
        //printf("current drive didn't set ok\n"); DBG_P;
        return false;  
    }
    
	dev->fileHandle = SYS_FS_FileOpen(filename,rw); 
    if(dev->fileHandle == SYS_FS_HANDLE_INVALID)
    {
        //printf("handle fail\n");DBG_P;
        return false;
    }
 
    return true;
}


bool copyFile(fileDevState_t* dest, fileDevState_t* src, char* filename)
{
    if(guardOpenFile(dest,filename,SYS_FS_FILE_OPEN_WRITE_PLUS)== false)
        return false;
    if(guardOpenFile(src,filename,SYS_FS_FILE_OPEN_READ)== false)
        return false;   
    
    uint32_t fileSize = SYS_FS_FileSize(src->fileHandle);
    uint8_t* buffer = malloc(fileSize);
    #define CLOSE_RET(t_f) {SYS_FS_FileClose(dest->fileHandle);\
                            SYS_FS_FileClose(src->fileHandle);\
                            free(buffer);return t_f;}
    
    if(buffer == NULL) {CLOSE_RET(false)}
    
   
    if(-1 == SYS_FS_FileRead(src->fileHandle,buffer,fileSize))   CLOSE_RET(false)

    if(-1 == SYS_FS_FileWrite(dest->fileHandle,buffer,fileSize)) CLOSE_RET(false)            
    
    CLOSE_RET(true)
    #undef CLOSE_RET
}   


bool readJsonFromDrvToMem(fileDevState_t* drv,char* filename, char** memJsonFileP)
{
    if(memJsonFileP == NULL) {DBG_P;return false;}
    if(*memJsonFileP != NULL) 
    {
        printf("memJsonFile didn't free");
        DBG_P;
        free(*memJsonFileP);
        *memJsonFileP = NULL;
    }
   
    if(guardOpenFile(drv,filename,SYS_FS_FILE_OPEN_READ)== false)
    {DBG_P;return false;}
    
    #define CLOSE_RET(t_f) {SYS_FS_FileClose(drv->fileHandle);return(t_f);} 
    uint32_t fileSize = SYS_FS_FileSize(drv->fileHandle);
    if(-1 == fileSize) {DBG_P;printf("fileSize error\n"); CLOSE_RET(false)}
    if(0  == fileSize) {DBG_P;printf("fileSize error\n"); CLOSE_RET(false)}
    
    printf("filesize %lu\n",fileSize);
    

    *memJsonFileP = calloc(fileSize+1,1);
    if(*memJsonFileP == NULL) CLOSE_RET(false)
            
    if(-1 == SYS_FS_FileRead(drv->fileHandle,*memJsonFileP,fileSize))
    {
        free(*memJsonFileP);
        *memJsonFileP = NULL;
        CLOSE_RET(false)
    }
    
    (*memJsonFileP)[fileSize] = '\0';
    CLOSE_RET(true)
    #undef CLOSE_RET  
}

bool writeJsonFromMemtoDrv(fileDevState_t* drv,char* filename, char* memJsonFileP)
{
    if(memJsonFileP == NULL) return false;
    
    if(guardOpenFile(drv,filename,SYS_FS_FILE_OPEN_WRITE_PLUS)== false)
        return false;

#define CLOSE_RET(t_f) {SYS_FS_FileClose(drv->fileHandle);return(t_f);}    
    
    if(-1 == SYS_FS_FileWrite(drv->fileHandle,memJsonFileP,strlen(memJsonFileP))) 
        CLOSE_RET(false)  

    CLOSE_RET(true)
    #undef CLOSE_RET  
}

bool writeBinFromMemtoDrv(fileDevState_t* drv,char* filename, char* memBinFileP,uint32_t menLen)
{
    if((memBinFileP == NULL) || (menLen <= 0)) return false;
    DBG_P;
    if(guardOpenFile(drv,filename,SYS_FS_FILE_OPEN_WRITE_PLUS)== false)
        return false;
    DBG_P;
    #define CLOSE_RET(t_f) {SYS_FS_FileClose(drv->fileHandle);return(t_f);}    
    
    if(-1 == SYS_FS_FileWrite(drv->fileHandle,memBinFileP,menLen)) 
        CLOSE_RET(false)  
    DBG_P;
    CLOSE_RET(true)
    #undef CLOSE_RET  
}

bool readBinFromDrvToMem(fileDevState_t* drv,char* filename, char** memBinFileP,uint32_t* fileSize)
{
    if((memBinFileP == NULL)||(fileSize == NULL)) {DBG_P;return false;}
   
    if(guardOpenFile(drv,filename,SYS_FS_FILE_OPEN_READ)== false)
    {DBG_P;return false;}
    
    *fileSize = SYS_FS_FileSize(drv->fileHandle);
    
    #define CLOSE_RET(t_f) {SYS_FS_FileClose(drv->fileHandle);return(t_f);} 

    if(-1 == *fileSize) {DBG_P;printf("fileSize error\n"); CLOSE_RET(false)}
    printf("BIN filesize %lu\n",*fileSize);
    
    if(-1 == SYS_FS_FileRead(drv->fileHandle,*memBinFileP,*fileSize))
        CLOSE_RET(false)

    CLOSE_RET(true)
    #undef CLOSE_RET  
}

bool readWriteValInJson(const bool isRead,const cJSON *root,int32_t* val,
                        char** str,uint8_t strLen,uint8_t n,...)
{
    if((root == NULL) ||(n == 0) ||((val == NULL)&& (str == NULL))) return false;
    
    cJSON* item = root;

    char key[101] = {'0'};
    va_list argptr;
    va_start(argptr,n);

    for(uint8_t i = 0; i < n; i++)
    {
        strncpy(key,va_arg(argptr,char*),100);
        if(strlen(key) == 0) break; //for fix length ,help screen
        item = cJSON_GetObjectItem(item,key);    
    }
    va_end(argptr);
    if(item == NULL) return false;
    
    if(isRead)
    {
        if(cJSON_IsString(item)) {strncpy((*str),item->valuestring,strLen);return true;}
        
        if(cJSON_IsNumber(item)) {*val = item->valueint; return true;}
        
        return false;
    }
    // write;
    if (cJSON_IsString(item)) 
    {
        if(strlen(item->valuestring) >= strLen) strncpy(item->valuestring,(*str),strLen);
        else
        {            
            char * temp;
            temp = item->valuestring;

            item->valuestring = calloc(strLen+1,1);
            if(item->valuestring == NULL)
            {
                item->valuestring = temp;
                return false;
            }
            free(temp); //free old mem,keep new and copy 
            strncpy(item->valuestring,(*str),strLen);
        }
        return true;        
    }

    if (cJSON_IsNumber(item)) {cJSON_SetNumberValue(item, *val);return true;}
    return false;
    
}

bool saveJsonChangeToDev(fileDevState_t* drvName,char* filename,cJSON *root)
{
    if((drvName == NULL)||(filename == NULL)||(root == NULL)) return false;
    
    char *membak = calloc(1,9000);
    if(membak == NULL) {return false;}

    if(false == cJSON_PrintPreallocated(root, membak, 9000, 1))
    {
        //printf("print json fail");DBG_P;
        free(membak); membak = NULL; return false;
    }
    //printf("cprint=%s\n",membak);
    if(false == writeJsonFromMemtoDrv(drvName,filename,membak))
    {
        free(membak); membak = NULL; DBG_P;return false;
    }
    
    free(membak); membak = NULL; return true;
}

int32_t readSetValFromSettingJson(const char* key,int32_t defaultVal)
{
    char* str;
    int32_t val;
    if(false == readWriteValInJson(1,settingRoot,&val,&str,1,1,key))
        val = defaultVal;    
    return val;
}

int32_t readSetValFromCfgJson(const char* key,int32_t defaultVal)
{
    char* str;
    int32_t val;
    if(false == readWriteValInJson(1,root,&val,&str,1,2,"settings",key))
        val = defaultVal;    
    return val;
}

bool saveSettingJsonToDev(fileDevState_t* drvName,char* filename,cJSON *root)
{
    if((drvName == NULL)||(filename == NULL)||(root == NULL)) return false;
    
    char *membak = calloc(1,1000);
    if(membak == NULL) {return false;}

    cJSON_PrintPreallocated(root, membak, 1000, 1);
    //printf("cprint=%s\n",membak);
    if(false == writeJsonFromMemtoDrv(drvName,filename,membak))
    {
        //printf("save fail\n");
        free(membak); membak = NULL; return false;
    }
    
    free(membak); membak = NULL; return true;
}
