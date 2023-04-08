
const int ledPin1 = 3;  // the number of the LED pin
const int ledPin2 = 5; 
const int ledPin3= 6;

const int ledPin4 = 9; 
const int ledPin5= 10;
const int ledPin6 = 11; 
int ledState1 = LOW;  // ledState used to set the LED
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;  // ledState used to set the LED
int ledState5 = LOW;
int ledState6 = LOW;

unsigned long previousMillis1 = 0;  // will store last time LED was updated
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0; 
unsigned long previousMillis4 = 0;  // will store last time LED was updated
unsigned long previousMillis5 = 0; 
unsigned long previousMillis6 = 0; 

const long interval1 = 50;  // interval at which to blink (milliseconds)
const long interval2 = 1000;  
const long interval3 = 10000;
const long interval4 = 20000;  // interval at which to blink (milliseconds)
const long interval5 = 25000;  
const long interval6 = 33000;


void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
}

void loop() {

  unsigned long currentMillis = micros();

  if (currentMillis - previousMillis1 >= interval1) {

    previousMillis1 = currentMillis;

    if (ledState1 == LOW) {
      ledState1 = HIGH;
      //PORTB |= 2;
    } else {
      ledState1 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin1, ledState1);
  }

  if (currentMillis - previousMillis2 >= interval2) {

    previousMillis2 = currentMillis;

    if (ledState2 == LOW) {
      ledState2 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState2 = LOW;
      //PORTB &= 0xFD;
    }
  
    digitalWrite(ledPin2, ledState2);
  }
    if (currentMillis - previousMillis3 >= interval3) {

    previousMillis3 = currentMillis;

    if (ledState3 == LOW) {
      ledState3 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState3 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin3, ledState3);

  }
  if (currentMillis - previousMillis4 >= interval4) {

    previousMillis4 = currentMillis;

    if (ledState4 == LOW) {
      ledState4 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState4 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin4, ledState4);

  }
  if (currentMillis - previousMillis5 >= interval5) {

    previousMillis5 = currentMillis;

    if (ledState5 == LOW) {
      ledState5 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState5 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin5, ledState5);

  }
  if (currentMillis - previousMillis6 >= interval6) {

    previousMillis6 = currentMillis;

    if (ledState6 == LOW) {
      ledState6 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState6 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin6, ledState6);

  }
}

