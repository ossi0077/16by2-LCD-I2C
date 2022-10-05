#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	//사용 전에 lcd를 초기화 해줍니다.
	lcd.init();

	//lcd의 백라이트를 작동합니다.
	lcd.backlight();

	//lcd의 위치를 (0,0)으로 지정합니다.(좌상단 기준)
	lcd.setCursor(0, 0);

	//출력할 문구를 작성합니다.
	lcd.print("Gongzipsa");

	//lcd의 위치를 (0,1)로 지정합니다.
	lcd.setCursor(0, 1);

	//val 값을 출력합니다.
	int val = 1004;
	lcd.print(val);
}

void loop() {}
