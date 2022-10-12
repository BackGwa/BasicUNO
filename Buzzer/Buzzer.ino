
#define BUZZER 0

void Buzzer(int TONE, int TIME);

/*
void setup() {...}
void loop() {...}
*/

void Buzzer(int TONE, int TIME)
{
  tone(BUZZER, TONE);
  delay(TIME);
  noTone(BUZZER);
}