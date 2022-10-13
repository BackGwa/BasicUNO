
void ON(int PIN);
void OFF(int PIN);

/*
void setup() {...}
void loop() {...}
*/

void ON(int PIN)
{
  digitalWrite(PIN, HIGH);
}

void OFF(int PIN)
{
  digitalWrite(PIN, LOW);
}