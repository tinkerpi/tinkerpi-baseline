
/* 

Tinker Pi Single Color LED - LoLa# MOD-0001

Compatible:
    
    Ks0017 keyestudio White LED Module
    Ks0016 keyestudio Piranha LED Light Module

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