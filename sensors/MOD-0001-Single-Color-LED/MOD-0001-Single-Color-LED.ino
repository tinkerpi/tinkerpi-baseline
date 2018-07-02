
/* 

Tinker Pi Single Color LED - MOD-0001

Compatible:
    
    Keyestudio KS0017 - White LED Module

*/

int led = 3;
 void setup()
{
  pinMode(led, OUTPUT);                 //Set Pin3 as output
}
void loop()
{
          digitalWrite(led, HIGH);      //Turn on led
          delay(2000);
          digitalWrite(led, LOW);       //Turn off led
          delay(2000);
}