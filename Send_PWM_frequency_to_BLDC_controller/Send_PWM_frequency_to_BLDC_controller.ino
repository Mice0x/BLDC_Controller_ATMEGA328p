#include <Wire.h>
byte pwm = 255; //PWM-Frequenz
bool dir = false; //Richtung
byte data [2] = {pwm, dir}; //data Array
void setup() {
Wire.begin();
}

void loop() {
  Wire.beginTransmission(0x08); //Beginne Kommunikation
  Wire.write(data, 2); //Daten werden in dne Sendepuffer geschriebn
  Wire.endTransmission(); //Daten werden übertragen
}
