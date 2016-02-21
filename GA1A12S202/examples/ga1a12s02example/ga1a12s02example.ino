#include "GA1A12S202/GA1A12S202.h"

GA1A12S202 luxValue(A0);

void setup() 
{
    Serial.begin(9600);
    delay(2000);
}

void loop() 
{
    Serial.print("Raw value = ");
    Serial.print(luxValue.getRaw());
	Serial.println();
    Serial.print("Lux value = ");
    Serial.println(luxValue.getLux(true));
	Serial.println();
    delay(1000);
}