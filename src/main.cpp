#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author yatendraguptacsaiml24-hub (Yatendra Kumar Gupta)
 * @date 20-02-2626
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
    Serial.begin(9600);
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    Serial.println("RGB LED Control Initialized");
}

void loop() {
    digitalWrite(redPin, HIGH);
    delay(1000);
    digitalWrite(redPin, LOW);
    delay(1000);

    analogWrite(redPin, 255);   // Full brightness
    delay(500);
    analogWrite(greenPin, 128); // Medium brightness
    delay(500);

    analogWrite(bluePin, 64);   // Low brightness
    delay(500);

    delay(2000);
}
