#define F_CPU 8000000UL  // Set clock speed to 8 MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	// Set port A pins to be outputs
	DDRA = 0xFF;
	
	// Begin at the rightmost led
	uint8_t led = 0x01;

	while(1) {
		PORTA = led;    // Display the led
		_delay_ms(100);
		led <<= 1;     // Shift to the next led
		
		/* If the led value has passed the leftmost
		led, reset to the rightmost led */
        if (led == 0x00)   {
            led = 0x01;
		}
	}
}
