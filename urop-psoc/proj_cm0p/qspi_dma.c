/******************************************************************************
* File Name:   spi_dma.c
*
* Description: This file contains function definitions for DMA operation.
*
* Related Document: See README.md
*
*
*******************************************************************************
*******************************************************************************
* (c) 2024-2026, Infineon Technologies AG, or an affiliate of Infineon
* Technologies AG. All rights reserved.
* This software, associated documentation and materials ("Software") is
* owned by Infineon Technologies AG or one of its affiliates ("Infineon")
* and is protected by and subject to worldwide patent protection, worldwide
* copyright laws, and international treaty provisions. Therefore, you may use
* this Software only as provided in the license agreement accompanying the
* software package from which you obtained this Software. If no license
* agreement applies, then any use, reproduction, modification, translation, or
* compilation of this Software is prohibited without the express written
* permission of Infineon.
*
* Disclaimer: UNLESS OTHERWISE EXPRESSLY AGREED WITH INFINEON, THIS SOFTWARE
* IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING, BUT NOT LIMITED TO, ALL WARRANTIES OF NON-INFRINGEMENT OF
* THIRD-PARTY RIGHTS AND IMPLIED WARRANTIES SUCH AS WARRANTIES OF FITNESS FOR A
* SPECIFIC USE/PURPOSE OR MERCHANTABILITY.
* Infineon reserves the right to make changes to the Software without notice.
* You are responsible for properly designing, programming, and testing the
* functionality and safety of your intended application of the Software, as
* well as complying with any legal requirements related to its use. Infineon
* does not guarantee that the Software will be free from intrusion, data theft
* or loss, or other breaches ("Security Breaches"), and Infineon shall have
* no liability arising out of any Security Breaches. Unless otherwise
* explicitly approved by Infineon, the Software may not be used in any
* application where a failure of the Product or any consequences of the use
* thereof can reasonably be expected to result in personal injury.
*******************************************************************************/

/*******************************************************************************
* Header Files
*******************************************************************************/
#include "qspi_dma.h"
#include "stdio.h"
#include "util.h"

/*******************************************************************************
 *                       Macro definitions
 ******************************************************************************/

/* Interrupt priority for RXDMA */
#define RXDMA_INTERRUPT_PRIORITY (7u)

/* Interrupt priority for TXDMA */
#define TXDMA_INTERRUPT_PRIORITY (7u)

volatile bool rx_dma_done = false;
volatile bool tx_dma_done = false;

/******************************************************************************
* Function Name: configure_tx_dma
*******************************************************************************
*
* Summary:      This function configure the transmit DMA block 
*
* Parameters:   tx_buffer
*
* Return:       (uint32_t) INIT_SUCCESS or INIT_FAILURE
*
******************************************************************************/
bool configure_tx_dma(uint32_t* tx_buffer)
{
     cy_en_dma_status_t dma_init_status;
     const cy_stc_sysint_t intTxDma_cfg =
     {
         .intrSrc      = tx_dma_IRQ,
         .intrPriority = 7u
     };
     /* Initialize descriptor */
     dma_init_status = Cy_DMA_Descriptor_Init(&tx_dma_Descriptor_0, &tx_dma_Descriptor_0_config);
     if (dma_init_status!=CY_DMA_SUCCESS)
     {
         return false;
     }

     dma_init_status = Cy_DMA_Channel_Init(tx_dma_HW, tx_dma_CHANNEL, &tx_dma_channelConfig);
     if (dma_init_status!=CY_DMA_SUCCESS)
     {
         return false;
     }

     /* Set source and destination for descriptor 1 */
     Cy_DMA_Descriptor_SetSrcAddress(&tx_dma_Descriptor_0, (uint8_t *)tx_buffer);
     Cy_DMA_Descriptor_SetDstAddress(&tx_dma_Descriptor_0, (void *)&SMIF0->TX_DATA_FIFO_WR4);

     Cy_SysInt_Init(&intTxDma_cfg,&tx_dma_complete);

     NVIC_EnableIRQ((IRQn_Type)intTxDma_cfg.intrSrc);

      /* Enable DMA interrupt source. */
     Cy_DMA_Channel_SetInterruptMask(tx_dma_HW, tx_dma_CHANNEL, CY_DMA_INTR_MASK);
     /* Enable DMA block to start descriptor execution process */
     Cy_DMA_Enable(tx_dma_HW);
     return true;
}

/******************************************************************************
* Function Name: tx_dma_complete
*******************************************************************************
*
* Summary:      This function check the tx DMA status
*
* Parameters:   None
*
* Return:       None
*
******************************************************************************/
void tx_dma_complete(void)
{
     /* Check tx DMA status */
     if ((CY_DMA_INTR_CAUSE_COMPLETION    != Cy_DMA_Channel_GetStatus(tx_dma_HW, tx_dma_CHANNEL)) &&
         (CY_DMA_INTR_CAUSE_CURR_PTR_NULL != Cy_DMA_Channel_GetStatus(tx_dma_HW, tx_dma_CHANNEL)))
     {
         /* DMA error occurred while TX operations */
         //handle_error();
     }

     tx_dma_done = true;
     /* Clear tx DMA interrupt */
     Cy_DMA_Channel_ClearInterrupt(tx_dma_HW, tx_dma_CHANNEL);
}

void try_me();

/******************************************************************************
* Function Name: configure_rx_dma
*******************************************************************************
*
* Summary:      This function configure the receive DMA block 
*
* Parameters:   rx_buffer
*
* Return:       (bool) true if success or false if failure
*
******************************************************************************/
bool configure_rx_dma(uint32_t* rx_buffer)
{

    cy_en_dma_status_t dma_init_status;
    const cy_stc_sysint_t intRxDma_cfg =
    {
       .intrSrc      = NvicMux4_IRQn,
       .cm0pSrc      = rx_dma_IRQ,
       .intrPriority = 1
    };
    /* Initialize descriptor */
    dma_init_status = Cy_DMA_Descriptor_Init(&rx_dma_Descriptor_0, &rx_dma_Descriptor_0_config);
    if (dma_init_status!=CY_DMA_SUCCESS)
    {
        PRINT("oops\r\n");
        return false;
    }
    dma_init_status = Cy_DMA_Channel_Init(rx_dma_HW, rx_dma_CHANNEL, &rx_dma_channelConfig);
    if (dma_init_status!=CY_DMA_SUCCESS)
    {
        PRINT("oops\r\n");
        return false;
    }
    
    PRINT("one\r\n");
    
    /* Set source and destination for descriptor 1 */
    Cy_DMA_Descriptor_SetSrcAddress(&rx_dma_Descriptor_0, &SMIF0->RX_DATA_FIFO_RD4);
    Cy_DMA_Descriptor_SetDstAddress(&rx_dma_Descriptor_0, (uint8_t*) rx_buffer);
    
    PRINT("two\r\n");
    
    

    PRINT("three\r\n");

    
    //NVIC_EnableIRQ((IRQn_Type)intRxDma_cfg.cm0pSrc);
     /* Enable DMA interrupt source. */
    /* Enable channel and DMA block to start descriptor execution process */
    Cy_DMA_Channel_SetInterruptMask(rx_dma_HW, rx_dma_CHANNEL, CY_DMA_INTR_MASK);
    PRINT("CY_CPU_VTOR_ADDR: %08x\r\n", *((uint32_t*) 0xE000ED08));
    PRINT("Flash vector table addr: %08x\r\n", __Vectors);
    PRINT("RAM vector table addr: %08x\r\n", __ramVectors);
    PRINT("Flash vector: %08x\r\n", __Vectors[20]);
    PRINT("Old RAM vector: %08x\r\n", __ramVectors[20]);
    Cy_SysInt_Init(&intRxDma_cfg, (cy_israddress) &rx_dma_complete);
    PRINT("New RAM vector: %08x\r\n", __ramVectors[20]);
    PRINT("Address of rx_dma_complete: %08x\r\n", &rx_dma_complete);
    NVIC_EnableIRQ(intRxDma_cfg.intrSrc);

    PRINT("NVIC connection: %08x\r\n", Cy_SysInt_GetNvicConnection(rx_dma_IRQ));

    Cy_DMA_Enable(rx_dma_HW);
    Cy_DMA_Channel_Enable(rx_dma_HW, rx_dma_CHANNEL);
    
    
    PRINT("success\r\n");
    return true;
}

/******************************************************************************
* Function Name: rx_dma_complete
*******************************************************************************
*
* Summary:      This function check the rx DMA status
*
* Parameters:   None
*
* Return:       None
*
******************************************************************************/
void rx_dma_complete()
{
    rx_dma_done = true;
    /* Scenario: Inside the interrupt service routine for block DW0 channel 23: */
    if (CY_DMA_INTR_MASK == Cy_DMA_Channel_GetInterruptStatusMasked(rx_dma_HW, rx_dma_CHANNEL)) {
        Cy_DMA_Channel_ClearInterrupt(rx_dma_HW, rx_dma_CHANNEL);
    }

}