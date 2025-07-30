#include <LiquidCrystal.h>
#include <IRremote.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int receiver = 3;
IRrecv irrecv(receiver);
decode_results results;


void translateIR() {
  switch(results.value) {
  case 0xFFA25D: lcd.print("POWER"); break;
  case 0xFFE21D: lcd.print("FUNC/STOP"); break;
  case 0xFF629D: lcd.print("VOL+"); break;
  case 0xFF22DD: lcd.print("FAST BACK");    break;
  case 0xFF02FD: lcd.print("PAUSE");    break;
  case 0xFFC23D: lcd.print("FAST FORWARD");   break;
  case 0xFFE01F: lcd.print("DOWN");    break;
  case 0xFFA857: lcd.print("VOL-");    break;
  case 0xFF906F: lcd.print("UP");    break;
  case 0xFF9867: lcd.print("EQ");    break;
  case 0xFFB04F: lcd.print("ST/REPT");    break;
  case 0xFF6897: lcd.print("0");    break;
  case 0xFF30CF: lcd.print("1");    break;
  case 0xFF18E7: lcd.print("2");    break;
  case 0xFF7A85: lcd.print("3");    break;
  case 0xFF10EF: lcd.print("4");    break;
  case 0xFF38C7: lcd.print("5");    break;
  case 0xFF5AA5: lcd.print("6");    break;
  case 0xFF42BD: lcd.print("7");    break;
  case 0xFF4AB5: lcd.print("8");    break;
  case 0xFF52AD: lcd.print("9");    break;
  case 0xFFFFFFFF: lcd.print(" REPEAT");break;  

  default: 
    lcd.print(" other button   ");
  }

  delay(1000);
} 


void setup() {
  lcd.begin(16, 2);
  irrecv.enableIRIn();

}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Se presiono:");
  if (irrecv.decode(&results)) {
    lcd.setCursor(0, 1);
    translateIR(); 
    irrecv.resume();
  }
  delay(1000);  
}
