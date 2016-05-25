void setup()
{

  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

String temp;

  
void loop()
{
if (Serial.available() > 0 )
    {
      temp = Serial.read();
      Serial.print(temp);
      if(temp == "q"){
        digitalWrite(13,HIGH);
        delay(3000);
        digitalWrite(13,LOW);
      }
      if(temp == "z"){
        digitalWrite(12,LOW);
        digitalWrite(11,HIGH);
      }
      if(temp == "x"){
        digitalWrite(11,LOW);
        digitalWrite(12,HIGH);
      }
    }
}
