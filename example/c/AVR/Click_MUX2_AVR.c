/*
Example for MUX2 Click

    Date          : okt 2018.
    Author        : Katarina Perendic

Test configuration AVR :
    
    MCU              : ATMEGA32
    Dev. Board       : EasyAVR v7 
    AVR Compiler ver : v7.0.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Sets RST pin, CS pin, PWM pin and INT pin as OUTPUT
- Application Initialization - Initialization driver init end enable device
- Application Task - (code snippet) - Sets the current active channel. Changes the channel every 5 sec.

*/

#include "Click_MUX2_types.h"
#include "Click_MUX2_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_OUTPUT );
    Delay_ms( 100 );
}

void applicationInit()
{
    mux2_gpioDriverInit( (T_MUX2_P)&_MIKROBUS1_GPIO );
    mux2_deviceEnable();
    Delay_100ms();
}

void applicationTask()
{
     mux2_activeMuxChannel(_MUX2_CHANNEL_S1);
     Delay_ms( 5000 );
     mux2_activeMuxChannel(_MUX2_CHANNEL_S2);
     Delay_ms( 5000 );
     mux2_activeMuxChannel(_MUX2_CHANNEL_S3);
     Delay_ms( 5000 );
     mux2_activeMuxChannel(_MUX2_CHANNEL_S4);
     Delay_ms( 5000 );
     mux2_activeMuxChannel(_MUX2_CHANNEL_S5);
     Delay_ms( 5000 );
     mux2_activeMuxChannel(_MUX2_CHANNEL_S6);
     Delay_ms( 5000 );
     mux2_activeMuxChannel(_MUX2_CHANNEL_S7);
     Delay_ms( 5000 );
     mux2_activeMuxChannel(_MUX2_CHANNEL_S8);
     Delay_ms( 5000 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}