/*
 *  Author: Guilherme Souza <gui.rsouza@gmail.com>
 *  
 *  This sketch blink a led connected in pin 13 of arduino with interval of 500mili
 */

// Arduino pin
int ledPin = 13;

/*
 * Setup: executed only once
 * Start ledPin for output sinal
 */
void setup() {
  pinMode(ledPin, OUTPUT);
}

/*
 * Loop: continues executing method
 * The principal commands and actions are write here, this is the 'body' of application
 */
void loop() {
  // light on led
  digitalWrite(ledPin, HIGH);
  // wait for 500 mili
  delay(500);
  // light off led
  digitalWrite(ledPin, LOW);
  // wait another 500 mili
  delay(500);
  
  // execute method 'loop' again
}