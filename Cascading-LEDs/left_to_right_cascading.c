#define F_CPU 8000000UL  // Set clock speed to 8 MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	// Set port A pins to be outputs
	DDRA = 0xFF;
	
	// Begin with all LEDs off
	uint8_t led = 0x00;

	while(1) {
		
	    PORTA = led;    // Display the led pattern
	    _delay_ms(100);
	    led = (led >> 1) + 0x80;     // Update the LED value
		
	/* Once the rightmost LED is reached, illuminate
	all leds before restarting the pattern */
        if (led == 0xFF) {
	    PORTA = led;    // Display the led pattern
    	    _delay_ms(100);
            led = 0x00;
	}
    }
}
