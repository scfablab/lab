//basic blink program

#include <avr/io.h>
#include <util/delay.h> 		//include libraries

int main (void) {

	DDRA |= (1 << PA5); 		// motor pin is declared to be output pin


	while(1) {

		PORTA |= (1 << PA5); 	// set PA5 pin "high" (turned on)

		_delay_ms(200);		// delay function -defined in <util/delay.h> library- is used 

		PORTA &= ~(1 << PA5);   // set PA5 pin "low"  (turned off)

		_delay_ms(200);		// delay function -defined in <util/delay.h> library- is used
	}

	return(0);
	
	}

