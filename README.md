#  ESP32 Desk Bot with OLED Display

A compact desk companion built with an **ESP32 microcontroller** and an **OLED display**.  
The bot can show text, time, sensor values, or notifications, and is expandable with IoT features.

---

## Project Resources
- **Circuit Simulation (Cirkit Designer):** [View Circuit](https://app.cirkitdesigner.com/project/99c6ab0c-07e3-4742-8ba1-199b529ae619)
- **Onshape CAD Model:** *(Insert your Onshape CAD link here)*
- **Images & Screenshots:** 

---

##  Objectives
- Build a functional desk bot using ESP32  
- Display real‑time information on an OLED screen  
- Provide a foundation for IoT features (Wi‑Fi, Bluetooth)  
- Keep the design compact and desk‑friendly  

---

## Components
- ESP32 Development Board (ESP32‑S3‑DEVKITC‑1)  
- OLED Display (SSD1306, 128x64)  
- Breadboard & Jumper Wires  
- USB Cable & Power Supply  
- *(Optional)* Sensors   

---

## Circuit Connections
- OLED VCC → ESP32 3.3V  
- OLED GND → ESP32 GND  
- OLED SDA → ESP32 GPIO21  
- OLED SCL → ESP32 GPIO22  

*(See Cirkit Designer link for full wiring diagram.)*

---

## 💻 Software Setup
1. Install **Arduino IDE** or **PlatformIO**  
2. Add ESP32 board support via Board Manager  
3. Install libraries:  
   - Adafruit SSD1306  
   - Adafruit GFX  
4. Upload code via USB  

---
##  Features
- Displays text, time, or sensor values  
- Wi‑Fi enabled for IoT features (weather, notifications)  
- Expandable with sensors and user inputs  
- Compact design for desk use  

---

## Applications
- Personal desk assistant  
- Study timer / Pomodoro tracker  
- IoT notifier (emails, weather, reminders)  
- Robotics interface (with EMG or motor drivers)  

---

##  Future Enhancements
- Voice interaction with microphone + speech recognition  
- Cloud integration for smart notifications  
- Touch buttons or rotary encoder for input  
- Control external devices (lights, fans, robots)  

---

##  Project Journal
This project involved plenty of trial and error:
- Wrong pin assignments wasted hours  
- OLED stayed blank until I ran an I2C scanner  
- Overlapping text fixed by clearing the display before updates  
- Simulation helped visualize behavior, but debugging was the real challenge  

**Biggest win:** seeing “Desk Bot” appear on the OLED for the first time 🎉  

---

##  How to Run
1. Clone this repository  
2. Open the project in Arduino IDE or PlatformIO  
3. Connect ESP32 via USB  
4. Upload the code  
5. Watch the OLED display come alive!  
