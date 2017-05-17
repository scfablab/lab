#include <TinyWireS.h>
#include <usiTwiSlave.h>


void setup()
{
    TinyWireS.begin(8); // join i2c network
    TinyWireS.onRequest(test);
}

void loop()
{
    // This needs to be here
    TinyWireS_stop_check();
}

// Gets called when the ATtiny receives an i2c request
void test()
{
    TinyWireS.send(3);
}


