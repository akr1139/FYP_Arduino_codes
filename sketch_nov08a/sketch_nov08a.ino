#define MQ2pin 0
#define MQ5pin 1
#define MQ7pin 2
#define MQ135pin 3




float sensorValue2;  //variable to store sensor value
float sensorValue5;  //variable to store sensor value
float sensorValue7;  //variable to store sensor value
float sensorValue135;  //variable to store sensor value

void setup() {
  Serial.begin(9600); // sets the serial port to 9600
}

void loop() {
  sensorValue2 = analogRead(MQ2pin); // read analog input pin 0
  sensorValue5 = analogRead(MQ5pin); // read analog input pin 1
  sensorValue7 = analogRead(MQ7pin); // read analog input pin 2
  sensorValue135 = analogRead(MQ135pin); // read analog input pin 3
  
  Serial.println(sensorValue2);
  Serial.println(sensorValue5);
  Serial.println(sensorValue7);
  Serial.println(sensorValue135);
  
  delay(200); // wait 2s for next reading
}
