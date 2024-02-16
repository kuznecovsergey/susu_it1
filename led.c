void setup() {
  pinMode(13, OUTPUT);   
}
 
void loop() { // основной цикл
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(200);
}
