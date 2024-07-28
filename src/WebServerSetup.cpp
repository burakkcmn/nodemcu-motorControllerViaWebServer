#include "WebServerSetup.h"
#include <LittleFS.h>

WebServerSetup::WebServerSetup(MotorControl &motorControl) : server(80), motorControl(motorControl) {}

void WebServerSetup::initWebServer() {
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send(LittleFS, "/index.html", "text/html");
    });

    server.serveStatic("/", LittleFS, "/");

    server.on("/forward", HTTP_GET, [this](AsyncWebServerRequest *request) {
        motorControl.moveForward();
        request->send(LittleFS, "/index.html", "text/html", false);
    }); 

    server.on("/backward", HTTP_GET, [this](AsyncWebServerRequest *request) {
        motorControl.moveBackward();
        request->send(LittleFS, "/index.html", "text/html", false);
    });

    server.on("/stop", HTTP_GET, [this](AsyncWebServerRequest *request) {
        motorControl.stopMotor();
        request->send(LittleFS, "/index.html", "text/html", false);
    });

    server.begin();
}
