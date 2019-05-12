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

    // temperature is an integer in hundredths
    int temperature = sensor.getCelsiusHundredths();
    temperature = temperature / 100;
    Serial.print("Temperature :");  
    Serial.print(temperature);
    Serial.println("°Celcius");
    
    delay(1000);
    
    // humidity is an integer representing percent
    int humidity = sensor.getHumidityPercent();
    Serial.print("Humidity :");  
    Serial.print(humidity);
    Serial.println("%");
    
    
    delay(1000);

    // temperature is an integer in hundredths
    light = readLight();
    
    Serial.print("Light :");  
    Serial.print(light);
    Serial.println("Lx");
    
    delay(1000);      
}

float readLight() {
  float result;
  // Light sensor Voltage
digitalWrite(LPPIN, HIGH); // Power the sensor
delay(10);
int sensorValue = analogRead(LAPIN);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 3.3V):
  float voltage = sensorValue * (3.3 / 1023.0); // Batvalue is 3.3V
result = voltage*2000; // multiply by 2000 to have Lx
digitalWrite(LPPIN, LOW); // switch off the sensor
  return result;

}
