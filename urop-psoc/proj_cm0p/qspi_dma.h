/******************************************************************************
* File Name:   spi_dma.h
*
* Description: This file contains function prototypes for DMA operation.
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
#ifndef SOURCE_SPI_DMA_H_
#define SOURCE_SPI_DMA_H_

#include "cy_pdl.h"
#include "cycfg.h"


/******************************************************************************
 * Function Prototypes                                                        *
******************************************************************************/

bool configure_tx_dma(uint32_t* txBuffer);
void tx_dma_complete(void);
bool configure_rx_dma(uint32_t* rxBuffer);
void rx_dma_complete(void);
void handle_error(void);


/******************************************************************************
 * Extern Variables                                                           *
******************************************************************************/

extern volatile bool tx_dma_done;
extern volatile bool rx_dma_done;


#endif /* SOURCE_SPI_DMA_H_ */