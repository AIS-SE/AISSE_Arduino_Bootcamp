/*
  Author:
  Learning Intention:
  The students will learn to control a Light Emitting Diode (LED) using an Arduino board.

  Success Criteria:
    1.  I understand what an LED is and how it works.
    2.  I can correctly identify the anode and cathode of an LED.
    3.  I understand the importance of a current-limiting resistor with an LED.
    4.  I can correctly wire an LED to an Arduino board.
    5.  I can write Arduino code to turn an LED on and off.
    6.  I can modify the code to make the LEDs blink.
    7.  I can explain the `pinMode()` and `digitalWrite()` functions.

  Student Notes:
    * LEDs are polarized components, meaning they must be connected in the correct direction to work. The longer leg is typically the anode (positive, connects to the Arduino's digital pin), and the shorter leg is the cathode (negative, connects to ground).
    * Always use a current-limiting resistor in series with an LED to prevent it from burning out. A common value for a standard 5mm LED with a 5V Arduino is 220 ohms.
    * The Arduino's digital pins can be set as either INPUTs or OUTPUTs using `pinMode()`.
    * To turn an LED on or off, we use `digitalWrite()` to set the pin to HIGH (on) or LOW (off).

  Documentation:
    * Digital Pins: https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
    * pinMode(): https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
    * digitalWrite(): https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
    * delay(): https://www.arduino.cc/reference/en/language/functions/time/delay/

  Examples:
    * Blink Example (built into Arduino IDE): File > Examples > 01.Basics > Blink
    * Knight Rider: [https://www.arduino.cc/en/Tutorial/KnightRider/](https://www.arduino.cc/en/Tutorial/KnightRider/)
*/

void setup() {

}

void loop() {

}
