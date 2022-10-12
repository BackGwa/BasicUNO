
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

void SetText(char *TEXT, int COLUMNS = 0, int ROW = 0);
void Resetlcd();
void Setlcd(bool BACKLIGHT = true, bool CURSOR = false, bool SHOW = true);

LiquidCrystal_I2C lcd(0x27,20,4);    //LCD주소 0x27
//LiquidCrystal_I2C lcd(0x3F,20,4);  //LCD주소 0x3F

void setup()
{
  lcd.init();
  lcd.backlight();
}

/*
void loop() {...}
*/

void SetText(char *TEXT, int COLUMNS = 0, int ROW = 0)
{
  lcd.setCursor(COLUMNS,ROW);
  lcd.print(TEXT);
}

void Resetlcd()
{
  lcd.backlight();
  lcd.clear();
}

void Setlcd(bool BACKLIGHT = true, bool CURSOR = false, bool SHOW = true)
{
  if(BACKLIGHT)
    lcd.backlight();
  else
    lcd.noBacklight();

  if(CURSOR)
    lcd.cursor();
  else
    lcd.noCursor();

  if(SHOW)
    lcd.display();
  else
    lcd.noDisplay();
}