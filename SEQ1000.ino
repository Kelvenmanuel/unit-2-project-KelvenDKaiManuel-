char *myString[ ] = {"0123456"};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 1; i++)
    Serial.println(myString[i]);
    delay(10);
  }
