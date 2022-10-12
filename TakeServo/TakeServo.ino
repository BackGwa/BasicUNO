#include <Servo.h>

#define BOARD_RATE 9600
#define SERVO_PIN 0
#define MAX 270

Servo SERVO;

void calibrating();

void setup()
{
  Serial.begin(BOARD_RATE);
  SERVO.attach(SERVO_PIN);
  calibrating();
}

void loop()
{
  for(int count = 0; count <= MAX / 10; ++count)
  {
    Serial.print("Value >> ");
    Serial.print(count * 10);
    Serial.print(" (deg)\n");
    SERVO.write(count * 10);
    delay(750);
  }
  calibrating();
  delay(2000);
}

void calibrating()
{
  Serial.println("[ It will start after a while! ]\n");
  delay(1000);

  Serial.println("Calibrating >> 0(deg)");
  SERVO.write(0);
  delay(500);
  Serial.println("Done.\n");
}