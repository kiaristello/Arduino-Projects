// include the library code:
#include <LiquidCrystal.h>
#include "SR04.h"
#define TRIG_PIN 4
#define ECHO_PIN 5
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance:");

  lcd.setCursor(0, 1);
  lcd.print("Time:");

  lcd.setCursor(10, 0);
  a=sr04.Distance();
  lcd.print(a);
  lcd.print("cm");

  lcd.setCursor(6, 1);
  lcd.print(millis() / 1000);
  delay(500);
}
