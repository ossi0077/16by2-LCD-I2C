#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define btn 7
int state = 0;
int state1 = 0;

void setup()
{ 
  pinMode(btn,INPUT_PULLUP);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Gongzipsa");
  lcd.setCursor(0, 1);
  int val = 18;
  lcd.print(val);
}

void loop()
{
  state = digitalRead(btn);
  if(state==0)
  {
    if(state1 == 0)
    {
      lcd.init();
      lcd.backlight();
      lcd.setCursor(0, 0);
      lcd.print("button pushed!");
      lcd.setCursor(0, 1);
      lcd.print("Gongzipsa");
      state1++;
    }
    else if(state1 == 1)
    {
      lcd.init();
      lcd.backlight();
      lcd.setCursor(0, 0);
      lcd.print("Gongzipsa");
      lcd.setCursor(0, 1);
      int val = 18;
      lcd.print(val);
      state1--;
    }
  }
}
