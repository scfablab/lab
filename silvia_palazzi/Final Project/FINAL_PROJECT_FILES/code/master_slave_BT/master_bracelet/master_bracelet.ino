#include <SoftwareSerial.h>

const int motor = 5;
const int rxpin = 2;  //Andiamo ad assegnare al pin 2 l’indirizzo di ricezione dati (e lo colleghiamo al pin TXD del modulo)
const int txpin = 3;  //Assegnamo invece al pin 3 l’indirizzo di trasmissione dati (collegandolo al pin RXD del nostro componente
int c=0;
SoftwareSerial bluetooth(rxpin, txpin);  //Assegnamo ad un nome (bluetooth) i suoi pin di ricezione e trasmissione, per facilitarci la scrittura del codice

void setup(){
//pinMode(motor,OUTPUT);
Serial.begin(115200);  //Inizializziamo l’interfaccia seriale al baud rate dell’AT-mode
bluetooth.begin(115200);  //Inizializziamo l’interfaccia del modulo bluetooth sempre al baud rate riferito alla modalità AT
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
