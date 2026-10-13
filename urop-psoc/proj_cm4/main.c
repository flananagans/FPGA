/******************************************************************************
* File Name:   main.c
*
* Description: This is the source code for CM4 in the the Dual CPU IPC Pipes 
*              Application for ModusToolbox.
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

#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"

#include "ipc_communication.h"

#include <stdio.h>

/****************************************************************************
* Constants
*****************************************************************************/

/****************************************************************************
* Functions Prototypes
*****************************************************************************/
static void cm4_msg_callback(uint32_t *msg);

/****************************************************************************
* Global Variables
*****************************************************************************/
/* IPC structure to be sent to CM0+ */
static uint32_t ipc_data_prefill_buf[IPC_DATA_LENGTH] = {};
static ipc_msg_t ipc_msg = {
    .client_id  = IPC_CM4_TO_CM0_CLIENT_ID,
    .cpu_status = 0,
    .intr_mask  = USER_IPC_PIPE_INTR_MASK,
    .packet        = {},
};

/* Message variables */
static volatile bool msg_flag = false;
static volatile uint32_t msg_value;

/* MCWDT Object [used by CM0+] */
static cyhal_resource_inst_t mcwdt_0 =
{
    .type = CYHAL_RSC_LPTIMER,
    .block_num = 0
};
    
int main(void)
{
    cy_rslt_t result;
    cy_en_ipc_pipe_status_t ipc_status;

    setup_ipc_communication_cm4();
    cybsp_init();
    /* Reserve the MCWDT used by the CM0+ to avoid conflicts if a LPTIMER is 
       to be added in the CM4 */
    cyhal_hwmgr_reserve(&mcwdt_0);
    __enable_irq();
    cy_retarget_io_init(P12_1, P12_0, CY_RETARGET_IO_BAUDRATE);

    Cy_IPC_Pipe_RegisterCallback(USER_IPC_PIPE_EP_ADDR,
        cm4_msg_callback,
        IPC_CM0_TO_CM4_CLIENT_ID);

    printf("Hey guys!!!!!!\r\n");

    printf("\x1b[2J\x1b[;H"); // clear screen

    uint32_t packet_idx = 0;
    uint32_t count = 0;
    uint32_t buf_idx = 0;

    while (true) {
        ipc_data_prefill_buf[buf_idx] = count;
        ipc_data_prefill_buf[buf_idx+1] = count + 1;
        ipc_data_prefill_buf[buf_idx+2] = count + 2;
        ipc_data_prefill_buf[buf_idx+3] = count + 3;
        buf_idx += 4;
        count += 4;
        if (buf_idx == IPC_DATA_LENGTH) {
            packet_idx++;
            memcpy(ipc_msg.packet.data, ipc_data_prefill_buf, sizeof(ipc_data_prefill_buf));
            //ipc_msg.packet.idx = packet_idx;

            Cy_IPC_Pipe_SendMessage(USER_IPC_PIPE_EP_ADDR_CM0, \
                USER_IPC_PIPE_EP_ADDR_CM4, \
                (void *) &ipc_msg, 0);   
            buf_idx = 0;
            //printf("sent %d\r\n", count);
        }
        Cy_SysLib_DelayUs(40);
    }

}

static void cm4_msg_callback(uint32_t *msg)
{
    ipc_msg_t *ipc_recv_msg;
    if (msg != NULL)
    {
        ipc_recv_msg = (ipc_msg_t *) msg;
        //msg_value = ipc_recv_msg->value;
        msg_flag = true;
    }
    
}

