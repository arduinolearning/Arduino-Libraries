#include "GA1A12S202.h"

GA1A12S202::GA1A12S202(int pin) 
{
    _pin = pin;
}


GA1A12S202::GA1A12S202(int pin, float logRange) 
{
    _pin = pin;
    _logRange = logRange;
}


void GA1A12S202::begin(void) 
{
    pinMode(_pin, INPUT);
}


int GA1A12S202::getRaw()
 {
    delay(1);
    
	int total = 0;
	
	for(int i=0; i<10; i++) 
	{
		total += analogRead(_pin);
		delay(1);
	}
	
	return(total/10);

}


float GA1A12S202::getLux() 
{
    int raw = getRaw();
    float logLux = raw * _logRange / _rawRange;
    return pow(10, logLux);
}