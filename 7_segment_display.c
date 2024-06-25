/*
   Project name: ESP32 Seven Segment Display using 74HC595
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-seven-segment-display
*/

#include <Arduino.h>
#include <SPI.h>

// Define latch, clock, and data pins connected to 74HC595
const int latchPin = 23; // GPIO 23 on ESP32
const int clockPin = 18; // GPIO 18 on ESP32
const int dataPin = 5;   // GPIO 5 on ESP32

// Define seven-segment display patterns for digits 0-9 (common cathode)
byte digitPatterns[] = {
  B11111100, // 0
  B01100000, // 1
  B11011010, // 2
  B11110010, // 3
  B01100110, // 4
  B10110110, // 5
  B10111110, // 6
  B11100000, // 7
  B11111110, // 8
  B11100110  // 9
};

void setup() {
  // Initialize SPI communication for 74HC595
  SPI.begin();
  SPI.beginTransaction(SPISettings(10000000, MSBFIRST, SPI_MODE0));

  // Set latch, clock, and data pins as output
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  // Display digits 0-9 on the seven-segment display
  for (int i = 0; i < 10; i++) {
    displayDigit(i);
    delay(1000); // Display each digit for 1 second
  }
}

// Function to display a single digit (0-9) on the seven-segment display
void displayDigit(int digit) {
  digitalWrite(latchPin, LOW); // Pull latch pin low

  // Shift out the data to 74HC595
  SPI.transfer(digitPatterns[digit]); // Send pattern data

  digitalWrite(latchPin, HIGH); // Pull latch pin high to output the data
}
