# 16X2 LCD I2C module 사용법

(Arduino UNO 기준으로 작성)

I2C 통신으로 4개의 배선으로 16*2 LCD를 제어하는 모듈입니다.

I2C주소는 대부분 "0x27"이지만 간혹 다른경우가 있으므로 주소 확인 후 사용을 권장합니다.


## 필요 하드웨어

	- 16*2 LCD I2C MODULE

	- Arduino UNO

	- UNO cable

	- F-M Cable (4ea)


## 필요 라이브러리

	- Wire

	- LiquidCrystal_I2C


## 연결

|I2C LCD|아두이노|
|---|---|
|GND|GND|
|VCC|5V|
|SDA|A4|
|SCL|A5|

## 주소 확인
	- address_check코드를 업로드 후 시리얼 모니터 실행 시 주소 확인 가능합니다.

## 추가사항
	- I2C의 가변저항을 조절하여 LCD의 밝기를 조절 가능합니다.