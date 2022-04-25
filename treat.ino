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
