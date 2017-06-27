//SERVO ACTIVATED BY SOUND//
#include <Servo.h> // include Servo.h library
 
Servo myservo;  // creates servo object which I gave "myservo" name
int pos = 0; //create position variable

int mic = A0;    //Microphone Sensor Pin
int LED = 9;        
int sensorValue = 0; 



void setup() {
 //pinMode(LED, OUTPUT);
 myservo.attach(3); 
//Serial.begin(9600);
}

void loop() {
 // read the value from the sensor:
 sensorValue = analogRead(mic);    
 
if (sensorValue > 660){
//  Serial.println(sensorValue);
  //delay(50);

  //digitalWrite(LED,HIGH);
  //delay(50);

  for(pos = 0; pos < 180; pos += 1)  // imposta un ciclo con valori che vanno da 0 a 180, sarano i gradi di spostamento del nostro servo 
  {                                  
    myservo.write(pos);              // con il metodo write() passi all’oggetto myservo la posizione che deve raggiungere, 
                                     // il servo si sposterà gradualmente dalla sua posizione 0° alla posizione 180° 
    delay(5);                       // imposta un ritardo di 15 millesimi di secondo per ogni ciclo del for. 
                                     // Più sarà alto il ritardo più il servo sarà lento. 
  } 
  for(pos = 180; pos>=1; pos-=1)     // In questo caso imposta un ciclo con valori che vanno da 180 a 0
  {                                
    myservo.write(pos);               
    delay(5);                        
  } 
  delay(200);
}


 else {
   digitalWrite(LED, LOW);  
}
}

