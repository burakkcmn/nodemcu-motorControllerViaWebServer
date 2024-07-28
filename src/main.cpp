#include <Arduino.h>
#include "MotorControl.h"
#include "WiFiSetup.h"
#include "FileSystemSetup.h"
#include "WebServerSetup.h"

// Motor A pins
int motor1Pin1 = 12; 
int motor1Pin2 = 14; 
int enable1Pin = 13; 

// Replace with your network credentials
const char* ssid = "REPLACE_WITH_YOUR_SSID";
const char* password = "REPLACE_WITH_YOUR_PASSWORD";

MotorControl motorControl(motor1Pin1, motor1Pin2, enable1Pin);
WiFiSetup wifiSetup(ssid, password);
FileSystemSetup fileSystemSetup;
WebServerSetup webServerSetup(motorControl);

void setup() {
    Serial.begin(115200);
    wifiSetup.initWiFi();
    fileSystemSetup.initFS();
    webServerSetup.initWebServer();
}

void loop() {
    // Main loop can be used for other tasks if needed
}
