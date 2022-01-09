#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 6, 7, 8);

void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("-->Joorse Bolo<--"); 
  lcd.setCursor(0,1);
  lcd.print("-->Jai Matadi<--");
  
}
