#include <SoftwareSerial.h>  //Includiamo la libreria per la gestione delle istruzioni di utilizzo del modulo bluetooth

const int rxpin = 2;  //Andiamo ad assegnare al pin 2 l’indirizzo di ricezione dati (e lo colleghiamo al pin TXD del modulo)
const int txpin = 3;  //Assegnamo invece al pin 3 l’indirizzo di trasmissione dati (collegandolo al pin RXD del nostro componente
SoftwareSerial bluetooth(rxpin, txpin);  //Assegnamo ad un nome (bluetooth) i suoi pin di ricezione e trasmissione, per facilitarci la scrittura del codice

void setup(){
Serial.begin(38400);  //Inizializziamo l’interfaccia seriale al baud rate dell’AT-mode
bluetooth.begin(38400);  //Inizializziamo l’interfaccia del modulo bluetooth sempre al baud rate riferito alla modalità AT
}

void loop(){
if(bluetooth.available()){  //Se il bluetooth riceve qualche dato
char c = bluetooth.read();  //Il dato viene posto in una variabile di tipo char, così da essere adatta sia a lettere che a numeri
Serial.write(c);  //Si scrive sul monitor seriale i dati presi dalla variabile, così da poterli osservare
}
if(Serial.available()){  //Se invece il serial monitor riceve un dato da inviare
char c = Serial.read();  //La variabile c viene memorizzata e letta dal monitor seriale
bluetooth.write(c);  //Il dato viene inviato al bluetooth perchè sia elaborato e quindi trasmesso
}
}
