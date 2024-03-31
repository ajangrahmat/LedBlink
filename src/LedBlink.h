#ifndef LedBlink_h
#define LedBlink_h
#include "Arduino.h"

class LedBlink {
  private:
    byte pinLed;
  public:
    LedBlink(byte _pinLed);
    void blink(int _delay);
};

#endif