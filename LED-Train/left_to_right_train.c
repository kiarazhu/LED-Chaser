#define F_CPU 8000000UL  // Set clock speed to 8 MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	// Set port A pins to be outputs
	DDRA = 0xFF;
	
	// Begin with all LEDs off
	uint8_t led = 0x00;
	
	uint8_t tail = 0;

	while(1) {
		
		// Display the led pattern
	    PORTA = led;    
	    _delay_ms(100);
		
		// Moves the train one led to the right
	    led = (led >> 1) + (0x80 * !tail);    
		
        if (led == 0xFF || led == 0x00) {
            tail ^= 1;
        }
	}
}
