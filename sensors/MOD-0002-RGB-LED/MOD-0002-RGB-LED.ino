
// Tinker Pi RGB LED

int redpin = 11;          // Pin for the red led
int bluepin = 10;         // Pin for the blue led
int greenpin = 9 ;        // Pin for the green led
int val;

void setup () {
  pinMode (redpin, OUTPUT);   // Set the 3 pins to OUTPUT
  pinMode (bluepin, OUTPUT);
  pinMode (greenpin, OUTPUT);

  Serial.begin (9600);        // Set up Serial for the Terminal
}

void loop ()
{
  for (val = 255; val> 0; val --) // Start at 255 and decrease by one each loop
  {
    analogWrite (11, val);
    analogWrite (10, 255-val);
    analogWrite (9, 128-val);
    delay (10);
    Serial.println (val, DEC);
  }
  for (val = 0; val <255; val ++)
  {
    analogWrite (11, val);
    analogWrite (10, 255-val);
    analogWrite (9, 128-val);
    delay (10);
    Serial.println (val, DEC);
  }
}
