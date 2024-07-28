#ifndef WEB_SERVER_SETUP_H
#define WEB_SERVER_SETUP_H

#include <ESPAsyncWebServer.h>
#include "MotorControl.h"

class WebServerSetup {
public:
    WebServerSetup(MotorControl &motorControl);
    void initWebServer();

private:
    AsyncWebServer server;
    MotorControl& motorControl;
};

#endif // WEB_SERVER_SETUP_H
