# Keypad Password Entry System

This project implements a basic password authentication system using:
- 4x4 matrix keypad
- 16x2 LCD display
- Arduino Uno

## Features
- Input password via keypad
- LCD feedback: "Access Granted" or "Access Denied"
- Clear input with `*`, validate with `#`
- Simple hardcoded password logic

## What I Learned
- Interfacing digital peripherals (keypad, LCD)
- Handling user input and feedback in real-time
- Modular embedded system programming

## Future Improvements
- Store password in EEPROM
- Add serial debug output
- Implement lockout after failed attempts
- Build the system on an STM32 or ESP32 microcontroller
