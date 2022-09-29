//3색 신호등 + LCD
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define ledR 3
#define ledY 4
#define ledG 5
#define dly 1000
int init_start = 0;

void setup()
{
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledG, OUTPUT);
  
  lcd_init();
  lcd.setCursor(0, 0);
  lcd.print("Gongzipsa");
  lcd.setCursor(0, 1);
  int val = 18;
  lcd.print(val);
  ryg_init();
  delay(500);
}

void loop()
{
  lcd_write(0);
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  delay(dly);

  lcd_write(1);
  digitalWrite(ledG, LOW);
  digitalWrite(ledY, HIGH);
  delay(dly);

  lcd_write(2);
  digitalWrite(ledY, LOW);
  digitalWrite(ledR, HIGH);
  delay(dly);    
}

void ryg_init()
{
  digitalWrite(ledR, LOW);
  digitalWrite(ledY, LOW);
  digitalWrite(ledG, LOW);
}

void lcd_init()
{
  lcd.init();
  lcd.backlight();
}

void lcd_write(int i)
{
  if(i==0)
  {
    lcd_init();
    lcd.setCursor(0,0);
    lcd.print("Green");
    lcd.setCursor(0,1);
    lcd.print("Go!");
  }
  else if(i==1)
  {
    lcd_init();
    lcd.setCursor(0,0);
    lcd.print("Yellow");
    lcd.setCursor(0,1);
    lcd.print("steady!");
  }
  else if(i==2)
  {
    lcd_init();
    lcd.setCursor(0,0);
    lcd.print("Red");
    lcd.setCursor(0,1);
    lcd.print("Stop!");
  }
}
