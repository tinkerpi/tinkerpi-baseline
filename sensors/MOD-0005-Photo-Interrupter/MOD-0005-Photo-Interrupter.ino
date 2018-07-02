/* 

Tinker Pi Photo Interrupter - LoLa# MOD-0005

Compatible:
    
    Ks0009 keyestudio Photo Interrupter Module

*/
 
int Led = 13 ;                          // Pin 13 is onboard LED, but you can plug an external LED in too
int interrupter = 3;                    // Photo interrupter is plugged into pin #3
int val ;                               // Declare variable

void setup ()
{
  pinMode (Led, OUTPUT) ;               // Set LED pin mode to OUTPUT
  pinMode (interrupter, INPUT) ;        // Set Interrupter pin to INPUT
}

void loop ()
{
  val = digitalRead (interrupter) ;     // Read from the Interrupter Pin
  if (val == HIGH)                      // Check the value each iteration of the loop
  {
    digitalWrite (Led, HIGH);           // When the light sensor detects a signal and is interrupted, the LED flashes
  }
  else
  {
    digitalWrite (Led, LOW);            // When no signal is detected, turn the light off
  }
}