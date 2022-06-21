#ifndef _APP_FILE_H    /* Guard against multiple inclusion */
#define _APP_FILE_H

#include "usb/usb_host_hid.h"

#include "usb\usb_host_hid_keyboard.h"
//#include "app_json.h"
#include "system/fs/sys_fs.h"


/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif
    
    
#define SST 0
#define USB 1

#define DEVICE_USB  "/dev/sda1"   // USB device name
#define MOUNT_USB   "/mnt/usb"    // USB mount name

#define DEVICE_FFS  "/dev/mtda1"  // flash file system device name
#define MOUNT_FFS   "/mnt/sst"    // flash file system mount name    

typedef struct
{
	char key[4];     // single key buffer
	char buffer[65]; // keyboard buffer

	USB_HOST_HID_KEYBOARD_DATA data;     // current data buffer */
    USB_HOST_HID_KEYBOARD_DATA lastdata; // last data buffer */

} ScannerStruct;

ScannerStruct scanner;

typedef struct {
    bool  drvDetected;
    char* deviceType;
	char* mountType; // MOUNT_FFS,MOUNT_USB
    SYS_FS_HANDLE fileHandle;
    SYS_FS_EVENT Event;   // 
} fileDevState_t;


typedef enum
{
    FILE_MOUNT_WAIT = 0,
    FILE_INIT_SETTING,
    FILE_FORMAT_DISK,
    FILE_OPEN, //4
    FILE_WRITE,//5
    FILE_FLUSH,
    FILE_READ_STAT,//7
    FILE_READ_SIZE,/* The app checks the file size */
    /* The app does a file seek to the end of the file. */
    FILE_DO_SEEK,  /* The app checks for EOF */
  
    /* The app does another file seek, to move file pointer to the beginning of
     * the file. */
    FILE_DO_ANOTHER_SEEK,//10
    /* The app reads and verifies the written data. */
    FILE_READ_CONTENT,//11
    /* The app closes the file. */
    FILE_CLOSE,//12
    FILE_MOUNT_DISK,        
    /* The app unmounts the disk. */
    FILE_UNMOUNT_DISK,
    /* The app idles */
    FILE_IDLE,
    /* An app error has occurred */
    FILE_ERROR,//16

} FILE_STATES;

/* ============================================================================================= */
/* EVENT FUNCTION PROTOTYPES                                                                     */
/* ============================================================================================= */
bool mountDiskState(fileDevState_t* devP, bool enAutoFmt);
USB_HOST_EVENT_RESPONSE USBHostEventHandler(USB_HOST_EVENT event, void *eventData, uintptr_t context);
void SYS_FS_EventHandler(SYS_FS_EVENT event, void *eventData, uintptr_t context);
void USBHostHIDKeyboardEventHandler(USB_HOST_HID_KEYBOARD_HANDLE handle, USB_HOST_HID_KEYBOARD_EVENT event, void *pData);

bool readJsonToCfgOrCreateDefaultJson(fileDevState_t * dev);


    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
