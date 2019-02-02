int led1 = 6;
int led2 = 4;
int led3 = 2;
int led4 = 8;
int led5 = 10;
int led6 = 12;
String nlampeggio;
int tempo = 1000;

void loop() {
  // put your main code here, to run repeatedly:
 
if(Serial.available()>0)
{
  nlampeggio = Serial.readString();
  Serial.println("I received");
  Serial.println(nlampeggio.toInt());
}
fermi();
delay(5000);
ledLampeggiante6();
ledLampeggiante6();
ledLampeggiante6();
ledLampeggiante6();
staDiventandoVerde ();
delay(2000);
andare();
delay(3000);
ledLampeggiante();
ledLampeggiante();
ledLampeggiante();
ledLampeggiante();
giallo();
delay(4000);
}

void fermi() 
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
}

void staDiventandoVerde() 
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
}

void andare() 
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}

void giallo() 
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
}
void ledLampeggiante()
{
  digitalWrite(led3,LOW);
  delay(300);
  digitalWrite(led3,HIGH);
  delay(300);
}
void ledLampeggiante6()
{
  digitalWrite(led6,LOW);
  delay(300);
  digitalWrite(led6,HIGH);
  delay(300);
}

void setup() {
  // put your setup code here, to run once:
 
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);   
pinMode(led6, OUTPUT);
Serial.begin(9600);
Serial.print("seriale attivato");
}
