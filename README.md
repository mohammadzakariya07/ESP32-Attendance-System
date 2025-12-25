# ESP32-Attendance-System
ESP32-based attendance system using keypad, LCD, EEPROM and Google Sheets
# ESP32 Attendance System using Google Sheets

## 📌 Description
An ESP32-based smart attendance system that records roll numbers
and automatically uploads attendance data to Google Sheets
using Google Apps Script.

## 🔧 Hardware Used
- ESP32
- I2C LCD (16x2)
- Keypad
- WiFi Network

## ⚙ Features
- Real-time attendance logging
- EEPROM data support
- Google Sheets integration
- Clean & scalable embedded design

## 📂 Project Structure
Button Press
     ↓
ESP32 detects LOW signal
     ↓
Digit added to roll number
     ↓
Displayed on LCD
     ↓
ENTER pressed
     ↓
ESP32 connects to WiFi
     ↓
Attendance sent to Google Sheet

## 🧠 Working
1. User enters roll number
2. ESP32 connects to WiFi
3. Data sent to Google Sheets
4. Attendance saved with date & time

## 👨‍💻 Developer
**Mohammad Zakariya**  
B.Tech ECE | Embedded Systems | Arduino | ESP32
