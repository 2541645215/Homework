#��ԴӲ��ʵս��
 ��ͮͮ 17010170006>��ͮͮ 17010170006
2019/07/02-2019/07/05
##��һ�� ���Ž���
###ΪʲôҪѧϰ��ԴӲ��ʵս
��ʱѡ��ԴӲ��ʵսʱ������Ŀ�ģ���һ����Ϊ���ſ�����STM32����C51��Ƭ����FPGA����Ӳ��Ϊ�������������������������Լ��Ĳ�Ʒ������ϵͳ�Եø�ϰ��ǰѧ����֪ʶ�� �ڶ��������������˼��屨��������������������Ͼٰ�ġ��з�����������������ϣ�������ÿγ���ѧ֪ʶ����ʵ��Ӧ�ã���ѧһ����һ�ţ�ԭ��������һ��ѡ�ι�ͬѧϰ��������Ϊѡ��ʱѧУϵͳ���ϣ�����ֻ���Һ�����һ������ѡ�ϡ�  ��ʱѡ��ԴӲ��ʵսʱ������Ŀ�ģ���һ����Ϊ���ſ�����STM32����C51��Ƭ����FPGA����Ӳ��Ϊ�������������������������Լ��Ĳ�Ʒ������ϵͳ�Եø�ϰ��ǰѧ����֪ʶ�� �ڶ��������������˼��屨��������������������Ͼٰ�ġ��з�����������������ϣ�������ÿγ���ѧ֪ʶ����ʵ��Ӧ�ã���ѧһ����һ�ţ�ԭ��������һ��ѡ�ι�ͬѧϰ��������Ϊѡ��ʱѧУϵͳ���ϣ�����ֻ���Һ�����һ������ѡ�ϡ�
ʵ������ѧϰ�˿�ԴӲ��arduino����Ҿ���arduinoѧϰ��ΪC51��Ƭ����armѧϰǰ�Ļ�������Щ�����������ں����ߵ�ѧϰ�������������ڴ�һѧϰ��arm�Ժ�ʵ�����Ҷ�����arm��̻�����ԭ�����յĲ������ر�ã�arduino�ɲ����Ժ�ǿ���������֣������C51��armҲ������ѧϰ����ϵͳ�Ĺ������̡�
###���ѧϰ��ԴӲ��
1.�߱�������C���Ա�������������ַ�ת�������飬�����������⺯���ĵ��á������ȵȣ�
2.�����ĵ�����·֪ʶ�����緢������������øߵ͵�ƽʱ��Ҫ���ʺϵĵ�������ֹ��������󣬵������ԭ������������ԭ��ȣ�
3.ѧϰ������ʵ�����ֲ�������Ҫ������дһЩ�򵥴������ţ�����С�������������������õȣ�Ȼ����ǳ���ͬʱ��ѧϰ������ͨ��TinkerCADֱ��ģ�⣬�۲�����Ч������ǿ��⡣
###�����������
Arduino������Ҫ���,��������£�
![](images/Arduino.png)
TinkerCAD��������ģ��,��������£�
![](images/TinkerCAD.png)
Fritzing����������·ͼ��PCB�壬��������£�
![](images/Fritzing.png)
Processing���������д���ԣ���������£�
![](images/Processing.png)
##�ڶ��� �������
###arduino��װ
###arduino�ĵ�
###arduino��������
###arduino������
###ʵ����morse����
���ÿ⺯����ʽ��������ַ���ת��ΪĪ��˹����������ܴ������£�
include "Morse.h"
String dataStr="";
Morse morse(13);
void transform(char c);
void setup() 
{
  Serial.begin(9600);//���ò�����Ϊ9600��
}

void loop()
{
  if(Serial.available()>0)//����⵽���ַ�������ʱ����ʼ��
  {
      dataStr="";
      while(Serial.available()>0)
      {
          dataStr+=char(Serial.read());
          delay(2);
        }
        if(dataStr.length()>0)
        {
          for(int i=0;i<dataStr.length();i++)//�����ַ����������ת����
            {
              transform(dataStr[i]);//��ÿ���ַ�ת��Ϊ���Ӧ��Ī��˹���룻
            }
          }
    }
}
//���ַ���������ASCII��ת��ΪĪ��˹���������
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
Moese.h�������£�
ifndef _MORSE_H
define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
};
#endif /*_MORSE_H*/
Morse.cpp��������:
#include "Arduino.h"
#include "Morse.h"


Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
}
void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(250);
	digitalWrite(_pin,LOW);
	delay(250);
}
void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(1000);
	digitalWrite(_pin,LOW);
	delay(250);
}
void Morse::c_space()
{ 
  delay(250*3);
}
void Morse::w_space()
{
  delay(250*7);
}
##������ Ԫ��������·ͼ
###ʹ������ģ����վ
https://www.tinkercad.com/
###С����·ͼ������
С�������������£�
void forward();
void backward();
void left();
void right();
void stop();
void setup()
{
  pinMode(8, OUTPUT);//��ߵ����
  pinMode(9, OUTPUT);//��ߵ����
  pinMode(10, OUTPUT);//�ұߵ����
  pinMode(11, OUTPUT);//�ұߵ����
  pinMode(2,OUTPUT);//��ߵƣ�
  pinMode(3,OUTPUT);//�ұߵƣ�
  Serial.begin(9600);//����������Ϊ9600��
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
void forward()//ǰ���ͺ���ʱ�����ƶ�����
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
void left()//������ʱ��ߵ�����
{
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
}
void right()//������ʱ�ұߵ�����
{
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
}
void stop()//ֹͣʱ�����ƶ�Ϩ��
{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}
ʹ��TinkerCAD����ģ��С���ĵ�·ͼ���£�
![](images/7.4motor-control.png)
###CD4511ICʹ��
ʹ��CD4511��arduino��������ܵĴ������£�
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
            default:
              break;
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
ʹ��TinkerCAD����ģ������ܵĵ�·ͼ���£�
![](images/7.4shumaguan.png)
##������
###morse�����ú���ֱ��ʵ��
ֱ��ʹ�ú���ʵ���ַ�����Ī��˹�����ת����������:
String dataStr="";
void dot();
void dash();
void c_space();
void w_space();
void transform(char c);
void setup() 
{
  digitalWrite(9,OUTPUT);
  Serial.begin(9600);//���ò�����Ϊ9600��
}
void loop()
{
  if(Serial.available()>0)//����⵽���ַ�������ʱ����ʼ��
  {
      dataStr="";
      while(Serial.available()>0)
      {
          dataStr+=char(Serial.read());
          delay(2);
        }
        if(dataStr.length()>0)
        {
          for(int i=0;i<dataStr.length();i++)//�����ַ����������ת����
            {
              transform(dataStr[i]);//��ÿ���ַ�ת��Ϊ���Ӧ��Ī��˹���룻
            }
          }
    }
}
//���ַ���������ASCII��ת��ΪĪ��˹���������
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
ʹ��TinkerCAD����ģ������ܵĵ�·ͼ���£�
![](images/7.5ASCII_morse1.png)
###ѧϰ����
ͨ���������ѧϰ���һ�����ѧ���˶�Arduino�������Ĳ�����ͬʱ����C���Ե�ʹ��Ҳ��������������ڴ�һ��ѧϰ�򵥵�C���Ժ�Ϳ�ʼarm��ѧϰ���Ҿ��ò���̫��Ӧ���öණ�����˺�Ч��Ҳֻ�����ˣ�������ô������һ�ϲ�ͨ�����⼸����ѧ��arduino��������ͬ�������������棬��arduino����Ͻ��в���ʱ�߼������ԣ�����ͨ����ƽ�����漴��ʵ�ֶ�����ܵĲ������Ҿ������ѧУ�ܽ��ſ���Ϊѧϰarmǰ��һ������׼��������arm��ѧϰ���ܻ��°빦�����Ҵ����Ľڿ��ϻ����ǳ��ͬʱ�ܸ�л��ʦ�������ڿ��Լ�ָ����
