#define F_CPU 8000000UL  // Set clock speed to 8 MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	
    // Set port C pins to be inputs
    DDRC = 0;    // Default value; can omit
	
	// Set port A pins to be outputs
	DDRA = 0xFF;
	
	// Begin at the leftmost led
	uint8_t led = 0x80;
	
	uint8_t left = 0;
	
	uint8_t invert = 0;
	

	while(1) {
		left = PINC & 0x01;    // Read the value of switch
		invert = PINC & 0x02;
		
		if (invert) {
			PORTA = led ^ 0xFF;
		} else {
			PORTA = led;    // Display the led
		}
		
		_delay_ms(100);
		
		if (!left) {
		    led >>= 1;     // Shift to the next led
		} else {
			led <<= 1;
		}
		/* If the led value has gone out of bounds,
		put it back into bounds */
        if (led == 0x00)   {
			if (!left) {
				led = 0x80;
			} else {
				led = 0x01;
			}
		}
	}
}
