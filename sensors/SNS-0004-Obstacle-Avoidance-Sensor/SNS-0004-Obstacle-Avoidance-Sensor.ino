
/* Tinker Pi Obstacle Avoidance Sensor */

const int sensorPin = 2;      // the number of the sensor pin
const int ledPin =  13;       // the number of the LED pin
int sensorState = 0;          // variable for reading the sensor status

void setup() {
  Serial.begin(9600);         // Set up serial for the console
  pinMode(ledPin, OUTPUT);    // Set the led to OUTPUT
  pinMode(sensorPin, INPUT);  // Set the sensor to INPUT
}

void loop(){
  sensorState = digitalRead(sensorPin); // Read the sensor
  Serial.print("Sensor Value: ");       // Print out the value
  Serial.println(sensorState);
  
  if (sensorState == HIGH) {     
     digitalWrite(ledPin, HIGH);        // something was detected, so turn the LED on  
  } 
  else {
       digitalWrite(ledPin, LOW);       // nothing was detected, so turn the LED off
  }
}
