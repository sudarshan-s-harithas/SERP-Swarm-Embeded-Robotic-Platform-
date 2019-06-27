/* Swarm Embeded Robotic Platform (SERP),is a low cost robust robot designed for robotics hobbyists and enthusiasts.
It has been extensively developed on STM32, has an onboard  power suppy, IR array ( 7 Sensors), Ulatrasonic sensors, motor drivers
It is used to build a wide range of robots. 
Here we demosntrate a bluetooth interface 
*/

// A program to recieve data and print it on Serial Monitor


char given;  // The Incomming data wil be stored in the variabe //called given


void setup() {
Serial.begin(9600);
}


void loop() {

// Check if Serial Data is available 

if(Serial.available()>0)
{
  given = Serial.read();  // read the data
  
  Serial.println(given);
}

}


