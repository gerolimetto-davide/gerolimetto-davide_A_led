int ledRosso = 6;
int ledGiallo = 4;
int ledVerde = 2;
int ledRosso2 = 8;
int ledGialloo2 = 10;
int ledVerde2 = 12;
String nlampeggio;
String tRosso;
String tGiallo;
String tverde;
String tempoTotale;
int tempo = 1000;

void loop() {
  // put your main code here, to run repeatedly:
 
if(Serial.available()>0)
{
  nlampeggio = Serial.readString();
  Serial.println("I received");
  Serial.println(nlampeggio.toInt());
}
if(Serial.available()>0)
{
  trosso = Serial.readString();
  Serial.println("I received");
  Serial.println(trosso.toInt());
}
if(Serial.available()>0)
{
  tgiallo = Serial.readString();
  Serial.println("I received");
  Serial.println(tgiallo.toInt());
}
if(Serial.available()>0)
{
  tverde = Serial.readString();
  Serial.println("I received");
  Serial.println(tverde.toInt());
}
if(Serial.available()>0)
{
  tempoTotale = Serial.readString();
  Serial.println("I received");
  Serial.println(tempoTotale.toInt());
}
tempoTotale=trosso - tgiallo;
fermi();
delay(5000);
ledLampeggianteVerde2();
ledLampeggianteVerde2();
ledLampeggianteVerde2();
ledLampeggianteVerde2();

staDiventandoVerde ();
delay(2000);

andare();
delay(3000);

ledLampeggianteVerde();
ledLampeggianteVerde();
ledLampeggianteVerde();
ledLampeggianteVerde();

giallo();
delay(4000);
}

void fermi() 
{
  digitalWrite(ledRosso,HIGH);
  digitalWrite(ledGiallo,LOW);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledRosso2,LOW);
  digitalWrite(ledGiallo2,LOW);
  digitalWrite(ledVerde2,HIGH);
}

void staDiventandoVerde() 
{
  digitalWrite(ledRosso,HIGH);
  digitalWrite(ledGiallo,HIGH);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledRosso2,LOW);
  digitalWrite(ledGiallo2,HIGH);
  digitalWrite(ledVerde2,LOW);
}

void andare() 
{
  digitalWrite(ledRosso,LOW);
  digitalWrite(ledGiallo,LOW);
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledRosso2,HIGH);
  digitalWrite(ledGiallo2,LOW);
  digitalWrite(ledVerde2,LOW);
}

void giallo() 
{
  digitalWrite(ledRosso,LOW);
  digitalWrite(ledGiallo,HIGH);
  digitalWrite(ledVerde,LOW);
  digitalWrite(ledRosso2,HIGH);
  digitalWrite(ledGiallo2,HIGH);
  digitalWrite(ledVerde2,LOW);
}
void ledLampeggianteVerde()
{
  digitalWrite(ledVerde,LOW);
  delay(300);
  digitalWrite(ledVerde,HIGH);
  delay(300);
}
void ledLampeggianteVerde2()
{
  digitalWrite(ledVerde2,LOW);
  delay(300);
  digitalWrite(ledVerde2,HIGH);
  delay(300);
}

void setup() {
  // put your setup code here, to run once:
 
pinMode(ledRosso, OUTPUT);
pinMode(ledGiallo, OUTPUT);
pinMode(ledVerde, OUTPUT);
pinMode(ledRosso2, OUTPUT);
pinMode(ledGiallo2, OUTPUT);   
pinMode(ledVerde2, OUTPUT);
Serial.begin(9600);
Serial.print("seriale attivato");
}
