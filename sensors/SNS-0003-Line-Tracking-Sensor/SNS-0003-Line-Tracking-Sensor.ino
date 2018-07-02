
/* Tinker Pi Line Tracking Sensor - SNS-0003 */

void setup()
{
  Serial.begin(9600);   // Set up serial for the console
}
void loop()
{
  Serial.println(digitalRead(3));   // print the data from the sensor
  delay(500);
}