#include <Servo.h>

Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;

int val1;
int val2;
int val3;
int val4;
int val5;
int initialPos = 90;

void setup() {
  myServo1.attach(9);
  myServo2.attach(10);
  myServo3.attach(11);
  myServo4.attach(12);
  myServo5.attach(13);
  
  myServo1.write(initialPos);
  myServo2.write(initialPos);
  myServo3.write(initialPos);
  myServo4.write(initialPos);
  myServo5.write(initialPos);
  delay(5000);
  }

void loop() {
  val1 =  analogRead(1);
  val1 = map(val1, 0, 1023,0 ,180);
  myServo1.write(val1);
  delay(15);
  
  val2 =  analogRead(2);
  val2 = map(val2, 0, 1023,0 ,180);
  myServo2.write(val2);
  delay(15);
  
  val3 =  analogRead(3);
  val3 = map(val3, 0, 1023,0 ,180);
  myServo3.write(val3);
  delay(15);
  
  val4 =  analogRead(4);
  val4 = map(val4, 0, 1023,0 ,180);
  myServo4.write(val4);
  delay(15);
  
  val5 =  analogRead(5);
  val5 = map(val5, 0, 1023,0 ,180);
  myServo5.write(val5);
  delay(15);
}
