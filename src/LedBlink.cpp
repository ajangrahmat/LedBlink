#include "LedBlink.h"

LedBlink::LedBlink(byte _pinLed) {
  pinLed = _pinLed;
  pinMode(pinLed, OUTPUT);
}

void LedBlink::blink(int _delay) {
  digitalWrite(pinLed, HIGH);
  delay(_delay);
  digitalWrite(pinLed, LOW);
  delay(_delay);
}
