
#define BUZZER 0

void Buzzer(int TONE, int TIME);

void setup()
{
  pinMode(BUZZER, OUTPUT);
}

/*
void loop() {...}
*/

void Buzzer(int TONE, int TIME)
{
  tone(BUZZER, TONE);
  delay(TIME);
  noTone(BUZZER);
}