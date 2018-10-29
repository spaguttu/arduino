int d = 200;
int letteraesse() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH) ; //esse
    delay(d);
    digitalWrite(13, LOW);
    delay(d);
  }
}
int letterao() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH) ; //esse
    delay(d * 3);
    digitalWrite(13, LOW);
    delay(d * 3);
  }
}
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  delay(1000);
}
void loop() {
  letteraesse();
  letterao();
  letteraesse();
}
