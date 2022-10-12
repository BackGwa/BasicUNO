
#define IR_SENSOR 0

bool isIR(int IR_SENSOR_PIN = IR_SENSOR);

/*
void setup() {...}
void loop() {...}
*/

bool isIR(int IR_SENSOR_PIN = IR_SENSOR)
{
  return (digitalRead(IR_SENSOR_PIN) == 1) ? true : false;
}