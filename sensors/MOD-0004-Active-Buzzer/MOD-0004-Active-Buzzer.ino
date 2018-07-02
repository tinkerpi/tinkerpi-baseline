/* 

Tinker Pi Active Buzzer - LoLa# MOD-0004

Compatible:
    
    Ks0018 keyestudio Digital Buzzer Module

*/

int buzzPin =  3;               //Connect Buzzer on Digital Pin3
 void setup()  
 {        
  pinMode(buzzPin, OUTPUT);     // Set pin to OUTPUT
}

void loop()                                      
{
  digitalWrite(buzzPin, HIGH);  // turn on
  delay(1);
  digitalWrite(buzzPin, LOW);   // turn off
  delay(1);        
}