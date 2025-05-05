#define F_CPU 8000000UL  // Set clock speed to 8 MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	// Set port A pins to be outputs
	DDRA = 0xFF;
	
	// Begin at the leftmost led
	uint8_t led = 0x80;
	
	/* Boolean value to indicate if led should
	travel left or right */
	uint8_t left = 1;

	while(1) {
		PORTA = led;    // Display the led
		_delay_ms(100);
		
		if (left) {
			led >>= 1;    // Shift left
		} else {
			led <<= 1;    // Shift right
		}

		/* If the led value is out of bounds,
		bounce the led back in the other
		direction */
        if (led == 0x00)   {
			
			if (left) {
				led = 0x01 << 1;
			} else {
                led = 0x80 >> 1;
		    }
			
			// Change direction
			left ^= 1;    
			
		}
	}
}
