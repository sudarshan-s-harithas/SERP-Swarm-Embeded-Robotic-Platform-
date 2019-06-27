/* Swarm Embeded Robotic Platform (SERP),is a low cost robust robot designed for robotics hobbyists and enthusiasts.
It has been extensively developed on STM32, has an onboard  power suppy, IR array ( 7 Sensors), Ulatrasonic sensors, motor drivers
It is used to build a wide range of robots. 

Here we demosntrate testing of interfaced motors 
*/

void setup() {

// Declaring  the pins to be connected to the motor driver 

pinMode(PB5,OUTPUT);  // PB5 is the Right Motor Forward pin
pinMode(PB6,OUTPUT);  // PB6 is the Right Motor Backward pin
pinMode(PB7,OUTPUT);  // PB7 is the Left Motor Forward pin
pinMode(PB8,OUTPUT);  // PB7 is the Left Motor Backward pin

// Initilizing  the pins to low    
digitalWrite(PB5,LOW);
digitalWrite(PB6,LOW);
digitalWrite(PB7,LOW);
digitalWrite(PB8,LOW);

Serial.begni(9600);

}

void loop() {
// Move forward for 20 seconds
Serial.println("Forward");
digitalWrite(PB5,HIGH);
digitalWrite(PB6,LOW);
digitalWrite(PB7,HIGH);
digitalWrite(PB8,LOW);

delay(20000);


// Move backward for 20 seconds

Serial.println("B");
digitalWrite(PB5,LOW);
digitalWrite(PB6,HIGH);
digitalWrite(PB7,HIGH);
digitalWrite(PB8,LOW);  

delay(20000);

}