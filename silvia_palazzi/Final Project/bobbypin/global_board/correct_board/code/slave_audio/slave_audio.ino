#include <SoftwareSerial.h>

int mic = A3;    //Microphone Sensor Pin
int sensorValue = 0; 

const int rxpin = 1;  //Andiamo ad assegnare al pin 1 l’indirizzo di ricezione dati (e lo colleghiamo al pin TXD del modulo)
const int txpin = 0;  //Assegnamo invece al pin 0 l’indirizzo di trasmissione dati (collegandolo al pin RXD del nostro componente
SoftwareSerial bluetooth(rxpin, txpin);  //Assegnamo ad un nome (bluetooth) i suoi pin di ricezione e trasmissione, per facilitarci la scrittura del codice


void setup(){
  pinMode(mic,INPUT);
  //digitalWrite(mic,LOW);
  bluetooth.begin(115200);  //Inizializziamo l’interfaccia del modulo bluetooth sempre al baud rate riferito alla modalità AT
  delay(300);
}

void loop(){

  sensorValue = analogRead(mic);    // read the value from the sensor
  if (sensorValue > 500){
    bluetooth.println(sensorValue);  //Il dato viene inviato al bluetooth perchè sia elaborato e quindi trasmesso
    delay(100);
  }
  //delay(250);
}
