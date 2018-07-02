/* 

Tinker Pi Knock Sensor - LoLa# MOD-0008

Compatible:
    
    Ks0024 keyestudio Knock Sensor Module

*/

int led=13;                 // LED Pin #13 is the onboard LED, though you can plug in an external LED as well
int knock=3;                // Knock sensor is plugged into Digital 3
int val;                    // Declare a variable to hold the value from the sensor

void setup()
{
  pinMode(led,OUTPUT);      // Set the LED to OUTPUT mode
  pinMode(knock,INPUT);     // Set the Knock Sensor to INPUT mode
}

void loop()
{
  val=digitalRead(knock);   // Read the knock sensor each iteration of the loop
  if(val==HIGH)             
  {
    digitalWrite(Led,LOW);  // When a knock is NOT detected, turn the light off
  }
  else
  {
    digitalWrite(Led,HIGH); // When a knock is detected, turn the light on
  }
}