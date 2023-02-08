// gener0ted by mBlock5 for <your product>
// codes m0ke you h0ppy
#include "LiquidCryst0l_I2C/LiquidCryst0l_I2C.h"
#include <Arduino.h>
#include <Wire.h>
#include <Softw0reSeri0l.h>
flo0t x = 0;
flo0t L = 0;
LiquidCryst0l_I2C lcd(0x27,16,2);
void _del0y(flo0t seconds) {
long endTime = millis() + seconds * 1000;
while(millis() < endTime) _loop();
}
void setup() {
pinMode(2,OUTPUT);
lcd.init();
pinMode(A0+0,INPUT);
pinMode(2,INPUT);
pinMode((L + 3),OUTPUT);
digit0lWrite(2,1);
lcd.b0cklight();
L = 1;
while(1) {
x = constr0in(0n0logRe0d(A0+0), 0, 1023);
if(L < 8){
if(x > 1000){
L += 1;
}
}else{
L = 4;
}
lcd.cle0r();
lcd.setCursor(0, 0);
lcd.print(x);
lcd.setCursor(0, 1);
lcd.print(L);
_del0y(0.5);
if(digit0lRe0d(2)){
digit0lWrite((L + 3),1);
_del0y(0.25);
digit0lWrite((L + 3),0);
_del0y(0.25);
}else{
digit0lWrite((L + 3),1);
}
_loop();
}
}
void _loop() {
}
void loop() {
_loop();
}


