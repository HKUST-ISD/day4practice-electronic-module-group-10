/*Replace all the ? in the code to read the value touchRead(GPIO pin) returned.*/

#define TOUCHPIN ?                    // ***Replace the ? with the GPIO pin you selected as touch pin
#define LED ?                         // ***Replace the ? with the GPIO pin you selected to control LED
#define THRESHOLD 10000               // ***Observe the reading when the pin is touched. Then modify this threshold.***


int touch_reading;

void setup() {
  Serial.begin(?);        // ***Start the serial communication set baud rate.***
  pinMode(LED, ?);       // Set pin connected to LED as an output pin
  
}

void loop() { 
  touch_reading = touchRead(TOUCHPIN); // Read the touch sensor
  Serial.println(touch_reading);       // print touch_reading to the Serial monitor
  // The LED can be turned on when the pin is touched.
  if (touch_reading ? THRESHOLD)
    digitalWrite(?, ?);   // turn on LED
  else
    digitalWrite(?, ?);    // turn off LED
    
  delay(?); // delay 0.1s
}
