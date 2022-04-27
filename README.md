# TheCatsitter_BAE305
This is the documentation and Online Design profile for the BAE 305 semester design project. Group Members: Rebecca Deason, Kaitlyn Duncan, Elizabeth Howard, Lauren Doyle, Colby Redding 

# Summary
For the BAE 305 group project, the CatSitter was invented. The CatSitter is a consumer good that allows cat owners to be at ease when gone for long periods of time during the day and even on vacation, knowing that their pet is holistically taken care of. The device is an automated pet feeder that dispenses a specified amount of food at timed intervals during the day (owners can chose 1/2 cup or full cup to be dispensed every 12 hours by pressing a blue or red button). This mechanism utilizes servo motors and a 3D printed structure that holds kibble. In addition to feeding your pet, the device has a treat function where you can give your pet extra love by sending treats at timed intervals (every 2 hours) which uses a similar dispensing design mechanism with a servo motor as the feeder, but on a much smaller scale. There is also a play function at timed intervals (every 3 hours) where the device utilizes two servo motors to move a laser pointer in different planes of motion for a cat to chase for enrichment and physical activity. These three functions, their mechanisms, circuitry that has code loaded, and the power source of battery packs are enclosed in a box designed with openings for only what the cat needs to be in contact with. A scrum agile sprint method was used throughout the semester to track goals and progress on this project to ensure completion and success. 
# Design Description


## Materials used: 

-	3- 1'x2' ¼” birch plywood sheets 
-	500g of Various colors of PLA 
-	10- sticks of Hot melt glue
-	2- 1" diameter magnets
-	Wood glue
-	2L soda bottle 
-	Plastic disposable water bottle
-	2- 1” hinges with screws 
-	2- ¼” nut and bolts
-	Electical tape
-	2- push buttons attachable to a breadboard
-	5- mini-servos 
-	20- jumper wires
-	3- buzzers attachable to a breadboard
-	3- RedBoard Arduino controllers
-	3- 2"x3.5" breadboards
-	6" of 3M Velco tape

## Special tools used: 
-	Glue gun
-	Prusa 3D printers
-	Laser cutter
-	Bandsaw 
-	Other simple wood-working tools
-	A ruler/measurement devices

## Mechanic Design:

### 3D Printed parts assembly
The basis of this design is a gravity feeder. It includes a servo arm which regulates the amount of food that exits the feeder. The food is set to dispense on a timed delay. To execute the whole functioning feeder, specific pieces where developed. The mechanic design was 3D modeled using OnShape online. There were 6 parts that were designed and modeled by hand. These include: 
1.	The feed dispenser
2.	The treat dispenser
3.	The food holder base
4.	3 rotating plates 

All the STL files can be accessed in the Github repository. All of these parts were 3D printed using PLA on the Prusa 3D printers. The tubes both are complicated round designs that would be hard to 3D print as whole, singular pieces, so the pieces were sliced into symmetrical halves using Onshape. These halves were printed separately and were attached using glue and a ¼” nut and bolt through the flange section. 

The dispenser is the most important part of this design. The tube piece is that base that has 3 parts attached to it. This assembly rendering illustrates how this is connected.
![Assembly 1](https://user-images.githubusercontent.com/102251593/165393820-82d2c84a-5e47-40f7-9d0c-e028c64fae9d.png)

Inside the food dispenser tube, a 1" 0.156" deep magnet can be placed in the hole cutout once the 2 halves are attached to each other. 

The treat dispenser works the same as the food dispenser. It is merely designed on a smaller scale. A thin plate slides in and out of the slot in the treat dispenser tube, controlling wwhen food is despensed. An image of this assembly can be seen below. Additionally, all parts of a small water bottle were used. The piece of the bottle where the cap screws on was left intact. The cap was glued into the treat dispensing tube, such that the bottle could be screwed into the tube for full assembly. About 1” down from the top of the water bottle, the bottle was cut roughly 80% around, leaving a bit connected. This was so that the top would still be attached to the bottle, enabling the easy refilling of treats.
![Assembly 2 (1)](https://user-images.githubusercontent.com/102251593/165395272-aa60b9f2-5a4c-48f8-a666-930bae5a280d.png)
The food holder is attached similarly, but slightly different. The base was 3D printed so that a 2 liter bottle could attach to it. Also, a round cut out was made on the flat edge of the food holder so that a 1" magnet of depth 0.156" could be hot glued into the cutout. The 2 liter had 2 inches removed from the end of the bottle where the opening is, and 0.5" slots cut vertically from this cut. These edges were seperated out and hot glued onto the base. The bottom 4 inches of the bottle were completely removed, as well. This way, it is used as a removable lid.4 pea-sized glue nubs were melted into the bottom edge of the bottle to create a tighter and more secure fit of the lid.

The plates were designed to attach perfectly onto the head of the servo. The servos were attached to the sides of the treat dispenser and the food dispenser using glue and tape to secure them into place in a way that would not inhibit the movement of the plate.  


### Box Assembly
A box was constructed using ¼” birch plywood and pine wood. A design created in Illustrator was exported to the laser cutter to laser cut the wood. Other types of wood and plywood can be used but be careful as most woods do not work well in the laser cutter due to fumes and unsafe materials being burnt. 

The box was constructed of 2 12”x8” sides, a 12”x8.5” base, a front and back measuring 8”x8”, a top consisting of 3 pieces that are connected with a hinge, and a middle 8”x8” piece that sits in them middle of the box. This middle piece adds structure to the feeder. The illustration below shows the design of the box. All pieces were attached using standard wood glue and clamps to hold the pieces together while drying. The middle section and the top were added last after is was ensured that all the 3D printed pieces were in place. This way, vision and acessibility were not inhibited during the assembly.

Once the base and sides of the box were assembled, the 3D printed parts were attached. The food dispenser tube was attached with hot glue to the front of the box (on the inside, of course) such that the hole in the wood aligned with the hole in the tube to dispense food. The middle piece was then installed using glue so that the food dispensor tube was wedged between it and the front of the box. Once this piece was in place, the top was assembled using wood glue and clamps. These pieces were attached in the spacing sequence as shown in the Illustrator file. 
To attach the treat dispenser, the tube piece was glued to fit flush into the circular hole cut out into the wood on the left side of the box. The tube was also aligned such that the top of the tube was centered under a whole cut out in the top piece of wood. This way, treats could flow from the treat holder and into the tube to be dispensed out.

### Laser Pointer Assembly
The laser pointer was created with 2 mini servos, one controlling x- and y-axis and another servo attached to the first servo in the side controlling the z-axis of the laser pointer. The pointer is placed on the servo arm of the z-axis servo. This laser pointer is attached with electrical tape. The z-servo is attached to the xy-servo moving arm with hot melt glue. The xy-servo was attached via a 3D printed part found online. This STL file can be found in the model files labeled “laser_case”. The servo was glued to this case and the case was glued onto the left side of the box wall at about 2” in with the top of the servo case flush with the top of the box. There should be nothing inhibiting movement of either of the servo arms. 

A breadboard with the 2 control buttons was placed in the rectangle cutout on the right side of the box. This hole was covered by tape so only the two buttons were visible and accessible. Other 2 breadboard and Arduino controllers were attached to the sides of the box using 3M Velco tape and electrical tape. All wires for each board were bundled together and extended using electrical tape. 

Both bottles should be removable, and the box can optionally be painted. We painted our pet-friendly black and attached fun charms to bling it up. But this is purely cosmetic and completely optional. 

## Circuit Design 


### Cat Feeder code summary:
In the Cat feeder code, there is an if else loop. The first loop is run when the red button(button1) is pressed. When going through the first loop the first servo opens for 2 milliseconds which releases about XX cup of food into the holding department then shuts. The second servo opens for several seconds allowing for all the food to be released into the bowl and shuts the servo gate back. A buzzer then goes off for one second alerting the cat there is food in the bowl. The if else loops have the process as the if loop, but with different time amount for the first servo to open. In this loop the gate is open for 5 milliseconds allowing for XX cups to be dropped. Both the if and if else loop repeat every12 hours to feed the cat. The else loop is for when neither button is pressed and keeps both servos in the closed position until one button is pressed. 

### Treat code summary:  

The treat dispenser code is very similar to that of the food dispenser but only uses one servo. A speaker alerts the cat treats are about to drop then opens a servo for 2 milliseconds releasing a few treats then closes back and waits 2 hours before releasing more treats.  



### Laser Code Summary:

The void loop in the laser code has a list of different servo positions that move each servo to a different location when the laser is on and holds a position for a certain amount of time before moving again. There is also a buzzer hooked up to the circuit that plays a different sound than the treat and food dispenser to alert the cat that it is time to play with the laser. 



# Discussion of Design
### Measuring Design
There is a lot that goes into this device. The main food drop mechanism is one that is based off of gravity. This system uses the speed of a servo arm to precisely measure the amount of food that the pet is given access to. The servo is normally closed, held to the bottom of the container of food. When food is dispensed, the servo opens the opening based on a delay to allow food through. This amount can vary based on the delay set in the code for the servo arm. The amount dropped will vary from example to example, so the delay in the code is specific to this design to measure what is desired. If the same design is used with the same parts, this should replicate perfectly. The benefit of this mechanism is that it is easy to control and has the preciseness for our needs. This feeder does not need to be extremely precise. The food should be within a 1/16th of a cup, and this system allows for that much precision. This design could improve in precision by using stronger and more precise motors. 

Another servo is attached to the front plate for the food to sit in that slot until it is time to deliver the food. This servo is designed to stay closed and open when the food from the measuring plate is dropped in the tube. This arm rotates about 10 seconds after the food is dispensed. This system was designed with cat psychology in mind. If the cat got used to hearing the first arm going off, they may get too excited and attack the machine since the food has not come out yet. With the second arm, the cat will not attack the machine since that second arm they will associate with food rather than the first one. This also makes the design more insect repellent by having an extra boundary between the environments and the food. 

The treat feeder was designed in a similar way. The design is simpler by not including a base servo to control when the tube is open of closed. This makes for a better design, as the base plate would be overkill on such a small part and would not fit nicely into the box. 

### Model design
The models were designed to be custom for this object. Each plate was designed to be thin and fit snuggly on the end of the servo to create a simple design. These are modeled to include a bevel to be more accurate in movement, and much smaller than the slot size to avoid friction which can greatly affect the efficiency of the servo.

The tubes were designed with attachment to the box in mind. The base tube is designed to sit in the wall of the box, hence the small horizontal section at the bottom of the tube. This design helps with stability of the piece and creates a more cohesive product. The custom design includes a top section that holds the base of the food holder. This part includes a lip that the holder fits into along with a magnet that lines up with a magnet on the food holder base. This magnet helps with the stability of the part and will avoid being turned over by the cat. The tube also has a base of an L-bracket. This bracket also assists in stability of the product and rests on a small piece of wood glued into place. The advantage of this design is that it is very specific yet simple. Each piece fits perfectly into place and is designed for that very purpose. This allows for a very fluid design that looks good and functions even better. 


# Testing Description

# Discussion of Testing

# Testing Results


