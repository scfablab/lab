					//LED+switch blinking

#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	DDRB=0b00000100;				//defined PB2 (LED) as output
		
	PORTB=0b00000100;				//given "high" status to PB2
	
	DDRA=0b00000000;				//PA7 (switch) is an input 

	PORTA=0b10000000;				//given default value to PA7 (internal pull-up)

	while(1) {
	
		if ((PINA &= (0b10000000)) == 0) {	// if button is pressed

			PORTB |= 0b00000100; 		// set PB2 pin "high" (turned on) - led is turned on

			_delay_ms(100);			// delay function -defined in <util/delay.h> library- is used 
	
			PORTB &= ~(0b00000100);   	// set PB2 pin "low"  (turned off)

			_delay_ms(100);			// delay function -defined in <util/delay.h> library- is used

            PORTB |= 0b00000100; 		// set PB2 pin "high" (turned on) - led is turned on

			_delay_ms(100);			// delay function -defined in <util/delay.h> library- is used 


			        if (PINA |= (0b10000000)) {    //if after 2 blinkings button is not pressed anymore
                    
                       PORTB &= ~(0b00000100);       // turn led off

                            }

                    else {
    
                        PORTB |= 0b00000100; 		// if button is still pressed, keep LED on for more for warning

			            _delay_ms(10000);	
                    
                        PORTB &= ~(0b00000100);       // turn led off


                    }
		}
		
		else {

			PORTB &= ~(0b00000100);   	// led is turned off

		}

	}
			
	return(0);	 

	}
