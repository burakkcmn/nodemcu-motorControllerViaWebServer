#include "WiFiSetup.h"

WiFiSetup::WiFiSetup(const char* ssid, const char* password) {
    this->ssid = ssid;
    this->password = password;
}

void WiFiSetup::initWiFi() {
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    Serial.println("Connecting to WiFi ..");
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print('.');
        delay(1000);
    }
    Serial.println(WiFi.localIP());
}
