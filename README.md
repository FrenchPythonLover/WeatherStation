<!-- ![image](docs/img.png) TODO: Put an image -->
<h1 align="center">Weather station</h1>

<p align="center">
  LoRa connected • Open source • Built For the Hackclub fallen event
</p>

<p align="center">
  <img src="https://img.shields.io/badge/version-0.0.1-blueviolet">
  <img src="https://img.shields.io/badge/kernel-FreeRTOS-blue">
  <img src="https://img.shields.io/badge/arch-RISCV%20%26%20Cortex%20M4-green">
  <img src="https://img.shields.io/badge/license-GPL-orange">
  <img src="https://img.shields.io/badge/status-WIP-yellow">
</p>

A weatherstation split in 2 parts, communicating with LoRa and a possible integration of a mobile app.

## Features
 - Multiple sensors (Temperature & Humidity, Wind Speed & Pressure, Air quality, Rain sensing.)
 - Split into 2 parts: Transmitter (outside, sensing data) and Receiver (inside, sensors & data display)
 - Open source and well documented

## Contents

- [Why Build this project ?](#why-izos)
- [File Structure](#file-structure)
- [Technical Stack](#the-technical-stack)

## Why build this?
This weather station was built to participate in hackclub's [fallen event](https://fallen.hackclub.com).
We decided to team up, [Tilto66](https://github.com/Tilto665) and [FrenchPythonLover](https://github.com/FrenchPythonLover), to learn new things about 3D and PCB design, embedded systems, and radio communication. 

## File structure
Here's the project structure:
```
root/
├─ src/ -- Firmware source files
   ├─ esp -- Firmware source for the inside display
   ├─ stm -- Firmware source for the outside transmitter
├─ 3d/ -- FreeCAD's STEP files
├─ docs/ -- Project images & Documentation
├─ pcb/ -- KiCAD's gerber files
├─ (eventually) mobile/ -- Mobile app source code
```

## The technical stack
As said previously, the project is divided into two parts: one part for the **inside**, and one for the **outside**.
### Outside part
The outside part will be a box containg sensors for:
 - Temperature and Humidity
 - Wind speed and pressure
 - Air quality, in PPM

It will be based on a very low power **STM32L431** MCU, along with **2 Megabytes** of external QSPI flash.

It will send data every 5 minutes using an **E220-900T22D LoRa transceiver**

All of this is battery powered, being charged with an IP2312 battery circuit, monitored by a MAX17043 gauge.

### Inside part
The inside part mainly drives the display, and also drives additional sensors like a temperature & humidity sensor, an air quality sensor but also a gaz sensor.

It displays info received using the **E220-900T22D LoRa transceiver** on a 2.8' TFT screen, running an **LVGL-based** UI.

The MCU powering all this is an **ESP32-C3F** module.
It will also include a web page & REST API so that you can embed the weather station into other projects (e.g. Home assistant, Mobile App, Domoticz...)


### Stats
<img src="https://img.shields.io/github/stars/FrenchPythonLover/IZOS-linux?style=flat">
<img src="https://img.shields.io/github/issues/FrenchPythonLover/IZOS-linux">
<img src="https://img.shields.io/github/last-commit/FrenchPythonLover/IZOS-linux">


<hr>
Made with ❤️ by FrenchPythonLover

