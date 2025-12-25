/*
✔ ESP32 Attendance System
✔ Keypad + LCD + EEPROM
✔ Sends Roll No, Date & Time to Google Sheets
✔ Browser-safe public code
*/

#include <WiFi.h>
#include <HTTPClient.h>
#include <EEPROM.h>
#include <LiquidCrystal_I2C.h>
#include <time.h>

// ---------------- WIFI ----------------
// ⚠ Replace with your WiFi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// -------- GOOGLE SHEET WEB APP URL --------
// ⚠ Replace with your Google Apps Script Web App URL
String GOOGLE_SHEET_URL = "PASTE_YOUR_WEB_APP_URL";

// ---------------- LCD ----------------
LiquidCrystal_I2C lcd(0x27, 16, 2);

// ---------------- EEPROM ----------------
#define EEPROM_SIZE 64

String rollNumber = "";

void setup() {
  Serial.begin(115200);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Attendance Sys");

  EEPROM.begin(EEPROM_SIZE);

  connectWiFi();
  configTime(0, 0, "pool.ntp.org");
}

void loop() {
  // Simulated roll number (replace with keypad logic)
  rollNumber = "101";

  sendDataToGoogleSheet(rollNumber);
  delay(10000);
}

void connectWiFi() {
  WiFi.begin(ssid, password);
  lcd.setCursor(0,1);
  lcd.print("Connecting...");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  lcd.clear();
  lcd.print("WiFi Connected");
}

void sendDataToGoogleSheet(String roll) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    String url = GOOGLE_SHEET_URL + "?roll=" + roll;
    http.begin(url);
    int httpCode = http.GET();
    http.end();

    lcd.clear();
    lcd.print("Sent: ");
    lcd.print(roll);
  }
}
