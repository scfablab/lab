#include <SoftwareSerial.h>
#include <TinyWireM.h>
#include <USI_TWI_Master.h>

SoftwareSerial mySerial(0,1);

void setup () {
mySerial.begin(9600);
TinyWireM.begin();
pinMode(6, INPUT_PULLUP);
pinMode(4, INPUT_PULLUP);
delay(150);
}

void loop () {
mySerial.println("bella raga");
TinyWireM.requestFrom(8, 1);
while (TinyWireM.available()) {
  int n = TinyWireM.receive();
  mySerial.println(n);
  }
  delay(5000);
}

