const int waterSens = A2;
const int buzz=4;
int  sensorVal;
void setup() {
  pinMode(waterSens, INPUT);
  pinMode(buzz, OUTPUT);

}

void loop() {
  int sensorVal= analogRead(waterSens);
  if(sensorVal>200){
    digitalWrite(buzz,HIGH);
  }
  else{
    digitalWrite(buzz,LOW);
  }
  Serial.println(sensorVal);
}
