const int buttonPin = 9;    // The number of the pushbutton pin (PB1)
const int ledPin1 = 6;      // The number of the first LED pin
const int ledPin2 = 7;      // The number of the second LED pin
const int ledPin3 = 8;      // The number of the third LED pin
//Camerons comment



void setup() {
  // Initialize the LED pins as outputs:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  // Initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the pushbutton value:
  int buttonState = digitalRead(buttonPin);

  // Check if the pushbutton is pressed.
  // If it is, the buttonState is LOW (since we are using a pull-up resistor):
  if (buttonState == HIGH) {
    // Turn on LED 1:
    digitalWrite(ledPin1, HIGH);
    delay(500);              // Wait for 500 milliseconds
    digitalWrite(ledPin1, LOW); 

    // Turn on LED 2:
    digitalWrite(ledPin2, HIGH);
    delay(500);              // Wait for 500 milliseconds
    digitalWrite(ledPin2, LOW); 

    // Turn on LED 3:
    digitalWrite(ledPin3, HIGH);
    delay(500);              // Wait for 500 milliseconds
    digitalWrite(ledPin3, LOW); 
  } else {
    // Turn all LEDs off:
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
}
