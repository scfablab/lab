//Code for the Arduino Duemilanove
  #include <Wire.h>
 
  void setup()
  {
   Wire.begin(); // join i2c bus (address optional for master)
   Serial.begin(9600); // start serial for output
  }
 
  void loop()
  {
   Wire.requestFrom(5, 1); // request 1 byte from slave device address 4
 
  while(Wire.available()) // slave may send less than requested
   {
   int i = Wire.read(); // receive a byte as character
   Serial.println(i); // print the character
   }
 
  delay(500);
  }
