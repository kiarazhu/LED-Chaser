# Single LEDs

These are some basic patterns that light up LEDs one at a time. 

## Left to Right

Travels from the leftmost LED to the rightmost LED before returning to the leftmost LED and repeating this pattern. The implementation is in `left_to_right.c`:

<img height="400" alt="image0" src="https://github.com/user-attachments/assets/c6d8e83e-d3df-45d8-a9c8-04ca52ca6beb" />
<img height="400" alt="image1" src="https://github.com/user-attachments/assets/7fe7ccaa-d06b-4e89-8587-a5fadbbfbc75" />


## Right to Left

Travels from the rightmost LED to the leftmost LED before returning to the rightmost LED and repeating this pattern. The implementation is in `right_to_left.c`:

<img height="400" alt="image2" src="https://github.com/user-attachments/assets/695520ad-dfa3-46d9-bdf2-27a7ff6e5d91" />
<img height="400" alt="image3" src="https://github.com/user-attachments/assets/abc3cc11-6141-40d2-ad16-7248d502dd48" />

## Back and Forth

Bounces back and forth between the leftmost and rightmost LEDs. Starts at the leftmost LED. The implementation is in `back_and_forth.c`:

<img height="400" alt="image0" src="https://github.com/user-attachments/assets/c6d8e83e-d3df-45d8-a9c8-04ca52ca6beb" />
<img height="400" alt="image1" src="https://github.com/user-attachments/assets/7fe7ccaa-d06b-4e89-8587-a5fadbbfbc75" />
<img height="300" alt="image4" src="https://github.com/user-attachments/assets/4fafcb77-36e3-4516-8394-5650f053bf00" />
<img height="300" alt="image5" src="https://github.com/user-attachments/assets/92a0b994-6a37-4619-a48d-78bb93874b86" />

## Switch Control

`switch_control.c` has the microcontroller connected to two switches; one selects the direction of the chaser while the other selects whether the bits are inverted or not.
