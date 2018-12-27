#line 1 "D:/Clicks_git/M/MUX_2_Click/SW/example/c/ARM/STM/Click_MUX2_STM.c"
#line 1 "d:/clicks_git/m/mux_2_click/sw/example/c/arm/stm/click_mux2_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/m/mux_2_click/sw/example/c/arm/stm/click_mux2_config.h"
#line 1 "d:/clicks_git/m/mux_2_click/sw/example/c/arm/stm/click_mux2_types.h"
#line 1 "d:/clicks_git/m/mux_2_click/sw/library/__mux2_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 58 "d:/clicks_git/m/mux_2_click/sw/library/__mux2_driver.h"
extern const uint8_t _MUX2_CHANNEL_S1;
extern const uint8_t _MUX2_CHANNEL_S2;
extern const uint8_t _MUX2_CHANNEL_S3;
extern const uint8_t _MUX2_CHANNEL_S4;
extern const uint8_t _MUX2_CHANNEL_S5;
extern const uint8_t _MUX2_CHANNEL_S6;
extern const uint8_t _MUX2_CHANNEL_S7;
extern const uint8_t _MUX2_CHANNEL_S8;
#line 85 "d:/clicks_git/m/mux_2_click/sw/library/__mux2_driver.h"
void mux2_gpioDriverInit( const uint8_t*  gpioObj);



void mux2_deviceEnable();

void mux2_deviceDisable();

void mux2_activeMuxChannel(uint8_t ch);
#line 30 "D:/Clicks_git/M/MUX_2_Click/SW/example/c/ARM/STM/Click_MUX2_STM.c"
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
 mux2_gpioDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO );
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
