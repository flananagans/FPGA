/******************************************************************************
* File Name:   tcp_server.c
*
* Description: This file contains declaration of task and functions related to
*              TCP server operation.
*
* Related Document: See README.md
*
*
*******************************************************************************
* Copyright 2020-2024, Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
*
* This software, including source code, documentation and related
* materials ("Software") is owned by Cypress Semiconductor Corporation
* or one of its affiliates ("Cypress") and is protected by and subject to
* worldwide patent protection (United States and foreign),
* United States copyright laws and international treaty provisions.
* Therefore, you may use this Software only as provided in the license
* agreement accompanying the software package from which you
* obtained this Software ("EULA").
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software
* source code solely for use in connection with Cypress's
* integrated circuit products.  Any reproduction, modification, translation,
* compilation, or representation of this Software except as specified
* above is prohibited without the express written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
* reserves the right to make changes to the Software without notice. Cypress
* does not assume any liability arising out of the application or use of the
* Software or any product or circuit described in the Software. Cypress does
* not authorize its products for use in any products where a malfunction or
* failure of the Cypress product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Cypress's product in a High Risk Product, the manufacturer
* of such system or application assumes all risk of such use and in doing
* so agrees to indemnify Cypress against all liability.
*******************************************************************************/

/* Header file includes */
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"

/* RTOS header file */
#include "cyabs_rtos.h"

/* Cypress secure socket header file */
#include "cy_secure_sockets.h"

/* Wi-Fi connection manager header files */
#include "cy_wcm.h"
#include "cy_wcm_error.h"

/* Standard C header file */
#include <string.h>




/* TCP server task header file. */
#include "tcp_server.h"
#include "util.h"

/* IP address related header files. */
#include "cy_nw_helper.h"

/* Standard C header files */
#include <inttypes.h>

#include "ipc_communication.h"

/*******************************************************************************
* Macros
********************************************************************************/

#define MAKE_IPV4_ADDRESS(a, b, c, d)           ((((uint32_t) d) << 24) | \
                                                 (((uint32_t) c) << 16) | \
                                                 (((uint32_t) b) << 8) |\
                                                 ((uint32_t) a))

/* Broadcast address. */
#define BROADCAST_ADDRESS                 MAKE_IPV4_ADDRESS(192, 168, 10, 55)
 
/* IP address to bind the socket for any incoming interface. */
#define BIND_ADDRESS                    MAKE_IPV4_ADDRESS(0, 0, 0, 0)
 
/* Buffer size to store the incoming broadcast message. */
#define MAX_UDP_RECV_BUFFER_SIZE          (20)

#define IP_ADDR_BUFFER_SIZE                      (20u)

#define WIFI_INTERFACE_TYPE                  CY_WCM_INTERFACE_TYPE_AP

/* SoftAP Credentials: Modify SOFTAP_SSID and SOFTAP_PASSWORD as required */
#define SOFTAP_SSID                          "MY_SOFT_AP"
#define SOFTAP_PASSWORD                      "psoc1234"

/* Security type of the SoftAP. See 'cy_wcm_security_t' structure
    * in "cy_wcm.h" for more details.
    */
#define SOFTAP_SECURITY_TYPE                  CY_WCM_SECURITY_WPA2_AES_PSK

#define SOFTAP_IP_ADDRESS_COUNT               (2u)

#define SOFTAP_IP_ADDRESS                     MAKE_IPV4_ADDRESS(192, 168, 10, 1)
#define SOFTAP_NETMASK                        MAKE_IPV4_ADDRESS(255, 255, 255, 0)
#define SOFTAP_GATEWAY                        MAKE_IPV4_ADDRESS(192, 168, 10, 1)
#define SOFTAP_RADIO_CHANNEL                  (1u)

/* TCP server related macros. */
#define TCP_SERVER_PORT                           (50009)
#define TCP_SERVER_MAX_PENDING_CONNECTIONS        (3u)
#define TCP_SERVER_RECV_TIMEOUT_MS                (500u)
#define MAX_TCP_RECV_BUFFER_SIZE                  (20u)

/* TCP keep alive related macros. */
#define TCP_KEEP_ALIVE_IDLE_TIME_MS               (10000u)
#define TCP_KEEP_ALIVE_INTERVAL_MS                (1000u)
#define TCP_KEEP_ALIVE_RETRY_COUNT                (2u)


/*******************************************************************************
* Function Prototypes
********************************************************************************/
static cy_rslt_t create_tcp_server_socket(void);
static cy_rslt_t tcp_connection_handler(cy_socket_t socket_handle, void *arg);
static cy_rslt_t tcp_receive_msg_handler(cy_socket_t socket_handle, void *arg);
static cy_rslt_t tcp_disconnection_handler(cy_socket_t socket_handle, void *arg);

static cy_rslt_t softap_start(void);

/*******************************************************************************
* Global Variables
********************************************************************************/
/* Secure socket variables. */
cy_socket_sockaddr_t tcp_server_addr, peer_addr;
cy_socket_t server_handle, client_handle;

/* Size of the peer socket address. */
uint32_t peer_addr_len;

/* Flag variable to check if TCP client is connected. */
bool client_connected;

/*******************************************************************************
 * Function Name: tcp_server_task
 *******************************************************************************
 * Summary:
 *  Task used to establish a connection to a TCP client.
 *
 * Parameters:
 *  void *args : Task parameter defined during task creation (unused)
 *
 * Return:
 *  void
 *
 *******************************************************************************/
void tcp_server_task(void *motor_data_ring_buf_ptr) {
    volatile motor_data_ring_buf_t *motor_data_ring_buf = (volatile motor_data_ring_buf_t*) motor_data_ring_buf_ptr;
    cy_rslt_t result;

    cy_wcm_config_t wifi_config = { .interface = WIFI_INTERFACE_TYPE };

    /* Variable to store number of bytes sent over TCP socket. */
    uint32_t bytes_sent = 0;

    /* Initialize Wi-Fi connection manager. */
    result = cy_wcm_init(&wifi_config);

    if (result != CY_RSLT_SUCCESS) {
        PRINT("Wi-Fi Connection Manager initialization failed! Error code: 0x%08"PRIx32"\n", (uint32_t)result);
        CY_ASSERT(0);
    }
    PRINT("Wi-Fi Connection Manager initialized.\r\n");

    /* Start the Wi-Fi device as a Soft AP interface. */
    result = softap_start();
    if (result != CY_RSLT_SUCCESS) {
        PRINT("Failed to Start Soft AP! Error code: 0x%08"PRIx32"\n", (uint32_t)result);
        CY_ASSERT(0);
    }

    /* Initialize secure socket library. */
    result = cy_socket_init();
    if (result != CY_RSLT_SUCCESS) {
        PRINT("Secure Socket initialization failed! Error code: 0x%08"PRIx32"\n", (uint32_t)result);
        CY_ASSERT(0);
    }
    PRINT("Secure Socket initialized\n");

    /* Create TCP server socket. */
    result = create_tcp_server_socket();
    if (result != CY_RSLT_SUCCESS) {
        PRINT("Failed to create socket! Error code: 0x%08"PRIx32"\n", (uint32_t)result);
        CY_ASSERT(0);
    }

    /* Start listening on the TCP server socket. */
    result = cy_socket_listen(server_handle, TCP_SERVER_MAX_PENDING_CONNECTIONS);
    if (result != CY_RSLT_SUCCESS) {
        cy_socket_delete(server_handle);
        PRINT("cy_socket_listen returned error. Error code: 0x%08"PRIx32"\n", (uint32_t)result);
        CY_ASSERT(0);
    }
    else {
        PRINT("===============================================================\n");
        PRINT("Listening for incoming TCP client connection on Port: %d\n",
                tcp_server_addr.port);
    }

    motor_packet_t my_buf = {}; 
    uint32_t current_entry_ptr = 0;

    while(true) {

        vTaskSuspend(NULL);

        if(client_connected) {

            while (current_entry_ptr != motor_data_ring_buf->current_entry_ptr) {
                current_entry_ptr++;
                if (current_entry_ptr == RING_BUF_ENTRIES) {
                    current_entry_ptr = 0;
                }
                memcpy(&my_buf, &motor_data_ring_buf->packets[current_entry_ptr], sizeof(my_buf));
                result = cy_socket_send(client_handle, &my_buf, sizeof(my_buf),
                    CY_SOCKET_FLAGS_NONE, &bytes_sent);

                if (result != CY_RSLT_SUCCESS) {
                    PRINT("Gulp..that wasn't suposed to happen!\r\n");
                    PRINT("Error code: %x\r\n", result);
                    if(result == CY_RSLT_MODULE_SECURE_SOCKETS_CLOSED) {
                        cy_socket_disconnect(client_handle, 0);
                        cy_socket_delete(client_handle);
                    }
                    cy_rtos_delay_milliseconds(1000);
                }
            }
        }
    }
 }

/********************************************************************************
 * Function Name: softap_start
 ********************************************************************************
 * Summary:
 *  This function configures device in AP mode and initializes
 *  a SoftAP with the given credentials (SOFTAP_SSID, SOFTAP_PASSWORD and
 *  SOFTAP_SECURITY_TYPE).
 *
 * Parameters:
 *  void
 *
 * Return:
 *  cy_rslt_t: Returns CY_RSLT_SUCCESS if the Soft AP is started successfully,
 *  a WCM error code otherwise.
 *
 *******************************************************************************/
static cy_rslt_t softap_start(void) {
    cy_rslt_t result = CY_RSLT_SUCCESS;
    char ip_addr_str[IP_ADDR_BUFFER_SIZE];

    /* IP variable for network utility functions */
    cy_nw_ip_address_t nw_ip_addr = {
        .version = NW_IP_IPV4
    };

    /* Initialize the Wi-Fi device as a Soft AP. */
    cy_wcm_ap_credentials_t softap_credentials = {SOFTAP_SSID, SOFTAP_PASSWORD,
                                                  SOFTAP_SECURITY_TYPE};
    cy_wcm_ip_setting_t softap_ip_info = {
        .ip_address = {.version = CY_WCM_IP_VER_V4, .ip.v4 = SOFTAP_IP_ADDRESS},
        .gateway = {.version = CY_WCM_IP_VER_V4, .ip.v4 = SOFTAP_GATEWAY},
        .netmask = {.version = CY_WCM_IP_VER_V4, .ip.v4 = SOFTAP_NETMASK}};

    cy_wcm_ap_config_t softap_config = {softap_credentials, CY_WCM_WIFI_BAND_2_4GHZ,
        SOFTAP_RADIO_CHANNEL,
        softap_ip_info,
        NULL};

    /* Start the the Wi-Fi device as a Soft AP. */
    result = cy_wcm_start_ap(&softap_config);

    if(result == CY_RSLT_SUCCESS) {
        PRINT("Wi-Fi Device configured as Soft AP\n");
        PRINT("Connect TCP client device to the network: SSID: %s Password:%s\n",
                SOFTAP_SSID, SOFTAP_PASSWORD);
        nw_ip_addr.ip.v4 = softap_ip_info.ip_address.ip.v4;
        cy_nw_ntoa(&nw_ip_addr, ip_addr_str);
        PRINT("SofAP IP Address : %s\n\n", ip_addr_str);

        /* IP address and TCP port number of the TCP server. */
        tcp_server_addr.ip_address.ip.v4 = softap_ip_info.ip_address.ip.v4;
        tcp_server_addr.ip_address.version = CY_SOCKET_IP_VER_V4;
        tcp_server_addr.port = TCP_SERVER_PORT;
    }

    return result;
}/* USE_AP_INTERFACE */

static cy_rslt_t create_tcp_server_socket(void) {
    cy_rslt_t result;
    /* TCP socket receive timeout period. */
    uint32_t tcp_recv_timeout = TCP_SERVER_RECV_TIMEOUT_MS;

    /* Variables used to set socket options. */
    cy_socket_opt_callback_t tcp_receive_option;
    cy_socket_opt_callback_t tcp_connection_option;
    cy_socket_opt_callback_t tcp_disconnection_option;

    /* Create a TCP socket */
    result = cy_socket_create(CY_SOCKET_DOMAIN_AF_INET, CY_SOCKET_TYPE_STREAM,
                              CY_SOCKET_IPPROTO_TCP, &server_handle);
    if(result != CY_RSLT_SUCCESS) {
        PRINT("Failed to create socket! Error code: 0x%08"PRIx32"\n", (uint32_t)result);
        return result;
    }

    /* Set the TCP socket receive timeout period. */
    result = cy_socket_setsockopt(server_handle, CY_SOCKET_SOL_SOCKET,
                                 CY_SOCKET_SO_RCVTIMEO, &tcp_recv_timeout,
                                 sizeof(tcp_recv_timeout));
    if(result != CY_RSLT_SUCCESS) {
        PRINT("Set socket option: CY_SOCKET_SO_RCVTIMEO failed\n");
        return result;
    }

    /* Register the callback function to handle connection request from a TCP client. */
    tcp_connection_option.callback = tcp_connection_handler;
    tcp_connection_option.arg = NULL;

    result = cy_socket_setsockopt(server_handle, CY_SOCKET_SOL_SOCKET,
                                  CY_SOCKET_SO_CONNECT_REQUEST_CALLBACK,
                                  &tcp_connection_option, sizeof(cy_socket_opt_callback_t));
    if(result != CY_RSLT_SUCCESS) {
        PRINT("Set socket option: CY_SOCKET_SO_CONNECT_REQUEST_CALLBACK failed\n");
        return result;
    }

    /* Register the callback function to handle messages received from a TCP client. */
    tcp_receive_option.callback = tcp_receive_msg_handler;
    tcp_receive_option.arg = NULL;

    result = cy_socket_setsockopt(server_handle, CY_SOCKET_SOL_SOCKET,
                                  CY_SOCKET_SO_RECEIVE_CALLBACK,
                                  &tcp_receive_option, sizeof(cy_socket_opt_callback_t));
    if(result != CY_RSLT_SUCCESS) {
        PRINT("Set socket option: CY_SOCKET_SO_RECEIVE_CALLBACK failed\n");
        return result;
    }

    /* Register the callback function to handle disconnection. */
    tcp_disconnection_option.callback = tcp_disconnection_handler;
    tcp_disconnection_option.arg = NULL;

    result = cy_socket_setsockopt(server_handle, CY_SOCKET_SOL_SOCKET,
                                  CY_SOCKET_SO_DISCONNECT_CALLBACK,
                                  &tcp_disconnection_option, sizeof(cy_socket_opt_callback_t));
    if(result != CY_RSLT_SUCCESS) {
        PRINT("Set socket option: CY_SOCKET_SO_DISCONNECT_CALLBACK failed\n");
        return result;
    }

    /* Bind the TCP socket created to Server IP address and to TCP port. */
    result = cy_socket_bind(server_handle, &tcp_server_addr, sizeof(tcp_server_addr));
    if(result != CY_RSLT_SUCCESS) {
        PRINT("Failed to bind to socket! Error code: 0x%08"PRIx32"\n", (uint32_t)result);
    }

    return result;
}

static cy_rslt_t tcp_connection_handler(cy_socket_t socket_handle, void *arg) {
    cy_rslt_t result;
    char ip_addr_str[IP_ADDR_BUFFER_SIZE];

    /* IP variable for network utility functions */
    cy_nw_ip_address_t nw_ip_addr = {
        .version = NW_IP_IPV4
    };

    /* TCP keep alive parameters. */
    int keep_alive = 1;
    uint32_t keep_alive_interval = TCP_KEEP_ALIVE_INTERVAL_MS;
    uint32_t keep_alive_count    = TCP_KEEP_ALIVE_RETRY_COUNT;
    uint32_t keep_alive_idle_time = TCP_KEEP_ALIVE_IDLE_TIME_MS;

    /* Accept new incoming connection from a TCP client.*/
    result = cy_socket_accept(socket_handle, &peer_addr, &peer_addr_len,
                              &client_handle);
    if(result == CY_RSLT_SUCCESS) {
        PRINT("Incoming TCP connection accepted\n");
        nw_ip_addr.ip.v4 = peer_addr.ip_address.ip.v4;
        cy_nw_ntoa(&nw_ip_addr, ip_addr_str);
        PRINT("IP Address : %s\n\n", ip_addr_str);
        PRINT("Press the user button to send LED ON/OFF command to the TCP client\n");

        /* Set the TCP keep alive interval. */
        result = cy_socket_setsockopt(client_handle, CY_SOCKET_SOL_TCP,
                                      CY_SOCKET_SO_TCP_KEEPALIVE_INTERVAL,
                                      &keep_alive_interval, sizeof(keep_alive_interval));
        if(result != CY_RSLT_SUCCESS) {
            PRINT("Set socket option: CY_SOCKET_SO_TCP_KEEPALIVE_INTERVAL failed\n");
            return result;
        }

        /* Set the retry count for TCP keep alive packet. */
        result = cy_socket_setsockopt(client_handle, CY_SOCKET_SOL_TCP,
                                      CY_SOCKET_SO_TCP_KEEPALIVE_COUNT,
                                      &keep_alive_count, sizeof(keep_alive_count));
        if(result != CY_RSLT_SUCCESS) {
            PRINT("Set socket option: CY_SOCKET_SO_TCP_KEEPALIVE_COUNT failed\n");
            return result;
        }

        /* Set the network idle time before sending the TCP keep alive packet. */
        result = cy_socket_setsockopt(client_handle, CY_SOCKET_SOL_TCP,
                                      CY_SOCKET_SO_TCP_KEEPALIVE_IDLE_TIME,
                                      &keep_alive_idle_time, sizeof(keep_alive_idle_time));
        if(result != CY_RSLT_SUCCESS) {
            PRINT("Set socket option: CY_SOCKET_SO_TCP_KEEPALIVE_IDLE_TIME failed\n");
            return result;
        }

        /* Enable TCP keep alive. */
        result = cy_socket_setsockopt(client_handle, CY_SOCKET_SOL_SOCKET,
                                          CY_SOCKET_SO_TCP_KEEPALIVE_ENABLE,
                                              &keep_alive, sizeof(keep_alive));
        if(result != CY_RSLT_SUCCESS) {
            PRINT("Set socket option: CY_SOCKET_SO_TCP_KEEPALIVE_ENABLE failed\n");
            return result;
        }

        /* Set the client connection flag as true. */
        client_connected = true;
    }
    else {
        PRINT("Failed to accept incoming client connection. Error code: 0x%08"PRIx32"\n", (uint32_t)result);
        PRINT("===============================================================\n");
        PRINT("Listening for incoming TCP client connection on Port: %d\n",
                tcp_server_addr.port);
    }

    return result;
}

static cy_rslt_t tcp_receive_msg_handler(cy_socket_t socket_handle, void *arg) {
    char message_buffer[MAX_TCP_RECV_BUFFER_SIZE];
    cy_rslt_t result;

    /* Variable to store number of bytes received from TCP client. */
    uint32_t bytes_received = 0;
    result = cy_socket_recv(socket_handle, message_buffer, MAX_TCP_RECV_BUFFER_SIZE,
                            CY_SOCKET_FLAGS_NONE, &bytes_received);

    if(result == CY_RSLT_SUCCESS) {
    }
    else {
        PRINT("Failed to receive acknowledgement from the TCP client. Error: 0x%08"PRIx32"\n",
              (uint32_t)result);
        if(result == CY_RSLT_MODULE_SECURE_SOCKETS_CLOSED) {
            /* Disconnect the socket. */
            cy_socket_disconnect(socket_handle, 0);
            /* Delete the socket. */
            cy_socket_delete(socket_handle);
        }
    }

    return result;
}

static cy_rslt_t tcp_disconnection_handler(cy_socket_t socket_handle, void *arg) {
    cy_rslt_t result;

    /* Disconnect the TCP client. */
    result = cy_socket_disconnect(socket_handle, 0);
    /* Delete the socket. */
    cy_socket_delete(socket_handle);

    /* Set the client connection flag as false. */
    client_connected = false;
    PRINT("TCP Client disconnected! Please reconnect the TCP Client\n");
    PRINT("===============================================================\n");
    PRINT("Listening for incoming TCP client connection on Port:%d\n",
            tcp_server_addr.port);

    return result;
}


/* [] END OF FILE */