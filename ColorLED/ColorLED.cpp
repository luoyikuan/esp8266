#include "ColorLED.h"

ColorLED::ColorLED(uint8_t redPin, uint8_t greenPin, uint8_t bluePin)
{
    this->redPin = redPin;
    this->greenPin = greenPin;
    this->bluePin = bluePin;
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void ColorLED::setColor(uint8_t r, uint8_t g, uint8_t b)
{
    analogWrite(redPin, r);
    analogWrite(greenPin, g);
    analogWrite(bluePin, b);
}

void ColorLED::setColor(uint32_t color)
{
    uint8_t r = color >> 16;
    uint8_t g = color >> 8;
    uint8_t b = color;

    this->setColor(r, g, b);
}