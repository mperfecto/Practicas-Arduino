#include "DHT.h"

#define DHTPin 2
#define DHTTYPE DHT11 // DHT 11

DHT dht(DHTPin, DHTTYPE);

void setup()
{
    Serial.begin(9600);

    dht.begin();
}

void loop()
{
    // Espera 5 segundos en hacer la siguiente medición
    delay(5000);

    // Leer temperatura o humedad ~ 250 milisegundos!
    float h = dht.readHumidity();
    float t = dht.readTemperature();     // grados Celsius
    float f = dht.readTemperature(true); // grados Fahrenheit

    if (isnan(h) || isnan(t))
    {
        Serial.println("Error en leer el sensor DHT!");
        return;
    }

    // calcular el índice de calor en Fahrenheit
    float hif = dht.computeHeatIndex(f, h);
    // calcular el índice de calor en Celsius
    float hic = dht.computeHeatIndex(t, h, false);

    Serial.print("Humedad: ");
    Serial.print(h);
    Serial.print(" %\t");
    Serial.print("Temperatura: ");
    Serial.print(t);
    Serial.print(" *C ");
    Serial.print(f);
    Serial.print(" *F/t ");
}