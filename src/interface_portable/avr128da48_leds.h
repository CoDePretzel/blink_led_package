/* 
 * File:   avr128da48_leds.h
 * Author: rafae
 *
 * Created on October 16, 2022, 12:07 AM
 */

#ifndef AVR128DA48_LEDS_H
#define	AVR128DA48_LEDS_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "../mcc_generated_files/system/system.h"
#include "../mcc_generated_files/timer/delay.h"
    
#define inicializar_sistema() SYSTEM_Initialize()
#define apagar_led_0() MCC_LED_0_SetLow()
#define prender_led_0() MCC_LED_0_SetHigh()
#define delay_ms(cantidad_ms) DELAY_milliseconds(cantidad_ms)

#ifdef	__cplusplus
}
#endif

#endif	/* AVR128DA48_LEDS_H */

