					//LED+switch blinking

#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	DDRB=0b00000100;		//defined PB2 as output

	PORTB=0b0000100;		//given "high" status to PB2
	
	DDRA=0b00000000;		//PA7 is an input

	PORTA=0b10000000;		//given default value to PA7 (internal pull-up)

	while(1) {
	
		if (PINA &= (0b10000000) == 0) {

			PORTB |= (0b00000100); 	// set PB2 pin "high" (turned on)

			_delay_ms(200);		// delay function -defined in <util/delay.h> library- is used 
	
			PORTB &= ~(0b00000100);   // set PB2 pin "low"  (turned off)

			_delay_ms(200);		// delay function -defined in <util/delay.h> library- is used

		}
		
		else {

			PORTB &= ~(0b00000100);

		}

	}
			
	return(0);	 


}
