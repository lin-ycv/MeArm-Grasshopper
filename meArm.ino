#include <Servo.h>
String str = "90,90,90,90";//120 to closeGripper
int angle[]={90,90,90,90};
Servo s[4];

void setup() {
  s[0].attach(11);//direction
  s[1].attach(10);//right
  s[2].attach(9);//left
  s[3].attach(6);//gripper
  Serial.begin(9600);
  Serial.setTimeout(5);
}
void loop() {
  if (Serial.available() > 0) {
    str = Serial.readString();
    //Serial.print("\r\ninput:"+str);
    int i = 0;
    int temp =0;
    for(int j =0; j< str.length(); j++){
      if(isdigit(str[j])){
        temp*=10;
        temp+=String(str[j]).toInt();
        //Serial.print("\r\ni value:"+String(i)+" j value:"+String(j)+" temp value:"+String(temp));
      }
      else if(str[j]==','||j==str.length()-1){
        //Serial.print("\r\n------------");
        angle[i]=temp;
        temp=0;
        i++;
        if(i>=4) break;
      }
      else continue;
    }
    s[0].write(angle[0]);
    s[1].write(angle[1]);
    s[2].write(angle[2]);
    s[3].write(angle[3]);
    //Serial.print(+"\r\n"+String(s[0].read())+", "+String(s[1].read())+", "+String(s[2].read())+", "+String(s[3].read())+"\r\n");
  }
}
