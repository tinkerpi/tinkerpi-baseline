
// Tinker Pi Laser Emitter - MOD-0022

void setup ()
{
   pinMode (13, OUTPUT);    // define the digital output interface pin 13
}
void loop () {
   digitalWrite (13, HIGH); // open the laser head
   delay (1000); // delay one second
   digitalWrite (13, LOW); // turn off the laser head
   delay (1000); // delay one second
}
