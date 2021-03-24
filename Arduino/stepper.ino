
/*
  Arduino控制NEMA步进电机测试程序
  by 太极创客（）
  本示例程序旨在演示如何通过Arduino控制NEMA步进电机。
  如需获得本示例程序详细电路信息以及如何使用Arduino控制电机的更多知识，请参考太极创客网站：
  http://www.taichi-maker.com/homepage/reference-index/motor-reference-index/arduino-a4988-nema-stepper-motor/
*/
 
// 定义电机控制用常量
 
// A4988连接Arduino引脚号
const int dirPin = 2;  // 方向引脚
const int stepPin = 3; // 步进引脚
 
// 电机每圈步数
const int STEPS_PER_REV = 200;
 
void setup() {
  
  // Arduino控制A4988步进和方向的引脚为输出模式
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {
  
  // 设置电机顺时针旋转
  digitalWrite(dirPin,LOW); 
  
  // 电机慢速旋转
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(2000); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(1000); 
  }
  
  // 等待一秒
  delay(2000); 
  
  // 设置电机逆时针旋转
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
}
