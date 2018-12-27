_systemInit:
;Click_MUX2_STM.c,30 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_MUX2_STM.c,32 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #6
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_MUX2_STM.c,33 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #1
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_MUX2_STM.c,34 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_MUX2_STM.c,35 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #7
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_MUX2_STM.c,36 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_MUX2_STM.c,37 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_MUX2_STM.c,39 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_MUX2_STM.c,41 :: 		mux2_gpioDriverInit( (T_MUX2_P)&_MIKROBUS1_GPIO );
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_mux2_gpioDriverInit+0
;Click_MUX2_STM.c,42 :: 		mux2_deviceEnable();
BL	_mux2_deviceEnable+0
;Click_MUX2_STM.c,43 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_MUX2_STM.c,44 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_MUX2_STM.c,46 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_MUX2_STM.c,48 :: 		mux2_activeMuxChannel(_MUX2_CHANNEL_S1);
MOVS	R0, __MUX2_CHANNEL_S1
BL	_mux2_activeMuxChannel+0
;Click_MUX2_STM.c,49 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_MUX2_STM.c,50 :: 		mux2_activeMuxChannel(_MUX2_CHANNEL_S2);
MOVS	R0, __MUX2_CHANNEL_S2
BL	_mux2_activeMuxChannel+0
;Click_MUX2_STM.c,51 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask4:
SUBS	R7, R7, #1
BNE	L_applicationTask4
NOP
NOP
NOP
;Click_MUX2_STM.c,52 :: 		mux2_activeMuxChannel(_MUX2_CHANNEL_S3);
MOVS	R0, __MUX2_CHANNEL_S3
BL	_mux2_activeMuxChannel+0
;Click_MUX2_STM.c,53 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask6:
SUBS	R7, R7, #1
BNE	L_applicationTask6
NOP
NOP
NOP
;Click_MUX2_STM.c,54 :: 		mux2_activeMuxChannel(_MUX2_CHANNEL_S4);
MOVS	R0, __MUX2_CHANNEL_S4
BL	_mux2_activeMuxChannel+0
;Click_MUX2_STM.c,55 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask8:
SUBS	R7, R7, #1
BNE	L_applicationTask8
NOP
NOP
NOP
;Click_MUX2_STM.c,56 :: 		mux2_activeMuxChannel(_MUX2_CHANNEL_S5);
MOVS	R0, __MUX2_CHANNEL_S5
BL	_mux2_activeMuxChannel+0
;Click_MUX2_STM.c,57 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask10:
SUBS	R7, R7, #1
BNE	L_applicationTask10
NOP
NOP
NOP
;Click_MUX2_STM.c,58 :: 		mux2_activeMuxChannel(_MUX2_CHANNEL_S6);
MOVS	R0, __MUX2_CHANNEL_S6
BL	_mux2_activeMuxChannel+0
;Click_MUX2_STM.c,59 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask12:
SUBS	R7, R7, #1
BNE	L_applicationTask12
NOP
NOP
NOP
;Click_MUX2_STM.c,60 :: 		mux2_activeMuxChannel(_MUX2_CHANNEL_S7);
MOVS	R0, __MUX2_CHANNEL_S7
BL	_mux2_activeMuxChannel+0
;Click_MUX2_STM.c,61 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask14:
SUBS	R7, R7, #1
BNE	L_applicationTask14
NOP
NOP
NOP
;Click_MUX2_STM.c,62 :: 		mux2_activeMuxChannel(_MUX2_CHANNEL_S8);
MOVS	R0, __MUX2_CHANNEL_S8
BL	_mux2_activeMuxChannel+0
;Click_MUX2_STM.c,63 :: 		Delay_ms( 5000 );
MOVW	R7, #34559
MOVT	R7, #915
NOP
NOP
L_applicationTask16:
SUBS	R7, R7, #1
BNE	L_applicationTask16
NOP
NOP
NOP
;Click_MUX2_STM.c,65 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_MUX2_STM.c,67 :: 		void main()
;Click_MUX2_STM.c,69 :: 		systemInit();
BL	_systemInit+0
;Click_MUX2_STM.c,70 :: 		applicationInit();
BL	_applicationInit+0
;Click_MUX2_STM.c,72 :: 		while (1)
L_main18:
;Click_MUX2_STM.c,74 :: 		applicationTask();
BL	_applicationTask+0
;Click_MUX2_STM.c,75 :: 		}
IT	AL
BAL	L_main18
;Click_MUX2_STM.c,76 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
