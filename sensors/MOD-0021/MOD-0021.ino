
// Tinker Pi MOD-0021 - 2-Color LED

int redpin = 11;        // select the pin for the red LED
int greenpin = 10;      // select the pin for the green LED
int val;

void setup () {
   pinMode (redpin, OUTPUT);        // set the red pin to output
   pinMode (greenpin, OUTPUT);      // set the green pin to output
}

void loop () {
  for (val = 255; val> 0; val--)   // start at 255 and each iteration of the loop, decrease by 1
  {
    analogWrite (greenpin, val);      // assign that value to green
    analogWrite (redpin, 255-val);    // assign 255 minus that value to red
    delay (15);
  }
  for (val = 0; val <255; val++)   // start with 0 and each iteration of the loop increase by 1
  {
    analogWrite (greenpin, val);    // assign that value to green
    analogWrite (redpin, 255-val);  // assign 255 minus that value to red
    delay (15);
  }  
}
