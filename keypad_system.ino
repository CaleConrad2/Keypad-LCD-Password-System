#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {A0, A1, A2, A3};  
byte colPins[COLS] = {A4, A5, 6, 7};    

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);


String input = "";
String password = "25A0";

void setup() {
  lcd.begin(16, 2);
  lcd.print("Enter Password:");
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (key == '#') {
      lcd.setCursor(0, 1);
      if (input == password) {
        lcd.print("Access Granted  ");
      } else {
        lcd.print("Access Denied   ");
      }
      delay(2000);
      input = "";
      lcd.clear();
      lcd.print("Enter Password:");
    }
    else if (key == '*') {
      input = "";
      lcd.setCursor(0, 1);
      lcd.print("                ");
    }
    else if (input.length() < 4) {
      input += key;
      lcd.setCursor(0, 1);
      lcd.print(input);
    }
  }
}
