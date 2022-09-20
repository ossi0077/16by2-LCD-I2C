#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	//��� ���� lcd�� �ʱ�ȭ ���ݴϴ�.
	lcd.init();

	//lcd�� �����Ʈ�� �۵��մϴ�.
	lcd.backlight();

	//lcd�� ��ġ�� (0,0)���� �����մϴ�.(�»�� ����)
	lcd.setCursor(0, 0);

	//����� ������ �ۼ��մϴ�.
	lcd.print("Gongzipsa");

	//lcd�� ��ġ�� (0,1)�� �����մϴ�.
	lcd.setCursor(0, 1);

	//val ���� ����մϴ�.
	int val = 18;
	lcd.print(val);
}

void loop() {}