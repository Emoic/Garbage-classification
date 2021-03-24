#include <Servo.h>
#include <DFRobot_HuskyLens.h>

#include <EEPROM.h>

const int dirPin = 2;  // 方向引脚
const int stepPin = 3; // 步进引脚
Servo myservo;//定义舵机变量名
const int STEPS_PER_REV = 200;
volatile float mind_n_debounce;
DFRobot_HuskyLens   huskylens;
int i = 0;

int jishuqi(int i);

void DF_ChuShiHua(); //初始化函数
void youhailaji();///有害垃圾
void qitalaji();



void kehuishouwu();
void chuyulaji();

void setup(){
//DF_ChuShiHua();
pinMode(11, INPUT);//光电传感器


//pinMode(stepPin,OUTPUT); 
//pinMode(dirPin,OUTPUT);
//myservo.attach(9);
//myservo.write(90);
Serial.begin(9600);
//DF_ChuShiHua();

}

void loop(){

if(digitalRead(11)==0) {
  delay(1500);
   youhailaji(); 
   qitalaji();
   kehuishouwu();
   chuyulaji();
   manzaijiance();
   jishuqi(i);
  }   

}






//有害垃圾
void youhailaji(){
huskylens.request();
  if ((huskylens.readBlockCenterParameterDirect().ID==1)) {
    delay(mind_n_debounce * 1000);
    huskylens.request();
    if ((huskylens.readBlockCenterParameterDirect().ID==1)) {
      Serial.println('youhailaji');//树莓派显示网页
      myservo.write(135);
      delay(1000);
      myservo.write(90);
    }

 
}
}

//其他垃圾
void qitalaji(){
  huskylens.request();
  if ((huskylens.readBlockCenterParameterDirect().ID==2)) {
    delay(mind_n_debounce * 1000);
    huskylens.request();
    if ((huskylens.readBlockCenterParameterDirect().ID==2)) {
      Serial.println('qitalaji');//树莓派显示网页
   
   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
myservo.write(135);
 delay(1000);
myservo.write(90);

   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    }
  }
}

//可回收物

void kehuishouwu(){
  huskylens.request();
  if ((huskylens.readBlockCenterParameterDirect().ID==3)) {
    delay(mind_n_debounce * 1000);
    huskylens.request();
    if ((huskylens.readBlockCenterParameterDirect().ID==3)) {
      Serial.println('kehuishouwu');//树莓派显示网页以及进行压缩---压缩完成后显示ok

myservo.write(45);
 delay(1000);
myservo.write(90);
    }
  }
}

//厨余垃圾
void chuyulaji(){
  huskylens.request();
  if ((huskylens.readBlockCenterParameterDirect().ID==4)) {
    delay(mind_n_debounce * 1000);
    huskylens.request();
    if ((huskylens.readBlockCenterParameterDirect().ID==4)) {
      Serial.println('chuyulaji');//树莓派显示网页
   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
myservo.write(45);
 delay(1000);
myservo.write(90);

   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    }
  }
}


//识图模块初始化
void DF_ChuShiHua() {
  
  mind_n_debounce = 0.5;
  huskylens.beginI2CUntilSuccess();

}

///满载检测--树莓派上进行满载检测（四个超声波）
void manzaijiance(){
  Serial.println('manzaijiance');
}


//计数器
int jishuqi(int i){
  i++;
  Serial.println(i);
  if(i==5){
      Serial.println('fenleiwancheng');//树莓派上显示’分类完成‘
  }
  return i;
}
