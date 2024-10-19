# Electronic-Piano-
This project involves the design and construction of a physical electronic piano using an Arduino UNO. The device allows users to play a variety of musical notes and demonstrates the integration of hardware and software in creating an interactive musical instrument.
![Piano Hardware](./piano%20img.jpg)(https://drive.google.com/file/d/1lT8KhRoUK-ox2UvT-8n0xzKgx9M4fNLJ/view?usp=sharing)



Definitions:
Tone Frequencies:

The #define statements set the frequency of musical notes in hertz (Hz) for the notes C, D, E, F, G, A, and B.
T_C = 300 Hz
T_D = 294 Hz
T_E = 330 Hz
T_F = 400 Hz
T_G = 500 Hz
T_A = 440 Hz
T_B = 493 Hz
Pin Assignments:

The const int variables assign specific pin numbers to different notes and components.
Pins 10–4: Represent musical notes C to B.
Pin 12: Buzzer output.
Pin 13: LED output.
setup() function:
Configures the pins:
Sets the LED pin (13) as an output.
Sets the note pins (4–10) as inputs, which means each pin will read the state of a button or sensor.
loop() function:
Continuously checks if any of the note pins are HIGH (button pressed).
If a button is pressed, it:
Plays the corresponding tone on the buzzer using tone() function.
Lights up the LED.
Once no button is pressed, it stops the buzzer (noTone()) and turns off the LED (digitalWrite(LED,LOW)).


Button Press: When a button is pressed, the corresponding note's frequency is sent to the buzzer, and the LED turns on.
Tone Generation: The tone() function is used to generate a square wave of the specified frequency on the Buzz pin.
Stop Tone: When no buttons are pressed, the buzzer is silenced, and the LED turns off.
This setup could be used as a simple electronic musical keyboard, where each button press plays a specific note and lights up the LED.


