#define trigPin 9
#define echoPin 8
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT); // Sets the echoPin as an Input
Serial.begin(9600);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH); //To calculate the time taken for the wave to travel to and fro
distance = duration * 0.034 / 2; // Calculating the distance
Serial.print("Distance: "); // Prints the distance on the Serial Monitor
Serial.print(distance);
Serial.println("cm");
delay(100);
}