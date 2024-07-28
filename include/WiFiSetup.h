#ifndef WIFI_SETUP_H
#define WIFI_SETUP_H

#include <ESP8266WiFi.h>

class WiFiSetup {
public:
    WiFiSetup(const char* ssid, const char* password);
    void initWiFi();

private:
    const char* ssid;
    const char* password;
};

#endif // WIFI_SETUP_H
