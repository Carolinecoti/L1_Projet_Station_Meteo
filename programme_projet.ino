#include <Wire.h>
#include <SI7021.h>

#define LAPIN A0 // PIN with Light sensor analog output 
#define LPPIN 4 // PIN with Light power input


SI7021 sensor;
static float light;

void setup() {
    Serial.begin(115200);
    sensor.begin();
    pinMode(LPPIN, OUTPUT);
}

void loop() {

    int temperature = sensor.getCelsiusHundredths();
    temperature = temperature / 100;
    Serial.print("Temperature :");  
    Serial.print(temperature);
    Serial.println("°Celcius");
    
    delay(1000);
    
    
    int humidity = sensor.getHumidityPercent();
    Serial.print("Humidity :");  
    Serial.print(humidity);
    Serial.println("%");
    
    
    delay(1000);

    
    light = readLight();
    
    Serial.print("Light :");  
    Serial.print(light);
    Serial.println("Lx");
    
    delay(1000);      
}

float readLight() {
  float result;
  
digitalWrite(LPPIN, HIGH);
delay(10);
int sensorValue = analogRead(LAPIN);
  
  float voltage = sensorValue * (3.3 / 1023.0);
result = voltage*2000;
digitalWrite(LPPIN, LOW);
  return result;

}
