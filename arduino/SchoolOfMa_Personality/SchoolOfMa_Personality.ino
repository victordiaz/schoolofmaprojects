
#include <Servo.h>

Servo myservo;

int pinSnd = 12;
int pinServo = 9;
int pos = 0;

void setup() {
  pinMode(pinSnd, OUTPUT); 
  myservo.attach(pinServo);  
  Serial.begin(9600);
}

void loop() {
  myservo.write(90);             
  analogWrite(pinSnd, 255);
  tone(pinSnd, 31, 500);
  delay(500);
  
  myservo.write(50); 
  analogWrite(pinSnd, 155);
  tone(pinSnd, 35, 500);
  delay(500);
  myservo.write(30);     
  
  delay(2000);
  analogWrite(pinSnd, 50);
  myservo.write(90);
  tone(pinSnd, 0, 500);


}

