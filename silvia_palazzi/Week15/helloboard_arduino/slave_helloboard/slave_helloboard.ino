/* ATtiny85 as an I2C Slave            BroHogan                           1/12/11
 * Example of ATtiny I2C slave receiving and sending data to an Arduino master.
 * Gets data from master, adds 10 to it and sends it back.
 * SETUP:
 * ATtiny Pin 1 = (RESET) N/U                      ATtiny Pin 2 = (D3) N/U
 * ATtiny Pin 3 = (D4) to LED1                     ATtiny Pin 4 = GND
 * ATtiny Pin 5 = I2C SDA on DS1621  & GPIO        ATtiny Pin 6 = (D1) to LED2
 * ATtiny Pin 7 = I2C SCK on DS1621  & GPIO        ATtiny Pin 8 = VCC (2.7-5.5V)
 * NOTE! - It's very important to use pullups on the SDA & SCL lines!
 * Current Rx & Tx buffers set at 32 bytes - see usiTwiSlave.h
 * Credit and thanks to Don Blake for his usiTwiSlave code. 
 * More on TinyWireS usage - see TinyWireS.h
 */


#include <TinyWireS.h>                  // wrapper class for I2C slave routines

#define I2C_SLAVE_ADDR  8            // i2c slave address (8) - defined in master code
#define LED_PIN         8              // ATtiny PB2- Pin8


void setup(){
  pinMode(LED_PIN,OUTPUT);             // for general DEBUG use
   digitalWrite(LED_PIN,HIGH);
    delay (250);
    digitalWrite(LED_PIN,LOW);
    delay (175);                     // show it's alive
  TinyWireS.begin(I2C_SLAVE_ADDR);      // init I2C Slave mode
}


void loop(){
  byte byteRcvd = 0;
  if (TinyWireS.available()){           // TinyWireS.available() returns the number of bytes in the received buffer
    byteRcvd = TinyWireS.receive();     // TinyWireS.receive()returns the next byte in the received buffer??
    digitalWrite(LED_PIN,HIGH);
    delay (250);
    digitalWrite(LED_PIN,LOW);
    delay (175);          // master must wait for this to finish before calling Wire.requestFrom
    byteRcvd += 10;                     // add 10 to what's received
    TinyWireS.send(byteRcvd);           // send it back to master
  }
}


/*void Blink(byte led, byte times){ // poor man's display
  for (byte i=0; i< times; i++){
    digitalWrite(led,HIGH);
    delay (250);
    digitalWrite(led,LOW);
    delay (175);
  }
}

*/

