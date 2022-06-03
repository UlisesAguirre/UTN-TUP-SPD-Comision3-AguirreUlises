#include <IRremote.h>

int RECV_PIN = 14;
int IRData = 0;
int Led_Pin = 7;
int Led_Status = 0;
int Led_Pin2 = 5;
int Led_Status2 = 0;
int Led_Pin3 = 3;
int Led_Status3 = 0;
int Led_Pin4 = 2;
int Led_Status4 = 0;


IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
	Serial.begin(9600);
	pinMode(Led_Pin, OUTPUT);
	pinMode(Led_Pin2, OUTPUT);
	pinMode(Led_Pin3, OUTPUT);
	pinMode(Led_Pin4, OUTPUT);
	irrecv.enableIRIn();
}

void loop() {
	if (irrecv.decode(&results)) {
		// Mostrar Lectura
        IRData = results.value;
        irrecv.resume();
        Serial.print("Datos: ");
        Serial.print(IRData, HEX);
        Serial.print(" {");
        Serial.print(IRData);
        Serial.println("}");
        // Controlar Led 
      	switch(IRData){
          	case 2295:
          		if (Led_Status == 0) {
				digitalWrite(Led_Pin, 1);
				Led_Status = 1;
			} else {
                digitalWrite(Led_Pin, 0);
                Led_Status = 0;
			}
          	break;
          	case -30601:
          		if (Led_Status2 == 0) {
				digitalWrite(Led_Pin2, 1);
				Led_Status2 = 1;
			} else {
                digitalWrite(Led_Pin2, 0);
                Led_Status2 = 0;
			}
          	break;
          	case 18615:
          		if (Led_Status3 == 0) {
				digitalWrite(Led_Pin3, 1);
				Led_Status3 = 1;
			} else {
                digitalWrite(Led_Pin3, 0);
                Led_Status3 = 0;
			}
          	break;
          	case 10455:
          		if (Led_Status4 == 0) {
				digitalWrite(Led_Pin4, 1);
				Led_Status4 = 1;
			} else {
                digitalWrite(Led_Pin4, 0);
                Led_Status4 = 0;
			}
          	break;
  
        }
	}
}