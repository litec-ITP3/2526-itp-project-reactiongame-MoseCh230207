const int buttonOrangePin = 21;  // Orange
const int ledOrangePin = 20;    // Orange

const int buttonRedPin = 19; // Red
const int ledRedPin = 18; // Red

const int blueLED_Pin = 16; 

// variables will change:
int button1State = 0;  // Orange
int button2State = 0;  // Red


void setup() {
  // Orange
  pinMode(ledOrangePin, OUTPUT);
  pinMode(buttonOrangePin, INPUT);

  // Red
  pinMode(ledRedPin, OUTPUT);
  pinMode(buttonRedPin, INPUT);

  // Blue:
  pinMode(blueLED_Pin, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  button1State = digitalRead(buttonOrangePin);
  button2State = digitalRead(buttonRedPin);



  // Orange:
  if (button1State == HIGH) {
    // turn LED on:
    digitalWrite(blueLED_Pin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(blueLED_Pin, LOW);  // Schaltet nicht komplett aus (Warum?)
  }

  // Red:
  if (button2State == HIGH) {
    // turn LED on:
    digitalWrite(blueLED_Pin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(blueLED_Pin, LOW); // Schaltet nicht komplett aus (Warum?)
  }
}
