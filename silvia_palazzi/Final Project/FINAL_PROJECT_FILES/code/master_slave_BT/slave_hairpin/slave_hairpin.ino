#include <SoftwareSerial.h>

int mic = A3;    //Microphone Sensor Pin
int sensorValue = 0; 

const int rxpin = 1;  //set pin 1 as data receiver (it will be linked to BT module's TXD pin)
const int txpin = 0;  //set pin 0 as data transmitter (it will be linked to BT module's RXD pin)
SoftwareSerial bluetooth(rxpin, txpin);  //to write an easier code I gave "bluetooth" name to transmission and reception pins


void setup(){
bluetooth.begin(115200);  //Initialization of serial interface at AT mode baudrate
delay(300);
}

void loop(){

  sensorValue = analogRead(mic);    // read the value from the sensor
  if (sensorValue > 800){
    bluetooth.println(sensorValue);  //data is written in serial and sent
    delay(10);
  }
  delay(200);
}
