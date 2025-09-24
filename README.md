# 🤖 Arduino Obstacle Avoiding Robot

## 📌 Overview
This project builds an **autonomous robot** that uses an **ultrasonic sensor** to detect and avoid obstacles.  
It moves forward until it sees an obstacle closer than 20 cm, then turns to avoid it.

---

## 🛠️ Hardware Required
- Arduino Uno/Nano  
- Ultrasonic Sensor (HC-SR04)  
- L298N Motor Driver OR Continuous Servo Motors  
- 2 DC Motors / 2 Servo Motors + Robot chassis + Wheels  
- Battery pack (6–12V)  

---

## 🔌 Wiring
- **Ultrasonic Sensor**  
  - VCC → 5V  
  - GND → GND  
  - TRIG → D8  
  - ECHO → D9  

- **Motors**  
  - Left motor → Pin 5 (PWM via Servo lib)  
  - Right motor → Pin 6 (PWM via Servo lib)  

---

## ▶️ Usage
1. Assemble the robot chassis with motors and wheels.  
2. Mount the ultrasonic sensor at the front.  
3. Upload the Arduino sketch.  
4. Power the bot → it moves forward and avoids obstacles automatically.  

---

## 📂 Repo Structure
