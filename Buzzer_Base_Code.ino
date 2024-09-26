const int buzzer = 3; //fix to pin no. 9


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
 
  tone(buzzer, 100, 1000); // Send 100 Hz sound signal
  delay(1000);       
  tone(buzzer, 250, 1000); 
  delay(1000);		 
  tone(buzzer, 500, 1000);  // Send 500 Hz sound signal
  delay(1000);		  
  tone(buzzer, 700, 1000);  // Send 700 Hz sound signal
  delay(1000);		  
  tone(buzzer, 800, 1000);  // Send 800 Hz sound signal
  delay(1000);		  
  tone(buzzer, 1000, 1000);  // Send 1 KHz sound signal
  delay(1000);		 
  
}

/*int limitswitch=A0;
float value;

void setup()
{
Serial.begin(9600);
pinMode(limitswitch,INPUT);
}
void loop()
{


value = analogRead(limitswitch);
Serial.println(value);
delay(1000);
}*/
//cooking oil adultrated - 800-900
//Coconut oit unadultrated - 600-700
//Coco ua = 