// Declaration and initialization of the input pins
int analog_input = A0; // Analog output of the sensor
int digital_input = 3; // Digital output of the sensor
#define led 2
void setup () {
pinMode(led, OUTPUT);
pinMode(analog_input, INPUT);
pinMode(digital_input, INPUT);
Serial.begin(9600); // Serial output with 9600 bps
}
// The program reads the current values of the input pins
// and prints them to the serial output
void loop () {
float analog_value;
int digital_value;
// Current values are read out, converted to the voltage value...
analog_value = analogRead(analog_input) * (5.0 / 1023.0);
digital_value = digitalRead(digital_input);
//... and printed at this point
Serial.print("Analog voltage value: ");
Serial.print(analog_value, 4);
Serial.print(" V, \t Threshold value: ");
if (digital_value == 1) {
Serial.println("reached");
digitalWrite(led,HIGH);
}
else {
Serial.println("not yet reached");
digitalWrite(led,LOW);
}
Serial.println("----------------------------------------------------------------");
delay(1000);
}