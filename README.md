# ESP8266 DC Motor Control Project

This project demonstrates how to control a DC motor using an ESP8266 microcontroller via a web interface. The motor can be controlled to move forward, backward, and stop using buttons on a web page. The web interface updates in real-time without refreshing the page, using JavaScript for asynchronous requests.

## Components
- ESP8266 (NodeMCU)
- L298N Motor Driver
- DC Motor
- LittleFS (File System)
- Various connecting wires

## Features
- Control the DC motor through a web interface.
- Real-time updates using JavaScript.
- WiFi setup and connection handling.
- File system setup using LittleFS.

## Prerequisites
- Platformio with ESP8266 board support.
- Libraries:
    - ESPAsyncWebServer
    - LittleFS
## Circuit Diagram
- Motor A
  -----------------
  - Pin1 (GPIO 12)  - Motor Control Pin 1
  - Pin2 (GPIO 14)  - Motor Control Pin 2
  - Enable (GPIO 13) - Motor Enable Pin

## Installation

1. Clone the repository:
```sh
git clone https://github.com/yourusername/ESP8266-DC-Motor-Control.git
cd ESP8266-DC-Motor-Control
```
2. Open the project in Arduino IDE.
3. Install required libraries:
- ESPAsyncWebServer
- LittleFS
4. Upload the code to your ESP8266:
- Ensure the correct board and port are selected in the Arduino IDE.
- Upload the code to the ESP8266.

## Usage
1. Connect the ESP8266 to your computer.
2. Open the Arduino IDE and upload the code to the ESP8266.
3. Once the code is uploaded, open a serial monitor to check the IP address assigned to the ESP8266.
4. Open a web browser and enter the IP address in the address bar.
5. Use the web interface to control the DC motor.


## Web Interface
The web interface consists of three main files:
1. `index.html` - The main HTML file that sets up the structure of the dashboard.
2. `script.js` - The JavaScript file that handles the WebSocket connection and updates the dashboard with new sensor readings.
3. `style.css` - The CSS file that styles the dashboard.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- This project is based on tutorials by Rui Santos & Sara Santos - [Random Nerd Tutorials](https://RandomNerdTutorials.com/)