#include <Servo.h>
#define pinS_1 9
#define VR_1 A0

#define pinS_2 10
#define VR_2 A1

Servo servo_1;
Servo servo_2;

int val_1;
int val_2;

void setup() {
  //Serial.begin(9600);
  //Serial.println("Start");
  //servo.attach(pinServo);
  servo_1.attach(pinS_1);
  servo_2.attach(pinS_2);

}

void loop() {
  val_1=analogRead(VR_1);
  val_1=map(val_1,0,1023,10,130);     //設定只能在固定範圍內移動
  servo_1.write(val_1);
  delay(15);

  val_2=analogRead(VR_2);
  val_2=map(val_2,0,1023,0,140);
  servo_2.write(val_2);
  delay(15);
 
}
