/*
 * Blink1.c
 * Author : Ahmad Remmo
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define ROT 2
#define GELB 4
#define GRUN 1


int main(void)
{
    // Richtung des Signals
	DDRB = 0xFF;
	PORTB = 0;
	
    while (1) 
    {
		PORTB = ROT;
		_delay_ms(2000);
		PORTB = ROT | GELB;
		_delay_ms(1000);
		PORTB = GRUN;
		_delay_ms(2000);
		PORTB = GELB;
		_delay_ms(1000);
		
    }
}

