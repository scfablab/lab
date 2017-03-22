#include <avr/io.h>
#include <util/delay.h>

int main(void) {

DDRB |= (1 << PB2);

while (1) {

PORTB = 0b00000100;
_delay_ms(100);

PORTB = 0b00000000;
_delay_ms(100);

}
return (0);
}


