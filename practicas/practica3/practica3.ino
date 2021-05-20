const int pinBuzzer = 9;

void setup()
{
    // initialize the digital pin as an output.
    for (int i = 10; i <= 13; i++)
    {
        pinMode(i, OUTPUT);
    }
}

void loop()
{
    for (int i = 13; i >= 10; i--)
    {
        if (i == 10)
        {
            tone(pinBuzzer, 440, 200);
        }

        digitalWrite(i, HIGH);
        delay(200);
        digitalWrite(i, LOW);
        delay(200);
    }
}