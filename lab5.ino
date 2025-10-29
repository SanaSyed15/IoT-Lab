#include <Keypad.h>
const byte ROWS = 4; // four rows
const byte COLS = 3; // four columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; // connect to row pins
byte colPins[COLS] = {5, 4, 3}; // connect to column pins
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup() {
  Serial.begin(9600);
}
void loop() {
  char key = keypad.getKey();
  if (key) {
    Serial.println(key);
  }
}
