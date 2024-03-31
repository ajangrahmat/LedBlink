#include <LedBlink.h>
LedBlink led1(13);
LedBlink led2(12);
LedBlink led3(11);

void setup() {
}

void loop() {
  led1.blink(150);
  led2.blink(150);
  led3.blink(150);
}
