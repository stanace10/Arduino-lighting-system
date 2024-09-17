const int buttonPin1 = 9;
const int buttonPin2 = 8;
const int ledPins[] = {3, 4, 5, 6};
int buttonState1 = 0;
int buttonState2 = 0;
int delayTime = 500;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  if (buttonState1 == HIGH) {
    moveLeftToRight();
  }

  if (buttonState2 == HIGH) {
    moveRightToLeft();
  }
}

void moveLeftToRight() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}

void moveRightToLeft() {
  for (int i = 3; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}