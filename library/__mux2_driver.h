/*
    __mux2_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __mux2_driver.h
@brief    MUX2 Driver
@mainpage MUX2 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   MUX2
@brief      MUX2 Click Driver
@{

| Global Library Prefix | **MUX2** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **okt 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _MUX2_H_
#define _MUX2_H_

/** 
 * @macro T_MUX2_P
 * @brief Driver Abstract type 
 */
#define T_MUX2_P    const uint8_t*

/** @defgroup MUX2_COMPILE Compilation Config */              /** @{ */

//  #define   __MUX2_DRV_SPI__                            /**<     @macro __MUX2_DRV_SPI__  @brief SPI driver selector */
//  #define   __MUX2_DRV_I2C__                            /**<     @macro __MUX2_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __MUX2_DRV_UART__                           /**<     @macro __MUX2_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup MUX2_VAR Variables */                           /** @{ */

/* Channel */
extern const uint8_t _MUX2_CHANNEL_S1;
extern const uint8_t _MUX2_CHANNEL_S2;
extern const uint8_t _MUX2_CHANNEL_S3;
extern const uint8_t _MUX2_CHANNEL_S4;
extern const uint8_t _MUX2_CHANNEL_S5;
extern const uint8_t _MUX2_CHANNEL_S6;
extern const uint8_t _MUX2_CHANNEL_S7;
extern const uint8_t _MUX2_CHANNEL_S8;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup MUX2_INIT Driver Initialization */              /** @{ */

#ifdef   __MUX2_DRV_SPI__
void mux2_spiDriverInit(T_MUX2_P gpioObj, T_MUX2_P spiObj);
#endif
#ifdef   __MUX2_DRV_I2C__
void mux2_i2cDriverInit(T_MUX2_P gpioObj, T_MUX2_P i2cObj, uint8_t slave);
#endif
#ifdef   __MUX2_DRV_UART__
void mux2_uartDriverInit(T_MUX2_P gpioObj, T_MUX2_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void mux2_gpioDriverInit(T_MUX2_P gpioObj);
                                                                       /** @} */
/** @defgroup MUX2_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for enable MUX device
 */
void mux2_deviceEnable();

/**
 * @brief Functions for disable MUX device
 */
void mux2_deviceDisable();

/**
 * @brief Functions for set active MUX channel
 *
 * @param[in] ch    Currently active channel
 *
 * @note
      MUX channal (S1...S8)
 */
void mux2_activeMuxChannel(uint8_t ch);


                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_MUX2_STM.c
    @example Click_MUX2_TIVA.c
    @example Click_MUX2_CEC.c
    @example Click_MUX2_KINETIS.c
    @example Click_MUX2_MSP.c
    @example Click_MUX2_PIC.c
    @example Click_MUX2_PIC32.c
    @example Click_MUX2_DSPIC.c
    @example Click_MUX2_AVR.c
    @example Click_MUX2_FT90x.c
    @example Click_MUX2_STM.mbas
    @example Click_MUX2_TIVA.mbas
    @example Click_MUX2_CEC.mbas
    @example Click_MUX2_KINETIS.mbas
    @example Click_MUX2_MSP.mbas
    @example Click_MUX2_PIC.mbas
    @example Click_MUX2_PIC32.mbas
    @example Click_MUX2_DSPIC.mbas
    @example Click_MUX2_AVR.mbas
    @example Click_MUX2_FT90x.mbas
    @example Click_MUX2_STM.mpas
    @example Click_MUX2_TIVA.mpas
    @example Click_MUX2_CEC.mpas
    @example Click_MUX2_KINETIS.mpas
    @example Click_MUX2_MSP.mpas
    @example Click_MUX2_PIC.mpas
    @example Click_MUX2_PIC32.mpas
    @example Click_MUX2_DSPIC.mpas
    @example Click_MUX2_AVR.mpas
    @example Click_MUX2_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __mux2_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */