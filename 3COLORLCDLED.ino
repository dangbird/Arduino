
 int redpin = 10;
 int yellowpin = 9;
 int greenpin = 7;
// include the library code:
#include <LiquidCrystal.h>  

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//Function Turns all LED's Off and Clears LCD
void turnoff(){
digitalWrite(redpin, LOW);
digitalWrite(yellowpin, LOW);
digitalWrite(greenpin, LOW);
lcd.clear();
}

//Turns RED LED ON
void red(){
 pinMode(redpin, OUTPUT);
 digitalWrite(redpin, HIGH);
}

//Yellow ON
void yellow(){
  pinMode(yellowpin, OUTPUT);
  digitalWrite(yellowpin, HIGH);
}

//Green ON
void green(){
  pinMode(greenpin, OUTPUT);
  digitalWrite(greenpin, HIGH);
}


//Display Name
void arick(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("My Name is");
  lcd.setCursor(0,1);
  lcd.print("Arick");
}

//White
void white(){
 red();
 green();
 yellow();
 lcd.clear();
 lcd.print("White");
 delay(3000);
}

//Cyan
void cyan(){
 red();
 green();
 lcd.clear();
 lcd.print("Cyan");
 delay(3000);
}

//Setup only runs Once!
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Booting...");
  lcd.setCursor(0,1);
  lcd.print("Please Wait");
  delay(3000);
  lcd.clear();
}

//Runs Forever
void loop() {
arick();
delay(3000);
white();
delay(3000);
turnoff();
cyan();
delay(3000);
turnoff();
}
//End Never hits.
