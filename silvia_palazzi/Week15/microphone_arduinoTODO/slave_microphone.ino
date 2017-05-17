#define I2C_SLAVE_ADDRESS 0x5 // Address of the slave
 
#include <TinyWireS.h>
 
int i=0;
 
void setup()
{
    TinyWireS.begin(I2C_SLAVE_ADDRESS); // join i2c network
    TinyWireS.onRequest(requestEvent);
 
}
 
void loop()
{
    // This needs to be here
    TinyWireS_stop_check();
}
 
// Gets called when the ATtiny receives an i2c request
void requestEvent()
{
    i = analogRead(A3);
    TinyWireS.send(i);
    //i++;
}
