const int lm35Pin= A0;
const int buzzerPin=9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lm35Pin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float sensorValue= analogRead(lm35Pin);
  float temperature= (sensorValue/1024.0)*500.0;
  Serial.print("Temperature:");
  Serial.print(temperature);
  Serial.println(" C ");
  if(temperature<=20){
    digitalWrite(buzzerPin, HIGH);
  }
  else{
    digitalWrite(buzzerPin, LOW);
  }
  delay(1000);
}
