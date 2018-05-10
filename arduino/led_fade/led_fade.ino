/*
 * Author: Guilherme Souza <gui.rsouza@gmail.com>
 *
 * This sketch give a animation of fade in Led's
 *
 */

int led = 5;

int brilho;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  
  // aumentar o brilho dos lEDs
  for (brilho = 0; brilho <= 255; brilho = brilho + 5) {
    analogWrite(led, brilho);
    // delay para atrasar momento fade
    delay(50);
  }

  // reduz o brilho dos lEDs
  for (brilho = 255; brilho >= 0; brilho = brilho - 5) {
    analogWrite(led, brilho);
    // delay para atrasar momento fade
    delay(50);
  }

}