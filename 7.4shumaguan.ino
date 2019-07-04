void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
        switch(income)
        {
            case '0':
              transform0();
              break;
            case '1':
              transform1();
              break;
            case '2':
              transform2();
              break;
            case '3':
              transform3();
              break;
            case '4':
              transform4();
              break;
             case '5':
              transform5();
              break;
            case '6':
              transform6();
              break;
            case '7':
              transform7();
              break;
            case '8':
              transform8();
              break;
            case '9':
              transform9();
              break;
            //case 'C':
            //  transformC();
             // break;
            //case 'D':
             // transformD();
             // break;
           // default:
            //  break;
        }
    }
}
void transform0()
{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform1()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform2()
{
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform3()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform4()
{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform5()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform6()
{
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform7()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform8()
{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}

void transform9()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(7,HIGH);
  delay(20);
  digitalWrite(7,LOW);
}
