#include <Stepper.h>
 
#define STEPS 100  //how much step a circle
 
Stepper stepper(STEPS, 2, 3, 4, 5);
 
 
void setup()
{
  // Set the step motor speed of 90 per minute
  stepper.setSpeed(90);
  Serial.begin(9600);
  
}
 
void loop()
{
  Serial.println(val);
  stepper.step(200);
  delay(1000);
}

