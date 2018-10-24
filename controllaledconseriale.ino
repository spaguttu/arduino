void setup() { 
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop() {

 int legge= Serial.parseInt();
 if (legge > 0) {
  Serial.print(legge); 
    analogWrite(13,legge); 
    Serial.flush();
    
         }     }
