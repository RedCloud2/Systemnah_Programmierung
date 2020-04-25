/*
 * Lichterkette.c
 * Author : Ahmad Remmo
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define L1 1
#define L2 2
#define L3 4
#define L4 8
#define L5 16
#define L6 32
#define DELAY 80
#define DELAY2 120
#define DELAYENDE 250

int main(void)
{
    DDRB = 0xFF;
	PORTB = 0;
	
    while (1) 
    {
		PORTB = L1;
		_delay_ms(DELAYENDE);
		PORTB = L1 | L2;
		_delay_ms(DELAY);
		PORTB = L2;
		_delay_ms(DELAY2);
		PORTB = L2 | L3;
		_delay_ms(DELAY);
		PORTB = L3;
		_delay_ms(DELAY2);
		PORTB = L3 | L4;
		_delay_ms(DELAY);
		PORTB = L4;
		_delay_ms(DELAY2);
		PORTB = L4 | L5;
		_delay_ms(DELAY);
		PORTB = L5;
		_delay_ms(DELAY2);
		PORTB = L5 | L6;
		_delay_ms(DELAY);
		PORTB = L6;
		_delay_ms(DELAYENDE);
		PORTB = L6 | L5;
		_delay_ms(DELAY);
		PORTB = L5;
		_delay_ms(DELAY2);
		PORTB = L5 | L4;
		_delay_ms(DELAY);
		PORTB = L4;
		_delay_ms(DELAY2);
		PORTB = L4 | L3;
		_delay_ms(DELAY);
		PORTB = L3;
		_delay_ms(DELAY2);
		PORTB = L3 | L2;
		_delay_ms(DELAY);
		PORTB = L2;
		_delay_ms(DELAY2);
		PORTB = L2 | L1;
		_delay_ms(DELAY);
    }
}

