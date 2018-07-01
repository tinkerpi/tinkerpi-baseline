
// Tinker Pi Bluetooth - MOD-0015

int val; 
int ledpin=13;      // Pin #13 is the onboard LED, if you don't plug an LED into pin #13

void setup() 
{ 
  Serial.begin(9600);       // Set up serial for the terminal
  pinMode(ledpin,OUTPUT);   // Set the LED pin to OUTPUT
} 

void loop()
{ 
  val=Serial.read();        // Read the Serial port
  if(val=='a')              // If the letter 'a' was received...
  { 
    digitalWrite(ledpin,HIGH);  // Turn the LED on
    delay(1000); 
    digitalWrite(ledpin,LOW);   // Turn the LED off
    delay(1000);
    Serial.println("tinkerpi"); // Send 'tinkerpi' through the serial port
  }
}
