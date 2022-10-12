
#include <Servo.h>
#define NORMAL_ANGLE 0

Servo SERVO;

void ServoUse(int SERVO_PIN, int ANGLE = NORMAL_ANGLE, int DELAY = 0);

/*
void setup() {...}
void loop() {...}
*/

void ServoUse(int SERVO_PIN, int ANGLE = NORMAL_ANGLE, int DELAY = 0)
{
    SERVO.attach(SERVO_PIN);
    SERVO.write(ANGLE);

    delay(DELAY);
}