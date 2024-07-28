#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include <Arduino.h>

class MotorControl {
public:
    MotorControl(int pin1, int pin2, int enablePin);
    void moveForward();
    void moveBackward();
    void stopMotor();

private:
    int motor1Pin1;
    int motor1Pin2;
    int enable1Pin;
};

#endif // MOTOR_CONTROL_H
