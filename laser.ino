
#include<Servo.h> //includes servo motors

Servo Myservo1;
Servo Myservo2;
int buzzer=11;
int laserPin=6;
//initializes all variablee and pins

void setup() {
  Myservo1.attach(10);
  Myservo2.attach(9);
  pinMode(buzzer, OUTPUT);
  pinMode(laserPin, OUTPUT);
  //initalizes input and ouputs 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(laserPin, HIGH); // turns laser one
  tone(buzzer,62);        //speaker on to alert cat
  delay(100);             //pause
  noTone(buzzer);         // turns speaker off
  Myservo1.write(120);     //writes servo to new position
  Myservo2.write(100);    //writes servo to new position
  delay(1000);            //pause
  Myservo1.write(90);     //writes servo to new position
  Myservo2.write(70);     //writes servo to new position
  delay(2000);            //pause
  Myservo2.write(115);     //writes servo to new position
  delay(2000);            //pause
  Myservo2.write(20);     //writes servo to new position
  delay(2000);            //pause
  Myservo1.write(90);     //writes servo to new position
  Myservo2.write(150);     //writes servo to new position
  delay(2000);            //pause
  Myservo1.write(125);     //writes servo to new position
  Myservo2.write(90);     //writes servo to new position
  delay(1000);            //pause
  Myservo1.write(45);     //writes servo to new position
  Myservo2.write(140);     //writes servo to new position
  delay(2000);            //pause
  Myservo2.write(100);    //writes servo to new position
  Myservo1.write(70);     //writes servo to new position
  delay(2000);            //pause
  Myservo2.write(50);     //writes servo to new position
  delay(2000);            //pause
  Myservo1.write(32);     //writes servo to new position
  Myservo2.write(130);     //writes servo to new position
  delay(2000);            //pause
  Myservo1.write(80);     //writes servo to new position
  Myservo2.write(90);    //writes servo to new position
  delay(1000);            //pause
  Myservo1.write(25);     //writes servo to new position
  Myservo2.write(155);     //writes servo to new position
  delay(2000);            //pause
  Myservo2.write(75);     //writes servo to new position
  Myservo1.write(65);     //writes servo to new position
  Myservo2.write(135);     //writes servo to new position
  delay(2000);            //pause
  Myservo1.write(90);     //writes servo to new position
  Myservo2.write(95);     //writes servo to new position
  delay(2000);            //pause
  Myservo1.write(70);     //writes servo to new position
  Myservo2.write(120);     //writes servo to new position
  delay(1000);            //pause
  Myservo1.write(20);     //writes servo to new position
  Myservo2.write(80);     //writes servo to new position
  delay(2000);            //pause
  Myservo2.write(140);     //writes servo to new position
  Myservo1.write(70);     //writes servo to new position
  Myservo2.write(90);     //writes servo to new position
  delay(2000);            //pause
  Myservo1.write(55);     //writes servo to new position
  Myservo2.write(140);     //writes servo to new position
  delay(2000);            //pause
  digitalWrite(laserPin, LOW); //turns laser off
  delay(10000); //waits X time until laser comes back on
}
