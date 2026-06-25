# Hardware Components

This document contains the list of hardware components used in the **Smart Helmet for Accident Detection and Alert System** project.

---

## 1. Arduino UNO

### Description

Arduino UNO is the main microcontroller board used to control and coordinate all sensors and modules in the system.

### Function

* Reads sensor data
* Processes accident detection logic
* Controls buzzer alerts
* Communicates with GSM and GPS modules

### Specifications

* ATmega328P Microcontroller
* Operating Voltage: 5V
* Digital I/O Pins: 14
* Analog Input Pins: 6

---

## 2. MPU6050 Accelerometer Sensor

### Description

The MPU6050 is a motion-tracking sensor that combines a 3-axis accelerometer and a 3-axis gyroscope.

### Function

* Detects sudden impacts and abnormal movements
* Identifies possible accident situations

### Applications

* Motion sensing
* Fall detection
* Accident monitoring

---

## 3. MQ-3 Alcohol Sensor

### Description

The MQ-3 sensor is designed to detect alcohol vapor concentration in the air.

### Function

* Monitors rider breath for alcohol presence
* Prevents unsafe vehicle operation

### Applications

* Breath analyzers
* Alcohol monitoring systems
* Vehicle safety systems

---

## 4. SIM800L GSM Module

### Description

The SIM800L GSM module enables cellular communication using a SIM card.

### Function

* Sends emergency SMS alerts
* Notifies emergency contacts after accident detection

### Features

* Supports SMS communication
* Compact design
* Low power consumption

---

## 5. NEO-6M GPS Module

### Description

The NEO-6M GPS module provides real-time location tracking.

### Function

* Retrieves latitude and longitude coordinates
* Shares rider location during emergencies

### Features

* Real-time positioning
* Satellite-based navigation
* Accurate location tracking

---

## 6. Push Button

### Description

A push button is used to simulate helmet detection.

### Function

* Detects whether the rider is wearing the helmet
* Provides input to the Arduino controller

---

## 7. Buzzer

### Description

An electronic buzzer provides audible alerts and warnings.

### Function

* Warns when safety conditions are violated
* Generates alert sounds during emergencies

---

## 8. LED Indicator

### Description

LEDs are used for visual status indication.

### Function

* Displays system status
* Indicates successful operation and alerts

---

## 9. Breadboard and Jumper Wires

### Description

Used for creating circuit connections without soldering.

### Function

* Connects sensors and modules
* Supports prototyping and testing

---

## 10. Power Supply

### Description

Provides power to the complete system.

### Options

* 9V Battery
* USB Power Supply

### Function

* Powers Arduino and connected modules

---

# Component Summary

| Component    | Purpose             |
| ------------ | ------------------- |
| Arduino UNO  | Main Controller     |
| MPU6050      | Accident Detection  |
| MQ-3 Sensor  | Alcohol Detection   |
| SIM800L      | SMS Alerts          |
| NEO-6M GPS   | Location Tracking   |
| Push Button  | Helmet Detection    |
| Buzzer       | Audible Alerts      |
| LED          | Visual Indicators   |
| Breadboard   | Circuit Prototyping |
| Power Supply | System Power        |

---

# Project Category

Embedded Systems | Internet of Things (IoT) | Road Safety | Smart Transportation
