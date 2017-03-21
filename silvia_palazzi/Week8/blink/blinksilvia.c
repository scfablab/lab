							//basic blink program

#include <avr/io.h>
#include <util/delay.h> 		//include libraries

int main (void) {

	DDRB |= (1 << PB2); 		// LED pin is declared to be output pin


	while(1) {

		PORTB |= (1 << PB2); 	// set PB2 pin "high" (turned on)

		_delay_ms(200);		// delay function -defined in <util/delay.h> library- is used 

		PORTB &= ~(1 << PB2);   // set PB2 pin "low"  (turned off)

		_delay_ms(200);		// delay function -defined in <util/delay.h> library- is used
	}

	return(0);
	
	}
