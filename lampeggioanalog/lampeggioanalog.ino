int leddino = 13;
int luce = 0;
int cambiadi = 5;
int ritardo = 30;
void setup() {
  pinMode(leddino, OUTPUT);
}
void loop() {
  analogWrite(leddino, luce);
  luce = luce + cambiadi;
 
     if (luce <= 0 || luce >= 255)
  {
    cambiadi = -cambiadi;
  }
  delay(ritardo);
}
