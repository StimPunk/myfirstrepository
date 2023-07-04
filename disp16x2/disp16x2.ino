#include <Wire.h>
#include <hd44780.h> // main hd44780 header
#include <hd44780ioClass/hd44780_I2Cexp.h> // i2c expander i/o class header

hd44780_I2Cexp lcd; // declare lcd object: auto locate & auto config expander chip

// LCD geometry
const int LCD_COLS = 16;
const int LCD_ROWS = 2;

void setup()
{
lcd.begin(LCD_COLS, LCD_ROWS);
lcd.backlight();
lcd.setCursor(3, 0);
lcd.print("Hello, world!");
lcd.setCursor(2, 1);
lcd.print("ot sraka");
}

void loop()
{
}