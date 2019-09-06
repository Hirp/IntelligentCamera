#include <Servo.h>

Servo servoPan;
Servo servoTilt;

void setup() 
{
  Serial.begin(9600);
  servoPan.attach(9);
  servoTilt.attach(10);
  Serial.print("Ready\n");
}

void loop() 
{
  while (!Serial.available())
  {
  }
  char answer = Serial.read();
  Serial.print(answer + "\n");

  switch (answer)
  {
  case 'x':
    while (!Serial.available())
    {
    }
    int answerX = Serial.read();
    Serial.print(answerX + "\n");
    servoPan.write(answerX);
    break;
  case 'y':
    while (!Serial.available())
    {
    }
    int answerY = Serial.read();
    Serial.print(answerY + "\n");
    servoTilt.write(answerY);
    break;
  default:
    Serial.print(answer + "\n");
    break;
  }
}
