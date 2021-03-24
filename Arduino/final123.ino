
#include <DFRobot_HuskyLens.h>
#include "SoftwareSerial.h"
#include <EEPROM.h>

const int dirPin = 2;  // 方向引脚
const int stepPin = 3; // 步进引脚

const int STEPS_PER_REV = 200;
volatile float mind_n_debounce;
DFRobot_HuskyLens   huskylens;
int i = 0;


int servopin = 9;    //定义舵机接口数字接口7 也就是舵机的橙色信号线。

void lajifenlei();
void play_video();//播放视频
void DF_ChuShiHua(); //初始化函数



void setup(){
DF_ChuShiHua();
Serial.begin(9600);
pinMode(11, INPUT);//光电传感器
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);

pinMode(stepPin,OUTPUT); 
pinMode(dirPin,OUTPUT);
pinMode(servopin, OUTPUT); //设定舵机接口为输出接口
servopulse(90);
DF_ChuShiHua();
play_video();
}

void loop(){

if(digitalRead(11)==0) {
  delay(2000);
   lajifenlei();
   manzaijiance();
  }   

}



//播放视频
void play_video(){
    Serial.println("1");
  }



//有害垃圾
void lajifenlei(){
huskylens.request();
  if ((huskylens.readBlockCenterParameterDirect().ID==1)) {

      Serial.println("gandianchi");
      servopulse(135);
      delay(1000);
      servopulse(90);
    
}

else if ((huskylens.readBlockCenterParameterDirect().ID==2)) {


      Serial.println("gandianchi");
      servopulse(135);
      delay(1000);
      servopulse(90);
    
}



else if ((huskylens.readBlockCenterParameterDirect().ID==3)) {


      Serial.println("gandianchi");
      servopulse(135);
      delay(1000);
      servopulse(90);
    
}

else if ((huskylens.readBlockCenterParameterDirect().ID==4)) {


      Serial.println("gandianchi");
      servopulse(135);
      delay(1000);
      servopulse(90);
    
}

else if ((huskylens.readBlockCenterParameterDirect().ID==5)) {


      Serial.println("gandianchi");
      servopulse(135);
      delay(1000);
      servopulse(90);
    
}



//其他垃圾

 else if ((huskylens.readBlockCenterParameterDirect().ID==6)) {


      Serial.println("buguizeshuinicankuai");
   
   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1.1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }

 else if ((huskylens.readBlockCenterParameterDirect().ID==7)) {


      Serial.println("buguizeshuinicankuai");
   
   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);
   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1.1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }


 else if ((huskylens.readBlockCenterParameterDirect().ID==8)) {


      Serial.println("buguizeshuinicankuai");
   
   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1.1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }


 else if ((huskylens.readBlockCenterParameterDirect().ID==9)) {


      Serial.println("buguizeshuinicankuai");
   
   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1.1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }

 else if ((huskylens.readBlockCenterParameterDirect().ID==10)) {


      Serial.println("buguizeshuinicankuai");
   
   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1.1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }


//可回收物


else  if ((huskylens.readBlockCenterParameterDirect().ID==11)) {

      Serial.println("yilaguan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
       digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)//-------------------------------++++
    digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }




else  if ((huskylens.readBlockCenterParameterDirect().ID==12)) {

      Serial.println("yilaguan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
       digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)//-------------------------------++++
    digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }
  else  if ((huskylens.readBlockCenterParameterDirect().ID==13)) {

      Serial.println("yilaguan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
       digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)//-------------------------------++++
    digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }
  else  if ((huskylens.readBlockCenterParameterDirect().ID==14)) {

      Serial.println("yilaguan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
       digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)//-------------------------------++++
    digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }
  else  if ((huskylens.readBlockCenterParameterDirect().ID==15)) {

      Serial.println("yilaguan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
       digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)//-------------------------------++++
    digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(5, HIGH);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }

    else  if ((huskylens.readBlockCenterParameterDirect().ID==16)) {

      Serial.println("feizhituan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }
  
    else  if ((huskylens.readBlockCenterParameterDirect().ID==17)) {

      Serial.println("feizhituan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }

  
    else  if ((huskylens.readBlockCenterParameterDirect().ID==18)) {

      Serial.println("feizhituan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }
  
    else  if ((huskylens.readBlockCenterParameterDirect().ID==19)) {

      Serial.println("feizhituan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    
  }
  
    else  if ((huskylens.readBlockCenterParameterDirect().ID==20)) {

      Serial.println("feizhituan");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
    }
        else  if ((huskylens.readBlockCenterParameterDirect().ID==21)) {

      Serial.println("bottle");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);
  }

  
        else  if ((huskylens.readBlockCenterParameterDirect().ID==22)) {

      Serial.println("bottle");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);}


  
        else  if ((huskylens.readBlockCenterParameterDirect().ID==23)) {

      Serial.println("bottle");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);}


  
        else  if ((huskylens.readBlockCenterParameterDirect().ID==24)) {

      Serial.println("bottle");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);}


  
        else  if ((huskylens.readBlockCenterParameterDirect().ID==25)) {

      Serial.println("bottle");//树莓派显示网页以及进行压缩---压缩完成后显示ok
                     // wait for a second
servopulse(45);
 delay(1000);
servopulse(90);}
//厨余垃圾

 else if ((huskylens.readBlockCenterParameterDirect().ID==26)) {

      Serial.println("juzipi");
   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }
else if ((huskylens.readBlockCenterParameterDirect().ID==27)) {

      Serial.println("juzipi");
   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }
else if ((huskylens.readBlockCenterParameterDirect().ID==28)) {

      Serial.println("juzipi");
   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }
else if ((huskylens.readBlockCenterParameterDirect().ID==29)) {

      Serial.println("juzipi");
   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
    
  }
else if ((huskylens.readBlockCenterParameterDirect().ID==30)) {

      Serial.println("juzipi");
   digitalWrite(dirPin,LOW);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
  }
  
  // 等待一秒
  delay(1000);
servopulse(135);
 delay(1000);
servopulse(90);

   digitalWrite(dirPin,HIGH);
  
  // 电机快速旋转
  for(int x = 0; x < (STEPS_PER_REV * 1); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1000);
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
  Serial.println("manzaijiance");
}



void servopulse(int angle)//定义一个脉冲函数
{
  int pulsewidth = (angle * 11) + 500; //将角度转化为500-2480的脉宽值
  digitalWrite(servopin, HIGH);   //将舵机接口电平至高
  delayMicroseconds(pulsewidth);  //延时脉宽值的微秒数
  digitalWrite(servopin, LOW);    //将舵机接口电平至低
  delayMicroseconds(20000 - pulsewidth);
}
