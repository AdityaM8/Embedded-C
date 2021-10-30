#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
//PB5,PB4,PB3,PB2,PB1
void setup() 
{
lcd.begin(16,2);
lcd.print("Welcome");
lcd.clear();
delay(1000);
}
void loop()
{
lcd.setCursor(0,1);
lcd.print("AMDZS");
delay(500);
lcd.setCursor(4,0);
lcd.print("IOT PROJECT 1");
delay(1000);
}
