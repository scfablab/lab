#include <SoftwareSerial.h>
#include <Servo.h>

#define STEP 9
#define DIR 1
#define SERVO 2
#define PINTX 3
#define PINRX 4

Servo myservo;
SoftwareSerial SSerial =  SoftwareSerial(PINRX, PINTX);
 
int pos = 0;            // actual position
int prev_pos = 0;       // previous position
int step_per_pos = 45;  // steps needed to move from a box to the next one

void setup() {
  pinMode(STEP,OUTPUT);
  pinMode(DIR,OUTPUT);
  pinMode(SERVO,OUTPUT);
  pinMode(PINRX, INPUT);
  pinMode(PINTX, OUTPUT);
  SSerial.begin(9600);
  myservo.attach(SERVO);
}

void loop() {
  while (Serial.available() > 0) {     // while i dont recive enything i dont do anything
    pos = SSerial.read();             // i store the value 
    executeMove(pos);
    prev_pos = pos;                   // i save the current position
  }
}

void executeMove(int pos){
  if(prev_pos > pos) {                                        // if the previous position is greater than the actual one:
    digitalWrite(DIR,HIGH);                                   // i set the direction of the motor clockwise
    int step_needed = (pos - prev_pos) * step_per_pos;        // i calculate the difference between the current pos and the previous pos
  }
  if(prev_pos < pos) {                                        // if the previous position is smaller than the actual one:
    digitalWrite(DIR,LOW);                                    // i set the direction of the motor counter-clockwise
    int step_needed = (prev_pos - pos) * step_per_pos;        // i calculate the difference between the current pos and the previous pos
  }
  else {                                                      // if there's no need to change position i just move the servo
    myservo.write(100);
    delay(3000);
    myservo.write(0);
    return;
  }
  
  for(int i=0;i<step_needed;i++){                             // i move the stepper motor
    digitalWrite(STEP,HIGH);
    delay(10);
    digitalWrite(STEP,LOW);
    delay(10);
  }
  myservo.write(100);                                         // i move the servo
  delay(3000);
  myservo.write(0);
}

