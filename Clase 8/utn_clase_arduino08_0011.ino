// Liberia para LCD
#include <LiquidCrystal.h>

// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int buttonState = 0;
int Led_Pin = 13;
int Int_Pin = 10;
int inputValue = 0;

void setup() {
	Serial.begin(9600);
  	pinMode(Led_Pin, OUTPUT);
	pinMode(Int_Pin, INPUT);
	// Inicializamos LCD
	lcd.begin(16, 2);
	//
	lcd.print("Iniciando");
	// Indicamos Linea en LCD
	lcd.setCursor(0, 1);
	lcd.print("Sistema");
	delay(1000);
	// Limpiamos LCD
	lcd.clear();
	delay(1000);
	lcd.print("Iniciando");
	lcd.setCursor(0, 1);
	lcd.print("Sistema");
	delay(1000);
	lcd.clear();
	lcd.print("Luz Patio:");
	lcd.setCursor(0, 1);
	lcd.print("Estado:");
}

void loop() {
  	 inputValue = digitalRead(Int_Pin);
 	 if (inputValue == HIGH) {
		digitalWrite(Led_Pin, 1);
       	lcd.setCursor(7, 1);
		lcd.print("Encendido");
	} else {
		digitalWrite(Led_Pin, 0);
       	lcd.setCursor(7, 1);
		lcd.print("Apagado--");
    }
}