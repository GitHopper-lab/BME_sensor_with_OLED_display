
#ifndef H_A
#define H_A

#include <Arduino.h> //needed for Serial.println
//#include "weatherStation.h"

#include <Wire.h>                 // I2C
#include <Adafruit_GFX.h>         // OLED
#include <Adafruit_SSD1306.h>     // Graphic

#define OLED_RESET 4 // not used nicht genutzt bei diesem Display
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

//Adafruit_SSD1306 display(OLED_RESET); Treiber vor Version1.2
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setupClock() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  Wire.begin();
  display.display();
  delay(5000);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(INVERSE);
}

void showClock()
{
  display.clearDisplay();
  display.setCursor(10,5);
  display.println("*Weather Station*");
  display.println("------------------");
  display.display();
}
    


#endif
