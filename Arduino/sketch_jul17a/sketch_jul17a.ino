String inputs;
#define relay1 2 //Connect relay1 to pin 9
#define relay2 3 //Connect relay2 to pin 8
#define relay3 4 //Connect relay3 to pin 7
#define relay4 5 //Connect relay4 to pin 6
#define relay5 6 //Connect relay5 to pin 5
#define relay6 7 //Connect relay6 to pin 4
#define relay7 8 //Connect relay7 to pin 3
#define relay8 9 //Connect relay8 to pin 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Set rate for communicating with phone
  pinMode(relay1,OUTPUT); //Set relay1 as an output
  pinMode(relay2,OUTPUT); //Set relay2 as an output
  pinMode(relay3,OUTPUT); //Set relay1 as an output
  pinMode(relay4,OUTPUT); //Set relay2 as an output
  pinMode(relay5,OUTPUT); //Set relay1 as an output
  pinMode(relay6,OUTPUT); //Set relay2 as an output
  pinMode(relay7,OUTPUT); //Set relay1 as an output
  pinMode(relay8,OUTPUT); //Set relay1 as an output
  digitalWrite(relay1, LOW); //Switch relay1 off
  digitalWrite(relay2, LOW); //Swich relay1 off
  digitalWrite(relay3, LOW); //Swich relay1 off
  digitalWrite(relay4, LOW); //Swich relay1 off
  digitalWrite(relay5, LOW); //Swich relay1 off
  digitalWrite(relay6, LOW); //Swich relay1 off
  digitalWrite(relay7, LOW); //Swich relay1 off
  digitalWrite(relay8, LOW); //Swich relay1 off
  

}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available())
  {
    delay(10);
    char c =Serial.read();
     if(c=='#'){
      break;
    }
    inputs+=c;
  }
  if (inputs.length()>0)
  {
    Serial.println(inputs);
    if(inputs=="A")
    {
      digitalWrite(relay1, LOW);
    }
    else if(inputs=="a")
    {
      digitalWrite(relay1, HIGH);
    }
     else if(inputs=="B")
    {
      digitalWrite(relay2, LOW);
    }
     else if(inputs=="b")
    {
      digitalWrite(relay2, HIGH);
    }
     else if(inputs=="C")
    {
      digitalWrite(relay3, LOW);
    }
     else if(inputs=="c")
    {
      digitalWrite(relay3, HIGH);
    }
     else if(inputs=="D")
    {
      digitalWrite(relay4, LOW);
    }
     else if(inputs=="d")
    {
      digitalWrite(relay4, HIGH);
    }
     else if(inputs=="E")
    {
      digitalWrite(relay5, LOW);
    }
     else if(inputs=="e")
    {
      digitalWrite(relay5, HIGH);
    }
     else if(inputs=="F")
    {
      digitalWrite(relay6, LOW);
    }\
     else if(inputs=="f")
    {
      digitalWrite(relay6, HIGH);
    }
     else if(inputs=="G")
    {
      digitalWrite(relay7, LOW);
    }
     else if(inputs=="g")
    {
      digitalWrite(relay7, HIGH);
    }
     else if(inputs=="H")
    {
      digitalWrite(relay8, LOW);
    }
     else if(inputs=="h")
    {
      digitalWrite(relay8, HIGH);
    }
    inputs="";
  }

}
