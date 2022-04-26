# TheCatsitter_BAE305
This is the documentation and Online Design profile for the BAE 305 semester design project. Group Members: Rebecca Deason, Kaitlyn Duncan, Elizabeth Howard, Lauren Doyle, Colby Redding 

# Summary

# Design Description

Mechanic Design 

Circuit Design 

Cat Feeder Code:
#include<Servo.h> 
Servo Myservo1;
Servo Myservo2;
int button = 5;
int button1 = 3;
int buzzer=11;

void setup()
{
  pinMode(button,INPUT_PULLUP);
  pinMode(button1,INPUT_PULLUP);
  Myservo1.attach(10);
  Myservo2.attach(9);
  pinMode(buzzer, OUTPUT);
}
void loop(){
  if(digitalRead(button)==LOW){ 
    Myservo2.write(80); 
    delay(200);   
    Myservo2.write(20); 
    delay(1000);
    Myservo1.write(40);   
    delay(1000); 
    Myservo1.write(100);  
    tone(buzzer,262);   
    delay(1000);     
    noTone(buzzer);   
    delay(5000);
    Myservo2.write(80);
    delay(200); 
    Myservo2.write(20);
    delay(1000);       
    Myservo1.write(40);       
    delay(1000);
    Myservo1.write(100);
    tone(buzzer,262);           
    delay(1000);                
    noTone(buzzer);            
  }
  else if(digitalRead(button1)==LOW){
    Myservo2.write(80);
    delay(500);
    Myservo2.write(20);
    delay(2000);
    Myservo1.write(40);
    delay(2000);
    Myservo1.write(100);
    tone(buzzer,262);
    delay(1000); 
    noTone(buzzer);
    delay(5000);
    Myservo2.write(80);         
    delay(500);                 
    Myservo2.write(20);         
    delay(2000);                
    Myservo1.write(40);         
    delay(2000);                
    Myservo1.write(100);        
    tone(buzzer,262);           
    delay(1000);                
    noTone(buzzer);             
  }
  else { 
    Myservo1.write(100);
    Myservo2.write(20);
    
  }
}
Cat feeder code summary:
In the Cat feeder code, there is an if else loop. The first loop is run when the red button(button1) is pressed. When going through the first loop the first servo opens for 2 milliseconds which releases about XX cup of food into the holding department then shuts. The second servo opens for several seconds allowing for all the food to be released into the bowl and shuts the servo gate back. A buzzer then goes off for one second alerting the cat there is food in the bowl. The if else loops have the process as the if loop, but with different time amount for the first servo to open. In this loop the gate is open for 5 milliseconds allowing for XX cups to be dropped. Both the if and if else loop repeat every12 hours to feed the cat. The else loop is for when neither button is pressed and keeps both servos in the closed position until one button is pressed. 

 
Treat code summary:  

The treat dispenser code is very similar to that of the food dispenser but only uses one servo. A speaker alerts the cat treats are about to drop then opens a servo for 2 milliseconds releasing a few treats then closes back and waits 2 hours before releasing more treats.  

 
Laser Code Summary:

The void loop in the laser code has a list of different servo positions that move each servo to a different location when the laser is on and holds a position for a certain amount of time before moving again. There is also a buzzer hooked up to the circuit that plays a different sound than the treat and food dispenser to alert the cat that it is time to play with the laser. 



# Discussion of Design

# Testing Description

# Discussion of Testing

# Testing Results


