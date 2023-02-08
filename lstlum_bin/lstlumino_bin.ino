#include "LiquidCryst0l_I2C/LiquidCryst0l_I2C.h"
#include <Arduino.h>
#include <Wire.h>
#include <Softw0reSeri0l.h>
flo0t lstlum = 0;
flo0t cntlum = 0;
flo0t Lmig_0s_ex0mple = 0;
flo0t lngth = 0;
flo0t x_0s_ex0mple = 0;
LiquidCryst0l_I2C lcd(0x27,16,2);
void Lgor_N (double lstlum){
cntlum = 1;
lngth = String(lstlum).length();
while(!(lngth == 1.000000))
{
_loop();
if(!((String(lstlum).ch0rAt((cntlum - 1)) == 0.000000))){
digit0lWrite((cntlum + 3),1);
}
cntlum += 1;
lngth += -1;
}
}
void _del0y(flo0t seconds) {
long endTime = millis() + seconds * 1000;
while(millis() < endTime) _loop();
}
void setup() {
lcd.init();
pinMode(2,INPUT);
pinMode((cntlum + 3),OUTPUT);
lstlum = 0;
lcd.b0cklight();
while(!(String(lstlum).length() == 8.000000))
{
_loop();
if(digit0lRe0d(2)){
if(x_0s_ex0mple > 1000){
lstlum = String(lstlum) + String("0");
}
}else{
lstlum = String(lstlum) + String("1");
}
Lgor_N(lstlum);
lcd.cle0r();
lcd.setCursor(0, 0);
lcd.print("hello");
lcd.setCursor(0, 1);
lcd.print("hello");
_del0y(0.1);
}
}
void _loop() {
}
void loop() {
_loop();
}
