#include <Servo.h>
Servo motor;
int resistorPin = A0;
int resistorValue = 0;
void setup() {
  motor.attach(10);  
  Serial.begin(9600);
}

void loop() {
 resistorValue = 0;
 resistorValue = analogRead(resistorPin); 
 Serial.println(resistorValue);
 motor.write(resistorValue);
 delay(150);
}
