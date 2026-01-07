/*Replace ? in the code*/
#include <Arduino.h>
#include "NewPing.h"

// Hook up HC-SR04 with Trig and Echo to ESP32 Pins
#define TRIG_PIN ？                  
#define ECHO_PIN ？  
// ESP 32 pin connected to ESP32
#define LED ?

// Maximum distance we want to ping for (in centimeters).
#define MAX_DISTANCE 400

// NewPing setup of pins and maximum distance.
NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

// variable value to store the duty cycle value in 8 bit (0-255) of PWM
int value;

void setup() {
  
    Serial.begin(?); // Initialize the Serial Monitor and set a baud rate
}

void loop() {
    
    // Get the distance from the Ultrasonic Sensor
    float distance = sonar.ping_cm();

    // Print the distance to the Serial Monitor
    Serial.print("Distance: ");
    Serial.print(?);
    Serial.println(" cm");

    delay(?); // Delay 0.5s to avoid reading the distance too fast 
    
    // Distance > 10cm, LED is OFF
    // Distance< 10 cm, the closer the target, the brighter the LED 
    // set the duty cycle value in 8-bit (0-255) to use analogWrite() to generate PWM signal to set the LED brightness
    if (?)
    {
    value=?;
    } else
    {value=?;}
    // print the duty cycle value 
    Serial.print("duty cycle value: ");
    Serial.println(?); 
    // generate PWM signal to set the LED brightness
    analogWrite(?,?);

}
