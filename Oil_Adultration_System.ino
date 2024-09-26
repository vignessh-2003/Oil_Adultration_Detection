#include <OneWire.h>
#include <DallasTemperature.h>

int ldr=A0;
int capacitive=A1;
int temp=4;
int volt=A2;
int buzz=3;

float V = 0.00; 

//For temperature sensor
OneWire oneWire(temp);
DallasTemperature sensors(&oneWire);

//Voltage_Calculation
void calculate_voltage() { 
  float R1 = 10000.00; 
  float R2 = 4700.00; 
  float v_ref = 5.00; 
  float resistor_ratio = 0.00;
  float adc_value = 0.00; 
  float voltage = 0.00; 
  resistor_ratio = (R2 / (R1 + R2)); 
  for (int i = 0; i < 20 ; i++) 
  { 
    adc_value = adc_value + analogRead(volt);
    delay(3); 
  } 
  adc_value = adc_value / 20; 
  voltage = ((adc_value * v_ref) / 1024); 
  V = voltage / resistor_ratio; 
} 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(capacitive, INPUT);
  pinMode(buzz, OUTPUT);
  sensors.begin();   //For temperature
}

void loop() {
  // put your main code here, to run repeatedly:
   if(Serial.available()>0){
    String data=Serial.readString();
    data.trim();
    float cap_val = analogRead(capacitive);
    Serial.print("Capacitance ");
    Serial.println(cap_val);
    float ldr_val = analogRead(ldr);
    Serial.print("LDR ");
    Serial.println(ldr_val);
    sensors.requestTemperatures(); 
    float temp_val=sensors.getTempCByIndex(0);
    Serial.print("Temperature ");
    Serial.println(temp_val);
    while(temp_val>50){
      tone(buzz, 1000, 1000); 
      delay(1000);
    }
    if(temp_val<48){
        calculate_voltage(); 
        Serial.println(V);
    }
    if(ldr_val>500 && ldr_val<600 && cap_val>100 && cap_val<1023){
      Serial.println("Unadultrated");
    }
      
    else if(ldr_val>680 && ldr_val<800 && cap_val>100 && cap_val<1023){
      Serial.println("Adultrated");
      tone(buzz, 1000, 1000); 
      delay(1000);
    }
      
  }
}