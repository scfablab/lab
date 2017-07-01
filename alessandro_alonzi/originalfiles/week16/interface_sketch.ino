#include <SoftwareSerial.h>

#define TX 1
#define RX 0
#define LED 8
int led = 1;
SoftwareSerial mySerial(RX, TX);
void setup() {
 mySerial.begin(9600);
 pinMode(LED, OUTPUT);
 digitalWrite(LED, HIGH);
}

void loop() {
 while (mySerial.available() > 0) {
   led = mySerial.read();
   if (led == 1) {
     digitalWrite(LED, HIGH);
   } else {
    digitalWrite(LED, LOW);
   }
 }
 delay(10);
}

