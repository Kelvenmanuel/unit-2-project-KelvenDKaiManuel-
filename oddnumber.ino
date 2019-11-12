void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1001; i > 1; i-=2) {
    Serial.println(1);
  }
}
