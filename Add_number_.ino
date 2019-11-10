int result = 0;

void setup() {
  // no command needed 
  Serial.begin(9600)

}

void loop() {

  For (int i = 0; i < 100; i++) {
    (result=i+result); 

    Serial.print(i+result); 
  }
}
