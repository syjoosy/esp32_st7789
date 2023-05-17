#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();

void setup()
{
  tft.begin();
  tft.setRotation(0);
  tft.fillScreen(TFT_BLACK);
  tft.setSwapBytes(true);
  tft.setCursor(100, 100); 
  tft.setTextSize(2);
  tft.println("Hello world!"); 
}

void loop()
{
}
