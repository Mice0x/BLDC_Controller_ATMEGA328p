#include <Wire.h>
byte pwm = 100;
void setup() {
 Wire.begin();

 

}

void loop() {
  Wire.beginTransmission(0x08);

  Wire.write(pwm);
  Wire.endTransmission();
}
