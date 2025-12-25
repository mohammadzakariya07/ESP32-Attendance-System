# 📊 ESP32 Attendance System using Google Sheets

## 📌 Overview
This project is an **ESP32-based smart attendance system** that allows users to enter roll numbers using **individual push switches**.  
The entered data is displayed on an **I2C LCD** and automatically uploaded to **Google Sheets** using **Google Apps Script** over WiFi.

The system is designed with **simplicity, reliability, and scalability** in mind, making it suitable for academic projects, labs, and real-world IoT applications.

---

## 🔧 Hardware Components
- ESP32 Dev Module  
- 16×2 I2C LCD Display  
- Push Switches (0–9, Delete, Enter)  
- USB Power Supply  
- WiFi Network  

> 📌 Note: EEPROM used in this project is **internal to ESP32** (no external IC required).

---

## ⚙️ Software & Tools
- Arduino IDE  
- ESP32 Board Package  
- Google Sheets  
- Google Apps Script  
- GitHub  

---

## ✨ Key Features
- ✔ Push-button based roll number entry  
- ✔ Internal pull-up resistor usage (no external resistors)  
- ✔ LCD display for real-time feedback  
- ✔ WiFi-based data transmission  
- ✔ Automatic date & time logging  
- ✔ Google Sheets cloud storage  
- ✔ Clean and modular code structure  

---

## 🧠 Working Principle
1. User enters roll number using push switches  
2. ESP32 reads button inputs using GPIOs with internal pull-ups  
3. Roll number is displayed on the I2C LCD  
4. On pressing **ENTER**, ESP32 connects to WiFi  
5. Attendance data is sent to Google Sheets via HTTP request  
6. Google Apps Script stores the data with date and time  

---

## 🧩 Circuit Design
- Individual push switches connected to ESP32 GPIO pins  
- Each switch is connected between **GPIO and GND**  
- GPIOs configured as `INPUT_PULLUP`  
- LCD connected via I2C (SDA – GPIO 21, SCL – GPIO 22)

📁 Detailed text-based circuit description is available in the `circuit_diagram` folder.

---

## 📂 Project Structure
ESP32_Attendance_System/

├── code/

│ └── esp32_attendance.ino

├── google_apps_script/

│ └── attendance_script.gs

├── circuit_diagram/

│ └── esp32_attendance_push_switch_circuit.txt

├── README.md



└── .gitignore


---

## 🔐 Security & Privacy
- WiFi credentials are **not hard-coded** in public repositories  
- Google Apps Script URL can be regenerated anytime  
- No personal data is stored locally  

---

## 🚀 Applications
- Classroom attendance system  
- Lab attendance logging  
- IoT learning projects  
- ESP32 + Cloud integration demos  

---

## 🧪 Future Improvements
- RFID or biometric integration  
- Firebase / database backend  
- Mobile app dashboard  
- Offline data buffering  
- User authentication  

---

## 👨‍💻 Developer
**Mohammad Zakariya**  
B.Tech (ECE)  
Embedded Systems | ESP32 | Arduino | PCB Design  

🔗 GitHub:   https://github.com/mohammadzakariya07

🔗 LinkedIn: https://www.linkedin.com/in/mohammad-zakariya-3a2748279/


