// the setup routine runs once when you press reset:
void setup()
{
  // initialize the digital pin as an output.

  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()
{

  digitalWrite(11, HIGH);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
}