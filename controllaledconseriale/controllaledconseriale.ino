void setup() { 
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop() {
 if (Serial.available()>0)
 {
 long legge=Serial.parseInt();
    legge=constrain(legge, 0, 255);
        Serial.print(legge); 
        Serial.println("<---Intensità del led:");
    analogWrite(13,legge); 
           }    
}
