# Bluetooth Home Automation using 8051 (AT89S52)

## 📌 Project Overview

This project demonstrates a Bluetooth-based Home Automation System using the AT89S52 (8051) microcontroller and HC-05 Bluetooth module. The system allows wireless control of electrical appliances through a smartphone using UART communication.

---

## ✨ Features

- Bluetooth Control using HC-05
- UART Communication (9600 Baud)
- Relay Interfacing
- Fan ON/OFF Control
- Bulb ON/OFF Control
- Embedded C Firmware
- Active LOW Relay Logic

---

## 🛠 Hardware Components

- AT89S52 (8051) Development Board
- HC-05 Bluetooth Module
- 2-Channel Relay Module
- DC Motor (Fan)
- AC Bulb
- USBasp Programmer
- Breadboard
- Jumper Wires
- 5V Power Supply

---

## 💻 Software Used

- Keil uVision
- Embedded C
- Serial Bluetooth Terminal App

---

## 🔌 Pin Connections

| Device | 8051 Pin |
|---------|----------|
| Relay IN1 | P2.0 |
| Relay IN2 | P2.1 |
| HC-05 TX | RXD (P3.0) |
| HC-05 RX | TXD (P3.1) |
| HC-05 VCC | +5V |
| HC-05 GND | GND |

---

## 📱 Bluetooth Commands

| Command | Action |
|---------|--------|
| A | Bulb ON |
| a | Bulb OFF |
| B | Fan ON |
| b | Fan OFF |

---

## 📂 Repository Structure

```
Bluetooth-Home-Automation-8051
│
├── Source
├── Hex
├── Circuit
├── Images
├── Documents
├── README.md
└── LICENSE
```

---

## 🚀 Future Improvements

- Android Application
- Wi-Fi Control (ESP8266/ESP32)
- IoT Dashboard
- Google Assistant Integration
- Voice Control

---

## 👨‍💻 Author

**Raxit Rangani**

B.E. Electronics & Communication Engineering

Government Engineering College, Modasa

---

⭐ If you like this project, don't forget to star the repository!
