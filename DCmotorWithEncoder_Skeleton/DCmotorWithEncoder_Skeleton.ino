/*Change all the ? in the code and add code in ??? to Control the speed of rotation.*/

#define IN1   ?  // Replace the ? with the GPIO pin you selected to connect IN1
#define IN2   ?   // Replace the ? with the GPIO pin you selected to connect IN2
#define A  ? // Replace the ? with the GPIO pin you selected to connect encoder A
#define B  ? // Replace the ? with the GPIO pin you selected to connect encoder B
#define PWM ?  // Replace the ? with the GPIO pin you selected to output PWM

// encoder output value
int A_data=0;
int B_data=0;

String command;

void setup() {
  /*setup baud and pin mode */
    ???

  /*Set rotation direction as forward rotation (CCW)*/
  digitalWrite(IN1, ?);
  digitalWrite(IN2, ?);

}

void loop() {
    // send the duty cycle of PWM to control the speed of DC motor
    if (Serial.available() > 0) {
        command = Serial.readStringUntil('\n'); // Read the incoming command
        command.trim(); // Remove any leading or trailing whitespace
        if (command == "0") {
        // output PWM signals with 0% duty cycle
        analogWrite(PWM,?);  
        } 
        else if (command == "25") {
        // output PWM signals with 25% duty cycle
        analogWrite(PWM,?);   
        }
        else if (command == "50") {
        // output PWM signals with 50% duty cycle
        analogWrite(PWM,?);   
        }
        else if (command == "75") {
        // output PWM signals with 75% duty cycle
        analogWrite(PWM,?);   
        }
        else if (command == "100") {
        // output PWM signals with 100% duty cycle
        analogWrite(PWM,?);   
        }
        }
    // Read values of A and B
    A_data=???;
    B_data=???;
    // Plot A B in Serial Plotter
    Serial.print("A:");
    Serial.print(A_data);
    Serial.print(",");
    Serial.print("B:");
    Serial.print(B_data);
    Serial.println("\t"); 
    
}
