#define trigPin 9
#define echoPin 10

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);                                // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);     
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(3,OUTPUT);                            // Sets the echoPin as an Input
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);                      //To calculate the time taken for the wave to travel to and fro
  distance = duration * 0.034 / 2;                        // Calculating the distance
  Serial.print("Distance: ");                             // Prints the distance on the Serial Monitor
  Serial.print(distance);
  Serial.println("cm");
  delay(10);

  if(distance>30){
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
      delay(50);
  }
  else if(distance<30 && distance>20){
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(1,HIGH);
    delay(50);
  }
  else if(distance<20 && distance>10){
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
     delay(50);
  }
  else{
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    delay(50);
  }
}