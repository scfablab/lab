#include <SoftwareSerial.h>


const int rx = 0;  //Andiamo ad assegnare al pin 2 l’indirizzo di ricezione dati (e lo colleghiamo al pin TXD del modulo)
const int tx = 1;  //Assegnamo invece al pin 3 l’indirizzo di trasmissione dati (collegandolo al pin RXD del nostro componente
char c=0;
int LED=8;
SoftwareSerial mySerial(rx, tx);

void setup(){
pinMode(LED,OUTPUT);
mySerial.begin(9600);
delay(50);
}

void loop(){
  mySerial.print('communication has started');
  mySerial.println();
  delay(50);
if (mySerial.available()>0){
  c = mySerial.read(); 
  if (c== '1'){                //LED blinks one time
   digitalWrite(LED,HIGH);  //LED on for 300ms
   delay(300);  
   digitalWrite(LED,LOW);   //LED turns off
   delay(500);
  }
  if(c=='2'){                 //LED blinks two times
    digitalWrite(LED,HIGH); //LED on for 300ms
   delay(300);
   digitalWrite(LED,LOW);   //LED turns off
   delay(500);
   digitalWrite(LED,HIGH);  //LED on for 300ms
   delay(300);
   digitalWrite(LED,LOW);   //LED turns off
   delay(500);
  }
   if(c=='3'){                //LED blinks three times
    digitalWrite(LED,HIGH); //LED on for 300ms
   delay(300);
   digitalWrite(LED,LOW);   //LED turns off
   delay(500);
   digitalWrite(LED,HIGH);  //LED on for 300ms
   delay(300);
   digitalWrite(LED,LOW);   //LED turns off
   delay(500);
   digitalWrite(LED,HIGH); //LED on for 300ms
   delay(300);
   digitalWrite(LED,LOW);//LED turns off
   delay(500);
  }
}delay(500);
}

