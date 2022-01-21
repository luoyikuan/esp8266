#ifndef _ColorLED_H
#define _ColorLED_H

#include <Arduino.h>

class ColorLED
{
protected:
    uint8_t redPin;
    uint8_t greenPin;
    uint8_t bluePin;

public:
    ColorLED(uint8_t redPin, uint8_t greenPin, uint8_t bluePin);
    void setColor(uint8_t r, uint8_t g, uint8_t b);
    void setColor(uint32_t color);
};

#endif