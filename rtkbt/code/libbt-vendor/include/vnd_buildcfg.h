#ifndef _VND_BUILDCFG_H
#define _VND_BUILDCFG_H
#define BLUETOOTH_UART_DEVICE_PORT   "/dev/ttyS0"
#define FW_PATCHFILE_LOCATION   "/vendor/etc/firmware/"
#define VENDOR_LIB_CONF_FILE "/vendor/etc/bluetooth/bt_vendor.conf"
#define USE_CONTROLLER_BDADDR TRUE
#define UART_TARGET_BAUD_RATE 115200
#define FW_PATCH_SETTLEMENT_DELAY_MS 200
#define BT_WAKE_VIA_PROC	TRUE
#define LPM_IDLE_TIMEOUT_MULTIPLE   5
#define SCO_USE_I2S_INTERFACE   TRUE
#define BTVND_DBG   TRUE
#define BTHW_DBG   TRUE
#define VNDUSERIAL_DBG   TRUE
#define UPIO_DBG   TRUE
#endif
