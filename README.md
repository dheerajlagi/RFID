#  RFID-Based Access Control System using Arduino

This project demonstrates a simple RFID-based access control system built with an Arduino, a servo motor, and a buzzer. The system authenticates RFID cards by reading their unique identifiers (UIDs) via a serial interface and comparing them with a set of pre-authorized UIDs. If the card is valid, a servo motor simulates unlocking a door and a buzzer gives audio feedback. If the card is not recognized, access is denied and a longer buzz alerts the user.

---

## Features

- Reads 12-character RFID UIDs via serial input
- Validates cards against hardcoded authorized UIDs
- Controls a servo motor to simulate door unlocking
- Provides audible feedback using a buzzer
- Simple to modify or extend with additional functionality

---

##  Hardware Requirements

- Arduino UNO or Nano
- UART-compatible RFID reader (e.g., EM-18 or similar)
- Servo motor (e.g., SG90)
- Buzzer
- Jumper wires and breadboard

### Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| Servo     | D3          |
| Buzzer    | D11         |
| RFID RX   | D0 (Serial) |
| RFID TX   | D1 (Serial) |

>  Ensure your RFID reader outputs a 12-character UID at 9600 baud over serial.

---

## How It Works

1. The RFID reader sends a 12-character UID to the Arduino via the serial interface.
2. The UID is compared against a list of authorized cards.
3. If the UID matches:
   - Servo turns to unlock the "door"
   - A short beep confirms access granted
4. If the UID doesn't match:
   - Access is denied
   - A long beep is triggered

---

## Getting Started

1. Connect all components according to the pinout table above.
2. Open the Arduino IDE and upload the sketch.
3. Open the Serial Monitor (9600 baud) to view status messages.
4. Scan RFID cards and observe the response.



---


### 👤 Author

Developed by **Dheeraj Lagishetty**  
Feel free to reach out for collaboration or enhancements.

