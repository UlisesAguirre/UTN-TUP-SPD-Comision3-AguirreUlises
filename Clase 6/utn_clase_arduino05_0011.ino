// Melodia: "Remember Sadness" 
// https://www.youtube.com/watch?v=ZTtuf6Y1Sek

const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;
const int si = 987;
const int D = 1050;
const int R = 1174;
const int buzzerPin = 8;
const int ledPin1 = 12;
const int ledPin2 = 13;
int counter = 0;
void setup() {
	//Setup pin modes
	pinMode(buzzerPin, OUTPUT);
	pinMode(ledPin1, OUTPUT);
	pinMode(ledPin2, OUTPUT);
}
void loop() {
	//Play first section
	firstSection1();
	//Play second section
	secondSection();
	
}
void beep(int note, int duration) {
	//Play tone on buzzerPin
	tone(buzzerPin, note, duration);
	//Play different LED depending on value of 'counter'
	if(counter % 2 == 0) {
		digitalWrite(ledPin1, HIGH);
		delay(duration);
		digitalWrite(ledPin1, LOW);
	} else {
		digitalWrite(ledPin2, HIGH);
		delay(duration);
		digitalWrite(ledPin2, LOW);
	}
	//Stop tone on buzzerPin
	noTone(buzzerPin);
	delay(50);
	//Increment counter
	counter++;
}
void firstSection1() {
    beep(eH, 250);//mi
  	beep(fSH, 250);//fas
  	beep(aH, 250);//la
    beep(gH, 250); //sol
  	beep(fSH, 250);//fas
    beep(gH, 350); //sol
    beep(cH, 800); //do
	delay(1000); 
  	beep(eH, 250);//mi
  	beep(fSH, 250);//fas
    beep(gH, 250); //sol
    beep(eH, 250);//mi
    beep(si, 250);//si
    beep(R, 250);//re'
    beep(D, 800);//do'
  	delay(1000);
  	
}
void secondSection() {
  	beep(aH, 250);//la
    beep(si, 250);//si
    beep(D, 250);//do'
    beep(si, 250);//si
  	beep(aH, 250);//la
    beep(eH, 300);//mi
    beep(gH, 800); //sol
	delay(1000);
    beep(gH, 250); //sol
  	beep(aH, 250);//la
    beep(gH, 250); //sol
    beep(gH, 600); //sol
    beep(fSH, 800);//fas
  	delay(500);
    beep(eH, 600);//mi
  	beep(fSH, 800);//fas
  	delay(1000);
}