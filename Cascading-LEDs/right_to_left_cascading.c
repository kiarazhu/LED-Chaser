#define F_CPU 8000000UL  // Set clock speed to 8 MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	// Set port A pins to be outputs
	DDRA = 0xFF;
	
	// Begin at the rightmost led
	uint8_t led = 0x00;

	while(1) {
		PORTA = led;    // Display the led;
		_delay_ms(100);
		led = (led << 1) + 1;     // Illuminate the next led
		
		/* If the led value has reached the leftmost
		led, illuminate all leds before resetting the
		pattern */
        if (led == 0xFF)   {
			PORTA = led;
			_delay_ms(100);
            led = 0x00;
		}
	}
}
