# Manual - `ReactClicker`

> [!Note]
> Add your user manual here:  
> - Project setup / installation
> - Needed software / hardware
> - Usage
> - ...
>
> Delete this note.

- Needed:
    - Three "Ledbuttons" (Red, Blue, Orange)
    - One-Pico-W
    -  Put:
        - `Orange` -> `D20`
        - `Red` -> `D18`
        - `Blue` -> `D16`



- Build (very important): 
![Bild 1](/doc/assets/Pic.jpeg)



# **HOW TO PLAY:**
- Needed Software: Node.js, VSCode, ArduinoIDE

- Short: First start Webserver, then the PICO-Application
    - Put Buttons on correct Pins: BlueButton on `D16`, RedButton on `D18` and OrangeButton on `D20`
    - Start Webserver--> `node express.js` --> Läuft auf `http://localhost:3000`
    - Start PICO W --> Press BOOTSEL, put USB into your Laptop-Port, put Sketch (the analogue one) into your "ARDUINO-IDE" and upload it.
    - PLAY!
