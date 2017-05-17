#include <Wire.h>;

void setup () {
  
Serial.begin(9600);
Wire.begin();    
}

void loop () {

Wire.requestFrom(8, 1); 
while(Wire.available()) // slave may send less than requested
   {
   int i = Wire.read(); // receive a byte as character
   Serial.println(i); // print the character
   }

  delay(500);

}

