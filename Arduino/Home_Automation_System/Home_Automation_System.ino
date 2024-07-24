#define nightbulb 2
#define bulb 3

void setup(){
  Serial.begin(9600);
  pinMode (nightbulb, OUTPUT);
  pinMode (bulb, OUTPUT);
}

void loop(){
  if (Serial.available()==1)
  {
    String val= Serial.readString();
    Serial.println(val);
    if(val== "night bulb on")
    {
      digitalWrite(nightbulb ,LOW );
    }
    if(val== "night bulb of")
    {
      digitalWrite(nightbulb,HIGH );
    {
      digitalWrite(bulb, HIGH);
    }
    if(val== "all of")
    {
      digitalWrite(nightbulb, HIGH);
      digitalWrite(bulb, HIGH);
    }
    if(val== "all on")
    {
      digitalWrite(nightbulb, LOW);
      digitalWrite(bulb, LOW);
    }
    }
    if(val== "bulb on")
    {
      digitalWrite(bulb , LOW);
    }
    if(val== "bulb of")
  }
  
}
