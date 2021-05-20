//Objetivo de este código: saludar en un LCD 16x2 con I2C en un arduino UNO
//El I2C del LCD tiene cuatro cables que van al arduino así:
// GND --> GND
// VCC --> 5V
// SDA --> A4
// SCL --> A5

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Crear el objeto lcd dirección 0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x3F, 16, 2); //

void setup()
{
    lcd.init();              // Inicializar el LCD
    lcd.backlight();         //Encender la luz de fondo
    lcd.print("Hola Mundo"); // Escribimos el Mensaje en el LCD
}

void loop()
{
    // Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1)
    lcd.setCursor(0, 1);
    // Escribimos el número de segundos trascurridos
    lcd.print(millis() / 1000);
    lcd.print(" Segundos");
    delay(1000);
}