#开源硬件实战课
 董彤彤 17010170006>董彤彤 17010170006
2019/07/02-2019/07/05
##第一天 入门介绍
###为什么要学习开源硬件实战
当时选开源硬件实战时有两个目的：第一是以为这门课是以STM32或者C51单片机、FPGA这类硬件为基础，讲解如何利用他们设计自己的产品，最终系统性得复习以前学过的知识； 第二是我们宿舍四人集体报名了由西电和西工大联合举办的“有方杯”物联网竞赛，希望能利用课程所学知识进行实际应用，能学一门用一门，原定是四人一起选课共同学习，后面因为选课时学校系统故障，最终只有我和另外一个舍友选上。  当时选开源硬件实战时有两个目的：第一是以为这门课是以STM32或者C51单片机、FPGA这类硬件为基础，讲解如何利用他们设计自己的产品，最终系统性得复习以前学过的知识； 第二是我们宿舍四人集体报名了由西电和西工大联合举办的“有方杯”物联网竞赛，希望能利用课程所学知识进行实际应用，能学一门用一门，原定是四人一起选课共同学习，后面因为选课时学校系统故障，最终只有我和另外一个舍友选上。
实际上在学习了开源硬件arduino板后，我觉得arduino学习作为C51单片机和arm学习前的基础更好些，更加有助于后两者的学习，尤其是我们在大一学习过arm以后，实际上我对整个arm编程还有其原理掌握的并不是特别好，arduino可操作性很强，容易入手，相比于C51和arm也更易于学习整个系统的工作流程。
###如何学习开源硬件
1.具备基本的C语言编程能力，比如字符转换，数组，变量操作，库函数的调用、声明等等；
2.基本的电子线路知识，比如发光二极管在配置高低电平时需要接适合的电阻来防止其电流过大，电机驱动原理和数码管配置原理等；
3.学习能力和实际上手操作，需要能试着写一些简单代码入门，比如小车电机驱动和数码管配置等，然后由浅入深，同时在学习过程中通过TinkerCAD直接模拟，观察运行效果，加强理解。
###几个常用软件
Arduino用于主要编程,其界面如下：
![](images/Arduino.png)
TinkerCAD用于在线模拟,其界面如下：
![](images/TinkerCAD.png)
Fritzing用于制作电路图和PCB板，其界面如下：
![](images/Fritzing.png)
Processing用于软件速写调试，其界面如下：
![](images/Processing.png)
##第二天 软件操作
###arduino安装
###arduino文档
###arduino基本操作
###arduino类库操作
###实例：morse代码
利用库函数形式将输入的字符串转换为莫尔斯电码输出的总代码如下；
include "Morse.h"
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
Moese.h代码如下：
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
Morse.cpp代码如下:
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
##第三天 元器件及电路图
###使用在线模拟网站
https://www.tinkercad.com/
###小车电路图及代码
小车驱动代码如下：
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
使用TinkerCAD在线模拟小车的电路图如下：
![](images/7.4motor-control.png)
###CD4511IC使用
使用CD4511及arduino驱动数码管的代码如下：
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
使用TinkerCAD在线模拟数码管的电路图如下：
![](images/7.4shumaguan.png)
##第四天
###morse代码用函数直接实现
直接使用函数实现字符串到莫尔斯电码的转换代码如下:
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
使用TinkerCAD在线模拟数码管的电路图如下：
![](images/7.5ASCII_morse1.png)
###学习感悟
通过这四天的学习，我基本上学会了对Arduino板和软件的操作，同时对于C语言的使用也更加熟练，相比于大一在学习简单的C语言后就开始arm的学习，我觉得并不太适应，好多东西听了后效果也只是听了，具体怎么做还是一窍不通，但这几天所学的arduino则有所不同，比如数据锁存，在arduino软件上进行操作时逻辑很明显，仅仅通过电平的锁存即可实现对数码管的操作，我觉得如果学校能将门课作为学习arm前的一个基础准备，对于arm的学习可能会事半功倍，我从这四节课上获益匪浅，同时很感谢老师的认真授课以及指导。
