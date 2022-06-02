const int triger = 13;
const int echo = 11;
int ledmerah = 7;
int ledkuning = 2;
int ledhijau = 3;
void setup ()
{
  Serial.begin(9600);
  pinMode(triger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(ledmerah,OUTPUT);
  pinMode(ledkuning,OUTPUT);
  pinMode(ledhijau,OUTPUT);
}

void loop()
{
  digitalWrite(triger,HIGH);
  delay(10);
  digitalWrite(triger,LOW);
 double data = pulseIn(echo,HIGH);
double jarak = 0.0343 *(data / 2);
  Serial.print(jarak);
  Serial.println("cm");
  delay (500);

  if (jarak > 35)
  {
  
    digitalWrite(ledmerah,LOW);
    digitalWrite(ledkuning,LOW);
    digitalWrite(ledhijau,HIGH);
  }
  if (jarak <= 25)
  {
  digitalWrite(ledmerah,LOW);
    digitalWrite(ledkuning,HIGH);
    digitalWrite(ledhijau,LOW);  
  }
  
  
  if( jarak < 10 )
  {
    digitalWrite(ledmerah,HIGH);
    digitalWrite(ledkuning,LOW);
    digitalWrite(ledhijau,LOW);
  }
}
 
