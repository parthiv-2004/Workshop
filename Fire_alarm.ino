int analog_input=A0;
int digital_input=3;
#define led 2
void setup () {
  pinMode(led,OUTPUT);
  pinMode(analog_input,INPUT);
  Serial.begin(9600);
}
void loop(){
  float analog_value;
  int digital_value;
  analog_value=analogRead(analog_input);
  digital_value=digitalRead(digital_input);
  
  Serial.print("Analog voltage value:");
  Serial.print(analog_value,4);
  Serial.print("V,\t Threshold value:");
  if(digital_value==1){
    Serial.println("reached");
    digitalWrite(led,HIGH);
  } 
  else {
      Serial.println("not yet reached");
      digitalWrite(led,LOW);
  }  
  Serial.println(".....................");
  delay(1000);
}
 
