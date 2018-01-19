#include <Servo.h>
#define sensor A0
Servo servoMain; // Define our Servo
int start = 0;
int angle = 130;

void setup()
{
   servoMain.attach(13); // servo on digital pin 10
   Serial.begin(9600);
   
    servoMain.write(start);
    delay(1000);
}

void loop()
{
  // 5v
    float volts = analogRead(sensor)*0.0048828125;  // value from sensor * (5/1024)
    int distance = floor(volts*2);
    delay(100); // slow down serial port 
    Serial.println(volts);
    if (distance > 2){
      servoMain.write(start + angle /2);
      delay(1000);
      servoMain.write(start);
      delay(1000);
    }
}

//#define sensor A0 // Sharp IR GP2Y0A41SK0F (4-30cm, analog)
//
//void setup() {
//  Serial.begin(9600); // start the serial port
//}
//
//void loop() {
//  
//  // 5v
//  float volts = analogRead(sensor)*0.0048828125;  // value from sensor * (5/1024)
//  int distance = 13*pow(volts, -1); // worked out from datasheet graph
//  delay(100); // slow down serial port 
//  
////  if (distance <= 30){
//    Serial.println(distance);   // print the distance
////  }
//}
