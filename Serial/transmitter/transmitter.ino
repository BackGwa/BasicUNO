
#define BOARD_RATE 9600

void Send(int DATA);

void setup()
{
  Serial.begin(BOARD_RATE);
}

/*
void loop() {... Send(number); ...}
*/

void Send(int DATA)
{
  Serial.print(DATA);
}