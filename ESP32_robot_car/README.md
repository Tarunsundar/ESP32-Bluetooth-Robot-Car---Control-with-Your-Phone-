
# Bluetooth Controlled Robot Car Powered by ESP32

This project demonstrates how to build a simple Bluetooth-controlled robot car powered by an ESP32 microcontroller. Enjoy controlling your robot car via an Android joystick application called BTROBOT, though it works well with other Android applications that support serial communication over Bluetooth.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Components Required](#components-required)
- [Circuit Diagram](#circuit-diagram)
- [Setup and Installation](#setup-and-installation)
- [Usage](#usage)
- [References](#references)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project was developed to implement a simple Bluetooth-controlled robot car using an ESP32 microcontroller. The robot can be controlled via an Android joystick application called BTROBOT. This setup also works with other Android applications supporting serial communication over Bluetooth.

## Features

- Bluetooth communication for wireless control
- Compatibility with various Android joystick applications
- Simple and easy-to-build design

## Components Required

- ESP32 microcontroller
- L298N motor driver
- DC motors (2 or 4, depending on your car design)
- Robot car chassis
- Wheels
- Bluetooth-enabled Android device
- Android application (BTROBOT or any other supporting serial communication)
- Jumper wires
- Battery pack

## Circuit Diagram

[Include a circuit diagram here, or provide a link to an image of your circuit diagram.]

## Setup and Installation

1. **Hardware Assembly:**
   - Assemble the robot car chassis and attach the wheels and motors.
   - Connect the ESP32 to the L298N motor driver and motors as per the circuit diagram.
   - Connect the battery pack to power the ESP32 and motors.

2. **Software Setup:**
   - Install the Arduino IDE from [here](https://www.arduino.cc/en/software).
   - Install the ESP32 board package in the Arduino IDE.
   - Follow the instructions on this [Instructables blog post](https://www.instructables.com/Arduino-Bluetooth-Controlled-Robot-Car-1/) for detailed steps and code examples.
   - Upload the provided code to your ESP32.

## Usage

1. Turn on the robot car and ensure the ESP32 is powered.
2. Open the BTROBOT application (or any compatible Bluetooth joystick app) on your Android device.
3. Pair your Android device with the ESP32 via Bluetooth.
4. Use the joystick on the application to control the movement of your robot car.

## References

- [Instructables Blog Post](https://www.instructables.com/Arduino-Bluetooth-Controlled-Robot-Car-1/)

## Contributing

Contributions are welcome! Please open an issue or submit a pull request for any improvements or new features.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
