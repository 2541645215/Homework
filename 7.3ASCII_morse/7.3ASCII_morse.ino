#include "Morse.h"
String dataStr="";
Morse morse(13);
void transform(char c);
void setup() 
{
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
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
        
        case 'b':
        morse.dash();
        morse.dot();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
        
        case 'c':
        morse.dash();
        morse.dot();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
        
        case 'd':
        morse.dash();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
        
        case 'e':
        morse.dot();
        morse.c_space();
        break;
        
        case 'f':
        morse.dot();
        morse.dot();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
        
        case 'g':
        morse.dash();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
        
        case 'h':
        morse.dot();
        morse.dot();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
        
        case 'i':
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
        
        case 'j':
        morse.dot();
        morse.dash();
        morse.dash();
        morse.dash();
        morse.c_space();
        break;
        
        case 'k':
        morse.dash();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
        
        case 'l':
        morse.dot();
        morse.dash();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
        
        case 'm':
        morse.dash();
        morse.dash();
        morse.c_space();
        break;
        
        case 'n':
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
        
        case 'o':
        morse.dash();
        morse.dash();
        morse.dash();
        morse.c_space();
        break;
        
        case 'p':
        morse.dot();
        morse.dash();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
        
        case 'q':
        morse.dash();
        morse.dash();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
        
        case 'r':
        morse.dot();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
        
        case 's':
        morse.dot();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
        
        case 't':
        morse.dash();
        morse.c_space();
        break;

        case 'u':
        morse.dot();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
        
        case 'v':
        morse.dot();
        morse.dot();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
        
        case 'w':
        morse.dot();
        morse.dash();
        morse.dash();
        morse.c_space();
        break;
        
        case 'x':
        morse.dash();
        morse.dot();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
        
        case 'y':
        morse.dash();
        morse.dot();
        morse.dash();
        morse.dash();
        morse.c_space();
        break;
        
        case 'z':
        morse.dash();
        morse.dash();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
        
        case ' ':
        morse.dash();
        morse.dash();
        morse.dot();
        morse.dot();
        morse.dash();
        morse.dash();
        morse.w_space();
        break;
        
        case '\n':
        morse.dot();
        morse.dash();
        morse.dot();
        morse.dash();
        morse.dot();
        morse.dash();
        morse.w_space();
        break;

        default:
        break;
        }
  }
