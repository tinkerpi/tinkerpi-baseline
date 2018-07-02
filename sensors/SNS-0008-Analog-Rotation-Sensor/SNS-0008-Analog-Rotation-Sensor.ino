
// Tinker Pi Analog Rotation Sensor - SNS-0008

void setup()
{
  Serial.begin(9600);           // Set up the serial for using the console
}

void loop()
{
  int val;
  val=analogRead(0);            // Read sensor from Analog 0
  Serial.println(val,DEC);      // Print the value to the console
  delay(100);
}