#include <ESP32Servo.h>

Servo servo;               // Create servo object
String command;            // store message received from serial monitor

// Define the pin where the servo signal (orange wire) is connected
const int PWMpin = 40;      // change to your wired PWM-capable GPIO if needed

void setup() {
  servo.attach(PWMpin);    // attach servo to ESP32 PWM pin
  Serial.begin(9600);      // set this to match your Serial Monitor baud
}

/*
  Continuous rotation servo:
  Stop: ~90
  CW: <90  (0 = full speed)
  CCW: >90 (180 = full speed)
*/

void loop() {
  if (Serial.available() > 0) {
    command = Serial.readStringUntil('\n');
    command.trim();              // remove \r or spaces (important on some setups)

    int sd = command.toInt();

    if (sd < 0 || sd > 180) {
      Serial.println("Error: sd must be between 0 and 180.");
    } else {
      Serial.print("sd = ");
      Serial.println(sd);

      servo.write(sd);
    }
  }

  delay(100);
}
