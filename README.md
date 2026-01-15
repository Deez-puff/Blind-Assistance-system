# 🦯 Blind Assistance System using Arduino

A simple and cost-effective **Blind Assistance System** built using **Arduino and an ultrasonic sensor** to help visually impaired individuals detect nearby obstacles through real-time audio feedback. This project is designed **without using transistors or IoT**, making it beginner-friendly and easy to implement.

---

## 📌 Project Overview
This system detects obstacles in front of the user using an ultrasonic sensor and alerts them using an **active buzzer**. The alert frequency increases as the distance between the user and the obstacle decreases, enabling safer navigation.

---

## ⚙️ Features
- Real-time obstacle detection  
- Distance-based audio alerts  
- Fully offline system  
- Low-cost and easy to build  
- No transistor or internet dependency  

---

## 🧠 Working Principle
1. The ultrasonic sensor emits sound waves.
2. The waves reflect from nearby obstacles.
3. Arduino calculates the distance using time-of-flight.
4. The buzzer produces different beep patterns based on distance.

---

## 🧰 Components Used
- Arduino UNO / Nano  
- Ultrasonic Sensor (HC-SR04)  
- Active Buzzer  
- Breadboard  
- Jumper Wires  
- USB / Power Bank  

---

## 🔌 Pin Connections

### Ultrasonic Sensor (HC-SR04)
| Sensor Pin | Arduino Pin |
|----------|------------|
| VCC | 5V |
| TRIG | D2 |
| ECHO | D3 |
| GND | GND |

### Active Buzzer
| Buzzer Pin | Arduino Pin |
|-----------|------------|
| + | D8 |
| - | GND |

---

## 📏 Alert Logic
| Distance from Obstacle | Alert Type |
|----------------------|-----------|
| > 120 cm | No alert |
| 60 – 120 cm | Slow beep |
| 30 – 60 cm | Medium beep |
| < 30 cm | Fast beep |

---

## 🖥️ Arduino Code
The complete Arduino sketch is available in:
