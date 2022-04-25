
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
