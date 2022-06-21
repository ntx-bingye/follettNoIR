
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

#include "configuration.h"
#include "definitions.h"
#include "app_file.h"
#include "usb/usb_host_hid_keyboard.h"
#include "app_json.h"

fileDevState_t usb ={
    .drvDetected = false,
    .deviceType = DEVICE_USB,
    .mountType = MOUNT_USB,
    .Event = SYS_FS_EVENT_ERROR,
    .fileHandle = SYS_FS_HANDLE_INVALID,
};

fileDevState_t sst ={
    .drvDetected = false,
    .deviceType = DEVICE_FFS,    
    .mountType = MOUNT_FFS,
    .Event = SYS_FS_EVENT_ERROR,
    .fileHandle = SYS_FS_HANDLE_INVALID,
};


bool usbDriveConnected;   // USB flash drive connected
bool usbScannerConnected; // USB scanner connected
bool ffsMounted;          // flash file system mounted
bool allow_scanner_read;  // allow scanner to be read

USB_HOST_EVENT_RESPONSE USBHostEventHandler (USB_HOST_EVENT event, void *eventData, uintptr_t context)
{
	switch (event)
	{
        case USB_HOST_EVENT_DEVICE_UNSUPPORTED:
			break;

		default:
			break;
	}

	return(USB_HOST_EVENT_RESPONSE_NONE);
}


void USBHostHIDKeyboardEventHandler(USB_HOST_HID_KEYBOARD_HANDLE handle, USB_HOST_HID_KEYBOARD_EVENT event, void *pData)
{
    switch (event)
    {
        case USB_HOST_HID_KEYBOARD_EVENT_ATTACH:
		{
			usbScannerConnected = true; // USB scanner connected
            memset(&scanner.key, 0, sizeof(scanner.key));
            memset(&scanner.buffer, 0, sizeof(scanner.buffer));
            memset(&scanner.lastdata, 0, sizeof(scanner.lastdata));
		}
		break;

        case USB_HOST_HID_KEYBOARD_EVENT_DETACH:
		{
			usbScannerConnected = false; // USB scanner disconnected
            memset(&scanner.key, 0, sizeof(scanner.key));
            memset(&scanner.buffer, 0, sizeof(scanner.buffer));
            memset(&scanner.lastdata, 0, sizeof(scanner.lastdata));
		}
		break;

        case USB_HOST_HID_KEYBOARD_EVENT_REPORT_RECEIVED:
		{
            memcpy(&scanner.data, pData, sizeof(scanner.data)); // read keyboard data from device
		}
		break;

        default:
            break;
    }
}


SYS_FS_RESULT formatDev(char * moutType)
{
    SYS_FS_FORMAT_PARAM opt ={.fmt=SYS_FS_FORMAT_FAT, .au_size = 0, 
                                 .n_fat = 1, .align = 0, .n_root = 1};
    uint8_t CACHE_ALIGN work[512];
    return SYS_FS_DriveFormat(moutType, &opt, (void*)work, SYS_FS_FAT_MAX_SS);
}


void SYS_FS_EventHandler(SYS_FS_EVENT event, void *eventData, uintptr_t context)
{
    if(strcmp((const char*)eventData, MOUNT_FFS) == 0)
    {
        sst.Event = event;
        return;
    }
    
    if(strcmp((const char*)eventData, MOUNT_USB) == 0)
    {
        usb.Event = event;
        return;
    }
}

bool mountDiskState(fileDevState_t* devP, bool enAutoFmt)
{
    static uint32_t unmout_wait = 0;
    static uint32_t err_wait = 0;

    if(SYS_FS_EVENT_MOUNT == devP->Event) return true;
   
    if(SYS_FS_EVENT_MOUNT_WITH_NO_FILESYSTEM == devP->Event)
    {
        if(enAutoFmt != false)
        {
            if(SYS_FS_RES_SUCCESS == formatDev(devP->mountType))
            {
                devP->Event = SYS_FS_EVENT_MOUNT;
                return true;
            }
        }

        SYS_FS_Unmount(devP->mountType);
        return false;
    }
    
    if(SYS_FS_EVENT_UNMOUNT == devP->Event)   
    {
        unmout_wait++;
        if(unmout_wait < 100000) return false;
            
        unmout_wait = 0;
        SYS_FS_Unmount(devP->mountType);
        return false;
    }

    if(SYS_FS_EVENT_ERROR == devP->Event)     
    {
        err_wait++;
        if(err_wait < 100000) return false;
            
        err_wait = 0;
        SYS_FS_Unmount(devP->mountType);
        return false;
    }
    return false;
}



