
#include <Servo.h>
#define NORMAL_ANGLE 0

Servo myservo;

void ServoUse(int SERVO_PIN, int ANGLE = NORMAL_ANGLE, int DELAY = 0);

/*
void setup() {...}
void loop() {...}
*/

void ServoUse(int SERVO_PIN, int ANGLE = NORMAL_ANGLE, int DELAY = 0)
{

    myservo.attach(SERVO_PIN);
    myservo.write(ANGLE);

    delay(DELAY);

}