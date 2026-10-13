#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"

#include "cy_smif.h"

#include "cyabs_rtos.h"
#include <FreeRTOS.h>
#include <task.h>

#include "tcp_server.h"
#include "qspi_dma.h"
#include "util.h"

#include "ipc_communication.h"

/*******************************************************************************
* Macros
********************************************************************************/
/* RTOS related macros for TCP server task. */
#define SERVER_TASK_STACK_SIZE                (1024 * 5 / sizeof(StackType_t))
#define SERVER_TASK_PRIORITY                  (2)

#define QSPI_TASK_STACK_SIZE (1024 / sizeof(StackType_t)) // 1 kb
#define QSPI_TASK_PRIORITY (1)

/* Queue lengths of message queues used in this project */
#define SINGLE_ELEMENT_QUEUE                      (1u)

static volatile motor_data_ring_buf_t motor_data_ring_buf = {};

/********************************************************************************
* Global Variables
********************************************************************************/
/* Queue handler */
cy_queue_t led_command_q;

/* This enables RTOS aware debugging. */
volatile int uxTopUsedPriority;

cy_stc_smif_context_t smifContext;
void SMIF_Interrupt_User(void) {
    Cy_SMIF_Interrupt(SMIF0, &smifContext);
}

void qspi_task_test(void *arg) {
    while (true) {
        PRINT("hahahahaha i'm another task that's running!\r\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void cm0_msg_callback();
volatile bool msg_flag = false;

TaskHandle_t server_task_handle = NULL;

/*
NOTES:
- sdhc driver uses interrupt mux 2. don't use this mux number
- printf disables interrupts but only on the cm0+ for some reason 
*/
int main() {
    cy_rslt_t result;


    /* Main configuration parameters*/
    #define NUMBER_OF_EXTERNAL_MEM      (2U)
    #define SMIF_PRIORITY               (2U)
    #define TIMEOUT_1_S                 (1000U)
    #define DESELECT_DELAY              (7U)
    #define SMIF_INTERRUPT smif_interrupt_IRQn

    /* This enables RTOS aware debugging in OpenOCD. */
    uxTopUsedPriority = configMAX_PRIORITIES - 1;

    setup_ipc_communication_cm0();
    result = cybsp_init() ;
    CY_ASSERT(result == CY_RSLT_SUCCESS);
    __enable_irq();

    

    // Redirect stdin and stdout to the debug UART port
    cy_retarget_io_init(CYBSP_DEBUG_UART_TX, CYBSP_DEBUG_UART_RX,
        CY_RETARGET_IO_BAUDRATE);

    fflush(stdout);

    PRINT("-------------------\r\n");

    cy_stc_sysint_t smifIntConfig = {
        .intrSrc = NvicMux5_IRQn,
        .cm0pSrc = SMIF_INTERRUPT,
        .intrPriority = SMIF_PRIORITY
    };
    //(void) Cy_SysInt_Init(&smifIntConfig, SMIF_Interrupt_User);

    volatile uint32_t rx_buf = 0x88889999;
    configure_rx_dma(&rx_buf);

    //NVIC_EnableIRQ(NvicMux5_IRQn);
    
    /* SMIF initialization */
    Cy_SMIF_Init(SMIF0, &smif_0_config, TIMEOUT_1_S, &smifContext);
    Cy_SMIF_SetRxFifoTriggerLevel(SMIF0, 3);
    Cy_SMIF_Enable(SMIF0, &smifContext);

    /* \x1b[2J\x1b[;H - ANSI ESC sequence to clear screen. */
    PRINT("SMIF enabled\r\n");

    // try transmitting something
    PRINT("Aight we transmitting\r\n");

    result = Cy_SMIF_TransmitCommand(SMIF0,
        0xAF,
        CY_SMIF_WIDTH_QUAD,
        CY_SMIF_CMD_WITHOUT_PARAM,
        CY_SMIF_CMD_WITHOUT_PARAM,
        CY_SMIF_WIDTH_QUAD,
        CY_SMIF_SLAVE_SELECT_2,
        false,
        &smifContext
    );

    cy_en_smif_status_t smif_result = Cy_SMIF_ReceiveData(
        SMIF0,
        NULL, // receiving is handled via DMA
        sizeof(rx_buf),
        CY_SMIF_WIDTH_QUAD,
        NULL,
        &smifContext
    );


    while (!rx_dma_done) {}
    PRINT("Got %08x from FPGA\r\n", rx_buf);

    if (smif_result != CY_SMIF_SUCCESS) {
        PRINT("Ruh roh...something went wrong 1\r\n");
    }
    PRINT("Transmission transmitted! Wow\r\n");

    PRINT("===============================================================\n");
    PRINT("CE229153 - Connectivity Example: TCP Server\n");
    PRINT("===============================================================\n\n");


    PRINT("Enabling CM4 at %x\n", CY_CORTEX_M4_APPL_ADDR);
    Cy_SysEnableCM4(CY_CORTEX_M4_APPL_ADDR);

    xTaskCreate(tcp_server_task, "Network task", SERVER_TASK_STACK_SIZE, &motor_data_ring_buf,
               SERVER_TASK_PRIORITY, &server_task_handle);

    // IPC communication
    Cy_IPC_Pipe_RegisterCallback(USER_IPC_PIPE_EP_ADDR,
        &cm0_msg_callback,
        IPC_CM4_TO_CM0_CLIENT_ID);

    /*xTaskCreate(qspi_task_test, "FPGA communication task", QSPI_TASK_STACK_SIZE, NULL,
        QSPI_TASK_PRIORITY, NULL);*/

    vTaskStartScheduler();

    //Should never get here.
    __enable_irq();
    while (true) {}
}

/*
Custom power management callback for CM0+ core which is registered by cybsp_init().
This avoids conflict with default power management callback registered on CM4 core.
*/
cy_rslt_t cybsp_register_custom_sysclk_pm_callback(void) {
    cy_rslt_t result = CY_RSLT_SUCCESS;

    return result;
}

void cm0_msg_callback(uint32_t *msg) {

    // DO NOT BLOCK IN THIS CALLBACK IT BREAKS EVERYTHING

    //PRINT("got\r\n");
    ipc_msg_t *ipc_recv_msg;
    if (msg != NULL) {
        ipc_recv_msg = (ipc_msg_t *) msg;
        motor_data_ring_buf.current_entry_ptr++;
        if (motor_data_ring_buf.current_entry_ptr == RING_BUF_ENTRIES) {
            motor_data_ring_buf.current_entry_ptr = 0;
        }
        memcpy(
            &motor_data_ring_buf.packets[motor_data_ring_buf.current_entry_ptr],
            &ipc_recv_msg->packet,
            sizeof(motor_data_ring_buf.packets[0])
        );
        vTaskResume(server_task_handle);
    }
    
}


 /* [] END OF FILE */
