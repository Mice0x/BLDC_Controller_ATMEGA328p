#include <Wire.h>
byte pwm = 255;
bool dir = false;
byte data [2] = {pwm, dir};
void setup() {
Wire.begin();
}

void loop() {
  Wire.beginTransmission(0x08);
  Wire.write(data, 2);
  Wire.endTransmission();
}
