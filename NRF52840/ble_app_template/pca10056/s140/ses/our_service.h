

 
#ifndef OUR_SERVICE_H__
#define OUR_SERVICE_H__

#include <stdint.h>
#include "ble.h"
#include "ble_srv_common.h"

#define BLE_UUID_OUR_BASE_UUID   {0x23, 0xD1, 0x13, 0xEF, 0x5F, 0x78, 0x23, 0x15, 0xDE, 0xEF, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00} // 128-bit base UUID
#define BLE_UUID_OUR_SERVICE      0xABCD // Just a random, but recognizable value
BLE_UUID_OUR_CHARACTERISTC_UUID 0xBEEF


/**
 * @brief This structure contains various status information for our service. 
 * It only holds one entry now, but will be populated with more items as we go.
 * The name is based on the naming convention used in Nordic's SDKs. 
 * 'ble’ indicates that it is a Bluetooth Low Energy relevant structure and 
 * ‘os’ is short for Our Service). 
 */
typedef struct
{
    uint16_t    service_handle;     /**< Handle of Our Service (as provided by the BLE stack). */
}ble_os_t;

/**@brief Function for initializing our new service.
 *
 * @param[in]   p_our_service       Pointer to Our Service structure.
 */
void our_service_init(ble_os_t * p_our_service);

#endif  /* _ OUR_SERVICE_H__ */
