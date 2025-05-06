#define F_CPU 8000000UL  // Set clock speed to 8 MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	// Set port A pins to be outputs
	DDRA = 0xFF;
	
	// Begin at the rightmost led
	uint8_t led = 0x00;
	
    uint8_t tail = 0;

	while(1) {
		PORTA = led;    // Display the led;
		_delay_ms(100);
		if (!tail) {
		    led = (led << 1) + 1;     // Illuminate the next led
			if (led == 0xFF) {
				tail = 1;
			}
		} else {
			led = led << 1;    // Turn off the previous led
			if (led == 0x00) {
				tail = 0;
			}
		}
	}
}
