#include <SoftwareSerial.h>

const int motor = 5;
const int rxpin = 0;  //set pin 1 as data receiver (it will be linked to BT module's TXD pin)
const int txpin = 1;  //set pin 0 as data transmitter (it will be linked to BT module's RXD pin)
int c=0;
SoftwareSerial bluetooth(rxpin, txpin);  //to write an easier code I gave "bluetooth" name to transmission and reception pins

void setup(){
pinMode(motor,OUTPUT);
Serial.begin(115200);  //Initialization of serial interface at AT mode baudrate
bluetooth.begin(115200);  //Initialization of BT communication at AT mode baudrate
}

void loop(){
  
if(bluetooth.available() > 0){  //if bluetooth receives some data
  c = bluetooth.read();  //data are placed in a char variable so as to suit both letters and numbers
  Serial.write(c);  //data are written in serial monitor
    for(c>10){
      digitalWrite(motor,HIGH); //motor vibrates for 300ms
      delay(300);
      digitalWrite(motor,LOW);//motor turns off
      delay(500);
    }
  }
delay(10);
}
