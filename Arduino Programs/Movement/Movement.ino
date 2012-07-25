// Robotics with the BOE Shield - ForwardThreeSeconds
// Make the BOE Shield-Bot roll forward for three seconds, then stop.

#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left and right servos
Servo servoRight;

void setup()                                 // Built-in initialization block
{
  
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(11);                      // Attach left signal to pin 11
  servoRight.attach(10);                     // Attach right signal to pin 10

  moveF(5000);
  moveB(5000);
  
  disableServos();
}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
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
