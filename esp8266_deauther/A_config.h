#ifndef config_h
#define config_h

// ===== DISPLAY LIBRARY ===== //
#include <Wire.h>
#include <SPI.h>
#include "SSD1306Wire.h"
// =========================== //

//#define DEFAULT_SSID "pwned"
//#define HIGHLIGHT_LED 16

#define RGB_LED

// === Settings for Digital LED and RGB LED === //
#define LED_ANODE false   // common vcc (+)
#define LED_PIN_R 12  
#define LED_PIN_G 13  
#define LED_PIN_B 15 

// === Settings for RGB LED and Neopixel LED === //
#define LED_MODE_BRIGHTNESS 10 // brightness of LED modes 

// ===================== DISPLAY CONFIG ==================== //
#define USE_DISPLAY true // default display setting

/* = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
    Adjust the pins to match your setup
    Comment out the buttons you don't use.
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = */
#define BUTTON_UP 0
#define BUTTON_DOWN 14
#define BUTTON_A 10

//#define BUTTON_LEFT 12
//#define BUTTON_RIGHT 13
//#define BUTTON_B 10

#define DEAUTHER_DISPLAY SSD1306Wire display = SSD1306Wire(0x3c, 5, 4); // for 0.96" OLED

//#define FLIP_DIPLAY // uncomment that to flip the display vertically
// ========================================================= //

#endif
