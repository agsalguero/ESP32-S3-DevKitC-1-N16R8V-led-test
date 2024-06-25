#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 1
#define DATA_PIN 48

CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<SK6812, DATA_PIN, GRB>(leds, NUM_LEDS);
  Serial.begin(115200);
}

void loop()
{
  leds[0] = CRGB::Red;
  FastLED.show();
  Serial.println("RED LED is ON");
  delay(1000);
  leds[0] = CRGB::Green;
  FastLED.show();
  Serial.println("GREEN LED is ON");
  delay(1000);
  leds[0] = CRGB::Blue;
  FastLED.show();
  Serial.println("BLUE LED is ON");
  delay(1000);
  leds[0] = CRGB::Black;
  FastLED.show();
  Serial.println("LED's are OFF");

  delay(5000);
}