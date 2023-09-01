// C++ code
//
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
  analogReference(DEFAULT);
}

void loop()
{
  int rawValue = analogRead(A0); 
  float voltage = (rawValue / 1023.0) * 10.0; 

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Tensao:");
  lcd.setCursor(0, 1);
  lcd.print(voltage, 2); 
  lcd.print(" V");

  delay(1000); 
}