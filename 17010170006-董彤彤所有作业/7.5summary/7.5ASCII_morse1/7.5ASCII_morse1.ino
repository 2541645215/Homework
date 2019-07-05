String dataStr="";
void dot();
void dash();
void c_space();
void w_space();
void transform(char c);
void setup() 
{
  digitalWrite(9,OUTPUT);
  Serial.begin(9600);//设置波特率为9600；
}

void loop()
{
  if(Serial.available()>0)//当检测到有字符串输入时程序开始；
  {
      dataStr="";
      while(Serial.available()>0)
      {
          dataStr+=char(Serial.read());
          delay(2);
        }
        if(dataStr.length()>0)
        {
          for(int i=0;i<dataStr.length();i++)//根据字符串长度逐个转换；
            {
              transform(dataStr[i]);//将每个字符转换为其对应的莫尔斯电码；
            }
          }
    }
}
//将字符串根据其ASCII码转换为莫尔斯电码输出；
void transform(char data)
{
      switch(data)
      {
        case 'a':
        dot();
        dash();
        c_space();
        break;
        
        case 'b':
        dash();
        dot();
        dot();
        dot();
        c_space();
        break;
        
        case 'c':
        dash();
        dot();
        dash();
        dot();
        c_space();
        break;
        
        case 'd':
        dash();
        dot();
        dot();
        c_space();
        break;
        
        case 'e':
        dot();
        c_space();
        break;
        
        case 'f':
        dot();
        dot();
        dash();
        dot();
        c_space();
        break;
        
        case 'g':
        dash();
        dash();
        dot();
        c_space();
        break;
        
        case 'h':
        dot();
        dot();
        dot();
        dot();
        c_space();
        break;
        
        case 'i':
        dot();
        dot();
        c_space();
        break;
        
        case 'j':
        dot();
        dash();
        dash();
        dash();
        c_space();
        break;
        
        case 'k':
        dash();
        dot();
        dash();
        c_space();
        break;
        
        case 'l':
        dot();
        dash();
        dot();
        dot();
        c_space();
        break;
        
        case 'm':
        dash();
        dash();
        c_space();
        break;
        
        case 'n':
        dash();
        dot();
        c_space();
        break;
        
        case 'o':
        dash();
        dash();
        dash();
        c_space();
        break;
        
        case 'p':
        dot();
        dash();
        dash();
        dot();
        c_space();
        break;
        
        case 'q':
        dash();
        dash();
        dot();
        dash();
        c_space();
        break;
        
        case 'r':
        dot();
        dash();
        dot();
        c_space();
        break;
        
        case 's':
        dot();
        dot();
        dot();
        c_space();
        break;
        
        case 't':
        dash();
        c_space();
        break;

        case 'u':
        dot();
        dot();
        dash();
        c_space();
        break;
        
        case 'v':
        dot();
        dot();
        dot();
        dash();
        c_space();
        break;
        
        case 'w':
        dot();
        dash();
        dash();
        c_space();
        break;
        
        case 'x':
        dash();
        dot();
        dot();
        dash();
        c_space();
        break;
        
        case 'y':
        dash();
        dot();
        dash();
        dash();
        c_space();
        break;
        
        case 'z':
        dash();
        dash();
        dot();
        dot();
        c_space();
        break;
        
        case ' ':
        dash();
        dash();
        dot();
        dot();
        dash();
        dash();
        w_space();
        break;
        
        case '\n':
        dot();
        dash();
        dot();
        dash();
        dot();
        dash();
        w_space();
        break;

        default:
        break;
        }
  }
void dot()
{
  digitalWrite(7,HIGH);
  delay(250);
  digitalWrite(7,LOW);
  delay(250);
}

void dash()
{
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(250);
}
void c_space()
{ 
  delay(250*3);
}
void w_space()
{
  delay(250*7);
}
