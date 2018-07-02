/* 

Tinker Pi Passive Buzzer - LoLa# MOD-0003

Compatible:
    
    Ks0019 keyestudio Passive Buzzer module

*/

int buzzer=8;               // Plug buzzer into digital pin 8

void setup() 
{ 
  pinMode(buzzer,OUTPUT);   // Set buzzer pin to OUTPUT
} 

void loop() 
{ 
  unsigned char i,j;        // Declare Variables
  while(1) 
  { 
    for(i=0;i<80;i++)       // Loop each iteration, increment i, so long as it's less than 80
    { 
      digitalWrite(buzzer,HIGH);    // play sound
      delay(1);                     // delay 1 ms
      digitalWrite(buzzer,LOW);     // turn sound off
      delay(1);                     // delay 1 ms 
    } 
    for(i=0;i<100;i++)      // Loop each iteration, increment i, so long as it's less than 100
    { 
      digitalWrite(buzzer,HIGH);    // sound
      digitalWrite(buzzer,LOW);     //not sound
      delay(2);                     //2ms delay 
    }
  } 
} 