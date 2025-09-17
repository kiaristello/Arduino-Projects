// --- Pin Definitions ---
// 74HC595 Pins
const int dataPin = 8;   // SER / DS
const int latchPin = 9;  // RCLK / ST_CP
const int clockPin = 10;  // SRCLK / SH_CP

// Digit selection pins (Common Anodes)
const int digitPins[] = {7, 6, 5, 4}; // D1, D2, D3, D4

// --- Segment Data (Common Anode: 0 = ON, 1 = OFF) ---
// Segments: g, f, e, d, c, b, a, dp
byte segmentData[] = {
  B00111111, // 0
  B00000110, // 1
  B01011011, // 2
  B01001111, // 3
  B01100110, // 4
  B01101101, // 5
  B01111101, // 6
  B00000111, // 7
  B01111111, // 8
  B01101111,  // 9
};

void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(digitPins[i], OUTPUT);
    digitalWrite(digitPins[i], HIGH); // Turn all digits OFF initially
  }
}

// ✅ This is our new, corrected function.
// It displays ONE number on ONE specified digit position.
void displayDigitAtPosition(int position, int number) {
  // Turn all digits OFF to prevent ghosting.
  // This is a key step for a clean display.
  for (int i = 0; i < 4; i++) {
    digitalWrite(digitPins[i], HIGH);
  }

  // Send the correct segment data for the number to the 74HC595.
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, segmentData[number]);
  digitalWrite(latchPin, HIGH);

  // Turn ON only the specified digit by setting its pin LOW.
  digitalWrite(digitPins[position], LOW);
}

void loop() {
  // The number we want to display. You can change this!
  int numberToShow = 1234;

  // --- Multiplexing Logic ---
  // This logic now correctly lives in the main loop.

  // Display the first digit (thousands place)
  displayDigitAtPosition(0, (numberToShow / 1000) % 10);
  delay(3); // Wait for 3ms

  // Display the second digit (hundreds place)
  displayDigitAtPosition(1, (numberToShow / 100) % 10);
  delay(3); // Wait for 3ms

  // Display the third digit (tens place)
  displayDigitAtPosition(2, (numberToShow / 10) % 10);
  delay(3); // Wait for 3ms

  // Display the fourth digit (ones place)
  displayDigitAtPosition(3, numberToShow % 10);
  delay(3); // Wait for 3ms
}
