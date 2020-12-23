#include <Wire.h>

byte pwm_receive;

void setup(){
  Wire.begin(0x08);

  Wire.onReceive(pwmRcv);
  Serial.begin(9600);
  }
  void loop(){
    
    Serial.println(pwm_receive);
    }
    void pwmRcv(int numBytes){
        while(Wire.available()){
          pwm_receive = Wire.read();
          }
      }
