int d = 500;
void setup() {
  pinMode(13, OUTPUT);
}
void loop() {
  digitalWrite(13, HIGH) ;
  delay(d);
  digitalWrite(13, LOW);
  delay(d);
}
