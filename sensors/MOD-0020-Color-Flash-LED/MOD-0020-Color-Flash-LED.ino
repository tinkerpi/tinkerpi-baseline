/*
Tinker Pi Color Flash LED - MOD-0020

This example code is in the public domain.
*/
 
void setup () {
  pinMode (13, OUTPUT); // Initialize digital pin 13 as an output, the onboard LED
}

void loop () {
  digitalWrite (13, HIGH); // set the LED on
  delay (2000); // wait for a second
  digitalWrite (13, LOW); // set the LED off
  delay (2000); // wait for a second
}
