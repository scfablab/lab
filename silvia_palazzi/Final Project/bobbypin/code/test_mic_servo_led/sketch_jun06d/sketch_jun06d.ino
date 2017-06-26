#include<Servo.h>

Servo myservo;

int LED = 9;
int MIC = A0;
int pos = 0;


void setup() {
  
pinMode(LED, OUTPUT);
pinMode(MIC,INPUT);
myservo.attach(8);
Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(MIC);  
 if (sensorValue > 509){
  
  Serial.println(sensorValue);
  delay(50);
  
  digitalWrite(LED,HIGH);
  delay(50);
  
     for(pos = 0; pos < 180; pos += 1)  // imposta un ciclo con valori che vanno da 0 a 180, sarano i gradi di spostamento del nostro servo 
  {                                  
    myservo.write(pos);              // con il metodo write() passi all’oggetto myservo la posizione che deve raggiungere, 
                                     // il servo si sposterà gradualmente dalla sua posizione 0° alla posizione 180° 
    delay(15);                       // imposta un ritardo di 15 millesimi di secondo per ogni ciclo del for. 
                                     // Più sarà alto il ritardo più il servo sarà lento. 
  } 
  for(pos = 180; pos>=1; pos-=1)     // In questo caso imposta un ciclo con valori che vanno da 180 a 0
  {                                
    myservo.write(pos);               
    delay(15);                        
  } 
}
else {
  Serial.println("too low");
  delay(50);

  digitalWrite(LED,LOW);
  delay(50);
  
}

}
