#include <Keyboard.h>

int rowOne = 10;
int rowTwo = 16;
int rowThree = 14;
int rowFour = 15;

int columnOne = 20;
int columnTwo = 19;
int columnThree = 18;

void setup() {
  Keyboard.begin();

  // columns set as output, they will cycle between high and low iterating through the columns
  pinMode(columnOne, OUTPUT);
  pinMode(columnTwo, OUTPUT);
  pinMode(columnThree, OUTPUT);

  // rows set as input, if a column is set to low, and the button pressed the voltage will drop to 0
  pinMode(rowOne, INPUT_PULLUP);
  pinMode(rowTwo, INPUT_PULLUP);
  pinMode(rowThree, INPUT_PULLUP);
  pinMode(rowFour, INPUT_PULLUP);

  // all outputs set to high
  digitalWrite(columnOne, HIGH);
  digitalWrite(columnTwo, HIGH);
  digitalWrite(columnThree, HIGH);
}

void loop() {
  
  // column one
  digitalWrite(columnOne, LOW);
  if (digitalRead(rowOne) == LOW){
    Keyboard.print("0");
  }
  if (digitalRead(rowTwo) == LOW){
    Keyboard.print("1");
  }
  if (digitalRead(rowThree) == LOW){
    Keyboard.print("4");
  }
  if (digitalRead(rowFour) == LOW){
    Keyboard.print("7");
  }
  digitalWrite(columnOne, HIGH);

  // column two
  digitalWrite(columnTwo, LOW);

  if (digitalRead(rowTwo) == LOW){
    Keyboard.print("2");
  }
  if (digitalRead(rowThree) == LOW){
    Keyboard.print("5");
  }
  if (digitalRead(rowFour) == LOW){
    Keyboard.print("8");
  }
  digitalWrite(columnTwo, HIGH);

  // column three
  digitalWrite(columnThree, LOW);
  if (digitalRead(rowOne) == LOW){
    Keyboard.print("C");
  }
  if (digitalRead(rowTwo) == LOW){
    Keyboard.print("3");
  }
  if (digitalRead(rowThree) == LOW){
    Keyboard.print("6");
  }
  if (digitalRead(rowFour) == LOW){
    Keyboard.print("9");
  }
  digitalWrite(columnThree, HIGH);

  delay(100);
} 
