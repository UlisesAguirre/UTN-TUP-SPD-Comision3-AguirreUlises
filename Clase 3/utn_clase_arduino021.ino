int buttonState = 0;

void setup(){
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  buttonState = digitalRead(3);
    if (buttonState == HIGH){
    digitalWrite(13, LOW);
    digitalWrite(4, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    digitalWrite(5, HIGH); 
    }
  else {
    digitalWrite(12, LOW);
    digitalWrite(5, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(2000);
    digitalWrite(12, LOW);
    digitalWrite(4, HIGH);
  }
}