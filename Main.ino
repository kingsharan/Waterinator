
int sensorPin = A0; 
int sensorValue;  

void setup() {
 Serial.begin(9600);
 pinMode(2,1); //motor deiver
 pinMode(3,1); // motor driver

 
}

void loop() {


 sensorValue = analogRead(sensorPin); 
 Serial.println("Analog Value : ");
 Serial.println(sensorValue);
 
 if (sensorValue > 280)
 {
 digitalWrite(2,1); // motor
 digitalWrite(3,0); //motor
 }
 else {

 digitalWrite(2,0); // motor
 digitalWrite(3,0); //motor
 delay(600000); 
 }
 
 
}
