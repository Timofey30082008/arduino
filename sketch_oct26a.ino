#define LDR_PIN A0
#include <Servo.h>
#define MOTOR_PIN 10
Servo myServo;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  myServo.attach(9);
  pinMode(10, OUTPUT);
}

void loop() {
  int val = analogRead(A0);
  if (val > 200){
    myServo.write(180);
    digitalWrite(MOTOR_PIN, HIGH);
    delay(150);
    myServo.write(0);
    digitalWrite(MOTOR_PIN, LOW);
    
  }
} 
