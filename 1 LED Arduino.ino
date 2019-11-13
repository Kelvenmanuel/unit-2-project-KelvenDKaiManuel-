//This is an example for using functions;
/*
Another comment
*/
int redLED = 13;
int greenLED = 12;

void setup()
{
  pinMode(redLED, OUTPUT);
}

void loop()
{
 blink(1000, redLED);
 blink(500, redLED);
 blink(100, redLED);
 }
 
 //This funtion blinks a LED
 //Only argument is the time 
 void blink(int time, int port){
  digitalWrite(port, HIGH);
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(redLED, LOW);
  delay(time); // Wait for 1000 millisecond(s)
  
 }
