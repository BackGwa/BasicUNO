
#define A1_MOTOR 0
#define A2_MOTOR 0

void TurnMotor(uint8_t SPEED = 0);

/*
void setup() {...}
void loop() {...}
*/

void TurnMotor(uint8_t SPEED = 0)
{
  analogWrite(A1_MOTOR, SPEED);
  analogWrite(A2_MOTOR, 0);
}