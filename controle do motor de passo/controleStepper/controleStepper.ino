#include <Stepper.h>
#include "Servo.h"

Servo meuservo1;
Servo meuservo2;
int angulo1 = 0; 
int angulo2 = 0; 
int incremento = 5; 

const int stepsPerRevolution = 400;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  
  meuservo1.attach(9); 
  meuservo2.attach(10); 
  // set the speed at 60 rpm:
  myStepper.setSpeed(1);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  while (angulo1 <= 90) {
    meuservo2.write(angulo2);
    meuservo1.write(angulo1);
    delay(500); 
    angulo1 += incremento;
      }
  if (angulo1 >= 90) {
    meuservo2.write(angulo2);
     delay(500); 
    angulo2 += incremento; 
    angulo1 = 0;
     }
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
  Serial.println("Passou");
  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}