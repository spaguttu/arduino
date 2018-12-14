int bazz=2; //pin del buzzerino PASSIVO
int trig=11;// pin trig del sensore 
int echo=8;// pin echo del sensore
int distanza;//convertito dal valore che mi passa il sensore
int durata;//
void setup() {
pinMode(bazz,OUTPUT); // uso il pin del buzzer come output
pinMode(trig, OUTPUT);//trig è un output
pinMode(echo,INPUT);//echo è l'input
digitalWrite(5,HIGH);
Serial.begin(9600);
 
}
  void loop() {
digitalWrite(trig,LOW);//pulisce
delayMicroseconds(2);//spetta un pochetto

digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);// fa andare il trig per 10 micro secondi

durata = pulseIn(echo,HIGH); //vedi sopra,da capire

distanza= durata*0.034/2;//formuletta per convertire il pulse in distanza,espressa in cm

Serial.print("distanza: ");
Serial.println(distanza);

if (distanza<50){
  tone(bazz,1600);//fai suonare
  delay(250);//pausa
noTone(bazz);//fai smettere

}
delay(400);
}
