int MoPin = 5;    // vibrator Grove connected to digital pin 9

void setup()  { 
  pinMode( MoPin, OUTPUT );
 
} 

void loop()  { 

    digitalWrite(MoPin, HIGH);         
    delay(2000);       
                     
    digitalWrite(MoPin, LOW);         
    delay(10000); 
   
 }


