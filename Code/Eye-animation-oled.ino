#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void drawEyes(int eyeHeight)
{
    display.clearDisplay();

    display.fillRoundRect(20, 20, 35, eyeHeight, 10, WHITE);

    display.fillRoundRect(73, 20, 35, eyeHeight, 10, WHITE);

    if(eyeHeight>8)
    {
        display.fillCircle(30, 28, 3, BLACK);
        display.fillCircle(83, 28, 3, BLACK);
    }

    display.display();
}

void blink()
{
    for(int h=25; h>=3; h -= 2)
    {
        drawEyes(h);
        delay(30);
    }
    delay(100);

    for(int h =3; h<=25; h += 2)
    {
        drawEyes(h);
        delay(30);
    }
}

void setup()
{
    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) 
    {
        while (true);
    }
    display.clearDisplay();

}

void loop()
{
    drawEyes(25);
    delay(3000);

    blink();

    delay(500);
}
