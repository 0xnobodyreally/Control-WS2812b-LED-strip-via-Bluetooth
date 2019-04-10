//  DEFINE YOUR VARIABLES HERE

#include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>


SoftwareSerial BT(10, 11);  // TX, RX of the Bluetooth Module 

#define PIXEL_PIN      6    // Data Pin of Led strip 
#define PIXEL_COUNT    50   // Number of LEDs in the strip
#define BRIGHTNESS     7    // use 96 for medium brightness
#define SPEED          50    // Speed of each Color Transition (in ms)
#define IMMEDIATELY    0    // Transition happen instantly
#define RAINBOW_SPEED  50    // Rainbow Transition speed


Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

bool offOld = LOW;
bool WhiteOld = LOW;
bool RedOld = LOW;
bool GreenOld = LOW;
bool BlueOld = LOW;
bool TopazOld = LOW;
bool LilacOld = LOW;
bool RainbowOld = LOW;
bool rgbOld = LOW;
int  showType = 0;
