
const int ldrPin = A0; // analog pin 0
void setup() { 
Serial.begin(9600);
pinMode(ldrPin, INPUT); // Here LDR sensor is determined as input.
}
void loop() { // Void loop is ran again and again and contains main code.
int ldrStatus = analogRead(ldrPin);
Serial.println(ldrStatus);
delay(1000);
}
//Coconut oil unadultrated - 850-890
//Cooking oil unadultrated - 500-600
//Cooking oil adultrated - 700-800