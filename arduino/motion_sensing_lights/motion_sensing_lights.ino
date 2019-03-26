/*
   T3chFlicks - Motion Sensing Under Bed Lighting
   Free to use and distribute.
   Find the tutorial and parts list at https://t3chflicks.com/shop/kit/motion-sensing-bed-night-light/
*/

#include "FastLED.h"
#define LED_DATA_PIN 2
#define NUM_LEDS 250
CRGB leds[NUM_LEDS];

int onTime = 30*1000; // 30 seconds
int motion_sensor_left = 3;
int motion_sensor_right = 4;
int motion_sensor_front = 5;
int fadeTimeDiff = 50;

void setup() {
  FastLED.addLeds<WS2811, LED_DATA_PIN, BRG>(leds, NUM_LEDS);
  pinMode(motion_sensor_left, INPUT);
  pinMode(motion_sensor_right, INPUT);
  pinMode(motion_sensor_front, INPUT);
}

void loop() {
  if (digitalRead(motion_sensor_left) == 1 || digitalRead(motion_sensor_right) == 1 || digitalRead(motion_sensor_front) == 1) {
    fadeIn();
    delay(onTime);
    fadeOut();
  }
}

void fadeIn() {
  for (int led = 0; led < NUM_LEDS; led++) {
    leds[led] = CRGB( 150, 60, 15);
  }
  for (int b = 0; b < 255; b += 2) {
    FastLED.setBrightness(b);
    FastLED.show();
    delay(fadeTimeDiff);
  }
}

void fadeOut() {
  for (int led = 0; led < NUM_LEDS; led++) {
    leds[led] = CRGB( 150, 60, 15);
  }
  for (int b = 255; b > 0; b -= 2) {
    FastLED.setBrightness(b);
    FastLED.show();
    delay(fadeTimeDiff);
  }
  for (int led = 0; led < NUM_LEDS; led++) {
    leds[led] = CRGB::Black;
  }
  FastLED.show();
}




