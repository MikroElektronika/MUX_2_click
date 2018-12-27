/*
    __mux2_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__mux2_driver.h"
#include "__mux2_hal.c"

/* ------------------------------------------------------------------- MACROS */



/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __MUX2_DRV_I2C__
static uint8_t _slaveAddress;
#endif

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */

/* Channel */
const uint8_t _MUX2_CHANNEL_S1 = 0x00;
const uint8_t _MUX2_CHANNEL_S2 = 0x01;
const uint8_t _MUX2_CHANNEL_S3 = 0x02;
const uint8_t _MUX2_CHANNEL_S4 = 0x03;
const uint8_t _MUX2_CHANNEL_S5 = 0x04;
const uint8_t _MUX2_CHANNEL_S6 = 0x05;
const uint8_t _MUX2_CHANNEL_S7 = 0x06;
const uint8_t _MUX2_CHANNEL_S8 = 0x07;


/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __MUX2_DRV_SPI__

void mux2_spiDriverInit(T_MUX2_P gpioObj, T_MUX2_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __MUX2_DRV_I2C__

void mux2_i2cDriverInit(T_MUX2_P gpioObj, T_MUX2_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __MUX2_DRV_UART__

void mux2_uartDriverInit(T_MUX2_P gpioObj, T_MUX2_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

void mux2_gpioDriverInit(T_MUX2_P gpioObj)
{
    hal_gpioMap( (T_HAL_P)gpioObj );
}

/* ----------------------------------------------------------- IMPLEMENTATION */

void mux2_deviceEnable()
{
    hal_gpio_csSet(1);
}

void mux2_deviceDisable()
{
    hal_gpio_csSet(0);
}

void mux2_activeMuxChannel(uint8_t ch)
{
    if(ch == _MUX2_CHANNEL_S1)
    {
        hal_gpio_intSet(0);
        hal_gpio_pwmSet(0);
        hal_gpio_rstSet(0);
    }
    else if(ch == _MUX2_CHANNEL_S2)
    {
        hal_gpio_intSet(0);
        hal_gpio_pwmSet(0);
        hal_gpio_rstSet(1);
    }
    else if(ch == _MUX2_CHANNEL_S3)
    {
        hal_gpio_intSet(0);
        hal_gpio_pwmSet(1);
        hal_gpio_rstSet(0);
    }
    else if(ch == _MUX2_CHANNEL_S4)
    {
        hal_gpio_intSet(0);
        hal_gpio_pwmSet(1);
        hal_gpio_rstSet(1);
    }
    else if(ch == _MUX2_CHANNEL_S5)
    {
        hal_gpio_intSet(1);
        hal_gpio_pwmSet(0);
        hal_gpio_rstSet(0);
    }
    else if(ch == _MUX2_CHANNEL_S6)
    {
        hal_gpio_intSet(1);
        hal_gpio_pwmSet(0);
        hal_gpio_rstSet(1);
    }
    else if(ch == _MUX2_CHANNEL_S7)
    {
        hal_gpio_intSet(1);
        hal_gpio_pwmSet(1);
        hal_gpio_rstSet(0);
    }
    else if(ch == _MUX2_CHANNEL_S8)
    {
        hal_gpio_intSet(1);
        hal_gpio_pwmSet(1);
        hal_gpio_rstSet(1);
    }
}






/* -------------------------------------------------------------------------- */
/*
  __mux2_driver.c

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