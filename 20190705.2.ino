//서보 모터 각도 조절해보기


#include <Servo.h>

const int SERVO = 10;
Servo servo;

void setup() {
  servo.attach(SERVO);
  servo.write(0);

  delay(1000);

  for(int cnt=0; cint<=2; cnt++){
    servo.write(0);
    delay(1000);
    servo.write(180);
    delay(1000);
  }

  servo.detach();

}

void loop() {
  // put your main code here, to run repeatedly:

}
