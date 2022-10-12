
int ON(int PIN);
int OFF(int PIN);

/*
void setup() {...}
void loop() {...}
*/

int ON(int PIN)
{
  digitalWrite(PIN, HIGH);
}

int OFF(int PIN)
{
  digitalWrite(PIN, LOW);
}