#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Wire.begin(21, 22);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true);
  }
}

void loop() {
  display.clearDisplay();

  display.drawRoundRect(20, 18, 88, 28, 14, WHITE);

  display.fillCircle(64, 32, 8, WHITE);

  display.display();

  delay(1000);

  display.clearDisplay();
  display.drawLine(20, 32, 108, 32, WHITE);
  display.display();

  delay(200);
}
