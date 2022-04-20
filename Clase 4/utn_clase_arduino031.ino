// Código Ejemplo
int Led_Pin = 3;
int Pot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
//------------------------
int Led_Pin2 = 2;
int Pot_Pin2 = A1;

void setup()
{
pinMode(Led_Pin, OUTPUT);
pinMode(Led_Pin2, OUTPUT);
Test_Led();
}

void loop()
{
sensorValue = analogRead(Pot_Pin);
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(Led_Pin, outputValue);
//--------------
sensorValue = analogRead(Pot_Pin2);
outputValue = map(sensorValue, 0, 1023, 255, 0);
analogWrite(Led_Pin2, outputValue);
}

void Test_Led()
{
digitalWrite(Led_Pin, HIGH);
delay(1000);
digitalWrite(Led_Pin, LOW);
delay(1000);
digitalWrite(Led_Pin2, HIGH);
delay(1000);
digitalWrite(Led_Pin2, LOW);
delay(1000);
digitalWrite(Led_Pin, HIGH);
delay(1000);
digitalWrite(Led_Pin, LOW);
delay(1000);
digitalWrite(Led_Pin2, HIGH);
delay(1000);
digitalWrite(Led_Pin2, LOW);
}