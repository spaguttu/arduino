int bazz; //pin del buzzerino PASSIVO
int trig;// pin trig del sensore 
int echo;// pin echo del sensore
int distanza;//convertito dal valore che mi passa il sensore
int durata;//
void setup() {
pinMode(bazz,OUTPUT); // uso il pin del buzzer come output
pinMode(trig, OUTPUT);//trig è un output
pinMode(echo,INPUT);//echo è l'input
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
  tone(bazz,1000);//fai suonare
  delay(1000);//pausa
noTone(bazz);//fai smettere

}
}
