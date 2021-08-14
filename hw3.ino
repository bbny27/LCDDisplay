#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows

byte customChar1[] = {
  B00000,
  B00110,
  B01001,
  B01000,
  B01000,
  B00100,
  B00010,
  B00001
};

byte customChar2[] = {
  B00000,
  B01100,
  B10010,
  B00010,
  B00010,
  B00100,
  B01000,
  B10000
};

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();

  lcd.begin(16, 2);
  lcd.createChar(0, customChar1);
  lcd.createChar(1, customChar2);
  lcd.home();
  lcd.setCursor(0 ,0);
  lcd.write(0);
  lcd.setCursor(1 ,0);
  lcd.write(1);
}

void loop()
{
}
