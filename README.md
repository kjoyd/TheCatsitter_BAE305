# TheCatsitter_BAE305
This is the documentation and Online Design profile for the BAE 305 semester design project. Group Members: Rebecca Deason, Kaitlyn Duncan, Elizabeth Howard, Lauren Doyle, Colby Redding 

# Summary

# Design Description

Mechanic Design 

Circuit Design 
Cat feeder code:

#include<Servo.h> //includes servo motors
Servo Myservo1;
Servo Myservo2;
int button = 5;
int button1 = 3;
int buzzer=11;

//initializes all variablee and pins
void setup()
{
  pinMode(button,INPUT_PULLUP);
  pinMode(button1,INPUT_PULLUP);
  Myservo1.attach(10);
  Myservo2.attach(9);
  pinMode(buzzer, OUTPUT);
  //initalizes input and ouputs 
}

void loop(){
  
  if(digitalRead(button)==LOW){ //if button 1 presses
    Myservo2.write(80);         //opens gate
    delay(200);                 //gate open for 2 ms
    Myservo2.write(20);         //close gate
    delay(1000);                //waits 1 second between closing servo 2 and opening servo 1
    Myservo1.write(40);         //opens gate
    delay(1000);                //gate open for 1 s
    Myservo1.write(100);        //close gate
    tone(buzzer,262);           //speaker on to alert cat
    delay(1000);                //keeps speaker on for 1 second
    noTone(buzzer);             // turns speaker off
    delay(5000);                //waits x time until time to feed agai
    Myservo2.write(80);         //opens gate
    delay(200);                 //gate open for 2 ms
    Myservo2.write(20);         //close gate
    delay(1000);                //waits 1 second between closing servo 2 and opening servo 1
    Myservo1.write(40);         //opens gate
    delay(1000);                //gate open for 1 s
    Myservo1.write(100);        //close gate
    tone(buzzer,262);           //speaker on to alert cat
    delay(1000);                //keeps speaker on for 1 second
    noTone(buzzer);             // turns speaker off

    
  }
  else if(digitalRead(button1)==LOW){
    Myservo2.write(80);         //opens gate
    delay(500);                 //gate open for 5 ms
    Myservo2.write(20);         //close gate
    delay(2000);                //waits 2 second between closing servo 2 and opening servo 1
    Myservo1.write(40);         //opens gate
    delay(2000);                //gate open for 2s
    Myservo1.write(100);        //close gate
    tone(buzzer,262);           //speaker on to alert cat
    delay(1000);                //keeps speaker on for 1 second
    noTone(buzzer);             // turns speaker off
    delay(5000);                //waits x time until time to feed again
    Myservo2.write(80);         //opens gate
    delay(500);                 //gate open for 5 ms
    Myservo2.write(20);         //close gate
    delay(2000);                //waits 1 second between closing servo 2 and opening servo 1
    Myservo1.write(40);         //opens gate
    delay(2000);                //gate open for 2s
    Myservo1.write(100);        //close gate
    tone(buzzer,262);           //speaker on to alert cat
    delay(1000);                //keeps speaker on for 1 second
    noTone(buzzer);             // turns speaker off
    
  }
  else { //servo doesnt move if no button is pressed and retturns servo to closes position
    Myservo1.write(100);
    Myservo2.write(20);
    
  }
}

Treat Code:
#include<Servo.h> //includes servo motors
Servo Myservo1;
int buzzer=11;
//initializes all variablee and pins
void setup()
{

  Myservo1.attach(10);
  pinMode(buzzer, OUTPUT);
  //initalizes input and ouputs 
}

void loop(){
    tone(buzzer,262);      //speaker on to alert cat
    delay(1000);           //keeps speaker on for 1 second
    noTone(buzzer);        // turns speaker off
    Myservo1.write(160);   //opens gate
    delay(10);            //gate open for 2 ms
    Myservo1.write(70);    //close gate
    delay(10000);          //waits x time until time to feed agai 
    
    tone(buzzer,262);      //speaker on to alert cat
    delay(1000);           //keeps speaker on for 1 second
    noTone(buzzer);        // turns speaker off
    Myservo1.write(160);   //opens gate
    delay(100);            //gate open for 2 ms
    Myservo1.write(70);    //close gate
    delay(10000);          //waits x time until time to give treat agai
    
    tone(buzzer,262);      //speaker on to alert cat
    delay(1000);           //keeps speaker on for 1 second
    noTone(buzzer);        // turns speaker off
    Myservo1.write(160);   //opens gate
    delay(100);            //gate open for 2 ms
    Myservo1.write(70);    //close gate
    delay(10000);          //waits x time until time to give treat agai


}


Laser Code:
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

# Discussion of Design

# Testing Description

# Discussion of Testing

# Testing Results


