#include <Servo.h>
String str = "090090090";
String temp = "";
int a, b, c, d;
Servo base, left, right, grip;
void setup() {
  base.attach(11); 
  left.attach(10);
  right.attach(9);
  grip.attach(6);
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop() {
  if (Serial.available() > 0) {
    str = Serial.readString();
    temp = str.substring(0, 3);
    a = temp.toInt();
    temp = str.substring(3, 6);
    b = temp.toInt();
    temp = str.substring(6, 9);
    c = temp.toInt();
    temp = str.substring(9, 12);
    d = temp.toInt();
    base.write(a);
    left.write(b);
    right.write(c);
    grip.write(d);
  }
}