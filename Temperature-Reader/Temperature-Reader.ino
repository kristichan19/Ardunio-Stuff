// Include Libraries
#include <LiquidCrystal.h>
#include "DHT.h"

// Define pins for DHT and the LCD1602
#define DHTPIN 2
#define DHTTYPE DHT11
int pinRS = 13, pinE = 12, pinD4 = 11, pinD5 = 10, pinD6 = 9, pinD7 = 8;

// NOTE: PINS VSS, RW and K (or LCD-) ARE CONNECETED TO GROUND
// PIN VDD IS CONNECTED TO 5V POWER WHILE PIN A (or LCD+) IS CONNECTED TO 3.3V
// PIN V0 CAN USE POTENTIOMETER OR RESISTOR FROM 5V

// Initialize DHT11 and the LCD1602
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(pinRS, pinE, pinD4, pinD5, pinD6, pinD7);

void setup() {
  
  // Test case for the LCD
  lcd.begin(16, 2);
  lcd.print("Initial");
  lcd.setCursor(0,1);
  lcd.print("Test");
  
  // Start Reading the DHT11
  dht.begin();
}

void loop() {
  // Read the Humidity, Degrees (F) and the Heat Index
  float h = dht.readHumidity();
  float f = dht.readTemperature(true);
  float hif = dht.computeHeatIndex(f, h);
  // Set cursor to start of first line and output
  lcd.setCursor(0,0);
  lcd.print("Temperature:");
  lcd.print(f);
  // Set cursor to start of second line and output
  lcd.setCursor(0,1);
  lcd.print("Humidity:");
  lcd.print(h);
  // Delay before next reading
  delay(100);
}
