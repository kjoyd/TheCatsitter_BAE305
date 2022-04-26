# TheCatsitter_BAE305
This is the documentation and Online Design profile for the BAE 305 semester design project. Group Members: Rebecca Deason, Kaitlyn Duncan, Elizabeth Howard, Lauren Doyle, Colby Redding 

# Summary
For the BAE 305 group project, the CatSitter was invented. The CatSitter is a consumer good that allows cat owners to be at ease when gone for long periods of time during the day and even on vacation, knowing that their pet is holistically taken care of. The device is an automated pet feeder that dispenses a specified amount of food at timed intervals during the day (owners can chose 1/2 cup or full cup to be dispensed every 12 hours by pressing a blue or red button). This mechanism utilizes servo motors and a 3D printed structure that holds kibble. In addition to feeding your pet, the device has a treat function where you can give your pet extra love by sending treats at timed intervals (every 2 hours) which uses a similar dispensing design mechanism with a servo motor as the feeder just at a much smaller scale. There is also a play function at timed intervals (every 3 hours) where the device utilizes two servo motors to move a laser around in different planes of motion for a cat to chase for enrichment and physical activity. These three functions and their mechanisms along with circuitry that has code loaded and the power source of battery packs are enclosed in a box designed with openings for only what the cat needs to be in contact with. A scrum agile sprint method was used throughout the semester to track goals and progress on this project to ensure completion and success. 
# Design Description

Mechanic Design 

Circuit Design 


Cat Feeder code summary:
In the Cat feeder code, there is an if else loop. The first loop is run when the red button(button1) is pressed. When going through the first loop the first servo opens for 2 milliseconds which releases about XX cup of food into the holding department then shuts. The second servo opens for several seconds allowing for all the food to be released into the bowl and shuts the servo gate back. A buzzer then goes off for one second alerting the cat there is food in the bowl. The if else loops have the process as the if loop, but with different time amount for the first servo to open. In this loop the gate is open for 5 milliseconds allowing for XX cups to be dropped. Both the if and if else loop repeat every12 hours to feed the cat. The else loop is for when neither button is pressed and keeps both servos in the closed position until one button is pressed. 

Treat code summary:  

The treat dispenser code is very similar to that of the food dispenser but only uses one servo. A speaker alerts the cat treats are about to drop then opens a servo for 2 milliseconds releasing a few treats then closes back and waits 2 hours before releasing more treats.  



Laser Code Summary:

The void loop in the laser code has a list of different servo positions that move each servo to a different location when the laser is on and holds a position for a certain amount of time before moving again. There is also a buzzer hooked up to the circuit that plays a different sound than the treat and food dispenser to alert the cat that it is time to play with the laser. 



# Discussion of Design

# Testing Description

# Discussion of Testing

# Testing Results


