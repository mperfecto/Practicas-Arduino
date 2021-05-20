// the setup routine runs once when you press reset:
void setup()
{

    // initialize the digital pin as an output.
    for (int i = 11; i <= 13; i++)
    {
        pinMode(i, OUTPUT);
    }
}

// the loop routine runs over and over again forever:
void loop()
{
    for (int i = 13; i >= 11; i--)
    {
        digitalWrite(i, HIGH);
        delay(200);
        digitalWrite(i, LOW);
        delay(200);
    }
}