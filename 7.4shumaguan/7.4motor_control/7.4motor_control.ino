void forward();
void backward();
void left();
void right();
void stop();
void setup()
{
  pinMode(8, OUTPUT);//左边电机；
  pinMode(9, OUTPUT);//左边电机；
  pinMode(10, OUTPUT);//右边电机；
  pinMode(11, OUTPUT);//右边电机；
  pinMode(2,OUTPUT);//左边灯；
  pinMode(3,OUTPUT);//右边灯；
  Serial.begin(9600);//波特率设置为9600；
}
int income=0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
        switch(income)
        {
          case 'f':
              forward();
              break;
            case 'b':
              backward();
              break;
            case 'l':
              left();
              break;
            case 'r':
              right();
              break;
            case 's':
              stop();
              break;
            default:
              break;
        }
    }
}

void forward()//前进和后退时两个灯都亮；
{
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
}

void backward()
{
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
}

void left()//朝左走时左边灯亮；
{
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
}

void right()//朝右走时右边灯亮；
{
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
}

void stop()//停止时两个灯都熄灭；
{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}
