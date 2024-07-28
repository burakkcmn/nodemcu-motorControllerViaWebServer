#include "MotorControl.h"

MotorControl::MotorControl(int pin1, int pin2, int enablePin) {
    motor1Pin1 = pin1;
    motor1Pin2 = pin2;
    enable1Pin = enablePin;

    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
    pinMode(enable1Pin, OUTPUT);
}

void MotorControl::moveForward() {
    Serial.println("Moving Forward");
    digitalWrite(enable1Pin, HIGH);
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH);
}

void MotorControl::moveBackward() {
    Serial.println("Moving Backward");
    digitalWrite(enable1Pin, HIGH);
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
}

void MotorControl::stopMotor() {
    Serial.println("Stop Moving");
    digitalWrite(enable1Pin, LOW);
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
}
