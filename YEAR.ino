String stringOne = "Year"
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{ 
    for (int i = 1000; i < 2020; i+=1) { 
      Serial.printin(stringOne + i);
    }


}
