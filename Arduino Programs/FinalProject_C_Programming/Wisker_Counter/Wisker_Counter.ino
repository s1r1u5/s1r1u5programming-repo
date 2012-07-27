#include <Servo.h>

Servo servoRight;
Servo servoLeft;

int wiskCount = 0;

void setup()
{
  servoLeft.attach(11);
  servoRight.attach(10);
  
  tone(4, 3000, 1000);
  delay(1000);
  pinMode(7, INPUT);
  pinMode(5, INPUT);
}

void loop() 
{
  int r5;
  int r7;
  r5 = digitalRead(5);
  r7 = digitalRead(7);
  
  if ((wiskCount < 10) && (r5 == 1) && (r7 == 1))
  {
    moveF(100);
  }
  else
  {
    moveB(1000);
    wiskCount = wiskCount + 1;
    if (wiskCount == 10)
    {
    disableServos();
    tone(4, 3000, 1000);
    }
    {
    }
  }
}

void moveF(float x)
{
  servoLeft.writeMicroseconds(1580);
  servoRight.writeMicroseconds(1300);
  delay(x);
}
void moveB(float x)
{
  servoLeft.writeMicroseconds(1400);
  servoRight.writeMicroseconds(1700);
  delay(x);
}
void turnR(float x)
{
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(x);
}
void turnL(float x)
{
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(x);
}
void disableServos()                         // Halt servo signals
{                                            
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}
