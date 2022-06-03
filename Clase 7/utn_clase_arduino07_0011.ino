#include <IRremote.h>

int RECV_PIN = 14;
int IRData = 0;

int led_pin = 2;
int ledValue = 0;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
	Serial.begin(9600);
	irrecv.enableIRIn();
  	pinMode(led_pin, OUTPUT);
}

void loop() {
	if (irrecv.decode(&results)) {
		IRData = results.value;
        irrecv.resume();
        Serial.print("Datos: ");
        Serial.print(IRData, HEX);
        Serial.print(" {");
        Serial.print(IRData);
        Serial.println("}");
      	
      	if (IRData = 2295) {
          if(ledValue == 0) {
         	digitalWrite(led_pin, HIGH); 
            ledValue = 1;
          } else {
            digitalWrite(led_pin, LOW); 
            ledValue = 0;
          }
       
      	}
	}
}