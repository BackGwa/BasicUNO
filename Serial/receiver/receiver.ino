
#define BOARD_RATE 9600

int DATA = 0;

int Receiver();

void setup()
{
  Serial.begin(BOARD_RATE);
}

/*
void loop() {... if(Receiver()){...} ...}
*/

int Receiver()
{

  if(Serial.available() > 0)
  {
    DATA = Serial.read();
    return DATA;
  }

  return 0;

}