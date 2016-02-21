#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <math.h>

class GA1A12S202 {
    private:
        int _pin = A0;
        float _rawRange = 4096;
        float _logRange = 5.0;
    
    public:
        GA1A12S202(int pin);
        GA1A12S202(int pin, float logRange);
        void begin(void);
        int getRaw();
        float getLux();
};