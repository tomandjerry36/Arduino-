void setup()
{
  pinMode(3,OUTPUT);
  pinMode(7,INPUT);
  Serial.begin(960);
}
void loop()
{
  if (digitalRead(7)== LOW)
  {
    digitalWrite(3,HIGH);
    
    delay(100);
  }
  else 
  {
    
    digitalWrite(3,LOW);
    delay(10);
    
  }
  
}
