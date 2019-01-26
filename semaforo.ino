int led1 = 5;
int led2 = 3;
int led3 = 1;
int led4 = 8;
int led5 = 10;
int led6 = 12;
int tempo = 1000;
void fermi(void) 
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
}

void staDiventandoVerde(void) 
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
}

void andare(void) 
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
}

void giallo(void) 
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,LOW);
}
void ledLampeggiante(void)
{
  digitalWrite(led3,LOW);
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
}

void loop() {
  // put your main code here, to run repeatedly:
fermi();
delay(1000);
staDiventandoVerde ();
delay(2000);
andare();
delay(3000);
giallo();
delay(4000);
ledLampeggiante();
ledLampeggiante();
ledLampeggiante();
ledLampeggiante();
}
