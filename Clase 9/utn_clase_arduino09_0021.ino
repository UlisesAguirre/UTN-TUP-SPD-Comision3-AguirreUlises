// Liberia para LCD
#include <LiquidCrystal.h>

// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
float lectura = 0;
float distancia = 0;
float anterior = 0;

void setup() {
	Serial.begin(9600);
	// Inicializamos LCD
	lcd.begin(16, 2);
	//
	lcd.print("Iniciando");
	// Indicamos Linea en LCD
	lcd.setCursor(8, 1);
	lcd.print("Sistema");
	delay(1000);
	// Limpiamos LCD
	lcd.clear();
	delay(1000);
	lcd.print("Iniciando");
	lcd.setCursor(8, 1);
	lcd.print("Sistema");
	delay(1000);
	lcd.clear();
	lcd.setCursor(0, 0);
	lcd.print("Distancia:");
}

void loop() {	
  	// Tomar Lectura
	lectura = readUltrasonicDistance(7, 7);
	// Calcular Distancia
	distancia = 0.01723 * lectura;
  	if (anterior != distancia) {
      	anterior = distancia;
    	// Enviar Lectura a la Consola Serial
		lcd.setCursor(8, 1);
		lcd.print(distancia/100);
        lcd.setCursor(12, 1);
		lcd.print(" mts");
		delay(100); // Demora de 100ms
    }
}


// Función para Recolectar Lectura
long readUltrasonicDistance(int triggerPin, int echoPin) {
	// Inicializar Sensor
	pinMode(triggerPin, OUTPUT);
	digitalWrite(triggerPin, LOW);
	delayMicroseconds(2);
	digitalWrite(triggerPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(triggerPin, LOW);
	// Iniciar Sensor en Modo Lectura
	pinMode(echoPin, INPUT);
	// Retornar Lectura
	return pulseIn(echoPin, HIGH);
}