

/**
  ******************************************************************************
  * @file    bluenrg1_ev_if.h
  * @author  AMG - RF Application team
  * @version V1.0.0
  * @date    07 May 2018
  * @brief   Autogenerated files, do not edit!!
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT STMicroelectronics</center></h2>
  ******************************************************************************
  */
#ifndef _BLUENRG1_EV_IF_H_
#define _BLUENRG1_EV_IF_H_

#define HCI_DISCONNECTION_COMPLETE_EVENT                      0
#define HCI_ENCRYPTION_CHANGE_EVENT                           1
#define HCI_READ_REMOTE_VERSION_INFORMATION_COMPLETE_EVENT    2
#define HCI_HARDWARE_ERROR_EVENT                              3
#define HCI_NUMBER_OF_COMPLETED_PACKETS_EVENT                 4
#define HCI_DATA_BUFFER_OVERFLOW_EVENT                        5
#define HCI_ENCRYPTION_KEY_REFRESH_COMPLETE_EVENT             6
#define ACI_HAL_END_OF_RADIO_ACTIVITY_EVENT                   7
#define ACI_HAL_SCAN_REQ_REPORT_EVENT                         8
#define ACI_HAL_FW_ERROR_EVENT                                9
#define ACI_GAP_LIMITED_DISCOVERABLE_EVENT                   10
#define ACI_GAP_PAIRING_COMPLETE_EVENT                       11
#define ACI_GAP_PASS_KEY_REQ_EVENT                           12
#define ACI_GAP_AUTHORIZATION_REQ_EVENT                      13
#define ACI_GAP_SLAVE_SECURITY_INITIATED_EVENT               14
#define ACI_GAP_BOND_LOST_EVENT                              15
#define ACI_GAP_PROC_COMPLETE_EVENT                          16
#define ACI_GAP_ADDR_NOT_RESOLVED_EVENT                      17
#define ACI_GAP_NUMERIC_COMPARISON_VALUE_EVENT               18
#define ACI_GAP_KEYPRESS_NOTIFICATION_EVENT                  19
#define ACI_L2CAP_CONNECTION_UPDATE_RESP_EVENT               20
#define ACI_L2CAP_PROC_TIMEOUT_EVENT                         21
#define ACI_L2CAP_CONNECTION_UPDATE_REQ_EVENT                22
#define ACI_L2CAP_COMMAND_REJECT_EVENT                       23
#define ACI_GATT_ATTRIBUTE_MODIFIED_EVENT                    24
#define ACI_GATT_PROC_TIMEOUT_EVENT                          25
#define ACI_ATT_EXCHANGE_MTU_RESP_EVENT                      26
#define ACI_ATT_FIND_INFO_RESP_EVENT                         27
#define ACI_ATT_FIND_BY_TYPE_VALUE_RESP_EVENT                28
#define ACI_ATT_READ_BY_TYPE_RESP_EVENT                      29
#define ACI_ATT_READ_RESP_EVENT                              30
#define ACI_ATT_READ_BLOB_RESP_EVENT                         31
#define ACI_ATT_READ_MULTIPLE_RESP_EVENT                     32
#define ACI_ATT_READ_BY_GROUP_TYPE_RESP_EVENT                33
#define ACI_ATT_PREPARE_WRITE_RESP_EVENT                     34
#define ACI_ATT_EXEC_WRITE_RESP_EVENT                        35
#define ACI_GATT_INDICATION_EVENT                            36
#define ACI_GATT_NOTIFICATION_EVENT                          37
#define ACI_GATT_PROC_COMPLETE_EVENT                         38
#define ACI_GATT_ERROR_RESP_EVENT                            39
#define ACI_GATT_DISC_READ_CHAR_BY_UUID_RESP_EVENT           40
#define ACI_GATT_WRITE_PERMIT_REQ_EVENT                      41
#define ACI_GATT_READ_PERMIT_REQ_EVENT                       42
#define ACI_GATT_READ_MULTI_PERMIT_REQ_EVENT                 43
#define ACI_GATT_TX_POOL_AVAILABLE_EVENT                     44
#define ACI_GATT_SERVER_CONFIRMATION_EVENT                   45
#define ACI_GATT_PREPARE_WRITE_PERMIT_REQ_EVENT              46
#define HCI_LE_CONNECTION_COMPLETE_EVENT                     47
#define HCI_LE_ADVERTISING_REPORT_EVENT                      48
#define HCI_LE_CONNECTION_UPDATE_COMPLETE_EVENT              49
#define HCI_LE_READ_REMOTE_USED_FEATURES_COMPLETE_EVENT      50
#define HCI_LE_LONG_TERM_KEY_REQUEST_EVENT                   51
#define HCI_LE_DATA_LENGTH_CHANGE_EVENT                      52
#define HCI_LE_READ_LOCAL_P256_PUBLIC_KEY_COMPLETE_EVENT     53
#define HCI_LE_GENERATE_DHKEY_COMPLETE_EVENT                 54
#define HCI_LE_ENHANCED_CONNECTION_COMPLETE_EVENT            55
#define HCI_LE_DIRECT_ADVERTISING_REPORT_EVENT               56
#define HAL_VTIMERTIMEOUTCALLBACK                            57
#define REGISTER_CALLBACK(number, callback) ev_call_table[number] = (void *) callback
extern void * ev_call_table[58];
#endif /* _BLUENRG1_EV_IF_H_ */
