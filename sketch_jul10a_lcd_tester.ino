#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // (RS, E, DB4, DB5, DB6, DB7)

void setup() {
  // put your setup code here, to run once:

  lcd.begin(16, 2);
  lcd.blink();

}

void loop() {
  // put your main code here, to run repeatedly:
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hello, World!");
  delay(1000);
  
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("LCD Test!");
  delay(1000);
  
}
