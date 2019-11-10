
void setup() {

  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 700; i=i+7) {
    Serial.print(i);
}     
    }
