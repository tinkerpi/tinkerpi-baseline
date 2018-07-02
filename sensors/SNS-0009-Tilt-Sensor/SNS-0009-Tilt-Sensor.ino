
/* Tinker Pi Tilt Sensor - SNS-0009 */

int Led = 13 ;                  // Set up pin 13 - Onboard LED if nothing is plugged into Pin #13
int tiltpin = 3;              // Define the tilt sensor on pin #3
int val ;                       // Declare variable to hold the value
void setup ()
{
  pinMode (Led, OUTPUT) ;       // Set Led to OUTPUT
  pinMode (tiltpin, INPUT) ;  // Set the sensor to OUTPUT
}

void loop ()
{
  val = digitalRead (tiltpin) ;     // Read the tilt sensor pin and put the value into the 'val' variable
  if (val == HIGH)                  // If the sensor is tilted, turn on the LED, otherwise, turn it off
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
