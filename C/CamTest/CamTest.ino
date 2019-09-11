#include <Servo.h>
#include <string.h>
#include <stdlib.h>

Servo servoPan;
Servo servoTilt;
char answerAmount[] = "";
String answer = "";

void setup() 
{
  //Set to default position
  Serial.begin(9600);
  while (!Serial)
  {
    ;
  }
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
  answer = Serial.readString();
  Serial.print(answer);


  for(int i=1; i < answer.length()-1; i++)
  {
    answerAmount[i-1] = answer[i];
  }

  switch (answer[0])
  {
  case 'x':
    Serial.println('X');
    Serial.println(answerAmount);
    servoPan.write(atoi(answerAmount));
    break;
  case 'y':
    Serial.println('Y');
    Serial.println(answerAmount);
    servoTilt.write(atoi(answerAmount));
    break;
  default:
    Serial.println(answer);
    break;
  }
  Serial.flush();
}
