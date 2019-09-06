#include <Servo.h>

Servo servoPan;
Servo servoTilt;

void setup() 
{
  //Set to default position
  Serial.begin(9600);
  Serial.println("Ready");
  servoPan.attach(9);
  servoTilt.attach(10);
  servoPan.write(90);
  servoTilt.write(90);
}

void loop() 
{
  while (!Serial.available())
  {
  }
  char answer = Serial.read();
  Serial.println(answer);

  switch (answer)
  {
  case 'x':
    while (!Serial.available())
    {
    }
    int answerX = Serial.read();
    Serial.println(answerX);
    servoPan.write(answerX);
    break;
  case 'y':
    Serial.println('Y');
    while (!Serial.available())
    {
    }
    Serial.println('Y');
    int answerY = Serial.read();
    Serial.println(answerY);
    servoTilt.write(answerY);
    break;
  default:
    Serial.println(answer);
    break;
  }
}
